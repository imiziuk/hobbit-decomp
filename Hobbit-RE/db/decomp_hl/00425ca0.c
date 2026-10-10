
void __fastcall FUN_00425ca0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00659e10(*(undefined4 *)(param_1 + 0x5fc));
  if (iVar1 == 0) {
    iVar2 = FUN_004021c0(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x17c);
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        uVar3 = FUN_00659600(s_PushBlock_Loop_00720af4,1);
        *(undefined4 *)(param_1 + 0x5fc) = uVar3;
        return;
      }
      uVar3 = FUN_00659600(s_PushBlockHay_Loop_00720ae0,1);
      *(undefined4 *)(param_1 + 0x5fc) = uVar3;
      return;
    }
    uVar3 = FUN_00659600(s_PushBlockWood_Loop_00720acc,1);
    *(undefined4 *)(param_1 + 0x5fc) = uVar3;
  }
  return;
}

