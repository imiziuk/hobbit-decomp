
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005a2d10(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float local_60;
  int local_5c;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_1c;
  float local_18;
  float local_c;
  
  local_60 = 0.0;
  if (0 < param_2) {
    local_5c = param_2;
    do {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        iVar9 = 0;
        do {
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar9);
          if (*(int *)(*(int *)(param_1 + 0x1c) + 0x10 + iVar9) != 0) {
            iVar5 = piVar7[1] * 0x34;
            iVar1 = *(int *)(param_1 + 0x14);
            iVar3 = *piVar7 * 0x34;
            local_18 = *(float *)(iVar5 + iVar1) - *(float *)(iVar3 + iVar1);
            local_38 = *(float *)(iVar5 + 4 + iVar1) - *(float *)(iVar3 + 4 + iVar1);
            pfVar6 = (float *)(iVar5 + iVar1);
            pfVar4 = (float *)(iVar3 + iVar1);
            local_34 = pfVar6[2] - pfVar4[2];
            fVar2 = SQRT(local_38 * local_38 + local_18 * local_18 + local_34 * local_34);
            fVar2 = (fVar2 - (float)piVar7[2]) / fVar2;
            local_60 = fVar2 + local_60;
            if (((uint)pfVar4[0xc] & 2) == 0) {
              if (((uint)pfVar6[0xc] & 2) == 0) {
                local_18 = local_18 * _DAT_006e936c;
                local_38 = local_38 * _DAT_006e936c;
                local_34 = local_34 * _DAT_006e936c;
                *pfVar4 = local_18 * fVar2 + *pfVar4;
                pfVar4[1] = local_38 * fVar2 + pfVar4[1];
                pfVar4[2] = local_34 * fVar2 + pfVar4[2];
                local_3c = local_18 * fVar2;
                local_38 = local_38 * fVar2;
                local_34 = local_34 * fVar2;
                local_c = local_18;
                FUN_0042ebf0(&local_3c);
              }
              else {
                local_1c = local_34 * fVar2;
                *pfVar4 = local_18 * fVar2 + *pfVar4;
                pfVar4[1] = local_38 * fVar2 + pfVar4[1];
                pfVar4[2] = local_1c + pfVar4[2];
              }
            }
            else if (((uint)pfVar6[0xc] & 2) == 0) {
              local_28 = local_34 * fVar2;
              *pfVar6 = *pfVar6 - local_18 * fVar2;
              pfVar6[1] = pfVar6[1] - local_38 * fVar2;
              pfVar6[2] = pfVar6[2] - local_28;
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x14;
        } while (iVar8 < *(int *)(param_1 + 0x18));
      }
      local_5c = local_5c + -1;
    } while (local_5c != 0);
  }
  return (float10)local_60 / (float10)param_2;
}

