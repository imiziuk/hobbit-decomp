
void __fastcall FUN_006476a0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x80);
  bVar1 = *pbVar3;
  iVar4 = *(int *)(param_1 + 0x7c);
  *(byte **)(param_1 + 0x80) = pbVar3 + 1;
  bVar2 = pbVar3[1];
  *(byte **)(param_1 + 0x80) = pbVar3 + 2;
  iVar5 = (int)*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) +
                                  (short)((ushort)bVar1 * 0x100 + (ushort)bVar2) * 8) + 10);
  FUN_00646960();
  FUN_00648510(*(undefined4 *)(param_1 + 0x7c),iVar4 - iVar5,iVar5);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + iVar5;
  return;
}

