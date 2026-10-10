
void __fastcall FUN_0058ea40(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_00472df0();
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x388) == 0)) {
    iVar1 = FUN_0065f190(s_UIFXMgr_PostHudRender_00742284);
    if (iVar1 != 0) {
      FUN_00587d00(0);
      FUN_0065f910(&DAT_00798000);
      FUN_0065f960(&DAT_00798000,0);
      FUN_0065fc10(0);
      iVar1 = 1;
      pbVar2 = (byte *)(param_1 + 0x34);
      do {
        if ((((*(uint *)(param_1 + 0x380) & 1 << ((byte)iVar1 & 0x1f)) != 0) &&
            (*(int *)(pbVar2 + -8) == 1)) && ((*pbVar2 & 1) == 0)) {
          FUN_006b7670();
        }
        iVar1 = iVar1 + 1;
        pbVar2 = pbVar2 + 0x1c;
      } while (iVar1 < 0x20);
      FUN_0065f430();
      return;
    }
  }
  return;
}

