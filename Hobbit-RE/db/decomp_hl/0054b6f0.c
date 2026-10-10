
void __fastcall FUN_0054b6f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[0xa30] = 0;
  param_1[0xa35] = 0;
  param_1[0xa36] = 0;
  param_1[0xa31] = 0xffffffff;
  puVar1 = param_1 + 0x800;
  iVar2 = 0x46;
  do {
    puVar1[3] = 0xffffffff;
    *puVar1 = 0;
    puVar1[7] = 0x3f800000;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0xab7] = 0xffffffff;
  puVar1 = param_1 + 0xa37;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  FUN_00429100();
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0xffffffff;
    param_1 = param_1 + 1;
  }
  return;
}

