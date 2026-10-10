
undefined4 * __thiscall FUN_004cec40(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_250 [540];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_8;
  
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Offset_Scaling_0072d5a4);
  iVar2 = FUN_00647e80(param_3,s_Offset_Scaling_0072d5a4,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      uStack_34 = *(undefined4 *)(param_1 + 0x160);
      uStack_30 = *(undefined4 *)(param_1 + 0x164);
      uStack_2c = *(undefined4 *)(param_1 + 0x168);
      uVar3 = 8;
      goto LAB_004ced1d;
    }
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
        if (iVar1 != 0) goto LAB_004ced45;
        uStack_8 = *(undefined4 *)(param_1 + 0x168);
      }
    }
    uVar3 = 2;
LAB_004ced1d:
    *param_2 = uVar3;
    FUN_00424770(auStack_250);
    return param_2;
  }
LAB_004ced45:
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Center_0072d570);
  iVar2 = FUN_00647e80(param_3,s_Center_0072d570,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      uStack_34 = *(undefined4 *)(param_1 + 0x170);
      uStack_30 = *(undefined4 *)(param_1 + 0x174);
      uStack_2c = *(undefined4 *)(param_1 + 0x178);
      uVar3 = 8;
    }
    else {
      iVar1 = iVar1 + param_3;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x170);
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          uStack_8 = *(undefined4 *)(param_1 + 0x174);
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if (iVar1 != 0) goto LAB_004cee38;
          uStack_8 = *(undefined4 *)(param_1 + 0x178);
        }
      }
      uVar3 = 2;
    }
    *param_2 = uVar3;
    FUN_00424770(auStack_250);
    return param_2;
  }
LAB_004cee38:
  iVar1 = FUN_00647e40(param_3,s_Anim_Speed_0072d598);
  if (iVar1 != 0) {
    FUN_004c5ba0(param_2,param_3);
    return param_2;
  }
  FUN_00406a80();
  uStack_8 = *(undefined4 *)(param_1 + 0x16c);
  *param_2 = 2;
  FUN_00424770(auStack_250);
  return param_2;
}

