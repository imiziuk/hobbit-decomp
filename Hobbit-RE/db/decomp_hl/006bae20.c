
void __fastcall FUN_006bae20(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [32];
  
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&local_84,&local_88);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&local_98,&local_94);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&local_90,&local_8c);
  local_80[0] = (local_8c * local_94 + local_90 * local_84 * local_98) * *(float *)(param_1 + 0xc);
  local_80[1] = local_90 * local_88 * *(float *)(param_1 + 0xc);
  local_80[2] = (local_90 * local_84 * local_94 - local_8c * local_98) * *(float *)(param_1 + 0xc);
  local_80[4] = (local_98 * local_8c * local_84 - local_90 * local_94) * *(float *)(param_1 + 0x10);
  local_80[5] = local_8c * local_88 * *(float *)(param_1 + 0x10);
  local_80[6] = (local_8c * local_84 * local_94 + local_90 * local_98) * *(float *)(param_1 + 0x10);
  local_80[8] = local_98 * local_88 * *(float *)(param_1 + 0x14);
  local_80[9] = -local_84 * *(float *)(param_1 + 0x14);
  local_80[0xc] = *(float *)(param_1 + 0x24);
  local_80[0xd] = *(float *)(param_1 + 0x28);
  local_80[0xe] = *(float *)(param_1 + 0x2c);
  local_80[10] = local_94 * local_88 * *(float *)(param_1 + 0x14);
  local_80[3] = 0.0;
  local_80[7] = 0.0;
  local_80[0xb] = 0.0;
  local_80[0xf] = 1.0;
  uVar1 = FUN_006ba140(local_80);
  pfVar2 = (float *)FUN_0064e040(local_80 + 0x10,uVar1);
  if ((local_80 != pfVar2) && (pfVar2 != pfVar2 + 0x10)) {
    pfVar5 = local_80 + 2;
    pfVar3 = pfVar2;
    do {
      pfVar4 = pfVar3 + 4;
      pfVar5[-2] = *pfVar3;
      pfVar5[-1] = pfVar3[1];
      *pfVar5 = *(float *)(((int)pfVar2 - (int)local_80) + (int)pfVar5);
      pfVar5[1] = pfVar3[3];
      pfVar5 = pfVar5 + 4;
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar2 + 0x10);
  }
  pfVar2 = (float *)(param_1 + 0x4c);
  if (pfVar2 != local_80) {
    puVar6 = (undefined4 *)(param_1 + 0x54);
    pfVar5 = local_80;
    do {
      pfVar3 = pfVar5 + 4;
      puVar6[-2] = *pfVar5;
      puVar6[-1] = pfVar5[1];
      *puVar6 = *(undefined4 *)(((int)local_80 - (int)pfVar2) + (int)puVar6);
      puVar6[1] = *(undefined4 *)((int)local_80 + (4 - (int)pfVar2) + (int)puVar6);
      puVar6 = puVar6 + 4;
      pfVar5 = pfVar3;
    } while (pfVar3 != local_80 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

