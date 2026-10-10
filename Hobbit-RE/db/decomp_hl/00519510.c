
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00519510(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  if (1 < *(int *)(param_1 + 0x158)) {
    FUN_0064cc50();
    goto LAB_005195b9;
  }
  iVar1 = FUN_00670ef0(0xd6,0);
  if (((iVar1 == 0) && (iVar1 = FUN_00670ef0(0xb9,0), iVar1 == 0)) &&
     (iVar1 = FUN_00670ef0(0x8b,0), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x158) == -1) {
      fVar2 = (float10)FUN_0064cd90();
      if (fVar2 < (float10)_DAT_006e92f4) goto LAB_005195b9;
    }
    else {
      fVar2 = (float10)FUN_0064cd90();
      if (fVar2 < (float10)_DAT_006ec0a4) goto LAB_005195b9;
    }
  }
  FUN_0064cc30();
  FUN_0064cc00();
  *(undefined4 *)(param_1 + 0x204) = 1;
LAB_005195b9:
  FUN_006a34a0(param_2,param_3);
  return;
}

