
void __thiscall FUN_0056b890(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0056c2a0(2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x688) = *param_3;
    *(undefined4 *)(param_1 + 0x68c) = param_3[1];
    *(undefined4 *)(param_1 + 0x690) = *param_2;
    *(undefined4 *)(param_1 + 0x694) = param_2[1];
  }
  return;
}

