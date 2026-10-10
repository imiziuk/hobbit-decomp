
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00494930(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_b8 [44];
  undefined1 auStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d31cd;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if ((DAT_0075cfac & 1) == 0) {
    DAT_0075cfac = DAT_0075cfac | 1;
    DAT_0075cf9c = (int *)0x0;
    DAT_0075cf98 = 0;
    DAT_0075cfa0 = 0;
    DAT_0075cfa8 = 0;
    DAT_0075cfa4 = 0;
    _DAT_0075cf90 = 0;
    _DAT_0075cf94 = 0;
    ExceptionList = &pvStack_c;
    FUN_006bfe55(&LAB_00494ef0);
  }
  if (DAT_00729a24 != 0) {
    DAT_00729a24 = 0;
    FUN_00649b20(&DAT_007291ac);
    local_4 = 0;
    piVar2 = DAT_0075cf9c;
    iVar1 = DAT_0075cfa0;
    if (DAT_0075cfa0 < DAT_0075cf98 + 1) {
      if (DAT_0075cfa8 == 0) {
        iVar1 = DAT_0075cfa0 / 2;
        iVar6 = 1;
        if (0 < iVar1) {
          iVar6 = iVar1;
        }
        if (iVar6 + DAT_0075cf98 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cf98;
        }
      }
      else {
        iVar1 = DAT_0075cf98 + DAT_0075cfa8;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar4,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar6 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075cf98) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_0075cf9c);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar6 < DAT_0075cf98);
      }
      piVar2 = piVar4;
      if (DAT_0075cf9c != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cfa0 = iVar1;
    DAT_0075cf9c = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320(local_b8);
    DAT_0075cf98 = DAT_0075cf98 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Point_00729be8);
    local_4 = 2;
    piVar2 = DAT_0075cf9c;
    iVar1 = DAT_0075cfa0;
    if (DAT_0075cfa0 < DAT_0075cf98 + 1) {
      if (DAT_0075cfa8 == 0) {
        iVar1 = DAT_0075cfa0 / 2;
        iVar6 = 1;
        if (0 < iVar1) {
          iVar6 = iVar1;
        }
        if (iVar6 + DAT_0075cf98 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cf98;
        }
      }
      else {
        iVar1 = DAT_0075cf98 + DAT_0075cfa8;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar4,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cf98) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_0075cf9c);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar6 < DAT_0075cf98);
      }
      piVar2 = piVar4;
      if (DAT_0075cf9c != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cfa0 = iVar1;
    DAT_0075cf9c = piVar2;
    FUN_0064a320(local_b8);
    DAT_0075cf98 = DAT_0075cf98 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00729be0);
    local_4 = 4;
    FUN_00469980(local_b8);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  uVar3 = (**(code **)(*param_1 + 0x4c))(s_Ambient_Light_00729bd0);
  iVar1 = FUN_00647e40(uVar3);
  if (iVar1 == 0) {
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,s_Color_00728924);
      *(undefined4 *)(iVar1 + 0x80) = 0x11;
      *(undefined4 *)(iVar1 + 0x84) = 3;
      FUN_00647d10(auStack_8c,s_Color_00728924);
      FUN_00647dc0(auStack_8c,&DAT_00728244);
      FUN_00499e60(param_2,auStack_8c,0x12,0,0xff);
      FUN_00647d10(auStack_8c,s_Color_00728924);
      FUN_00647dc0(auStack_8c,&DAT_00728240);
      FUN_00499e60(param_2,auStack_8c,0x12,0,0xff);
      FUN_00647d10(auStack_8c,s_Color_00728924);
      FUN_00647dc0(auStack_8c,&DAT_0072823c);
      FUN_00499e60(param_2,auStack_8c,0x12,0,0xff);
      FUN_00647d10(auStack_8c,s_Color_00728924);
      FUN_00647dc0(auStack_8c,&DAT_00728238);
      FUN_00499e60(param_2,auStack_8c,0x12,0,0xff);
    }
  }
  else {
    FUN_004ab4e0(param_2);
    FUN_00496020(param_2,s_Light_Type_00729bc4,&DAT_0075cf90,2);
    FUN_00499e60(param_2,s_Light_Channel_00729bb4,2,0,0xffffffff);
    FUN_0048b8e0(param_2,s_Color_00728924,2);
    FUN_00537ff0(param_2,s_Intensity_0072550c,2,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_Attenuation_Start_00729ba0,8,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_Attenuation_End_00729b90,2,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_Flicker_Amp_00729b84,2,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_Flicker_Jitter_00729b74,2,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_Flicker_Speed_00729b64,2,0x800000,0x7f7fffff);
    FUN_005669e0(param_2,s_Dynamic_00729a88,2);
    FUN_005669e0(param_2,s_Flicker_00729a80,2);
    FUN_005669e0(param_2,s_Light_Player_00729b54,2);
    FUN_005669e0(param_2,s_Light_NPC_00729b48,2);
    FUN_005669e0(param_2,s_Light_Internal_00729b38,2);
    FUN_005669e0(param_2,s_Light_Playsurfaces_00729b24,2);
    FUN_005669e0(param_2,s_Light_Rigid_Instances_00729b0c,2);
    FUN_005669e0(param_2,s_Ambient_00729b04,2);
  }
  ExceptionList = pvStack_c;
  return;
}

