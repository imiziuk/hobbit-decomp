
void FUN_00691173(int param_1,int param_2)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  FUN_0069108a(param_1 + 8,param_2);
  iVar4 = 0;
  pbVar2 = (byte *)(param_2 + 3);
  do {
    uVar1 = *(ushort *)(param_1 + iVar4 * 2);
    iVar3 = 4;
    do {
      param_2._0_1_ = (byte)uVar1;
      uVar1 = uVar1 >> 4;
      *pbVar2 = (byte)param_2 & 0xf | (byte)param_2 << 4;
      pbVar2 = pbVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

