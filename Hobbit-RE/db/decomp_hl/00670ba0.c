
ulonglong FUN_00670ba0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int *piStack_50;
  undefined *puStack_4c;
  int *piStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  
  bVar5 = DAT_007f184c == 0;
  uStack_3c = 0;
  puStack_40 = param_1;
  iStack_44 = param_2 + 4;
  piStack_48 = DAT_007f1614;
  puStack_4c = (undefined *)0x670bd6;
  iVar2 = (**(code **)(*DAT_007f1614 + 0xc))();
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  uVar4 = (uint)(iVar2 < 0);
  if (-1 < iVar2) {
    piStack_50 = (int *)*param_1;
    puStack_4c = &DAT_006f9d04;
    iVar2 = (**(code **)(*piStack_50 + 0x2c))();
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = -iVar2;
    }
    uVar4 = (uint)(iVar2 < 0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)*param_1 + 0x34))
                        ((int *)*param_1,DAT_007f1610,bVar5 * '\x04' + '\x05');
      bVar5 = iVar2 < 0;
      iVar3 = iVar2;
      if (bVar5) {
        iVar3 = -iVar2;
      }
      if (((iVar2 == -0x7fffbfff) && (DAT_007f184c == 0)) && (DAT_007f1848 != 0)) {
        FUN_006702d0();
        MessageBoxA(DAT_007f1610,s_SetCooperativeLevel___returned_D_007504b0,s_Keyboard_007504a0,0);
        return (ulonglong)CONCAT14(bVar5,iVar3);
      }
      iVar2 = iVar3;
      if (bVar5) {
        iVar2 = -iVar3;
      }
      if (iVar2 == -0x7ff8ffa9) {
        FUN_006702d0();
        MessageBoxA(DAT_007f1610,s_SetCooperativeLevel___returned_D_00750540,s_Joystick_00750530,0);
        return (ulonglong)CONCAT14(bVar5,iVar3);
      }
      iVar2 = iVar3;
      if (bVar5) {
        iVar2 = -iVar3;
      }
      if (iVar2 == -0x7ff8fffa) {
        FUN_006702d0();
        MessageBoxA(DAT_007f1610,s_SetCooperativeLevel___returned_E_00750594,s_Joystick_00750588,0);
        return (ulonglong)CONCAT14(bVar5,iVar3);
      }
      iVar2 = iVar3;
      if (bVar5) {
        iVar2 = -iVar3;
      }
      if (iVar2 < 0) {
        return (ulonglong)CONCAT14(bVar5,iVar3);
      }
      piStack_50 = (int *)0x2c;
      iVar2 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,&piStack_50);
      iVar3 = iVar2;
      if (iVar2 < 0) {
        iVar3 = -iVar2;
      }
      uVar4 = (uint)(iVar2 < 0);
      if (-1 < iVar2) {
        DAT_007f1608 = 0;
        piVar1 = (int *)*param_1;
        iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&LAB_00670dc0,piVar1,3);
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = -iVar2;
        }
        uVar4 = (uint)(iVar2 < 0);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*(int *)*param_1 + 0x4c))((int *)*param_1,&LAB_00670e30,param_1,0);
          iVar3 = iVar2;
          if (iVar2 < 0) {
            iVar3 = -iVar2;
          }
          uVar4 = (uint)(iVar2 < 0);
          if (-1 < iVar2) {
            (&DAT_007f17e8)[DAT_007f17e4] = DAT_007f1640;
            DAT_007f17e4 = DAT_007f17e4 + 1;
          }
        }
      }
    }
  }
  return CONCAT44(uVar4,iVar3);
}

