
void __fastcall FUN_004de300(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x120) & 8) != 0) {
    iVar1 = FUN_004de670();
    if ((iVar1 != 0) && (iVar1 = FUN_004de640(), iVar1 != 0)) {
      return;
    }
    FUN_004aaaf0(s_OnActivate_0071fa1c,&DAT_0071fa28,param_1);
  }
  return;
}

