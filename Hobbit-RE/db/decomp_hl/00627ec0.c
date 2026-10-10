
void __thiscall
FUN_00627ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = FUN_0053f210(3);
  if (iVar1 == 0x30) {
    *(undefined4 *)(param_1 + 0x48) = param_3;
    *(undefined4 *)(param_1 + 0x4c) = param_4;
    *(undefined4 *)(param_1 + 0x50) = param_5;
  }
  return;
}

