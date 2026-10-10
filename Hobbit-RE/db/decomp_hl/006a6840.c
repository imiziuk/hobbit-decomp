
void __thiscall FUN_006a6840(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  float local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7b88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_textbox__Render_00755e38);
  uVar1 = *(uint *)(param_1 + 0x2c);
  local_4 = 0;
  if ((uVar1 & 1) != 0) {
    local_84 = *(int *)(param_1 + 0x4c) + param_2;
    local_78 = *(int *)(param_1 + 0x50) + param_3;
    local_80 = *(int *)(param_1 + 0x48) + param_3;
    local_74 = *(int *)(param_1 + 0x44) + param_2;
    if ((uVar1 & 0x100) == 0) {
      uVar2 = uVar1 & 0x600;
      if (uVar2 == 0x400) {
        uVar6 = 1;
      }
      else if (uVar2 == 0x200) {
        uVar6 = 2;
      }
      else if (uVar2 == 0x600) {
        uVar6 = 3;
      }
      else {
        uVar6 = 0;
      }
      local_8a = 0xff;
      local_8b = 0xff;
      local_8c = 0xff;
    }
    else {
      uVar6 = 4;
      local_8a = 0x80;
      local_8b = 0x80;
      local_8c = 0x80;
    }
    local_89 = 0xff;
    local_7c = local_84;
    local_70 = local_80;
    local_6c = local_84;
    local_68 = local_78;
    local_44 = local_74;
    local_40 = local_80;
    local_3c = local_84;
    local_38 = local_78;
    if ((uVar1 & 0x400) != 0) {
      FUN_006a0430(*(undefined4 *)(param_1 + 8),&local_44,~uVar1 >> 9 & 1);
    }
    local_1c = local_74 + 1;
    local_14 = local_6c + -1;
    local_18 = local_70 + 1;
    local_10 = local_68 + -1;
    FUN_0069fcd0(&local_1c,param_1 + 0x164,0);
    local_60 = local_70 + 4;
    local_58 = local_68 + -4;
    local_5c = local_6c + -4;
    local_64 = local_74 + 4;
    FUN_006a17c0(&local_64);
    local_60 = local_60 - *(int *)(param_1 + 0x154) * *(int *)(param_1 + 0x160);
    uVar10 = *(undefined4 *)(param_1 + 0x54);
    uVar8 = *(undefined4 *)(param_1 + 0xa0);
    puVar9 = &local_8c;
    piVar7 = &local_64;
    uVar3 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
    FUN_0069fb40(uVar3,piVar7,uVar8,puVar9,uVar10);
    FUN_006a1990();
    if (*(int *)(param_1 + 0xe8) != 0) {
      local_90 = -NAN;
      FUN_0069f570(*(undefined4 *)(param_1 + 0xec),&local_74,0,&local_90,0);
      local_24 = local_7c;
      local_4c = local_7c;
      local_28 = local_80;
      local_2c = local_84;
      *(int *)(param_1 + 0x108) = local_84;
      *(int *)(param_1 + 0x10c) = local_80;
      local_80 = local_80 + 0x16;
      local_54 = local_84;
      *(int *)(param_1 + 0x110) = local_7c;
      *(int *)(param_1 + 0x114) = local_80;
      local_48 = local_78;
      local_50 = local_78 + -0x16;
      *(int *)(param_1 + 0x118) = local_84;
      *(int *)(param_1 + 0x11c) = local_50;
      *(int *)(param_1 + 0x120) = local_7c;
      *(int *)(param_1 + 0x124) = local_78;
      local_90 = -NAN;
      local_78 = local_50;
      local_20 = local_80;
      FUN_0069f570(*(undefined4 *)(param_1 + 0xf8),&local_84,uVar6,&local_90,0);
      local_90 = -NAN;
      FUN_0069f570(*(undefined4 *)(param_1 + 0xf4),&local_2c,uVar6,&local_90,0);
      local_90 = -NAN;
      FUN_0069f570(*(undefined4 *)(param_1 + 0xf0),&local_54,uVar6,&local_90,0);
      local_84 = local_84 + 2;
      local_7c = local_7c + -2;
      iVar5 = local_80 + 2;
      local_78 = local_78 + -2;
      local_88 = *(float *)(param_1 + 0x158);
      if (0 < (int)local_88) {
        local_90 = (float)*(int *)(param_1 + 0x160) / (float)(int)local_88;
        if (local_90 < DAT_006e92e4 != (NAN(local_90) || NAN(DAT_006e92e4))) {
          local_90 = 0.0;
        }
        local_88 = (float)(local_78 - iVar5);
        local_80 = iVar5;
        local_30 = __ftol();
        local_30 = local_30 + iVar5;
        iVar4 = __ftol();
        iVar5 = iVar4 + iVar5;
        local_78 = local_30;
      }
      local_80 = iVar5;
      if (0x10 < local_78 - iVar5) {
        local_90 = -NAN;
        FUN_0069f570(*(undefined4 *)(param_1 + 0xfc),&local_84,uVar6,&local_90,0);
      }
      *(int *)(param_1 + 0x128) = local_84;
      *(int *)(param_1 + 300) = local_80;
      *(int *)(param_1 + 0x130) = local_7c;
      *(int *)(param_1 + 0x134) = local_78;
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x200) != 0) {
      FUN_006a0430(*(undefined4 *)(param_1 + 8),&local_44,1);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + param_3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

