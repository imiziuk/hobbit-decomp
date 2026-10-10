
int __thiscall FUN_00453c20(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = FUN_00647ed0(param_2[0xd],s_MUSIC_Silence_00724fb8);
  if ((iVar1 != 0) &&
     ((*(int *)(param_1 + 0x2fc) == 0 ||
      (iVar1 = FUN_00647ed0(*(undefined4 *)(param_1 + 0x310),s_MUSIC_Silence_00724fb8), iVar1 == 0))
     )) {
    iVar1 = FUN_00659f30(*(undefined4 *)(param_1 + 0x2dc));
    if (iVar1 == 0) {
      iVar1 = FUN_00659600(param_2[0xd],0);
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x2dc) = iVar1;
      param_2[0x30] = 0;
      *param_2 = iVar1;
      param_2[0x2f] = 2;
      return iVar1;
    }
    FUN_00659c80(*(undefined4 *)(param_1 + 0x2dc));
  }
  return 0;
}

