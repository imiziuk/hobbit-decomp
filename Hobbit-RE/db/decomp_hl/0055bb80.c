
void FUN_0055bb80(void)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_layer_mgr__SaveLayerSate_0073e808);
  iVar2 = 0;
  local_4 = 0;
  iVar1 = DAT_00771f60;
  if (0 < DAT_00771f60) {
    do {
      FUN_0063d930(*(byte *)(iVar2 + 0x42 + DAT_00771f64) & 1);
      FUN_0063d930((*(byte *)(iVar2 + 0x42 + DAT_00771f64) & 8) >> 3);
      iVar2 = iVar2 + 0x44;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

