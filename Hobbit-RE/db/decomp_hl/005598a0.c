
void FUN_005598a0(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_layer_mgr__LoadResources__const_c_0073e16c);
  iVar2 = DAT_00771f60;
  iVar5 = 0;
  iVar4 = 0;
  local_4 = 0;
  if (0 < DAT_00771f60) {
    do {
      iVar3 = FUN_00647ed0(param_1,iVar5 + DAT_00771f64);
      if (iVar3 == 0) {
        pbVar1 = (byte *)(iVar4 * 0x44 + 0x42 + DAT_00771f64);
        *pbVar1 = *pbVar1 | 0x40;
        DAT_00771f74 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x44;
    } while (iVar4 < iVar2);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

