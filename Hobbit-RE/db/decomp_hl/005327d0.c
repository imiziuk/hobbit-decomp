
char * __thiscall FUN_005327d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = s_MUSIC_Silence_00724fb8;
  if ((0 < *(int *)(param_1 + 0xbc)) && (param_2 <= *(int *)(param_1 + 0xbc))) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4) + 0x68);
    puVar2 = *(undefined4 **)(iVar1 + param_3 * 4);
    pcVar3 = (char *)*puVar2;
    if ((puVar2[0x14] != 0) && (puVar2[0x17] != 0)) {
      iVar4 = FUN_00532780(param_2,param_3);
      pcVar3 = (char *)**(undefined4 **)(iVar1 + iVar4 * 4);
    }
  }
  return pcVar3;
}

