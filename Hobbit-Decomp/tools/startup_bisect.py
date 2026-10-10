"""Find the live function(s) behind a crash that happens during startup / main menu, with no human:
halve the suspects via hooks_disabled.txt, launch the game, see if it survives `--wait` seconds.
Only for crashes that reproduce at startup (agreed with the maintainer: Claude does start/load checks only).

Usage: python tools/startup_bisect.py <suspects.txt> [--wait 45]
Writes the culprit(s) to auto/startup_culprits.txt and leaves hooks_disabled.txt empty."""
import os, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
WAIT = int(sys.argv[sys.argv.index("--wait") + 1]) if "--wait" in sys.argv else 45
# the crash is timing-dependent: a config only counts as "ok" if it survives TRIES launches
TRIES = int(sys.argv[sys.argv.index("--tries") + 1]) if "--tries" in sys.argv else 1

def running():
    out = subprocess.run(["tasklist", "/FI", "IMAGENAME eq Meridian.exe"], capture_output=True, text=True).stdout
    return "Meridian.exe" in out

def kill():
    subprocess.run(["taskkill", "/F", "/IM", "Meridian.exe"], capture_output=True)
    time.sleep(2)

def crashes(disabled):
    return any(crashes_once(disabled) for _ in range(TRIES))

def crashes_once(disabled):
    kill()
    with open(os.path.join(GAME, "hooks_disabled.txt"), "w") as f:
        f.write("".join(f"AUTO_{a}\n" for a in sorted(disabled)))
    subprocess.Popen(["cmd", "/c", os.path.join(GAME, "Play Hobbit.bat")], cwd=GAME)
    time.sleep(5)
    t = 5
    while t < WAIT and running():
        time.sleep(3)
        t += 3
    died = not running()
    kill()
    print(f"  {len(disabled):5d} disabled -> {'CRASH' if died else 'ok'}", flush=True)
    return died

suspects = [l.strip() for l in open(sys.argv[1]) if l.strip()]
print(f"{len(suspects)} suspects")
if not crashes(set()):
    print("no crash with everything enabled: nothing to find"); sys.exit()
if crashes(set(suspects)):
    print("still crashes with ALL suspects disabled: culprit is elsewhere"); sys.exit()
culprits = []
while True:
    s = list(suspects)
    while len(s) > 1:                      # invariant: disabling all of s fixes it
        half = s[: len(s) // 2]
        rest = s[len(s) // 2:]
        if not crashes(set(suspects) - set(half)):   # only `half` enabled among suspects... crash?
            s = rest                       # enabling half alone is fine -> culprit in rest
        else:
            s = half
    culprits.append(s[0])
    print("culprit:", s[0], flush=True)
    suspects.remove(s[0])
    if not crashes(set(culprits)):         # fixed with just these disabled?
        break
open(os.path.join(ROOT, "auto", "startup_culprits.txt"), "w").write("\n".join(culprits) + "\n")
open(os.path.join(GAME, "hooks_disabled.txt"), "w").close()
print("culprits:", culprits)
