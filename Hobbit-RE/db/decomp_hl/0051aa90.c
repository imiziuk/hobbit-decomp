
void __thiscall
FUN_0051aa90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int local_ac;
  int local_a8 [39];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7623;
  local_c = ExceptionList;
  piStack_c4 = &local_ac;
  piStack_c8 = local_a8;
  iStack_cc = 0x51aac0;
  ExceptionList = &local_c;
  FUN_0065f8a0();
  if (param_4 == 0) {
    piStack_c4 = (int *)s_IDS_YES_00732280;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x51aae2;
    param_4 = FUN_006ab1a0();
  }
  if (param_5 == 0) {
    piStack_c4 = (int *)s_IDS_NO_00732278;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x51ab03;
    param_5 = FUN_006ab1a0();
  }
  if ((*(int *)(param_1 + 0x1e0) != 0) && (*(int *)(param_1 + 400) == 0)) {
    piStack_c4 = (int *)0x1;
    piStack_c8 = (int *)DAT_00813038;
    iStack_cc = 0x51ab32;
    FUN_006a16c0();
    *(short *)(param_1 + 0x1ec) = *(short *)(param_1 + 0x1ec) + -1;
  }
  piStack_c4 = (int *)0x0;
  piStack_c8 = (int *)0x25;
  iStack_cc = 0;
  CRect::CRect((CRect *)&iStack_dc,local_a8[0] / 2 + -0x96,local_ac / 2 + -100,
               local_a8[0] / 2 + 0x96,local_ac / 2 + 100);
  uVar1 = FUN_006a1430(DAT_00813038,s_mcmessage_0073226c);
  *(short *)(param_1 + 0x1ec) = *(short *)(param_1 + 0x1ec) + 1;
  piStack_c4 = (int *)param_3;
  *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  piStack_c8 = (int *)0x51abaa;
  FUN_0064b0f0();
  piStack_c4 = (int *)param_2;
  local_4 = 0;
  piStack_c8 = (int *)0x51abc8;
  FUN_0064b0f0();
  piStack_c4 = (int *)param_8;
  piStack_c8 = (int *)param_7;
  iStack_cc = param_1 + 400;
  uStack_d0 = param_7;
  uStack_d4 = 0xffffffff;
  local_4._0_1_ = 1;
  uStack_d8 = 0x51abf7;
  FUN_00406b70();
  uStack_d4 = 0x51abfe;
  uStack_d4 = FUN_00508170();
  uStack_d8 = param_6;
  iStack_dc = param_5;
  uVar1 = FUN_00508170(param_4);
  FUN_005150a0(uVar1,param_4);
  local_4 = (uint)local_4._1_3_ << 8;
  piStack_c4 = (int *)0x51ac34;
  FUN_0064b190();
  local_4 = 0xffffffff;
  piStack_c4 = (int *)0x51ac48;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

