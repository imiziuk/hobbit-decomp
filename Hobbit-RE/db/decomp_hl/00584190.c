
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00584190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc2c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderVisibleObjects_0074099c);
  local_4 = 0;
  if (((*(int *)(param_1 + 0x74) == 0) || (param_2 == 5)) || (param_2 == 6)) {
    iVar1 = *(int *)(&DAT_0076ed9c + param_2 * 0x20);
    if ((iVar1 != 0) && (iVar2 = FUN_0065f190(s_TimedSectionTitle_00740988), iVar2 != 0)) {
      _DAT_0076f658 = 1;
      DAT_0076f654 = *(int **)(&DAT_0076ed98 + param_2 * 0x20);
      while (piVar3 = DAT_0076f654, piVar3 != (int *)0x0) {
        DAT_0076f654 = (int *)piVar3[0x19];
        if (*(int *)(param_1 + 0xcc) == 0) {
          (**(code **)(*piVar3 + 0x60))();
        }
        else {
          FUN_00553770();
          (**(code **)(*piVar3 + 100))();
        }
        if (*(int *)(param_1 + 0xa0) != 0) {
          FUN_00553770();
          (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,0);
          FUN_00553770();
          (**(code **)(*piVar3 + 0x68))();
        }
      }
      _DAT_0076f658 = 0;
      DAT_0076f654 = (int *)0x0;
      FUN_0065f430();
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return iVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

