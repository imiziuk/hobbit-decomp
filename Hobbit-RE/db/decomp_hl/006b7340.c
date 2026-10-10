
void __thiscall FUN_006b7340(int param_1,int *param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8408;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_fx_mgr__Render_00757c04);
  local_4 = 0;
  iVar1 = FUN_006b75b0(param_2);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + *param_2 * 4) + 0xc))();
    if (iVar1 == 0) {
      DAT_00815c90 = DAT_00815c8c | DAT_00815c88 | DAT_00815c84 | DAT_00815c80;
      DAT_00815cb4 = DAT_00815cb0 | DAT_00815cac | DAT_00815ca8 | DAT_00815ca4 | DAT_00815ca0 |
                     DAT_00815c9c | DAT_00815c98 | DAT_00815c94;
      FUN_006ba3b0();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

