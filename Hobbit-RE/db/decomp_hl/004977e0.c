
void FUN_004977e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_78 [12];
  undefined1 local_6c [8];
  undefined4 local_64 [22];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d32e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  iVar3 = 0;
  local_4 = 0;
  puVar2 = local_64;
  do {
    puVar1 = (undefined4 *)FUN_004e2160(local_78,iVar3);
    puVar2[-2] = *puVar1;
    puVar2[-1] = puVar1[1];
    *puVar2 = puVar1[2];
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 < 8);
  FUN_0066c3a0(1);
  FUN_0066ddd0();
  FUN_0066e180(local_6c,8,0xc);
  FUN_0066e550(&DAT_00729ca8,0x18);
  FUN_0066d9a0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

