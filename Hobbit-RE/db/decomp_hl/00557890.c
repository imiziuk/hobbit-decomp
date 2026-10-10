
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00557890(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_logic_mgr__Execute_0073d9c4);
  local_4 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    fVar4 = (float10)FUN_0064ce40();
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 4);
    if (fVar4 < (float10)*(float *)(param_1 + 0x30) ==
        (NAN(fVar4) || NAN((float10)*(float *)(param_1 + 0x30)))) {
      fVar4 = (float10)*(float *)(param_1 + 0x30);
    }
    *(float *)(param_1 + 0x34 + *(int *)(param_1 + 0xb4) * 4) = (float)fVar4;
    uVar3 = *(int *)(param_1 + 0xb4) + 1U & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    local_1c = (float)fVar4;
    *(uint *)(param_1 + 0xb4) = uVar3;
    if ((float10)*(float *)(param_1 + 0x28) < fVar4) {
      do {
        fVar1 = local_1c;
        if (*(float *)(param_1 + 0x2c) <= local_1c) {
          fVar1 = *(float *)(param_1 + 0x2c);
        }
        *(float *)(param_1 + 0xb8 + *(int *)(param_1 + 0x138) * 4) = fVar1;
        uVar3 = *(int *)(param_1 + 0x138) + 1U & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        fVar2 = _DAT_006e9350 * fVar1;
        *(uint *)(param_1 + 0x138) = uVar3;
        *(float *)(param_1 + 0x140) = fVar2 + *(float *)(param_1 + 0x140);
        *(float *)(param_1 + 0x13c) = fVar2 + *(float *)(param_1 + 0x13c);
        local_1c = local_1c - fVar1;
        FUN_00557a00(fVar2);
        while (DAT_00798548 != 0) {
          FUN_00557a00(fVar2);
        }
      } while (*(float *)(param_1 + 0x28) < local_1c);
      DAT_00798548 = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

