
void __fastcall FUN_004a40d0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x98];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) != 0 || *(int *)(iVar1 + 0x14) != 0) {
      iVar1 = FUN_004021c0(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x14));
      if (iVar1 != 0) {
        FUN_004d22c0(1);
        iVar1 = param_1[0x98];
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004a411b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x11c))();
  return;
}

