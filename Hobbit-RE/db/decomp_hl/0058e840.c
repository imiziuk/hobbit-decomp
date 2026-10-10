
undefined4 __thiscall FUN_0058e840(int param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)param_2 & 0x1f)) == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 * 0x1c + 0x18 + param_1);
    bVar2 = *pbVar1;
    *pbVar1 = (bVar2 ^ param_3) & 1 ^ bVar2;
  }
  return 1;
}

