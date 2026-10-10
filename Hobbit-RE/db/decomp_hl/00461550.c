
void __fastcall FUN_00461550(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 0x14);
  FUN_00641600(s_Orient_00726120,param_1 + 0x68);
  FUN_006412e0(s_Scale_00725a04,param_1 + 0xb4);
  FUN_00641560(&DAT_00726118,param_1 + 0x44);
  FUN_00641760(s_Loops_007259f0,*(undefined4 *)(param_1 + 0xac));
  FUN_006412e0(s_Range_00726110,param_1 + 200);
  FUN_006412e0(&PTR_Unwind_00725c6c,param_1 + 0xd4);
  FUN_00641400(s_PlaySpeed_00726104,*(undefined4 *)(param_1 + 0xc0));
  FUN_006412e0(s_CamPosOffset_007260f4,param_1 + 0x118);
  FUN_00641600(s_CamRotOffset_007260e4,param_1 + 0x124);
  FUN_006417e0(s_LookatGuid_007260d8,*(undefined4 *)(param_1 + 0x130),
               *(undefined4 *)(param_1 + 0x134));
  FUN_006412e0(s_LookatOffset_007260c8,param_1 + 0x138);
  FUN_00641760(s_FromCenter_007260bc,*(undefined4 *)(param_1 + 0x148));
  FUN_00641760(s_Interpolate_007260b0,*(undefined4 *)(param_1 + 0xc4));
  FUN_00641760(s_Lookspring_007260a4,*(undefined4 *)(param_1 + 0x144));
  FUN_006412c0();
  FUN_006408e0(s_Keyframes_00726098,*(undefined4 *)(param_1 + 0xa8));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    iVar1 = 0;
    do {
      FUN_00641480(&DAT_00726090,(int)*(short *)(*(int *)(param_1 + 0xb0) + iVar1));
      FUN_00641480(&DAT_00726088,(int)*(short *)(*(int *)(param_1 + 0xb0) + 2 + iVar1));
      FUN_00641480(&DAT_00726080,(int)*(short *)(*(int *)(param_1 + 0xb0) + 4 + iVar1));
      FUN_00641480(&DAT_00726078,(int)*(short *)(*(int *)(param_1 + 0xb0) + 6 + iVar1));
      FUN_00641480(&DAT_00726070,(int)*(short *)(*(int *)(param_1 + 0xb0) + 8 + iVar1));
      FUN_00641480(&DAT_00726068,(int)*(short *)(*(int *)(param_1 + 0xb0) + 10 + iVar1));
      FUN_00641480(&DAT_00726060,(int)*(short *)(*(int *)(param_1 + 0xb0) + 0xc + iVar1));
      FUN_006412c0();
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xe;
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  return;
}

