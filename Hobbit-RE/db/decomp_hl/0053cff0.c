
void __thiscall
FUN_0053cff0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9147;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_group__ComputeBoneL2W_0073788c);
  local_4 = 0;
  param_5[0xc] = 0;
  param_5[8] = 0;
  param_5[4] = 0;
  param_5[0xd] = 0;
  param_5[9] = 0;
  param_5[1] = 0;
  param_5[0xe] = 0;
  param_5[6] = 0;
  param_5[2] = 0;
  param_5[0xb] = 0;
  param_5[7] = 0;
  param_5[3] = 0;
  *param_5 = 0x3f800000;
  param_5[5] = 0x3f800000;
  param_5[10] = 0x3f800000;
  param_5[0xf] = 0x3f800000;
  iVar10 = param_2;
  if (param_2 != -1) {
    do {
      fVar3 = *(float *)(param_4 + 0xc + iVar10 * 0x28);
      pfVar2 = (float *)(param_4 + iVar10 * 0x28);
      fVar3 = fVar3 + fVar3;
      fVar6 = pfVar2[4] + pfVar2[4];
      fVar5 = pfVar2[5] + pfVar2[5];
      fVar4 = fVar3 * pfVar2[6];
      fVar3 = fVar3 * pfVar2[3];
      local_94 = (DAT_006e92e8 - (fVar5 * pfVar2[5] + fVar6 * pfVar2[4])) * *pfVar2;
      local_90 = (fVar6 * pfVar2[3] + fVar5 * pfVar2[6]) * *pfVar2;
      local_8c = (fVar5 * pfVar2[3] - fVar6 * pfVar2[6]) * *pfVar2;
      local_84 = (fVar6 * pfVar2[3] - fVar5 * pfVar2[6]) * pfVar2[1];
      local_80 = (DAT_006e92e8 - (fVar5 * pfVar2[5] + fVar3)) * pfVar2[1];
      local_7c = (fVar4 + fVar5 * pfVar2[4]) * pfVar2[1];
      local_74 = (fVar5 * pfVar2[3] + fVar6 * pfVar2[6]) * pfVar2[2];
      local_70 = (fVar5 * pfVar2[4] - fVar4) * pfVar2[2];
      local_6c = (DAT_006e92e8 - (fVar6 * pfVar2[4] + fVar3)) * pfVar2[2];
      local_64 = pfVar2[7];
      local_60 = pfVar2[8];
      local_5c = pfVar2[9];
      local_88 = 0;
      local_78 = 0;
      local_68 = 0;
      local_58 = 0x3f800000;
      puVar7 = (undefined4 *)FUN_0064e040(local_4c,&local_94,param_5);
      if ((param_5 != puVar7) && (puVar1 = puVar7 + 0x10, puVar7 != puVar1)) {
        puVar8 = param_5 + 2;
        iVar9 = (int)puVar7 - (int)param_5;
        do {
          puVar8[-2] = *puVar7;
          puVar8[-1] = puVar7[1];
          *puVar8 = *(undefined4 *)(iVar9 + (int)puVar8);
          puVar8[1] = puVar7[3];
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
        } while (puVar7 != puVar1);
      }
      iVar10 = (int)*(short *)(iVar10 * 0x80 + 2 + *(int *)(param_1 + 0x50));
    } while (iVar10 != -1);
  }
  puVar7 = (undefined4 *)FUN_0064e040(local_4c,param_3,param_5);
  if ((param_5 != puVar7) && (puVar1 = puVar7 + 0x10, puVar7 != puVar1)) {
    puVar8 = param_5 + 2;
    iVar10 = (int)puVar7 - (int)param_5;
    do {
      puVar8[-2] = *puVar7;
      puVar8[-1] = puVar7[1];
      *puVar8 = *(undefined4 *)(iVar10 + (int)puVar8);
      puVar8[1] = puVar7[3];
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != puVar1);
  }
  puVar7 = (undefined4 *)
           FUN_0064e040(local_4c,param_5,*(int *)(param_1 + 0x50) + 0x40 + param_2 * 0x80);
  if ((param_5 != puVar7) && (puVar1 = puVar7 + 0x10, puVar7 != puVar1)) {
    puVar8 = param_5 + 2;
    iVar10 = (int)puVar7 - (int)param_5;
    do {
      puVar8[-2] = *puVar7;
      puVar8[-1] = puVar7[1];
      *puVar8 = *(undefined4 *)(iVar10 + (int)puVar8);
      puVar8[1] = puVar7[3];
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar7 != puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

