
void __thiscall FUN_004da6c0(int *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d55b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_treeleaf_cluster__OnAdvanceLogic_0072dea0);
  local_4 = 0;
  param_1[0x31] = (int)(param_2 + (float)param_1[0x31]);
  if (param_1[0x43] == 0) {
    FUN_0065fce0(0);
    pfVar2 = (float *)(**(code **)(*param_1 + 0x28))();
    pfVar3 = (float *)FUN_00672260(auStack_18);
    fVar1 = SQRT((pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]) +
                 (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
                 (*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2));
    if ((fVar1 < (float)param_1[0x3b] != (fVar1 == (float)param_1[0x3b])) &&
       ((float)param_1[0x3b] < (float)param_1[0x3e])) {
      param_1[0x43] = 1;
      param_1[0x45] = 0;
    }
    if (((float)param_1[0x3b] <= fVar1) &&
       ((float)param_1[0x3e] < (float)param_1[0x3b] !=
        (NAN((float)param_1[0x3e]) || NAN((float)param_1[0x3b])))) {
      param_1[0x43] = 1;
      param_1[0x45] = 1;
    }
    if ((fVar1 < (float)param_1[0x3c] != (fVar1 == (float)param_1[0x3c])) &&
       ((float)param_1[0x3c] < (float)param_1[0x3e])) {
      param_1[0x43] = 1;
      param_1[0x45] = 1;
    }
    if (((float)param_1[0x3c] <= fVar1) &&
       ((float)param_1[0x3e] < (float)param_1[0x3c] !=
        (NAN((float)param_1[0x3e]) || NAN((float)param_1[0x3c])))) {
      param_1[0x43] = 1;
      param_1[0x45] = 2;
    }
    if (param_1[0x43] == 1) {
      param_1[0x46] = param_1[0x3d];
    }
    param_1[0x3e] = (int)fVar1;
  }
  else {
    param_2 = (float)param_1[0x46] - param_2;
    param_1[0x46] = (int)param_2;
    if (param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) {
      param_1[0x43] = 0;
      param_1[0x44] = param_1[0x45];
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

