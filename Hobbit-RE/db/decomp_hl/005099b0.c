
int __fastcall FUN_005099b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_60;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6c7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c043b(param_1,0x4c,0xf,FUN_0064afa0,FUN_0064b190);
  local_4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x4c4);
  puVar4 = (undefined4 *)(param_1 + 0x474);
  local_60 = 5;
  do {
    iVar2 = 3;
    do {
      *puVar4 = 0;
      uVar1 = FUN_0064b130(&DAT_0075b6e0);
      local_4._0_1_ = 1;
      FUN_0064b7f0(uVar1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0064b190();
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3[-5] = 0;
    *puVar3 = 1;
    puVar3[5] = 1;
    puVar3 = puVar3 + 1;
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  ExceptionList = local_c;
  return param_1;
}

