
void __thiscall FUN_00548710(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_3 * 0x101 + 0x60 + param_1);
  FUN_005484f0(param_2,pcVar1,0);
  iVar2 = FUN_00647cf0(pcVar1);
  if ((*pcVar1 != '\0') && (pcVar1[iVar2 + -1] != '/')) {
    pcVar1[iVar2] = '/';
    pcVar1[iVar2 + 1] = '\0';
  }
  return;
}

