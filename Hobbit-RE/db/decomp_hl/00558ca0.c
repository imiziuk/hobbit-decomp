
bool FUN_00558ca0(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_8;
  
  bVar1 = __ftol();
  uVar2 = __ftol();
  uVar3 = __ftol();
  local_8 = CONCAT13(0xff,(uint3)bVar1 << 0x10);
  local_8._0_2_ = CONCAT11(uVar2,uVar3);
  return local_8 != -1;
}

