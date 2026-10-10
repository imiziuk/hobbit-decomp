
void __fastcall FUN_00577e00(int param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  FUN_00649600(s_Coll_ReleaseObjects_00740250);
  iVar3 = *(int *)(param_1 + 0x4388);
  *(undefined4 *)(param_1 + 0x4384) = 0;
  while (iVar3 != -1) {
    psVar1 = (short *)(DAT_0076f648 + 0xc + iVar3 * 0x14);
    sVar2 = *psVar1;
    *psVar1 = -2;
    iVar3 = (int)sVar2;
  }
  *(undefined4 *)(param_1 + 0x4388) = 0xffffffff;
  FUN_00649720();
  return;
}

