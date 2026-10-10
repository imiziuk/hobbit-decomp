
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e8d10(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_water__ApplyWaterForces_0072ebb8);
  local_4 = 0;
  fVar1 = SQRT(*(float *)(param_1 + 0x284) * *(float *)(param_1 + 0x284) +
               *(float *)(param_1 + 0x280) * *(float *)(param_1 + 0x280) +
               *(float *)(param_1 + 0x27c) * *(float *)(param_1 + 0x27c));
  if (fVar1 < _DAT_006e9360 != (NAN(fVar1) || NAN(_DAT_006e9360))) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  piVar2 = (int *)FUN_0041bcc0();
  uVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar4 = FUN_004e7c90(uVar3);
  if (iVar4 != 0) {
    fStack_1c = param_2 * *(float *)(param_1 + 0x284);
    fStack_20 = param_2 * *(float *)(param_1 + 0x280);
    fStack_24 = param_2 * *(float *)(param_1 + 0x27c);
    (**(code **)(*piVar2 + 0x144))(auStack_18,&fStack_24);
    FUN_0044c120(0x12,0x3f800000);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

