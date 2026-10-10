
void FUN_0069cb13(short *param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 *puVar12;
  short local_14;
  int local_10;
  short *local_c;
  short *local_8;
  short *local_4;
  
  local_4 = param_1;
  local_8 = param_3;
  local_c = param_2;
  local_14 = 8;
  do {
    sVar3 = *local_4 * *local_8 + local_4[0x20] * local_8[0x20];
    sVar1 = *local_4 * *local_8 - local_4[0x20] * local_8[0x20];
    sVar8 = local_4[0x10] * local_8[0x10] + local_4[0x30] * local_8[0x30];
    sVar4 = sVar3 + sVar8;
    sVar3 = sVar3 - sVar8;
    sVar8 = (short)((uint)((short)(local_4[0x10] * local_8[0x10] - local_4[0x30] * local_8[0x30]) *
                          DAT_006fcbd0) >> 8) - sVar8;
    sVar5 = sVar1 + sVar8;
    sVar1 = sVar1 - sVar8;
    sVar6 = local_4[8] * local_8[8] + local_4[0x38] * local_8[0x38];
    sVar8 = local_4[8] * local_8[8] - local_4[0x38] * local_8[0x38];
    sVar9 = local_4[0x28] * local_8[0x28] + local_4[0x18] * local_8[0x18];
    sVar10 = local_4[0x28] * local_8[0x28] - local_4[0x18] * local_8[0x18];
    sVar7 = sVar6 + sVar9;
    sVar11 = (short)((uint)((short)(sVar10 + sVar8) * DAT_006fcbdc) >> 8);
    sVar10 = ((short)((uint)(sVar10 * DAT_006fcbd4) >> 8) + sVar11) - sVar7;
    sVar6 = (short)((uint)((short)(sVar6 - sVar9) * DAT_006fcbd0) >> 8) - sVar10;
    sVar8 = ((short)((uint)(sVar8 * DAT_006fcbd8) >> 8) - sVar11) + sVar6;
    *local_c = sVar7 + sVar4;
    local_c[0x38] = sVar4 - sVar7;
    local_c[8] = sVar10 + sVar5;
    local_c[0x30] = sVar5 - sVar10;
    local_c[0x10] = sVar6 + sVar1;
    local_c[0x28] = sVar1 - sVar6;
    local_c[0x20] = sVar8 + sVar3;
    local_c[0x18] = sVar3 - sVar8;
    local_4 = local_4 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_10 = 0;
  local_14 = 8;
  local_c = param_2;
  do {
    puVar12 = (undefined1 *)(*(int *)(param_4 + local_10) + param_5);
    local_10 = local_10 + 4;
    sVar3 = *local_c + local_c[4];
    sVar1 = *local_c - local_c[4];
    sVar8 = local_c[2] + local_c[6];
    sVar4 = sVar3 + sVar8;
    sVar3 = sVar3 - sVar8;
    sVar8 = (short)((uint)((short)(local_c[2] - local_c[6]) * DAT_006fcbd0) >> 8) - sVar8;
    sVar5 = sVar1 + sVar8;
    sVar1 = sVar1 - sVar8;
    sVar6 = local_c[1] + local_c[7];
    sVar8 = local_c[1] - local_c[7];
    sVar9 = local_c[5] + local_c[3];
    sVar10 = local_c[5] - local_c[3];
    sVar7 = sVar6 + sVar9;
    sVar11 = (short)((uint)((short)(sVar10 + sVar8) * DAT_006fcbdc) >> 8);
    sVar10 = ((short)((uint)(sVar10 * DAT_006fcbd4) >> 8) + sVar11) - sVar7;
    sVar6 = (short)((uint)((short)(sVar6 - sVar9) * DAT_006fcbd0) >> 8) - sVar10;
    sVar8 = ((short)((uint)(sVar8 * DAT_006fcbd8) >> 8) - sVar11) + sVar6;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar4 - sVar7) >> 5) & 0x3ff));
    *puVar12 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar7 + sVar4) >> 5) & 0x3ff));
    puVar12[7] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar5 - sVar10) >> 5) & 0x3ff));
    puVar12[1] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar10 + sVar5) >> 5) & 0x3ff));
    puVar12[6] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar1 - sVar6) >> 5) & 0x3ff));
    puVar12[2] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar6 + sVar1) >> 5) & 0x3ff));
    puVar12[5] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar3 - sVar8) >> 5) & 0x3ff));
    puVar12[4] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar8 + sVar3) >> 5) & 0x3ff));
    puVar12[3] = uVar2;
    local_c = local_c + 8;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}

