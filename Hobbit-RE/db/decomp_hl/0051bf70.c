
void __thiscall FUN_0051bf70(int param_1,int param_2)

{
  CRect aCStack_20 [16];
  undefined4 uStack_10;
  char *pcStack_c;
  undefined4 *puStack_8;
  int local_4;
  
  pcStack_c = (char *)&local_4;
  local_4 = param_1;
  if (param_2 == *(int *)(param_1 + 0x1ac)) {
    puStack_8 = &param_2;
    uStack_10 = 0x51bf8c;
    pcStack_c = (char *)&local_4;
    FUN_0065f8a0();
    puStack_8 = (undefined4 *)0x1;
    pcStack_c = s_PageLeft_00733370;
    uStack_10 = 0x51bfa0;
    FUN_00659600();
    puStack_8 = (undefined4 *)0x1;
    pcStack_c = (char *)DAT_00813038;
    uStack_10 = 0x51bfb4;
    FUN_006a16c0();
    puStack_8 = (undefined4 *)0x0;
    pcStack_c = (char *)0x5;
    uStack_10 = 0;
    CRect::CRect(aCStack_20,0x10,0x10,local_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_inventory_007330c4);
    return;
  }
  if (param_2 == *(int *)(param_1 + 0x1b0)) {
    puStack_8 = &param_2;
    uStack_10 = 0x51c009;
    FUN_0065f8a0();
    puStack_8 = (undefined4 *)0x1;
    pcStack_c = s_PageRight_00733354;
    uStack_10 = 0x51c01d;
    FUN_00659600();
    puStack_8 = (undefined4 *)0x1;
    pcStack_c = (char *)DAT_00813038;
    uStack_10 = 0x51c030;
    FUN_006a16c0();
    puStack_8 = (undefined4 *)0x0;
    pcStack_c = (char *)0x5;
    uStack_10 = 0;
    CRect::CRect(aCStack_20,0x10,0x10,local_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
  }
  return;
}

