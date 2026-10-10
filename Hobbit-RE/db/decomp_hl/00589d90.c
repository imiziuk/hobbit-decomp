
undefined4 * __fastcall FUN_00589d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x81] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x104] = 0;
  puVar2 = param_1 + 0x83;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00589de0();
  return param_1;
}

