
int __fastcall FUN_00677750(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00648600(param_1,0,0x7a8);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xbc);
  do {
    *piVar2 = iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x46;
  } while (iVar1 < 7);
  return param_1;
}

