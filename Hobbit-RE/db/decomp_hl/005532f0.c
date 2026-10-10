
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005532f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_00556580();
      FUN_00555fa0(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00771d64) {
      do {
        FUN_00556510(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_005567b0(0);
        FUN_006bf840(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00771d64);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_00771d64;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_005b8370(local_8);
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_006bf84b();
  piVar1 = DAT_00771d64;
  _DAT_00771d60 = _DAT_00771d60 + -1;
  piVar2 = (int *)0x0;
  if (_DAT_00771d60 == 0) {
    DAT_00771d64 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_006bf8e7();
  if (piVar2 != (int *)0x0) {
    FUN_006bf840(piVar2);
  }
  return;
}

