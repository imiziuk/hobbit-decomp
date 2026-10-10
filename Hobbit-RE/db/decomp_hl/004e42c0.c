
void __thiscall
FUN_004e42c0(int *param_1,int *param_2,int *param_3,int *param_4,byte param_5,int param_6,
            char param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  param_1[0x35] = *param_2;
  param_1[0x36] = param_2[1];
  param_1[0x37] = param_2[2];
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  param_1[7] = param_3[2];
  param_1[0x1a] = *param_4;
  param_1[0x1b] = param_4[1];
  param_1[0x1c] = param_4[2];
  uVar3 = (byte)((byte)*(ushort *)(param_1 + 0x55) ^ param_5) & 1 ^ *(ushort *)(param_1 + 0x55);
  uVar3 = (byte)((byte)(param_6 << 2) ^ (byte)uVar3) & 4 ^ uVar3;
  uVar3 = (byte)(param_7 * '\x02' ^ (byte)uVar3) & 2 ^ uVar3;
  uVar3 = (byte)((byte)(param_8 << 6) ^ (byte)uVar3) & 0x40 ^ uVar3;
  uVar3 = (byte)((byte)(param_9 << 4) ^ (byte)uVar3) & 0x10 ^ uVar3;
  *(ushort *)(param_1 + 0x55) = (byte)((byte)(param_10 << 5) ^ (byte)uVar3) & 0x20 ^ uVar3;
  if (param_1[0x33] == 0) {
    FUN_006bf840(param_1[0x31]);
    param_1[0x31] = 0;
    param_1[0x32] = 0;
  }
  param_1[0x30] = 0;
  iVar1 = *param_1;
  uVar2 = (**(code **)(iVar1 + 0x28))(0);
  (**(code **)(iVar1 + 0x14))(uVar2);
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) | 1;
  return;
}

