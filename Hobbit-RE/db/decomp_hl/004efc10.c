
void __thiscall FUN_004efc10(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_100 [256];
  
  puVar1 = (undefined1 *)FUN_005493e0(param_1 + 0x158);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1,auStack_100);
  FUN_00641760(s_CommonTexture_0072ed30,*(undefined4 *)(param_1 + 0x1f0));
  FUN_006414f0(s_Texture_0072f128,auStack_100);
  FUN_00641480(s_BlendMode_0072f11c,*(undefined4 *)(param_1 + 0x180));
  FUN_00641480(s_Width_0072f114,*(undefined4 *)(param_1 + 0x164));
  FUN_00641480(s_Height_0072f10c,*(undefined4 *)(param_1 + 0x168));
  FUN_00641400(s_UTile_0072f104,*(undefined4 *)(param_1 + 0x16c));
  FUN_00641400(s_VTile_0072f0fc,*(undefined4 *)(param_1 + 0x170));
  FUN_00641400(s_FreezeDist_0072ec8c,*(undefined4 *)(param_1 + 0x174));
  FUN_00641400(s_SleepTime_0072f0f0,*(undefined4 *)(param_1 + 0x178));
  FUN_00641400(s_CollScale_0072f0e4,*(undefined4 *)(param_1 + 0x17c));
  FUN_00641760(s_StingBreak_0072f0d8,*(undefined4 *)(param_1 + 0x184));
  FUN_00641760(s_StickBreak_0072f0cc,*(undefined4 *)(param_1 + 0x188));
  FUN_00641760(s_StoneBreak_0072f0c0,*(undefined4 *)(param_1 + 0x18c));
  FUN_00641760(s_AnyPainBreak_0072f0b0,*(undefined4 *)(param_1 + 400));
  FUN_004e4580(param_2);
  FUN_006408e0(s_VertColors_0072f0a4,*(undefined4 *)(param_1 + 0x1ec));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1ec)) {
    do {
      FUN_00641370(s_Color_00728924,*(undefined4 *)(*(int *)(param_1 + 0x1e8) + iVar2 * 4));
      FUN_006412c0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1ec));
  }
  return;
}

