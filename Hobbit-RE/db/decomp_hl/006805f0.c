
void __fastcall FUN_006805f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_007f872c + 0x158);
  *(int *)(param_1 + 0x13c) = iVar1;
  iVar1 = thunk_FUN_0064ff70(iVar1 + 0x100,s_C__projects_meridian_xCore_entro_007539f8,0x1d);
  *(int *)(param_1 + 0x144) = iVar1;
  *(uint *)(param_1 + 0x148) = iVar1 + 0xffU & 0xffffff00;
  return;
}

