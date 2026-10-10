
undefined1 * __thiscall FUN_00557ca0(undefined1 *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  puVar5 = (undefined4 *)(param_2 + 0x10);
  puVar6 = (undefined4 *)(param_1 + 0x10);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1 = (uint *)(param_1 + 0x2c);
  uVar2 = *(uint *)(param_1 + 0x2c) & 0x7fffffff;
  *puVar1 = uVar2;
  *puVar1 = (*(uint *)(param_2 + 0x2c) ^ uVar2) & 0x7fffffff ^ uVar2;
  FUN_005492b0(puVar1,0);
  if (*(int *)(param_2 + 0x2c) < 0) {
    FUN_00549470(puVar1);
  }
  uVar3 = FUN_00549620(param_2 + 0x2c);
  FUN_00549670(puVar1,uVar3);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
  return param_1;
}

