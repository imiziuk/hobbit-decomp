
void FUN_0055a1d0(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da060;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_layer_mgr__Init_0073e2b0);
  local_4 = 0;
  FUN_00649600(s_layer_mgr__Init_0073e2b0);
  local_4._0_1_ = 1;
  if (DAT_00771f6c == 0) {
    FUN_006bf840(DAT_00771f64);
    DAT_00771f64 = (void *)0x0;
    DAT_00771f68 = 0;
  }
  else {
    DAT_00771f60 = 0;
    if (DAT_00771f68 == 0x100) goto LAB_0055a2b3;
  }
  DAT_00771f60 = 0;
  pvVar1 = operator_new(0x4400);
  iVar4 = 0;
  if (0 < DAT_00771f60) {
    iVar2 = 0;
    do {
      puVar5 = (undefined4 *)(iVar2 + (int)DAT_00771f64);
      puVar6 = (undefined4 *)(iVar2 + (int)pvVar1);
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar4 < DAT_00771f60);
  }
  FUN_006bf840(DAT_00771f64);
  DAT_00771f68 = 0x100;
  DAT_00771f64 = pvVar1;
LAB_0055a2b3:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

