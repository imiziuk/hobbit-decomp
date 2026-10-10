
char * __thiscall FUN_005311a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar3 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return s_MUSIC_Silence_00724fb8;
    }
    iVar1 = FUN_00647ed0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + iVar3 * 4) + 4),
                         *param_2);
    if (iVar1 != 0) break;
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar3 = iVar3 + 1;
  }
  pcVar2 = (char *)FUN_00531210(*(int *)(*(int *)(param_1 + 0xc0) + iVar3 * 4) + 0x30,param_3);
  return pcVar2;
}

