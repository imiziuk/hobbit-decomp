
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0068b5e2(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_80 [16];
  int local_40;
  float local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  int local_2c;
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  if ((*(int *)(param_1 + 0x1090) != 0) && (*(int *)(param_1 + 0x1094) != 0)) {
    if ((*(int *)(param_1 + 4) == 0x32545844) || (local_10 = 0, *(int *)(param_1 + 4) == 0x34545844)
       ) {
      local_10 = 1;
    }
    local_8 = *(uint *)(param_1 + 0x1074);
    if (local_8 < *(uint *)(param_1 + 0x107c)) {
      do {
        FUN_0068900c();
        puVar4 = local_80;
        local_c = (int *)(param_1 + 0x1064);
        if (local_10 == 0) {
          local_14 = 4;
          do {
            pfVar3 = (float *)((local_8 - *(int *)(param_1 + 0x1074)) * 0x10 + *local_c);
            local_18 = 4;
            do {
              local_34 = (uint)ROUND(*pfVar3 * _DAT_006e95dc + _DAT_006e936c);
              local_38 = (uint)ROUND(pfVar3[1] * _DAT_006e95dc + _DAT_006e936c);
              local_3c = (float)(int)ROUND(pfVar3[2] * _DAT_006e95dc + _DAT_006e936c);
              local_30 = pfVar3[3] * _DAT_006e95dc + _DAT_006e936c;
              local_40 = (int)ROUND(local_30);
              pfVar3 = pfVar3 + 4;
              local_1c = local_3c;
              *puVar4 = ((local_40 << 8 | local_34) << 8 | local_38) << 8 | (uint)local_3c;
              puVar4 = puVar4 + 1;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_c = local_c + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        else {
          local_18 = 4;
          do {
            pfVar3 = (float *)((local_8 - *(int *)(param_1 + 0x1074)) * 0x10 + *local_c);
            local_14 = 4;
            do {
              local_20 = (uint)ROUND(*pfVar3 * pfVar3[3] * _DAT_006e95dc + _DAT_006e936c);
              local_24 = (uint)ROUND(pfVar3[1] * pfVar3[3] * _DAT_006e95dc + _DAT_006e936c);
              local_30 = (float)(int)ROUND(pfVar3[3] * pfVar3[2] * _DAT_006e95dc + _DAT_006e936c);
              local_1c = pfVar3[3] * _DAT_006e95dc + _DAT_006e936c;
              local_2c = (int)ROUND(local_1c);
              pfVar3 = pfVar3 + 4;
              local_28 = local_30;
              *puVar4 = ((local_2c << 8 | local_20) << 8 | local_24) << 8 | (uint)local_30;
              puVar4 = puVar4 + 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_c = local_c + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          local_14 = 0;
        }
        local_18 = 0;
        FUN_0068902f();
        uVar6 = 0;
        if (*(int *)(param_1 + 0x1098) != 0) {
          puVar4 = local_80;
          do {
            uVar1 = *(uint *)(param_1 + 0x10a0);
            uVar5 = 0;
            do {
              *puVar4 = local_80[(*(uint *)(param_1 + 0x109c) & uVar5) + (uVar1 & uVar6) * 4];
              uVar5 = uVar5 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar5 < 4);
            uVar6 = uVar6 + 1;
          } while (uVar6 < 4);
        }
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0x31545844) {
          FUN_006907c3(local_80,(*(uint *)(param_1 + 0x1078) >> 2) * *(int *)(param_1 + 0x1048) +
                                *(int *)(param_1 + 0x1084) * *(int *)(param_1 + 0x104c) +
                                (local_8 >> 2) * 8 + *(int *)(param_1 + 0x18));
        }
        else if ((iVar2 == 0x32545844) || (iVar2 == 0x33545844)) {
          FUN_006912f3(local_80,(*(uint *)(param_1 + 0x1078) >> 2) * *(int *)(param_1 + 0x1048) +
                                *(int *)(param_1 + 0x1084) * *(int *)(param_1 + 0x104c) +
                                (local_8 >> 2) * 0x10 + *(int *)(param_1 + 0x18));
        }
        else if ((iVar2 == 0x34545844) || (iVar2 == 0x35545844)) {
          FUN_0069134c(local_80,(*(uint *)(param_1 + 0x1078) >> 2) * *(int *)(param_1 + 0x1048) +
                                *(int *)(param_1 + 0x1084) * *(int *)(param_1 + 0x104c) +
                                (local_8 >> 2) * 0x10 + *(int *)(param_1 + 0x18));
        }
        local_8 = local_8 + 4;
      } while (local_8 < *(uint *)(param_1 + 0x107c));
    }
    *(undefined4 *)(param_1 + 0x1090) = 0;
  }
  return 0;
}

