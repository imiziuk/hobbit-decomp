
ulonglong FUN_00670950(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar1 = (DAT_007f1848 == 0) + 1;
  if (DAT_007f184c == 0) {
    bVar1 = bVar1 | 8;
  }
  else {
    bVar1 = bVar1 | 4;
  }
  iVar2 = (**(code **)(*DAT_007f1614 + 0xc))(DAT_007f1614,param_2 + 4,param_1,0);
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  uVar4 = (uint)(iVar2 < 0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,&DAT_006f98f4);
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = -iVar2;
    }
    uVar4 = (uint)(iVar2 < 0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)*param_1 + 0x34))((int *)*param_1,DAT_007f1610,bVar1);
      bVar5 = iVar2 < 0;
      iVar3 = iVar2;
      if (bVar5) {
        iVar3 = -iVar2;
      }
      uVar4 = (uint)bVar5;
      if (((iVar2 == -0x7fffbfff) && (DAT_007f184c == 0)) && (DAT_007f1848 != 0)) {
        FUN_006702d0();
        MessageBoxA(DAT_007f1610,s_SetCooperativeLevel___returned_D_00750398,s_Mouse_00750390,0);
        return (ulonglong)CONCAT14(bVar5,iVar3);
      }
      iVar2 = iVar3;
      if (uVar4 != 0) {
        iVar2 = -iVar3;
      }
      if (-1 < iVar2) {
        (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
        (&DAT_007f1828)[DAT_007f1638] = DAT_007f1638;
      }
    }
  }
  return CONCAT44(uVar4,iVar3);
}

