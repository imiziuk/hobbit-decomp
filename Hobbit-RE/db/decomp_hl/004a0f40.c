
void __fastcall FUN_004a0f40(int param_1)

{
  int iVar1;
  
  FUN_00591f40();
  FUN_005ae820();
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (((((iVar1 == 0x38) || (iVar1 == 0x37)) || (iVar1 == 0x39)) ||
      (((iVar1 == 0x2a || (iVar1 == 0x29)) ||
       ((iVar1 == 0x2b || ((iVar1 == 0x15 || (iVar1 == 0x14)))))))) ||
     ((iVar1 == 0x17 ||
      (((((iVar1 == 0x16 || (iVar1 == 0x18)) || (iVar1 = *(int *)(param_1 + 0x1b4), iVar1 == 0xf))
        || ((iVar1 == 0x16 || (iVar1 == 0x15)))) || (iVar1 == 0x14)))))) {
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xffffffbf;
  }
  return;
}

