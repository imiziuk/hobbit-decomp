
int __thiscall FUN_0064a100(int *param_1,char param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *param_1;
  pcVar2 = (char *)(param_3 + iVar1);
  while( true ) {
    if (pcVar2 == (char *)(param_1[9] + iVar1)) {
      return -1;
    }
    if (*pcVar2 == param_2) break;
    pcVar2 = pcVar2 + 1;
  }
  return (int)pcVar2 - iVar1;
}

