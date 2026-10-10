
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f34e0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  float local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_34 [52];
  
  local_75 = 0xff;
  local_76 = 0;
  local_77 = 0;
  local_78 = 0;
  local_79 = 0xff;
  local_7a = 0xff;
  local_7b = 0xff;
  local_7c = 0xff;
  local_6c = 0;
  local_70 = *(float *)(param_1 + 0x564) / _DAT_006efa40;
  local_8c = _DAT_0075e360 * *(float *)(param_1 + 0x570);
  local_88 = *(float *)(param_1 + 0x570) * _DAT_0075e364;
  local_74 = (*(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x560) / _DAT_006efa3c) -
             (_DAT_006efa44 + local_8c);
  local_58 = local_8c * _DAT_006e936c + local_74;
  local_54 = local_88 * _DAT_006e936c + local_70;
  fVar7 = (float10)FUN_00434ca0(3);
  if ((NAN(fVar7) || NAN((float10)DAT_006e92e4)) != (fVar7 == (float10)DAT_006e92e4)) {
    if (-1 < *(int *)(param_1 + 0x730)) {
      FUN_0058e880(*(int *)(param_1 + 0x730));
    }
    *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x734) = 0;
    return;
  }
  iVar6 = 0x12;
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x3d4,0);
  FUN_0066e5a0(&local_74,&local_8c,0xffffffff);
  FUN_0066d9a0();
  fVar7 = (float10)FUN_00434ca0(0x36);
  if ((NAN(fVar7) || NAN((float10)DAT_006e92e4)) == (fVar7 == (float10)DAT_006e92e4)) {
    fVar7 = (float10)FUN_00434ca0(0x36);
    local_90 = (float)fVar7;
    iVar6 = 0x13;
  }
  else {
    fVar7 = (float10)FUN_00434ca0(0x37);
    if ((NAN(fVar7) || NAN((float10)DAT_006e92e4)) == (fVar7 == (float10)DAT_006e92e4)) {
      fVar7 = (float10)FUN_00434ca0(0x37);
      local_90 = (float)fVar7;
      iVar6 = 0x14;
    }
    else {
      fVar7 = (float10)FUN_00434ca0(0x38);
      if ((NAN(fVar7) || NAN((float10)DAT_006e92e4)) == (fVar7 == (float10)DAT_006e92e4)) {
        fVar7 = (float10)FUN_00434ca0(0x38);
        local_90 = (float)fVar7;
        iVar6 = 0x15;
      }
      else {
        local_90 = 0.0;
      }
    }
  }
  fVar7 = (float10)FUN_00434ca0(0x36);
  if (fVar7 <= (float10)DAT_006e92e4) {
    fVar7 = (float10)FUN_00434ca0(0x37);
    if ((float10)DAT_006e92e4 < fVar7) {
      fVar7 = (float10)FUN_00434ca0(0x37);
      local_84 = (float)fVar7;
      if (*(float *)(param_1 + 0x734) < local_84 !=
          (NAN(*(float *)(param_1 + 0x734)) || NAN(local_84))) {
        *(float *)(param_1 + 0x734) = local_84;
      }
      if (*(int *)(param_1 + 0x738) != iVar6) {
        FUN_0058e880(*(undefined4 *)(param_1 + 0x730));
        *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x730) < 0) {
        uVar2 = FUN_0058e610(s_HUD_fireStone_0072f8d0,&local_58,0);
        *(undefined4 *)(param_1 + 0x730) = uVar2;
        *(undefined4 *)(param_1 + 0x738) = 0x14;
        goto LAB_004f384d;
      }
      goto LAB_004f3858;
    }
    fVar7 = (float10)FUN_00434ca0(0x38);
    if ((float10)DAT_006e92e4 < fVar7) {
      fVar7 = (float10)FUN_00434ca0(0x38);
      local_84 = (float)fVar7;
      if (*(float *)(param_1 + 0x734) < local_84 !=
          (NAN(*(float *)(param_1 + 0x734)) || NAN(local_84))) {
        *(float *)(param_1 + 0x734) = local_84;
      }
      if (*(int *)(param_1 + 0x738) != iVar6) {
        FUN_0058e880(*(undefined4 *)(param_1 + 0x730));
        *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x730) < 0) {
        uVar2 = FUN_0058e610(s_HUD_ImbuedStone_0072f870,&local_58,0);
        *(undefined4 *)(param_1 + 0x738) = 0x15;
        goto LAB_004f3840;
      }
      goto LAB_004f3858;
    }
  }
  else {
    fVar7 = (float10)FUN_00434ca0(0x36);
    local_84 = (float)fVar7;
    if (*(float *)(param_1 + 0x734) < local_84 !=
        (NAN(*(float *)(param_1 + 0x734)) || NAN(local_84))) {
      *(float *)(param_1 + 0x734) = local_84;
    }
    if (*(int *)(param_1 + 0x738) != iVar6) {
      FUN_0058e880(*(undefined4 *)(param_1 + 0x730));
      *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x730) < 0) {
      uVar2 = FUN_0058e610(s_HUD_ExplodeStone_0072f820,&local_58,0);
      *(undefined4 *)(param_1 + 0x738) = 0x13;
LAB_004f3840:
      *(undefined4 *)(param_1 + 0x730) = uVar2;
LAB_004f384d:
      FUN_0058e6a0(uVar2,DAT_0072f330);
    }
LAB_004f3858:
    if ((NAN(local_84) || NAN(DAT_006e92e4)) == (local_84 == DAT_006e92e4)) goto LAB_004f388a;
  }
  FUN_0058e880(*(undefined4 *)(param_1 + 0x730));
  *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x734) = 0;
LAB_004f388a:
  if (DAT_006e92e4 < local_90) {
    fVar1 = local_88;
    if (DAT_006e92e4 < *(float *)(param_1 + 0x734)) {
      fVar1 = local_88 / *(float *)(param_1 + 0x734);
    }
    local_50 = local_74;
    local_48 = local_6c;
    local_84 = local_8c;
    fVar1 = DAT_006e92e8 - (fVar1 * local_90) / local_88;
    local_80 = fVar1 * local_88;
    local_4c = local_70 + local_80;
    local_80 = local_88 - local_80;
    FUN_0066c3a0(7,0x17);
    FUN_0066db80(iVar6 * 0x20 + 0x194 + param_1,0);
    uVar10 = 0xffffffff;
    uVar2 = FUN_0041b9c0(0x3f800000,0x3f800000);
    uVar3 = FUN_0041b9c0(0,fVar1);
    FUN_0066e6b0(&local_50,&local_84,uVar3,uVar2,uVar10);
    FUN_0066d9a0();
  }
  FUN_00434ca0(2);
  uVar2 = __ftol();
  FUN_0064f190(local_34,s_x_02i_0072f8c8,uVar2);
  iVar6 = __ftol();
  iVar4 = __ftol();
  iVar5 = __ftol();
  local_5c = __ftol();
  local_68 = iVar6 + 1;
  local_60 = iVar5 + 1;
  local_64 = iVar4 + -1;
  local_5c = local_5c + -1;
  puVar11 = local_34;
  puVar9 = &local_78;
  uVar3 = 0x12;
  piVar8 = &local_68;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fac0(uVar2,piVar8,uVar3,puVar9,puVar11);
  local_68 = local_68 + -1;
  local_60 = local_60 + -1;
  local_64 = local_64 + -1;
  local_5c = local_5c + -1;
  puVar11 = local_34;
  puVar9 = &local_7c;
  uVar3 = 0x12;
  piVar8 = &local_68;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fac0(uVar2,piVar8,uVar3,puVar9,puVar11);
  return;
}

