
undefined4 * __thiscall FUN_004db240(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  uint uStack_c;
  undefined4 uStack_8;
  
  iVar2 = FUN_00647e40(param_3,s_High_LOD_0072dfa8);
  if (iVar2 == 0) {
    FUN_00425440();
    param_1 = param_1 + 0xa8;
LAB_004db274:
    auStack_250[0] = 0;
    puVar3 = (undefined1 *)FUN_005493e0(param_1);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_00647d70(auStack_250,puVar3,0x200);
    *param_2 = 7;
    uStack_51 = 0x30;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_Med_LOD_0072dfa0);
  if (iVar2 == 0) {
    FUN_00406a80();
    param_1 = param_1 + 0xac;
    goto LAB_004db274;
  }
  iVar2 = FUN_00647e40(param_3,s_Low_LOD_0072df98);
  if (iVar2 == 0) {
    FUN_00406a80();
    param_1 = param_1 + 0xb0;
    goto LAB_004db274;
  }
  iVar2 = FUN_00647e40(param_3,s_High_Med_Distance_0072df84);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xec);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Med_Low_Distance_0072df70);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xf0);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Transition_Time__sec__0072df58);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xf4);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Max_Pitch_0072df3c);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xb4);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Max_Roll_0072df30);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xb8);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Base_Roll_0072df24);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xbc);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s___Phases__1_16__0072df14);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_c = *(undefined4 *)(param_1 + 0xc0);
    *param_2 = 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_Time_Scale_0072df08);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 200);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Freeze_End_Distance_0072def4);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xe0);
    goto LAB_004db770;
  }
  iVar2 = FUN_00647e40(param_3,s_Freeze_Start_Distance_0072dedc);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0xe4);
    goto LAB_004db770;
  }
  FUN_00406a80();
  iVar2 = FUN_00647cf0(&DAT_00728df0);
  iVar4 = FUN_00647e80(param_3,&DAT_00728df0,iVar2);
  if (iVar4 != 0) {
LAB_004db65f:
    iVar2 = FUN_00647e40(param_3,s_OccluderOnDist_0072dddc);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0xfc);
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_OccluderWidth_0072ddcc);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0x100);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_OccluderPosY_0072ddbc);
      if (iVar2 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0x104);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_OccluderNegY_0072ddac);
      if (iVar2 != 0) {
        FUN_004abdf0(param_2,param_3);
        return param_2;
      }
      FUN_00406a80();
      uStack_8 = *(undefined4 *)(param_1 + 0x108);
    }
LAB_004db770:
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar4 = FUN_00647cf0(param_3);
  if (iVar2 == iVar4) {
    FUN_00425250((byte *)(param_1 + 0xe8));
    *param_2 = 0x11;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = iVar2 + param_3;
  iVar4 = FUN_00647e40(&DAT_00728244,iVar2);
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0xea);
  }
  else {
    iVar4 = FUN_00647e40(&DAT_00728240,iVar2);
    if (iVar4 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0xe9);
      goto LAB_004db62e;
    }
    iVar4 = FUN_00647e40(&DAT_0072823c,iVar2);
    if (iVar4 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0xe8);
      goto LAB_004db62e;
    }
    iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
    if (iVar2 != 0) goto LAB_004db65f;
    bVar1 = *(byte *)(param_1 + 0xeb);
  }
  uStack_c = (uint)bVar1;
LAB_004db62e:
  *param_2 = 1;
  FUN_00424770(auStack_250);
  return param_2;
}

