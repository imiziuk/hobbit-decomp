
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1ad0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d39d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceSleep_0072aeb8);
  local_4 = 0;
  if ((param_1[0x9a] & 0x2000U) == 0) goto LAB_004a1c06;
  FUN_0065fce0(0);
  pfVar2 = (float *)FUN_00672260(local_18);
  pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
  fVar1 = (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]) +
          (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
          (*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2);
  if ((((fVar1 <= *(float *)(param_1[0xc2] + 0x24) * *(float *)(param_1[0xc2] + 0x24)) ||
       ((*(byte *)(param_1 + 0x9a) & 1) == 0)) || (*(int *)(param_1[0xc1] + 0x38) == 8)) ||
     ((param_1[0x6c] == 0x13 && (fVar1 <= _DAT_006ede88)))) {
    bVar4 = (param_1[0x9a] & 0x80000U) == 0;
    param_1[0x118] = 0;
    if (!bVar4) {
      FUN_004a22f0();
      goto LAB_004a1be3;
    }
  }
  else {
    param_1[0x118] = (int)((float)param_1[0x117] + (float)param_1[0x118]);
LAB_004a1be3:
    bVar4 = (param_1[0x9a] & 0x80000U) == 0;
  }
  if ((bVar4) && (_DAT_006e99bc < (float)param_1[0x118])) {
    FUN_004a22a0();
  }
LAB_004a1c06:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

