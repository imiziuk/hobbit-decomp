
void __fastcall FUN_0067cc20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  DAT_00752ee4 = DAT_00752ee4 - *(int *)(param_1 + 0x90);
  FUN_0067be00();
  FUN_00678810(param_1);
  FUN_0067be20();
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x198),s_C__projects_meridian_xCore_entro_00753210,0x1bc);
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x194),s_C__projects_meridian_xCore_entro_0075324c,0x1bd);
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x1a8),s_C__projects_meridian_xCore_entro_00753288,0x1be);
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x1ac),s_C__projects_meridian_xCore_entro_007532c4,0x1bf);
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x1a4),s_C__projects_meridian_xCore_entro_00753300,0x1c1);
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x19c),s_C__projects_meridian_xCore_entro_0075333c,0x1c3);
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x1a0),s_C__projects_meridian_xCore_entro_00753378,0x1c5);
  }
  piVar2 = (int *)(param_1 + 0x1bc);
  iVar1 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_0064ff40(*piVar2,s_C__projects_meridian_xCore_entro_007533b4,0x1c9);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x1b0),s_C__projects_meridian_xCore_entro_007533f0,0x1cd);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x1b8),s_C__projects_meridian_xCore_entro_0075342c,0x1d0);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_0067c0e0(*(int *)(param_1 + 0x1c8));
  }
  return;
}

