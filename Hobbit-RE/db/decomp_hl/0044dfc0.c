
void __fastcall FUN_0044dfc0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x3c0) != 0) || (*(int *)(param_1 + 0x3d0) != 0)) {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    iVar1 = FUN_0053cc70(s_R2L_swing_start_00720b9c);
    if (iVar1 != -1) {
      FUN_00540840(iVar1,0,1,0x3e000000);
    }
  }
  FUN_004430e0(2);
  return;
}

