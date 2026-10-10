
bool __thiscall FUN_004aabb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00549470(param_1 + 0x74);
  if (iVar1 != 0) {
    iVar1 = FUN_00645c70();
    if (0 < iVar1) {
      uVar2 = FUN_00645c80(0);
      iVar1 = FUN_006452f0(uVar2,param_2,param_3);
      return iVar1 != 0;
    }
  }
  return false;
}

