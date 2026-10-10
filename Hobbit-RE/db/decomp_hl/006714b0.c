
undefined4 * __thiscall FUN_006714b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar2 = param_2 + 3;
  param_1[2] = param_2[2];
  if ((param_1 + 3 != puVar2) && (puVar2 != param_2 + 0x13)) {
    puVar1 = param_1 + 5;
    iVar3 = (int)puVar2 - (int)(param_1 + 3);
    do {
      puVar1[-2] = *puVar2;
      puVar1[-1] = puVar2[1];
      *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
      puVar1[1] = puVar2[3];
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar2 != param_2 + 0x13);
  }
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  FUN_00671580(param_2[0x13],param_2[0x14],param_2[0x15],param_2[0x16]);
  param_1[0x22] = 0xffffffff;
  return param_1;
}

