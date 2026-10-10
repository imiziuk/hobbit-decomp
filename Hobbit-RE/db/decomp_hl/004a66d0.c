
void __thiscall FUN_004a66d0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1[0x79] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  uStack_14 = 0x4a6706;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  uStack_c = *puVar1;
  uStack_8 = puVar1[1];
  uStack_4 = puVar1[2];
  uStack_14 = 0;
  if ((*(byte *)(param_1 + 0x9a) & 4) == 0) {
    uStack_18 = 2;
  }
  else {
    uStack_18 = 0;
  }
  puStack_1c = (undefined4 *)0xbf800000;
  uStack_20 = 0;
  uStack_24 = param_3;
  (**(code **)(*param_1 + 0x15c))();
  (**(code **)(*param_1 + 0x14))(&uStack_24);
  *puStack_1c = 0;
  puStack_1c[1] = &uStack_c;
  puStack_1c[2] = uStack_24;
  return;
}

