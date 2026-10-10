
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044dc50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_0059d010(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5950) != 0 || *(int *)(param_1 + 0x5954) != 0) {
      piVar2 = (int *)FUN_004021c0(*(int *)(param_1 + 0x5950),*(int *)(param_1 + 0x5954));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x5950) = 0;
        *(undefined4 *)(param_1 + 0x5954) = 0;
        return;
      }
      FUN_0065fd00(0);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
      uStack_c = *puVar3;
      uStack_4 = puVar3[2];
      fStack_8 = (float)piVar2[0x15] + _DAT_006e99a0;
      iVar1 = FUN_00673520(&uStack_c,0);
      if (iVar1 != 0) {
        FUN_004f7610(&uStack_c,*(undefined4 *)(param_1 + 0x5950),*(undefined4 *)(param_1 + 0x5954));
      }
    }
  }
  return;
}

