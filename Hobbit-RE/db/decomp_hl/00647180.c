
void __fastcall FUN_00647180(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x80);
  bVar1 = *pbVar3;
  *(byte **)(param_1 + 0x80) = pbVar3 + 1;
  bVar2 = pbVar3[1];
  *(byte **)(param_1 + 0x80) = pbVar3 + 2;
  iVar5 = (int)*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) +
                                  (short)((ushort)bVar1 * 0x100 + (ushort)bVar2) * 8) + 10);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x7c) + -4);
  *(undefined4 **)(param_1 + 0x7c) = puVar4;
  FUN_00648480(puVar4,*puVar4,iVar5);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + iVar5;
  return;
}

