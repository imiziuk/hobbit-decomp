
void __fastcall FUN_00426760(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x46d4) + 0x612;
  FUN_0064ca10(*(float *)(param_1 + iVar1 * 0xc) - *(float *)(param_1 + 0x14),
               *(float *)(param_1 + iVar1 * 0xc + 8) - *(float *)(param_1 + 0x1c));
  return;
}

