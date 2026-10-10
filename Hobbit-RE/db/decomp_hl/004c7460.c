
undefined4 __fastcall FUN_004c7460(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x140);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x22] != 0)) {
    uVar2 = puVar1[1] * 2;
    if (((uVar2 ^ puVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
      return *puVar1;
    }
    uVar3 = FUN_00549470(puVar1 + 1);
    return uVar3;
  }
  return 0;
}

