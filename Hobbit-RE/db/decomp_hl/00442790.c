
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00442790(int param_1,float *param_2,float param_3,float *param_4,float *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  pfVar6 = param_5;
  pfVar5 = param_4;
  pfVar4 = param_2;
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  *param_5 = param_3;
  fVar2 = -*(float *)(*(int *)(param_1 + 0x450) + 0xac);
  fVar1 = *(float *)(*(int *)(param_1 + 0x450) + 0xa8);
  FUN_0064c8e0(param_3,&param_4,&param_2);
  fVar3 = (float)param_2 * 0.0 + fVar1 * (float)param_4;
  fVar1 = fVar1 * (float)param_2 - (float)param_4 * 0.0;
  local_24 = *(float *)(*(int *)(param_1 + 0x450) + 0x74);
  local_1c = 0;
  local_40 = *pfVar5;
  local_18 = 0x41200000;
  local_14 = 0;
  local_3c = pfVar5[1] + _DAT_006e9554;
  param_2 = (float *)pfVar5[2];
  local_34 = local_40 + fVar3;
  local_30 = local_3c + 0.0;
  local_2c = fVar1 + (float)param_2;
  local_38 = (float)param_2;
  FUN_00579080(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_40,&local_34,
               local_24 - _DAT_006e9554,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x70),3);
  FUN_00577e70();
  if (DAT_00773970 == 0) {
    iVar7 = *(int *)(param_1 + 0x450);
    local_34 = fVar3 + *pfVar4;
    param_2 = (float *)(fVar1 + pfVar4[2]);
    local_30 = (pfVar4[1] + 0.0 + local_24) - *(float *)(iVar7 + 0x70);
    local_40 = local_34 + 0.0;
    local_38 = (float)param_2 + 0.0;
    local_3c = fVar2 + pfVar4[1] + 0.0 + *(float *)(iVar7 + 0x70);
    local_2c = (float)param_2;
    local_28 = local_34;
    FUN_00579460(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_34,&local_40,
                 *(undefined4 *)(iVar7 + 0x70),3);
    FUN_00577e70();
    if (DAT_00773970 == 0) {
      local_24 = pfVar4[1] + 0.0;
      local_20 = fVar1 + pfVar4[2] + 0.0;
      *pfVar5 = fVar3 + *pfVar4 + 0.0;
      pfVar5[2] = local_20;
      pfVar5[1] = local_24 + fVar2;
      param_3 = param_3 + _DAT_006e9368;
      *pfVar6 = param_3;
      if (param_6 == 0) {
        iVar7 = FUN_0042c8b0(pfVar5,param_3,1);
        if (iVar7 != 0) {
          return 1;
        }
      }
      else {
        iVar7 = FUN_00442a80(pfVar5,param_3,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x90),
                             *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x94),3,3,local_10,
                             &local_28);
        if (iVar7 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

