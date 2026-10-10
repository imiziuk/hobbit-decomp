
int FUN_00661450(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = "LODScale";
  do {
    iVar1 = FUN_00647ed0(param_1,pcVar2);
    if (iVar1 == 0) {
      return iVar3;
    }
    pcVar2 = pcVar2 + 0x20;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x6f9588);
  return 10;
}

