
void __thiscall FUN_0060cfc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_4 + 0x28) = 5;
  }
  *(undefined4 *)(param_4 + 0x24) = 0;
  *(undefined4 *)(param_4 + 0x20) = 0;
  FUN_005be830(param_2,param_3,param_4);
  return;
}

