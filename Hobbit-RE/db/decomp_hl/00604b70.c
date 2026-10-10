
void __thiscall FUN_00604b70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar2 = FUN_004c7460();
    if (iVar2 != 0) {
      uVar3 = FUN_004c6fa0();
      FUN_004c7460(uVar3);
      iVar2 = FUN_0053cc70(uVar3);
      if ((iVar2 == *(int *)(param_1 + 0x18)) && ((*(byte *)(iVar1 + 0x15b) & 0x40) != 0)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      }
    }
  }
  FUN_005f11b0(param_2);
  return;
}

