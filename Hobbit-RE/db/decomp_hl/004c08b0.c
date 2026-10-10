
void __thiscall
FUN_004c08b0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,byte param_7,char param_8,int param_9,int param_10,int param_11,
            int param_12,int param_13)

{
  ushort uVar1;
  uint uVar2;
  
  param_1[0x1a] = *param_3;
  param_1[0x1b] = param_3[1];
  param_1[0x1c] = param_3[2];
  param_1[0x4c] = *param_4;
  param_1[0x4d] = param_4[1];
  param_1[0x4e] = param_4[2];
  *(char *)(param_1 + 0x21) = (char)((uint)param_6 >> 0x10);
  *(char *)((int)param_1 + 0x85) = (char)((uint)param_6 >> 0x18);
  *(char *)((int)param_1 + 0x82) = (char)param_6;
  *(char *)((int)param_1 + 0x83) = (char)((uint)param_6 >> 8);
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  uVar1 = (byte)((byte)*(ushort *)((int)param_1 + 0x15a) ^ param_7) & 1 ^
          *(ushort *)((int)param_1 + 0x15a) & 0xdfff;
  uVar1 = (byte)((byte)(param_9 << 2) ^ (byte)uVar1) & 4 ^ uVar1;
  uVar1 = (byte)((byte)(param_10 << 4) ^ (byte)uVar1) & 0x10 ^ uVar1;
  uVar1 = (byte)(param_8 * '\x02' ^ (byte)uVar1) & 2 ^ uVar1;
  uVar1 = (byte)((byte)(param_11 << 3) ^ (byte)uVar1) & 8 ^ uVar1;
  *(ushort *)((int)param_1 + 0x15a) = uVar1;
  if ((uVar1 & 2) == 0) {
    uVar2 = param_1[4] & 0xffffdfff;
  }
  else {
    uVar2 = param_1[4] | 0x2000;
  }
  param_1[4] = uVar2;
  if ((uVar1 & 4) == 0) {
    uVar2 = uVar2 & 0xfffeffff;
  }
  else {
    uVar2 = uVar2 | 0x10000;
  }
  param_1[4] = uVar2;
  if ((uVar1 & 0x10) == 0) {
    uVar2 = uVar2 & 0xfdffffff;
  }
  else {
    uVar2 = uVar2 & 0xfffffffe | 0x2000002;
  }
  param_1[4] = uVar2;
  if ((uVar1 & 8) == 0) {
    uVar2 = uVar2 & 0xfffdffff;
  }
  else {
    uVar2 = uVar2 | 0x20000;
  }
  param_1[4] = uVar2;
  *(ushort *)((int)param_1 + 0x15a) = ((ushort)(param_12 << 0xe) ^ uVar1) & 0x4000 ^ uVar1;
  if ((param_13 == 0) &&
     (((*(byte *)((int)param_1 + 0x15b) & 1) == 0 || ((*(byte *)((int)param_1 + 0x7a) & 4) != 0))))
  {
    uVar2 = param_1[4] & 0xffdfffff;
  }
  else {
    uVar2 = param_1[4] | 0x200000;
  }
  param_1[4] = uVar2;
  if ((*(byte *)((int)param_1 + 0x7f) & 0x20) == 0) {
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x124))();
  }
  FUN_004c7930();
  return;
}

