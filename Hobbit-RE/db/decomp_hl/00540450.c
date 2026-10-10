
undefined4 * __fastcall FUN_00540450(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d92e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0x7fffffff;
  local_4 = 0;
  FUN_00543280();
  puVar2 = param_1 + 0x43;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00541cc0(0,param_1 + 0x33);
  param_1[0x40] = 0;
  FUN_00541c70();
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x21] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x2d] = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x2b] = 0;
  param_1[0x27] = 0;
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x24] = 0;
  param_1[0x31] = 0;
  param_1[0x29] = 0;
  param_1[0x25] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 1;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

