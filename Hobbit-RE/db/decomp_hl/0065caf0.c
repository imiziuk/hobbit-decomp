
void FUN_0065caf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_44 [16];
  undefined4 *local_4;
  
  puVar1 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_44[3] = 0;
  local_44[2] = 0;
  local_44[1] = 0;
  local_44[0] = 0;
  local_44[0xb] = 0;
  local_44[10] = 0;
  local_44[9] = 0;
  local_44[8] = 0;
  local_4 = (undefined4 *)0x0;
  local_44[7] = 0x3f800000;
  local_44[6] = 0x3f800000;
  local_44[5] = 0x3f800000;
  local_44[4] = 0x3f800000;
  (**(code **)(*DAT_007f1000 + 0xa8))(DAT_007f1000,local_44);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x8b,*local_4);
  return;
}

