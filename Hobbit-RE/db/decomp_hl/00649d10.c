
void __fastcall FUN_00649d10(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[9];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      pbVar1 = (byte *)(*param_1 + iVar3);
      iVar3 = iVar3 + 1;
      *pbVar1 = (&DAT_0074c290)[*pbVar1];
    } while (iVar3 < iVar2);
  }
  return;
}

