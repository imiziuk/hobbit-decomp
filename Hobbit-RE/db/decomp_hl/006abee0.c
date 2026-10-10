
void FUN_006abee0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_00647cf0(param_1);
  pbVar2 = param_1 + iVar1 + -1;
  while ((param_1 <= pbVar2 && (((&DAT_0074c490)[*pbVar2] & 1) != 0))) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + -1;
  }
  return;
}

