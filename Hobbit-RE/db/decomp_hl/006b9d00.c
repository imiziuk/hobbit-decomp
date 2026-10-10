
void __fastcall FUN_006b9d00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_sprite__AdvanceLogic_00757c7c);
  local_4 = 0;
  if (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0xc) ==
      (NAN(*(float *)(param_1 + 0x10)) || NAN(*(float *)(param_1 + 0xc)))) {
    fVar1 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc);
  }
  fVar6 = (float10)FUN_006ba270();
  fVar1 = (float)(fVar6 * (float10)fVar1);
  pfVar5 = (float *)FUN_006ba140();
  local_4 = 0xffffffff;
  fVar2 = pfVar5[6] * *(float *)(param_1 + 0x28) +
          pfVar5[10] * *(float *)(param_1 + 0x2c) + pfVar5[2] * *(float *)(param_1 + 0x24) +
          pfVar5[0xe];
  fVar3 = pfVar5[5] * *(float *)(param_1 + 0x28) +
          pfVar5[9] * *(float *)(param_1 + 0x2c) + pfVar5[1] * *(float *)(param_1 + 0x24) +
          pfVar5[0xd];
  fVar4 = *(float *)(param_1 + 0x24) * *pfVar5 +
          pfVar5[4] * *(float *)(param_1 + 0x28) + pfVar5[8] * *(float *)(param_1 + 0x2c) +
          pfVar5[0xc];
  *(float *)(param_1 + 0x90) = fVar4 - fVar1;
  *(float *)(param_1 + 0x94) = fVar3 - fVar1;
  *(float *)(param_1 + 0x98) = fVar2 - fVar1;
  *(float *)(param_1 + 0x9c) = fVar4 + fVar1;
  *(float *)(param_1 + 0xa0) = fVar3 + fVar1;
  *(float *)(param_1 + 0xa4) = fVar2 + fVar1;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

