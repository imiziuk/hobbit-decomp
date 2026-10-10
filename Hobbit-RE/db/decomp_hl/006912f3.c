
void FUN_006912f3(int param_1,ushort *param_2)

{
  byte bVar1;
  ushort *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int local_8;
  
  pbVar5 = (byte *)(param_1 + 0xf);
  local_8 = 4;
  puVar2 = param_2;
  do {
    iVar4 = 4;
    pbVar3 = pbVar5;
    do {
      *puVar2 = *puVar2 << 4;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + -4;
      iVar4 = iVar4 + -1;
      *puVar2 = (ushort)(bVar1 >> 4) | *puVar2;
    } while (iVar4 != 0);
    puVar2 = puVar2 + 1;
    pbVar5 = pbVar5 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_006912c1(param_1,param_2 + 4);
  return;
}

