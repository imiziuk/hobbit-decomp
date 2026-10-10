
void __thiscall FUN_006a48a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = param_2[2];
  *(undefined4 *)(param_1 + 0x50) = param_2[3];
  iVar1 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -8;
  *(int *)(param_1 + 0x180) = (int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4;
  return;
}

