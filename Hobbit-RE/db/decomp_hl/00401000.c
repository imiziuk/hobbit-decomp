
undefined4 * __fastcall FUN_00401000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_0041a000();
  *param_1 = &PTR_FUN_006e92c0;
  puVar3 = param_1 + 0x51;
  puVar2 = param_1 + 0x42;
  puVar1 = param_1 + 0x4a;
  iVar4 = 3;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar3 = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = param_1 + 0x62;
  puVar2 = param_1 + 0x54;
  iVar4 = 7;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar3 = 0;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_1;
}

