
void __fastcall FUN_004c1960(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  char *pcVar7;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_64 [12];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if ((*(byte *)((int)param_1 + 0x126) & 1) == 0) {
    if ((param_1[0x50] == 0) || (iVar2 = DAT_00777a90, *(int *)(param_1[0x50] + 0x88) == 0)) {
      iVar2 = DAT_00777a8c;
    }
    if (iVar2 != 0) {
      iVar2 = FUN_00549470(param_1 + 0x2f);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x134) & 1) != 0) {
          iVar2 = FUN_004c71a0();
          if (iVar2 == 0) {
            local_58 = param_1[0x11];
            local_54 = param_1[0x12];
            local_50 = param_1[0x13];
            local_4c = param_1[0x14];
            local_48 = param_1[0x15];
            local_44 = param_1[0x16];
            local_78 = (float)CONCAT13(0xff,(undefined3)local_78);
            uVar1 = FUN_00647b10(0,0xff);
            local_78 = (float)CONCAT31(local_78._1_3_,uVar1);
            uVar1 = FUN_00647b10(0,0xff);
            local_78._0_2_ = CONCAT11(uVar1,(undefined1)local_78);
            uVar1 = FUN_00647b10(0,0xff);
            local_78._0_3_ = CONCAT12(uVar1,(undefined2)local_78);
            FUN_00669cf0(&local_58,0xffff00ff);
            uVar3 = (**(code **)(*param_1 + 0x4c))();
            pcVar7 = s_ANIMATE_ME___s__0072cad0;
            uVar5 = extraout_ECX;
            FUN_00425250(&local_78);
            uVar4 = FUN_0045bbd0(auStack_64);
            FUN_0066ae20(uVar4,uVar5,pcVar7,uVar3);
            return;
          }
        }
        if (DAT_0075da44 == 0) {
          *(byte *)((int)param_1 + 0x15b) = *(byte *)((int)param_1 + 0x15b) & 0xdf;
        }
        else {
          *(byte *)((int)param_1 + 0x15b) = *(byte *)((int)param_1 + 0x15b) | 0x20;
        }
        FUN_0064cc00();
        FUN_0064c8e0(param_1[0x1a],&local_68,&local_6c);
        FUN_0064c8e0(param_1[0x1b],&local_7c,&local_78);
        FUN_0064c8e0(param_1[0x1c],&local_70,&local_74);
        local_40 = (local_74 * local_78 + local_70 * local_68 * local_7c) * (float)param_1[0x4c];
        local_3c = local_70 * local_6c * (float)param_1[0x4c];
        local_38 = (local_70 * local_68 * local_78 - local_74 * local_7c) * (float)param_1[0x4c];
        local_30 = (local_7c * local_74 * local_68 - local_70 * local_78) * (float)param_1[0x4d];
        local_2c = local_74 * local_6c * (float)param_1[0x4d];
        local_28 = (local_74 * local_68 * local_78 + local_70 * local_7c) * (float)param_1[0x4d];
        local_20 = local_7c * local_6c * (float)param_1[0x4e];
        local_1c = -local_68 * (float)param_1[0x4e];
        local_8 = param_1[7];
        local_10 = param_1[5];
        local_c = param_1[6];
        iVar2 = *param_1;
        local_18 = local_78 * local_6c * (float)param_1[0x4e];
        local_34 = 0;
        local_24 = 0;
        local_14 = 0;
        local_4 = 0x3f800000;
        uVar5 = FUN_004c71a0();
        piVar6 = (int *)(**(code **)(iVar2 + 0x128))(&local_40,uVar5);
        FUN_0064cc50();
        (**(code **)(*piVar6 + 4))(param_1);
      }
    }
  }
  return;
}

