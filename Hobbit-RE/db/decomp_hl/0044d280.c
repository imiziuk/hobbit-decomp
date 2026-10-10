
void __fastcall FUN_0044d280(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4edc) = *(undefined4 *)(param_1 + 0x4ed4);
  *(undefined4 *)(param_1 + 0x58d0) = 1;
  *(undefined4 *)(param_1 + 0x4ed8) = *(undefined4 *)(param_1 + 0x4ed0);
  FUN_004021c0(*(undefined4 *)(param_1 + 0x4ed0),*(undefined4 *)(param_1 + 0x4ed4));
  iVar1 = FUN_004dd210();
  if (iVar1 == 0) {
    FUN_0052da60(*(undefined4 *)(param_1 + 0x4ed8),*(undefined4 *)(param_1 + 0x4edc));
  }
  *(undefined4 *)(param_1 + 0x58d0) = 0;
  return;
}

