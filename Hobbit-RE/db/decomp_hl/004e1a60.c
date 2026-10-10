
void __fastcall FUN_004e1a60(int param_1)

{
  FUN_004ac510();
  if ((char)((uint)*(undefined4 *)(param_1 + 0x120) >> 8) < '\0') {
    FUN_004aaaf0(s_OnInit_0072d84c,&DAT_0071fa28,param_1);
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xffff7fff;
  }
  return;
}

