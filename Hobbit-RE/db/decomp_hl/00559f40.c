
void FUN_00559f40(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da020;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_layer_mgr__UnloadResources__s32_I_0073e278);
  iVar3 = param_1 * 0x44;
  local_4 = 0;
  if ((*(byte *)(iVar3 + 0x42 + DAT_00771f64) & 8) != 0) {
    pbVar1 = (byte *)(iVar3 + 0x42 + DAT_00771f64);
    *pbVar1 = *pbVar1 | 0x10;
    FUN_00649920(&param_1,s__s_exportres_0073e240,iVar3 + DAT_00771f64);
    uVar4 = 0;
    local_4._0_1_ = 1;
    uVar2 = FUN_00649940(0);
    uVar2 = FUN_005496c0(uVar2,uVar4);
    FUN_00559d30(uVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
  }
  pbVar1 = (byte *)(iVar3 + 0x42 + DAT_00771f64);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)(iVar3 + 0x42 + DAT_00771f64);
  *pbVar1 = *pbVar1 & 0xef;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

