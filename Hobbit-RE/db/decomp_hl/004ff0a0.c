
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ff0a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_64 [11];
  undefined4 auStack_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6740;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0066f810();
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar1 = FUN_0065f190(s_PauseTest_00730ea4);
  if (iVar1 == 0) {
    FUN_0052d740(1,6);
  }
  else {
    FUN_0065f430();
  }
  iVar1 = FUN_0041bcb0();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0041bcc0();
    iVar1 = (**(code **)(*piVar2 + 0x108))(1);
    if (iVar1 != 0) {
      iVar1 = FUN_006a17a0(DAT_00813038);
      if (iVar1 != 0) {
        FUN_00500240(auStack_64);
        uStack_4 = 0;
        iVar1 = FUN_00647ed0(auStack_64[0],s_options_keyboard_controls_00730e88);
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
        if (iVar1 == 0) goto LAB_004ff2c5;
      }
      uVar5 = 0;
      uVar3 = FUN_0042b100(0x42);
      iVar1 = FUN_00670ef0(uVar3,uVar5);
      if (iVar1 == 0) {
        uVar3 = FUN_0042b100(0x43);
        iVar1 = FUN_00670ef0(uVar3,iVar1);
        if (iVar1 != 0) goto LAB_004ff1a7;
      }
      else {
LAB_004ff1a7:
        iVar1 = FUN_0052a660();
        if (iVar1 != 0x1e) {
          uVar3 = 6;
          iVar1 = FUN_0052d730(6);
          FUN_0052d740(iVar1 == 0,uVar3);
        }
      }
      uVar5 = 0;
      uVar3 = FUN_0042b100(0x44);
      iVar1 = FUN_00670ef0(uVar3,uVar5);
      if (iVar1 == 0) {
        uVar3 = FUN_0042b100(0x45);
        iVar1 = FUN_00670ef0(uVar3,iVar1);
        if (iVar1 != 0) goto LAB_004ff207;
      }
      else {
LAB_004ff207:
        iVar1 = FUN_0052a660();
        if (iVar1 != 0x1e) {
          FUN_0052d740(1,7);
        }
      }
      uVar5 = 0;
      uVar3 = FUN_0042b100(0x46);
      iVar1 = FUN_00670ef0(uVar3,uVar5);
      if (iVar1 == 0) {
        uVar3 = FUN_0042b100(0x47);
        iVar1 = FUN_00670ef0(uVar3,iVar1);
        if (iVar1 != 0) goto LAB_004ff258;
      }
      else {
LAB_004ff258:
        iVar1 = FUN_0052a660();
        if (iVar1 != 0x1e) {
          FUN_0052d740(1,5);
        }
      }
      uVar5 = 0;
      uVar3 = FUN_0042b100(0x48);
      iVar1 = FUN_00670ef0(uVar3,uVar5);
      if (iVar1 == 0) {
        uVar3 = FUN_0042b100(0x49);
        iVar1 = FUN_00670ef0(uVar3,iVar1);
        if (iVar1 == 0) goto LAB_004ff2c5;
      }
      iVar1 = FUN_0052a660();
      if (iVar1 != 0x1e) {
        FUN_0052d740(1,8);
      }
    }
  }
LAB_004ff2c5:
  if ((DAT_007600e8 == 0) && (DAT_007600f0 == 0)) {
    ExceptionList = local_c;
    return 1;
  }
  iVar1 = FUN_00670ef0(0xc6,0);
  if (iVar1 != 0) {
    DAT_0075fb98 = 1;
  }
  iVar1 = FUN_00670ef0(0x139,0);
  if (iVar1 != 0) {
    FUN_0065f8a0(&uStack_6c,&uStack_68);
    DAT_007600f8 = uStack_6c;
    DAT_007600fc = uStack_68;
    DAT_00760100 = 1;
    DAT_007602a8 = 1;
    uVar4 = FUN_005c76a0();
    FUN_005c7770(auStack_38,uVar4);
    uStack_4 = 1;
    FUN_004fce70(auStack_38[0]);
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  if (DAT_007600e8 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar1 = FUN_00670ef0(0xdc,0);
  if (iVar1 != 0) {
    DAT_00777adc = (uint)(DAT_00777adc == 0);
  }
  iVar1 = FUN_00670ef0(0xdd,0);
  if (iVar1 != 0) {
    FUN_00555da0();
  }
  iVar1 = FUN_00557840();
  if ((iVar1 == 0) &&
     (((iVar1 = FUN_00670ef0(0xd8,0), iVar1 != 0 || (iVar1 = FUN_00670ef0(0xd9,0), iVar1 != 0)) ||
      (iVar1 = FUN_00670ef0(0xda,0), iVar1 != 0)))) {
    FUN_00557820();
  }
  iVar1 = FUN_00670ef0(0xdb,0);
  if (iVar1 == 0) {
    if ((NAN(DAT_007607f0) || NAN(_DAT_006e9448)) == (DAT_007607f0 == _DAT_006e9448))
    goto LAB_004ff45d;
  }
  else {
    if ((NAN(DAT_007607f0) || NAN(_DAT_006e9448)) != (DAT_007607f0 == _DAT_006e9448)) {
      DAT_007607f0 = 1.0;
      goto LAB_004ff45d;
    }
    DAT_007607f0 = 30.0;
  }
  FUN_0064f0d0(0x32,5,s_____FAST_FORWARD_____00730e70);
LAB_004ff45d:
  FUN_00670ef0(0xf4,0);
  FUN_00670ef0(0xf5,0);
  FUN_00670ef0(200,0);
  iVar1 = FUN_006710d0(0x61,0);
  if ((iVar1 != 0) && (iVar1 = FUN_006710d0(100,0), iVar1 != 0)) {
    FUN_0048b5a0();
  }
  ExceptionList = local_c;
  return 1;
}

