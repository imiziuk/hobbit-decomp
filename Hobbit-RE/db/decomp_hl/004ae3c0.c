
void __fastcall FUN_004ae3c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 0x14);
  FUN_00641600(s_Orient_00726120,param_1 + 0xa8);
  FUN_006412e0(s_Scale_00725a04,param_1 + 0xb4);
  FUN_00641560(&DAT_00726118,param_1 + 0x44);
  FUN_006412c0();
  FUN_006408e0(s_Keyframes_00726098,*(undefined4 *)(param_1 + 0xc0));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    iVar1 = 0;
    do {
      FUN_00641480(&DAT_00726090,(int)*(short *)(iVar1 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726088,(int)*(short *)(iVar1 + 2 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726080,(int)*(short *)(iVar1 + 4 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726078,(int)*(short *)(iVar1 + 6 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726070,(int)*(short *)(iVar1 + 8 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726068,(int)*(short *)(iVar1 + 10 + *(int *)(param_1 + 0xc4)));
      FUN_00641480(&DAT_00726060,(int)*(short *)(iVar1 + 0xc + *(int *)(param_1 + 0xc4)));
      FUN_006412c0();
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xe;
    } while (iVar2 < *(int *)(param_1 + 0xc0));
  }
  return;
}

