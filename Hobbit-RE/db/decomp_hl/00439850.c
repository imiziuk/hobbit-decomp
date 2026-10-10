
void __thiscall FUN_00439850(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf9c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (param_2 != -1) {
    FUN_00588ff0();
    iVar2 = FUN_00589010();
    while (iVar2 != 0) {
      FUN_00649600();
      local_4._0_1_ = 1;
      iVar2 = FUN_00406ce0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == -1) {
        FUN_00649720();
      }
      else {
        uVar3 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
        uVar3 = -(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3;
        FUN_00649720();
        if (uVar3 != 0) {
          cVar1 = *(char *)(uVar3 + 0x7c);
          if (cVar1 == '4') {
            (**(code **)(*param_1 + 0x28))();
            FUN_004357e0(param_1 + 0x1f1);
            FUN_004978e0();
          }
          else if (cVar1 == '@') {
            (**(code **)(*param_1 + 0x28))();
            FUN_004357e0(param_1 + 0x1f1);
            FUN_00538fb0();
          }
          else if (cVar1 == 'B') {
            (**(code **)(*param_1 + 0x28))();
            FUN_004357e0(param_1 + 0x1f1);
            FUN_004551c0();
          }
        }
      }
      iVar2 = FUN_00589010();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

