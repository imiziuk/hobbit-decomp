
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005567d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar2 != piVar1) {
      FUN_00556ec0();
      FUN_005568c0(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00771d6c) {
      do {
        FUN_00556db0(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00556f40(0);
        FUN_006bf840(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00771d6c);
    }
    *(int **)(*(int *)(param_1 + 8) + 4) = DAT_00771d6c;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
    *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
    FUN_005b8370(local_8);
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_006bf84b();
  piVar1 = DAT_00771d6c;
  _DAT_00771d68 = _DAT_00771d68 + -1;
  piVar2 = (int *)0x0;
  if (_DAT_00771d68 == 0) {
    DAT_00771d6c = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_006bf8e7();
  if (piVar2 != (int *)0x0) {
    FUN_006bf840(piVar2);
  }
  return;
}

