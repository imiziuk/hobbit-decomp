
void __fastcall FUN_00679510(int param_1)

{
  int iVar1;
  
  FUN_00679ab0();
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != param_1; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0x84) == 1) {
      if (*(int *)(iVar1 + 0xf0) == 0) {
        FUN_0067a600(iVar1);
        FUN_00679ec0(iVar1,0);
        FUN_00679ad0(iVar1);
      }
      *(undefined4 *)(iVar1 + 0x84) = 2;
    }
  }
  FUN_00679ac0();
  return;
}

