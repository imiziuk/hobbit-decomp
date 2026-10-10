
void __fastcall FUN_0040e6a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054c120(s_EreborPuzzleBounds_0071e720,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  }
  iVar1 = FUN_0054c120(s_Erebor_Reset_Button_0071e70c,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0xc);
  }
  return;
}

