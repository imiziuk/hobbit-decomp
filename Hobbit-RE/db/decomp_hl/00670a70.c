
ulonglong FUN_00670a70(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  bVar3 = (DAT_007f1848 == 0) + 1;
  if (DAT_007f184c == 0) {
    bVar3 = bVar3 | 8;
  }
  else {
    bVar3 = bVar3 | 4;
  }
  if (((DAT_007f1850 != 0) && (DAT_007f1848 == 0)) && (DAT_007f184c != 0)) {
    bVar3 = bVar3 | 0x10;
  }
  iVar1 = (**(code **)(*DAT_007f1614 + 0xc))(DAT_007f1614,param_2 + 4,param_1,0);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  uVar4 = (uint)(iVar1 < 0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,&DAT_006f9afc);
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    uVar4 = (uint)(iVar1 < 0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*(int *)*param_1 + 0x34))((int *)*param_1,DAT_007f1610,bVar3);
      bVar5 = iVar1 < 0;
      iVar2 = iVar1;
      if (bVar5) {
        iVar2 = -iVar1;
      }
      uVar4 = (uint)bVar5;
      if (((iVar1 == -0x7fffbfff) && (DAT_007f184c == 0)) && (DAT_007f1848 != 0)) {
        FUN_006702d0();
        MessageBoxA(DAT_007f1610,s_SetCooperativeLevel___returned_D_00750420,s_Keyboard_00750414,0);
        return (ulonglong)CONCAT14(bVar5,iVar2);
      }
      iVar1 = iVar2;
      if (uVar4 != 0) {
        iVar1 = -iVar2;
      }
      if (-1 < iVar1) {
        (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
        (&DAT_007f1808)[DAT_007f163c] = DAT_007f163c;
      }
    }
  }
  return CONCAT44(uVar4,iVar2);
}

