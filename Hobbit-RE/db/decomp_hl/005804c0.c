
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005804c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_00581ce0();
      FUN_005817e0(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_007778e0) {
      do {
        FUN_00581bf0(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_006bf840(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_007778e0);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_007778e0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_005b8370(local_8);
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_006bf84b();
  piVar1 = DAT_007778e0;
  _DAT_007778dc = _DAT_007778dc + -1;
  piVar2 = (int *)0x0;
  if (_DAT_007778dc == 0) {
    DAT_007778e0 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_006bf8e7();
  if (piVar2 != (int *)0x0) {
    FUN_006bf840(piVar2);
  }
  return;
}

