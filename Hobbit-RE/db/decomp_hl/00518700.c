
void __thiscall FUN_00518700(int param_1,int param_2)

{
  bool bVar1;
  CRect aCStack_24 [16];
  undefined4 uStack_14;
  int *piStack_10;
  undefined4 *puStack_c;
  int local_4;
  
  bVar1 = param_2 == *(int *)(param_1 + 0x15c);
  puStack_c = (undefined4 *)param_2;
  piStack_10 = (int *)0x51871b;
  local_4 = param_1;
  FUN_00512770();
  if (bVar1) {
    puStack_c = &param_2;
    piStack_10 = &local_4;
    uStack_14 = 0x51872e;
    FUN_0065f8a0();
    puStack_c = (undefined4 *)0x0;
    piStack_10 = (int *)0x15;
    uStack_14 = 0;
    CRect::CRect(aCStack_24,0x10,0x10,local_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_options_controls_menu_00734348);
  }
  return;
}

