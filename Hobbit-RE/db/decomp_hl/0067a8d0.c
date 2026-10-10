
void __fastcall FUN_0067a8d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xc0);
  iVar2 = 7;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x78,*(undefined4 *)(iVar1 + -4),FUN_006806a0);
      FUN_006bf840(iVar1 + -4);
    }
    piVar3 = piVar3 + 0x46;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x7ac),s_C__projects_meridian_xCore_entro_00752d20,0x88);
  FUN_00648600(param_1,0,0x7a8);
  return;
}

