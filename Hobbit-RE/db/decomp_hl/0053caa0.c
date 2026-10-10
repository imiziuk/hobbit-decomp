
void __fastcall FUN_0053caa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      FUN_0053f6f0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00674810(*(int *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00674810(*(int *)(param_1 + 0x84));
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_006c026a(iVar1,0x18,*(undefined4 *)(iVar1 + -4),FUN_0053edb0);
    FUN_006bf840(iVar1 + -4);
  }
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x3c),s_C__projects_meridian_Support_Ani_007377c8,0x105);
  FUN_00648600(param_1,0,0x88);
  return;
}

