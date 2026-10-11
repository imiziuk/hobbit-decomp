#!/bin/sh
# Regression fixtures for equiv.py: the 5 load-crash culprits of 2026-10-10 must FAIL, known-good units must
# PASS. verified.tsv is restored afterwards (equiv --auto rewrites it).
cd "$(dirname "$0")/.."
cp auto/verified.tsv auto/.verified_regress_bak.tsv
HOBBIT_UNITS="$(cd ../Hobbit-RE/db/units2 && pwd -W)" tools/.venv/Scripts/python tools/equiv.py --auto --trials 30 \
  004b83e0 0046aaf0 00555d00 00416630 004016e0  0054c5c0 00402130 00402160 2>&1 | grep -E "^(PASS|FAIL|INCON)" > auto/.regress.out
mv auto/.verified_regress_bak.tsv auto/verified.tsv
cat auto/.regress.out
bad=$(grep -E "^PASS +(004B83E0|0046AAF0|00555D00|00416630|004016E0)" auto/.regress.out | wc -l)
good=$(grep -E "^PASS +(0054C5C0|00402130|00402160)" auto/.regress.out | wc -l)
[ "$bad" = 0 ] && [ "$good" = 3 ] && echo "REGRESSION OK" || echo "REGRESSION FAILED"
