
void __fastcall FUN_00493f70(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004948f0();
  if ((iVar1 != 0) && ((*(int *)(param_1 + 0x10c) == 1 || (*(int *)(param_1 + 0x10c) == 0)))) {
    iVar1 = FUN_00494680(1);
    uVar2 = extraout_ECX;
    FUN_00406b70((-(uint)(iVar1 != 0) & 0xffff0100) - 0x100);
    FUN_0066a6e0(param_1 + 0x14,0x41a00000,uVar2);
    uVar3 = 1;
    uVar2 = extraout_ECX_00;
    FUN_00425250(param_1 + 0xcc);
    FUN_0066a6e0(param_1 + 0x14,*(undefined4 *)(param_1 + 0xe4),uVar2,uVar3);
  }
  return;
}

