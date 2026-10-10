
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 ** FUN_0067b580(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24 [4];
  undefined4 local_14;
  
  piVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  uStack_44 = 0;
  local_24[2] = 0;
  local_14 = 0;
  puStack_48 = local_3c;
  local_28 = 0;
  local_34 = 0xac44;
  local_38 = 0x20001;
  local_2c = 0x100004;
  local_30 = 0x2b110;
  local_24[0] = 0x24;
  local_24[1] = 1;
  (**(code **)(*DAT_00806ba0 + 0xc))(DAT_00806ba0);
  (**(code **)(local_24[0] + 0x38))(local_24);
  return &puStack_48;
}

