# External review (ChatGPT, 2026-10-11): decompile vs. reimplement

Question asked: do we need to decompile at all, or can the game be rewritten (Rust/C/Python) from what we
now understand? Summary of the answer (kept as the reference for the direction taken; see NEXT_SESSION.md).

## Two goals
1. Decompilation: recover the original behaviour function by function so replacement code runs inside the
   existing executable.
2. Reimplementation: understand what the game does, build a new engine that reproduces gameplay, rendering,
   physics, AI and interactions using the original assets. Does not require reconstructing every line.
Caveat: we know much more about individual functions than about how the whole game works.

## Three ways to proceed
1. Continue decompilation: best for matching subtle original behaviour and compatibility.
2. Rebuild from scratch: new engine reading the original assets; best for portability, maintainability,
   modernisation.
3. Hybrid: keep the original binary + recorder as an executable specification, reimplement whole systems in
   a new engine and test against the original. **Recommended as an investigation track**, while the existing
   pipeline continues until there is evidence that switching makes sense.

## Why the progress matters
Already built: thousands of identified functions with compilable C, per-function replacement, real execution
capsules, deterministic differential tests, systematic ABI/decompiler fixes (__ftol, functions returning
`this`). But fixes like __ftol are "compatibility overhead": reconstructing compiler details a new engine
would express as an ordinary conversion. Exceptions matter for exact fidelity (float conversion, overflow,
update order, precision in collision). Not all ~7,850 functions deserve the same level of reconstruction.

## What it would build
Rust engine (rendering/lighting, movement/physics, combat/AI, animation/camera, world/levels,
quests/triggers, audio/dialogue, save/load); Python for asset discovery/tools; C/C++ where libraries or
low-level compatibility help. Original assets (meshes, textures, animations, levels, audio, scripts) through
parsers/converters. Assets don't describe gameplay logic (enemy detection, triggers, dialogue branches,
physics updates): that is where the reverse-engineering work stays valuable.

## Using the recordings
Keep function capsules, add higher-level observations: e.g. a jump = input, frame timing, position, velocity,
collision state, animation, landing; compare whole trajectories original vs new engine. Needs instrumentation
around game state, input, frame boundaries and world events.

## Next, in order
1. Don't discard the decompilation: let the __ftol repair, return-value correction and replay pass finish.
2. Audit the original game files: formats, whether meshes/animations/collision/maps/scripted events can be
   extracted, which middleware/libraries are used.
3. Recover one complete gameplay subsystem: character movement (walk, jump, collision, ladders, camera):
   data structures, update order, observable behaviour.
4. Small Rust prototype: load a real level section + character assets, render, reproduce movement using
   observations from the original executable.
5. Compare the approaches with evidence (effort, fidelity, unknown logic, sustainability).

## Assessment
| Goal | Favoured approach |
|---|---|
| Original game running on replacement source soon | Continue C decompilation |
| Maintainable modern engine | Hybrid reimplementation |
| Very high behavioural fidelity | Original as reference + differential tests |
| Native Linux/macOS/modern Windows | New engine + compatibility testing |
| Understand the original architecture | Targeted reverse engineering |
Copyright: original assets stay copyrighted; a redistributable project should require users' own game files.
Conclusion: don't commit to months more of function-by-function decompilation without testing the new-engine
approach, but don't abandon the current work. The decisive unknown is whether the game files contain enough
usable level/animation/collision/event data. **The asset audit is the next experiment.**
