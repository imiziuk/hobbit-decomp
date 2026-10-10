
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c1750(int param_1,float param_2)

{
  float fVar1;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d47b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_instance__AdvanceDestruct_0072cab0);
  fVar1 = *(float *)(*(int *)(param_1 + 0x144) + 4);
  local_4 = 0;
  if ((NAN(fVar1) || NAN(_DAT_006e9370)) == (fVar1 == _DAT_006e9370)) {
    if ((*(byte *)(param_1 + 0x15d) & 0x20) == 0) {
      local_1c = *(undefined4 *)(param_1 + 8);
      local_18 = *(undefined4 *)(param_1 + 0xc);
      local_24[0] = 0x17;
      local_14 = 0;
      if (DAT_0075cf1c != 0) {
        FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_24)
        ;
      }
    }
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x20;
    *(float *)(*(int *)(param_1 + 0x144) + 4) = *(float *)(*(int *)(param_1 + 0x144) + 4) - param_2;
    fVar1 = *(float *)(*(int *)(param_1 + 0x144) + 4);
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      *(undefined4 *)(*(int *)(param_1 + 0x144) + 4) = 0xbf800000;
      FUN_004c2f60(1,1);
    }
  }
  else {
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) & 0xdf;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

