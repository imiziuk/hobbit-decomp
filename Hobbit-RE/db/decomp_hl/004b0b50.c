
void __thiscall FUN_004b0b50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00434e80((int)*(short *)(param_1 + 0x16c));
  FUN_006414f0(&DAT_0072bbd4,uVar1);
  FUN_00641480(s_Amount_0072bbcc,(int)*(short *)(param_1 + 0x16a));
  FUN_00641760(s_RotatesSlowly_0072bbbc,*(byte *)(param_1 + 0x16e) & 1);
  FUN_00641760(s_BobsSlowly_0072bbb0,*(byte *)(param_1 + 0x16e) >> 1 & 1);
  FUN_00641760(s_Regenerates_0072bba4,(*(byte *)(param_1 + 0x16e) & 0x10) >> 4);
  FUN_00641480(s_GlowOffDist_0072bb98,*(undefined2 *)(param_1 + 0x178));
  FUN_00641480(s_GlowOnDist_0072bb8c,*(undefined2 *)(param_1 + 0x17a));
  FUN_00641760(s_DoesVacuum_0072bb80,(*(ushort *)(param_1 + 0x16e) & 0x200) >> 9);
  FUN_004c1ff0(param_2);
  return;
}

