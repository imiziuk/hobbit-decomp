
void __fastcall FUN_004a58a0(int param_1)

{
  int iVar1;
  undefined4 local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005afc40();
  FUN_00592660(5);
  iVar1 = FUN_004a2340();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xffffffdf;
    FUN_004f8a50(0xffffffff,5,0);
  }
  local_4 = *(undefined4 *)(param_1 + 0xc);
  local_8 = *(undefined4 *)(param_1 + 8);
  local_10[0] = 0xc;
  if (DAT_0075cf1c != (int *)0x0) {
    (**(code **)(*DAT_0075cf1c + 0xa8))(local_10);
  }
  return;
}

