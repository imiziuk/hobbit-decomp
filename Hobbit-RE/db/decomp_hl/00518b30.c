
void __thiscall FUN_00518b30(int param_1,int param_2)

{
  int iVar1;
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 *puStack_10;
  int iStack_4;
  
  iVar1 = param_2;
  puStack_10 = (undefined4 *)param_2;
  piStack_14 = (int *)0x518b3f;
  iStack_4 = param_1;
  FUN_00525510();
  if (iVar1 == *(int *)(param_1 + 0x160)) {
    puStack_10 = &param_2;
    piStack_14 = &iStack_4;
    uStack_18 = 0x518b56;
    FUN_0065f8a0();
    puStack_10 = (undefined4 *)0x1;
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x518b6d;
    FUN_006a16c0();
    puStack_10 = (undefined4 *)0x0;
    piStack_14 = (int *)0x5;
    uStack_18 = 0;
    CRect::CRect(aCStack_28,0x10,0x10,iStack_4 + -0x10,param_2 + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_options_00732bbc);
  }
  return;
}

