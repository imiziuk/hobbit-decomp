
void __fastcall FUN_00646ee0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x80);
  bVar1 = *pbVar5;
  *(byte **)(param_1 + 0x80) = pbVar5 + 1;
  bVar3 = pbVar5[1];
  *(byte **)(param_1 + 0x80) = pbVar5 + 2;
  bVar2 = pbVar5[2];
  *(byte **)(param_1 + 0x80) = pbVar5 + 3;
  bVar4 = pbVar5[3];
  *(byte **)(param_1 + 0x80) = pbVar5 + 4;
  iVar7 = (int)(short)((ushort)bVar2 * 0x100 + (ushort)bVar4);
  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x4c) +
                           (short)((ushort)bVar1 * 0x100 + (ushort)bVar3) * 0xc) + 0x18);
  (**(code **)(iVar6 + 0x10))(*(int *)(param_1 + 0x7c) - iVar7);
  iVar7 = *(int *)(param_1 + 0x7c) - iVar7;
  *(int *)(param_1 + 0x7c) = iVar7;
  switch((&DAT_0074c390)[**(byte **)(iVar6 + 0xc)]) {
  case 0x26:
  case 0x62:
  case 0x66:
  case 0x69:
  case 0x73:
    *(int *)(param_1 + 0x7c) = iVar7 + 4;
  }
  return;
}

