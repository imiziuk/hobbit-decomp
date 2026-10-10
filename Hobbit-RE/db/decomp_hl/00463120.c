
undefined4 * __thiscall FUN_00463120(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_258 [2];
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Click_here_to_refresh_from_file__00726204);
  if (iVar1 == 0) {
    FUN_00425440();
    auStack_258[0] = 0xe;
    FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 0xe0),0x200);
    uStack_51 = 0;
    goto LAB_00463952;
  }
  iVar1 = FUN_00647e40(param_3,s_Number_of_Frames_00726228);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_c = *(undefined4 *)(param_1 + 0xa8);
    auStack_258[0] = 1;
    *param_2 = 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Loops_007259f0);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_4 = *(undefined4 *)(param_1 + 0xac);
    auStack_258[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Test_Me_007261fc);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_4 = *(undefined4 *)(param_1 + 0x10c);
    auStack_258[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar2 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 0xb;
      FUN_004357e0(param_1 + 0x68);
      goto LAB_00463952;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,s__Pitch_007207e8,param_1 + 0x68);
    if (iVar2 != 0) goto LAB_00463952;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,&DAT_007207e0,param_1 + 0x6c);
    if (iVar2 != 0) goto LAB_00463952;
    iVar1 = FUN_004ad2b0(iVar1,auStack_258,s__Roll_007207d8,param_1 + 0x70);
    if (iVar1 != 0) goto LAB_00463952;
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(s_Scale_00725a04);
  iVar2 = FUN_00647e80(param_3,s_Scale_00725a04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0xb4));
      *param_2 = auStack_258[0];
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xb4);
LAB_0046340b:
      auStack_258[0] = 2;
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xb8);
      goto LAB_0046340b;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if (iVar1 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xbc);
      goto LAB_0046340b;
    }
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(&PTR_Unwind_00725c6c);
  iVar2 = FUN_00647e80(param_3,&PTR_Unwind_00725c6c,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0xd4));
      *param_2 = auStack_258[0];
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xd4);
LAB_00463513:
      auStack_258[0] = 2;
      *param_2 = 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xd8);
      goto LAB_00463513;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if (iVar1 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xdc);
      goto LAB_00463513;
    }
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(s_Range_00726110);
  iVar2 = FUN_00647e80(param_3,s_Range_00726110,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 200));
      goto LAB_00463952;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 200);
      auStack_258[0] = 2;
      goto LAB_00463952;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xcc);
      auStack_258[0] = 2;
      goto LAB_00463952;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if (iVar1 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0xd0);
      auStack_258[0] = 2;
      goto LAB_00463952;
    }
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(s_Camera_Pos_Offset_007261e8);
  iVar2 = FUN_00647e80(param_3,s_Camera_Pos_Offset_007261e8,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0x118));
      goto LAB_00463795;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0x118);
      auStack_258[0] = 2;
      goto LAB_00463795;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0x11c);
      auStack_258[0] = 2;
      goto LAB_00463795;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if (iVar1 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0x120);
      auStack_258[0] = 2;
      goto LAB_00463795;
    }
  }
  FUN_00425440();
  iVar1 = FUN_00647cf0(s_Camera_Rot_Offset_007261d4);
  iVar2 = FUN_00647e80(param_3,s_Camera_Rot_Offset_007261d4,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 0xb;
      FUN_004357e0(param_1 + 0x124);
LAB_00463795:
      *param_2 = auStack_258[0];
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,s__Pitch_007207e8,param_1 + 0x124);
    if (iVar2 != 0) goto LAB_00463795;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,&DAT_007207e0,param_1 + 0x128);
    if (iVar2 != 0) goto LAB_00463795;
    iVar1 = FUN_004ad2b0(iVar1,auStack_258,s__Roll_007207d8,param_1 + 300);
    if (iVar1 != 0) goto LAB_00463795;
  }
  iVar1 = FUN_00647e40(param_3,s_Playback_Speed_007261c4);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_8 = *(undefined4 *)(param_1 + 0xc0);
    auStack_258[0] = 2;
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Interpolate_007260b0);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_4 = *(undefined4 *)(param_1 + 0xc4);
    auStack_258[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Override_Lookat_Type_007261ac);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_c = *(undefined4 *)(param_1 + 0x114);
    auStack_258[0] = 0xc;
    *param_2 = 0xc;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Override_Lookat_Guid_00726194);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_14 = *(undefined4 *)(param_1 + 0x134);
    uStack_18 = *(undefined4 *)(param_1 + 0x130);
    auStack_258[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar1 = FUN_004d0700(param_3,auStack_258,s_Override_Lookat_Offset_0072617c,param_1 + 0x138);
  if (iVar1 == 0) {
    iVar1 = FUN_00647e40(param_3,s_Override_Lookat_FromBBoxCenter_0072615c);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x148);
      auStack_258[0] = 3;
      FUN_00463a40(auStack_258);
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_Override_Lookat_Lookspring_00726140);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4 = *(undefined4 *)(param_1 + 0x144);
      auStack_258[0] = 3;
      FUN_00463a40(auStack_258);
      return param_2;
    }
    FUN_004abdf0(param_2,param_3);
    return param_2;
  }
LAB_00463952:
  *param_2 = auStack_258[0];
  FUN_00424770(auStack_250);
  return param_2;
}

