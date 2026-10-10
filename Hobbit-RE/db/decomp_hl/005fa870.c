
void __thiscall FUN_005fa870(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar1 = FUN_004d2f10();
    if (iVar1 == *(int *)(param_1 + 0x18)) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  FUN_005f11b0(param_2);
  return;
}

