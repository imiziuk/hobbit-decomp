
void __thiscall FUN_00538fb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined1 local_8c [8];
  float local_84;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 0x124) == 0) {
    local_9c = 0.0;
    local_ac = 0.0;
    local_bc = 0.0;
    local_98 = 0.0;
    local_a8 = 0.0;
    local_c8 = 0.0;
    local_94 = 0.0;
    local_b4 = 0.0;
    local_c4 = 0.0;
    local_a0 = 0.0;
    local_b0 = 0.0;
    local_c0 = 0.0;
    local_cc = 1.0;
    local_b8 = 1.0;
    local_a4 = 1.0;
    local_90 = 1.0;
    FUN_00425720(param_1 + 0x68);
    local_74 = 0;
    local_64 = 0;
    local_54 = 0;
    local_44 = 0x3f800000;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    uVar4 = FUN_0064e040(local_40,local_80,&local_cc);
    FUN_00406570(uVar4);
    if (((((NAN(local_c0) || NAN(DAT_006e92e4)) == (local_c0 == DAT_006e92e4)) ||
         ((NAN(local_b0) || NAN(DAT_006e92e4)) == (local_b0 == DAT_006e92e4))) ||
        ((NAN(local_a0) || NAN(DAT_006e92e4)) == (local_a0 == DAT_006e92e4))) ||
       ((NAN(local_90) || NAN(DAT_006e92e8)) == (local_90 == DAT_006e92e8))) {
      local_cc = local_c0 * *(float *)(param_1 + 0x14) + local_cc;
      local_bc = local_b0 * *(float *)(param_1 + 0x14) + local_bc;
      local_ac = local_a0 * *(float *)(param_1 + 0x14) + local_ac;
      fVar1 = local_90 * *(float *)(param_1 + 0x14);
      local_c8 = local_c0 * *(float *)(param_1 + 0x18) + local_c8;
      local_b8 = local_b0 * *(float *)(param_1 + 0x18) + local_b8;
      local_a8 = local_a0 * *(float *)(param_1 + 0x18) + local_a8;
      fVar2 = local_90 * *(float *)(param_1 + 0x18);
      local_c4 = local_c0 * *(float *)(param_1 + 0x1c) + local_c4;
      local_b4 = local_b0 * *(float *)(param_1 + 0x1c) + local_b4;
      local_a4 = local_a0 * *(float *)(param_1 + 0x1c) + local_a4;
      fVar3 = local_90 * *(float *)(param_1 + 0x1c);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14);
      fVar2 = *(float *)(param_1 + 0x18);
      fVar3 = *(float *)(param_1 + 0x1c);
    }
    local_98 = local_98 + fVar2;
    local_9c = local_9c + fVar1;
    local_94 = local_94 + fVar3;
    FUN_0064d6d0();
    FUN_0041b9f0(local_8c,&stack0x00000004);
    fVar1 = local_b4 * in_stack_00000014 +
            local_a4 * in_stack_00000018 + local_c4 * in_stack_00000010 + local_94;
    if ((DAT_006e92e4 < local_84) && (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)))) {
      FUN_00539430();
      return;
    }
    if ((local_84 < DAT_006e92e4 != (NAN(local_84) || NAN(DAT_006e92e4))) && (DAT_006e92e4 < fVar1))
    {
      FUN_00539290();
      return;
    }
  }
  return;
}

