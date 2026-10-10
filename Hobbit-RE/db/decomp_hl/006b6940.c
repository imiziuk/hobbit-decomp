
void __fastcall FUN_006b6940(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00649600(s_fx_mgr__EndOfFrame_00757b44);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0x94), (int)uVar2 < 0)) &&
       ((uVar2 & 0x40000000) != 0)) {
      *(uint *)(iVar1 + 0x94) = uVar2 & 0xbfffffff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x400);
  DAT_00815cc0 = 0;
  FUN_00649720();
  return;
}

