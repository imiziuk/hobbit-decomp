
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ad570(int *param_1,float param_2)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined1 uVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_one_shot_light__OnAdvanceLogic_0072ba18);
  param_2 = (float)param_1[0x46] - param_2;
  local_4 = 0;
  bVar2 = param_2 < DAT_006e92e4;
  bVar3 = param_2 == DAT_006e92e4;
  param_1[0x46] = (int)param_2;
  if (bVar2 == bVar3) {
    pfVar1 = (float *)(param_1 + 5);
    fVar4 = DAT_006e92e8 - param_2 / (float)param_1[0x47];
    local_24 = fVar4 * (float)param_1[0x4c] + (float)param_1[0x48];
    local_20 = fVar4 * (float)param_1[0x4d] + (float)param_1[0x49];
    local_1c = fVar4 * (float)param_1[0x4e] + (float)param_1[0x4a];
    local_18 = fVar4 * (float)param_1[0x4f] + (float)param_1[0x4b];
    (**(code **)(*param_1 + 0x14))(pfVar1,0);
    uVar5 = __ftol();
    *(undefined1 *)((int)param_1 + 0xcf) = uVar5;
    uVar5 = __ftol();
    *(undefined1 *)((int)param_1 + 0xce) = uVar5;
    uVar5 = __ftol();
    *(undefined1 *)((int)param_1 + 0xcd) = uVar5;
    uVar5 = __ftol();
    *(undefined1 *)(param_1 + 0x33) = uVar5;
    local_18 = (float)param_1[0x39];
    local_1c = (float)param_1[7] - local_18;
    local_20 = (float)param_1[6] - local_18;
    local_24 = *pfVar1 - local_18;
    fStack_10 = local_18 + (float)param_1[7];
    fStack_14 = local_18 + (float)param_1[6];
    local_18 = local_18 + *pfVar1;
    FUN_005832c0(&local_24);
  }
  else {
    FUN_004aaa60();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

