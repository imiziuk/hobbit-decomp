
void __thiscall FUN_005be280(int *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df178;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  param_1[3] = (int)(param_2 + (float)param_1[3]);
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    FUN_005af2e0();
    (**(code **)(*param_1 + 0x10))();
    iVar1 = FUN_005af120();
    if (*(int *)(iVar1 + 0x254) != 0) {
      (**(code **)(*param_1 + 0x1c))();
      FUN_00649920();
      pvStack_c._0_1_ = 1;
      uVar2 = FUN_00649940();
      FUN_00649b20(uVar2);
      pvStack_c._0_1_ = 1;
      FUN_005af120();
      FUN_004a27c0();
      pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
      FUN_00649950();
    }
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

