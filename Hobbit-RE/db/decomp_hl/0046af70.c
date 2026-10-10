
void __thiscall FUN_0046af70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  if ((-1 < param_2) && (param_2 < 0x81)) {
    iVar3 = *(int *)(param_1 + 0xb0);
    while (param_2 < iVar3) {
      local_4 = (*(int *)(param_1 + 0xb0) - param_2) + -1;
      if (0 < local_4) {
        iVar3 = param_2 * 0x3c;
        do {
          iVar2 = iVar3 + 0x3c + *(int *)(param_1 + 0xb4);
          iVar1 = iVar3 + *(int *)(param_1 + 0xb4);
          FUN_0064a320(iVar2);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
          *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
          *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
          iVar3 = iVar3 + 0x3c;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      iVar3 = *(int *)(param_1 + 0xb0) + -1;
      *(int *)(param_1 + 0xb0) = iVar3;
    }
    while (iVar3 < param_2) {
      iVar3 = FUN_00473dd0();
      FUN_0064a2e0(s_<RENAME_ME>_0072705c);
      *(int *)(iVar3 + 0x2c) = param_2;
      *(int *)(iVar3 + 0x30) = param_2;
      *(undefined4 *)(iVar3 + 0x34) = 0x44160000;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      iVar3 = *(int *)(param_1 + 0xb0);
    }
  }
  return;
}

