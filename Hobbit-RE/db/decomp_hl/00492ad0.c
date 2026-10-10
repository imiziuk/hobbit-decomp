
undefined4 * __thiscall FUN_00492ad0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_258 [2];
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_CurrState_007299f8);
  if (iVar1 == 0) {
    FUN_00425440();
    auStack_258[0] = 1;
    switch(*(undefined4 *)(param_1 + 0x1e0)) {
    case 1:
    case 5:
    case 6:
      uStack_c = 1;
      *param_2 = 1;
      FUN_00424770(auStack_250);
      return param_2;
    case 2:
    case 3:
    case 4:
      *param_2 = 1;
      uStack_c = 4;
      FUN_00424770(auStack_250);
      return param_2;
    default:
      *param_2 = 1;
      uStack_c = 0;
      FUN_00424770(auStack_250);
      return param_2;
    }
  }
  iVar1 = FUN_00647e40(param_3,s_Geometry_Resource_007299e4);
  if (iVar1 == 0) {
    FUN_00425440();
    auStack_258[0] = 7;
    puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0x150);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0075b6e0;
    }
    FUN_00647d70(auStack_250,puVar2,0x200);
    uStack_51 = 0;
    *param_2 = auStack_258[0];
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,&DAT_00725c88);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_18 = *(undefined4 *)(param_1 + 0x160);
    uStack_14 = *(undefined4 *)(param_1 + 0x164);
    auStack_258[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Path_Offset_007299d8);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0x16c);
    auStack_258[0] = 2;
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,&DAT_00729908);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_8 = *(undefined4 *)(param_1 + 0x170);
    goto LAB_00492d13;
  }
  iVar1 = FUN_00647e40(param_3,s_IsMoving_00729910);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_4 = *(undefined4 *)(param_1 + 0x1b8);
    goto LAB_004932bf;
  }
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar3 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_3);
    if (iVar1 == iVar3) {
      uStack_20 = *(undefined4 *)(param_1 + 0x70);
      uStack_24 = *(undefined4 *)(param_1 + 0x6c);
      uStack_28 = *(undefined4 *)(param_1 + 0x68);
      auStack_258[0] = 0xb;
      *param_2 = 0xb;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = iVar1 + param_3;
    iVar3 = FUN_004ad2b0(iVar1,auStack_258,s__Pitch_007207e8,(undefined4 *)(param_1 + 0x68));
    if (((iVar3 != 0) ||
        (iVar3 = FUN_004ad2b0(iVar1,auStack_258,&DAT_007207e0,param_1 + 0x6c), iVar3 != 0)) ||
       (iVar1 = FUN_004ad2b0(iVar1,auStack_258,s__Roll_007207d8,param_1 + 0x70), iVar1 != 0)) {
      *param_2 = auStack_258[0];
      FUN_00424770(auStack_250);
      return param_2;
    }
  }
  FUN_00425440();
  puVar4 = (undefined4 *)(param_1 + 0x140);
  iVar1 = FUN_00647cf0(s_Scale_00725a04);
  iVar3 = FUN_00647e80(param_3,s_Scale_00725a04,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_3);
    if (iVar1 != iVar3) {
      iVar1 = iVar1 + param_3;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar3 == 0) {
        uStack_8 = *puVar4;
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar3 == 0) {
          uStack_8 = *(undefined4 *)(param_1 + 0x144);
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if (iVar1 != 0) goto LAB_00492f41;
LAB_00492f06:
          uStack_8 = puVar4[2];
        }
      }
      goto LAB_00492f10;
    }
LAB_004930dd:
    auStack_258[0] = 8;
    FUN_004357e0(puVar4);
  }
  else {
LAB_00492f41:
    iVar1 = FUN_00647e40(param_3,s_Sinks_007298d8);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x174);
      auStack_258[0] = 3;
      *param_2 = 3;
      FUN_00424770(auStack_250);
      return param_2;
    }
    FUN_00425440();
    iVar1 = FUN_00647cf0(s_Top_Pos_007299a8);
    iVar3 = FUN_00647e80(param_3,s_Top_Pos_007299a8,iVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_00647cf0(param_3);
      if (iVar1 == iVar3) {
        auStack_258[0] = 8;
        FUN_004357e0((undefined4 *)(param_1 + 0x178));
        *param_2 = auStack_258[0];
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = iVar1 + param_3;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar3 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x178);
LAB_0049306d:
        auStack_258[0] = 2;
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar3 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar3 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x17c);
        goto LAB_0049306d;
      }
      iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0x180);
        goto LAB_0049306d;
      }
    }
    FUN_00425440();
    puVar4 = (undefined4 *)(param_1 + 0x184);
    iVar1 = FUN_00647cf0(s_Sink_Vector_0072999c);
    iVar3 = FUN_00647e80(param_3,s_Sink_Vector_0072999c,iVar1);
    if (iVar3 != 0) {
LAB_00493151:
      iVar1 = FUN_00647e40(param_3,s_Transition_Delay_00729988);
      if (iVar1 == 0) {
        FUN_00425440();
        uStack_8 = *(undefined4 *)(param_1 + 0x1a0);
LAB_00492d13:
        auStack_258[0] = 2;
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Transition_Speed_00729974);
      if (iVar1 == 0) {
        FUN_00425440();
        uStack_8 = *(undefined4 *)(param_1 + 0x19c);
        auStack_258[0] = 2;
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Starts_At_Top_00729964);
      if (iVar1 != 0) {
        iVar1 = FUN_00647e40(param_3,s_Set_As_Top_007299cc);
        if (iVar1 == 0) {
          FUN_00425440();
          uStack_4 = 0;
        }
        else {
          iVar1 = FUN_00647e40(param_3,s_Set_As_Bottom_00729a14);
          if (iVar1 == 0) {
            FUN_00425440();
            auStack_258[0] = 3;
            uStack_4 = 0;
            *param_2 = 3;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_Move_Top_Bottom_with_object_007299b0);
          if (iVar1 != 0) {
            FUN_004abdf0(param_2,param_3);
            return param_2;
          }
          FUN_00406a80();
          uStack_4 = *(undefined4 *)(param_1 + 0x15c);
        }
LAB_004932bf:
        auStack_258[0] = 3;
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x1b0);
      auStack_258[0] = 3;
      *param_2 = 3;
      goto LAB_00492f25;
    }
    iVar3 = FUN_00647cf0(param_3);
    if (iVar1 == iVar3) goto LAB_004930dd;
    iVar1 = iVar1 + param_3;
    iVar3 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar3 == 0) {
      uStack_8 = *puVar4;
    }
    else {
      iVar3 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar3 != 0) {
        iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
        if (iVar1 == 0) goto LAB_00492f06;
        goto LAB_00493151;
      }
      uStack_8 = *(undefined4 *)(param_1 + 0x188);
    }
LAB_00492f10:
    auStack_258[0] = 2;
  }
  *param_2 = auStack_258[0];
LAB_00492f25:
  FUN_00424770(auStack_250);
  return param_2;
}

