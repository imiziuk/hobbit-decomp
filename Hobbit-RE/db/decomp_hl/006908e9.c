
void FUN_006908e9(uint *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *in_EAX;
  byte bVar3;
  byte bVar4;
  undefined4 local_8;
  
  uVar1 = *in_EAX;
  bVar4 = (char)uVar1 << 3;
  local_8._0_1_ = (char)(uVar1 >> 5);
  bVar3 = (char)local_8 << 2;
  bVar2 = (byte)(uVar1 >> 8);
  local_8 = (uint)CONCAT12(bVar2 & 0xf8 | bVar2 >> 5,CONCAT11(bVar3 | bVar3 >> 6,bVar4 | bVar4 >> 5)
                          );
  *param_1 = local_8;
  return;
}

