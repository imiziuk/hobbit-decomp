
undefined4 * __thiscall FUN_004d0300(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_258 [2];
  undefined1 auStack_250 [584];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00425440();
  iVar1 = FUN_00647e40(param_3,&DAT_0072d63c);
  if (iVar1 == 0) {
    uStack_8 = *(undefined4 *)(param_1 + 0x16c);
    auStack_258[0] = 10;
    *param_2 = 10;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar1 = FUN_00647e40(param_3,&DAT_0072d634);
  if (iVar1 == 0) {
    uStack_8 = *(undefined4 *)(param_1 + 0x180);
    auStack_258[0] = 10;
    *param_2 = 10;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar1 = FUN_00647e40(param_3,s_Pitch0_0072d61c);
  if (iVar1 == 0) {
    uStack_8 = *(undefined4 *)(param_1 + 0x170);
    auStack_258[0] = 10;
    *param_2 = 10;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar1 = FUN_00647e40(param_3,s_Pitch1_0072d614);
  if (iVar1 == 0) {
    uStack_8 = *(undefined4 *)(param_1 + 0x184);
    auStack_258[0] = 10;
    *param_2 = 10;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,&DAT_00729908);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_8 = *(undefined4 *)(param_1 + 400);
    auStack_258[0] = 2;
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Yaw_Increasing_0072d684);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_4 = *(undefined4 *)(param_1 + 0x188);
    auStack_258[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Pitch_Increasing_0072d670);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_4 = *(undefined4 *)(param_1 + 0x18c);
    auStack_258[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Position0_0072d650);
  iVar2 = FUN_00647e80(param_3,s_Position0_0072d650,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0x160));
    }
    else {
      iVar1 = iVar1 + param_3;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x160);
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          uStack_8 = *(undefined4 *)(param_1 + 0x164);
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if (iVar1 != 0) goto LAB_004d065e;
          uStack_8 = *(undefined4 *)(param_1 + 0x168);
        }
      }
      auStack_258[0] = 2;
    }
    *param_2 = auStack_258[0];
    FUN_00424770(auStack_250);
    return param_2;
  }
LAB_004d065e:
  FUN_00425440();
  iVar1 = FUN_004d0700(param_3,auStack_258,s_Position1_0072d644,param_1 + 0x174);
  if (iVar1 != 0) {
    *param_2 = auStack_258[0];
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_004c5ba0(param_2,param_3);
  return param_2;
}

