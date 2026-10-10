
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00432140(int param_1)

{
  int *piVar1;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa50),*(undefined4 *)(param_1 + 0xa54));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x8c))(0,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0xa50) = 0;
  *(undefined4 *)(param_1 + 0xa54) = 0;
  *(undefined4 *)(param_1 + 0xa58) = 0;
  *(undefined4 *)(param_1 + 0xa5c) = 0;
  FUN_00659600(s_ChurnDrop_00720f78,1);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x3bc);
  local_20 = *(float *)(param_1 + 0x44) - _DAT_006e9354;
  local_28 = *(undefined4 *)(param_1 + 8);
  local_1c = *(float *)(param_1 + 0x48) - _DAT_006e9988;
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_18 = *(float *)(param_1 + 0x4c) - _DAT_006e9354;
  local_14 = *(float *)(param_1 + 0x50) + _DAT_006e9354;
  local_10 = *(float *)(param_1 + 0x54) + _DAT_006e9988;
  local_c = *(float *)(param_1 + 0x58) + _DAT_006e9354;
  FUN_0058c830(&local_20,&local_28);
  return;
}

