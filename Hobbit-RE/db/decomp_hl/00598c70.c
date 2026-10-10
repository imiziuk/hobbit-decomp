
void __fastcall FUN_00598c70(int param_1)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdateSkid_00743200);
  fVar1 = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x25c);
  local_4 = 0xffffffff;
  *(float *)(param_1 + 0x25c) = fVar1;
  if (fVar1 < *(float *)(param_1 + 600)) {
    fVar1 = (*(float *)(param_1 + 600) - fVar1) / *(float *)(param_1 + 600);
    *(float *)(param_1 + 0x240) = fVar1 * *(float *)(param_1 + 0x24c);
    *(float *)(param_1 + 0x244) = fVar1 * *(float *)(param_1 + 0x250);
    *(float *)(param_1 + 0x248) = fVar1 * *(float *)(param_1 + 0x254);
  }
  else {
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
  }
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

