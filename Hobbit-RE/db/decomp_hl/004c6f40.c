
undefined4 __thiscall FUN_004c6f40(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_004c71a0();
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x140) + 4);
  uVar2 = uVar1 * 2;
  if (((uVar2 ^ uVar1) & 0x7fffffff ^ uVar2) != 0xffffffff) {
    FUN_00549470(*(int *)(param_1 + 0x140) + 4);
  }
  uVar4 = FUN_0053cc70(param_2);
  uVar4 = FUN_004c7660(uVar4);
  return uVar4;
}

