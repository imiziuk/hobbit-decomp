
void __thiscall
FUN_0052f420(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iStack_dc;
  int iStack_d8;
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
  puStack_8 = &LAB_006d8583;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 == 0) {
    piStack_c4 = (int *)s_IDS_YES_00732280;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x52f460;
    ExceptionList = &local_c;
    param_4 = FUN_006ab1a0();
  }
  if (param_5 == 0) {
    piStack_c4 = (int *)s_IDS_NO_00732278;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x52f481;
    param_5 = FUN_006ab1a0();
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x74) == 0)) {
    piStack_c4 = (int *)0x1;
    piStack_c8 = (int *)DAT_00813038;
    iStack_cc = 0x52f4a9;
    FUN_006a16c0();
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + -1;
  }
  piStack_c4 = &local_ac;
  piStack_c8 = local_a8;
  iStack_cc = 0x52f4bc;
  FUN_0065f8a0();
  piStack_c4 = (int *)0x0;
  piStack_c8 = (int *)0x25;
  iStack_cc = 0;
  CRect::CRect((CRect *)&iStack_dc,local_a8[0] / 2 + -0x96,local_ac / 2 + -100,
               local_a8[0] / 2 + 0x96,local_ac / 2 + 100);
  uVar1 = FUN_006a1430(DAT_00813038,s_mcmessage_0073226c);
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
  piStack_c4 = (int *)param_3;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  piStack_c8 = (int *)0x52f52a;
  FUN_0064b0f0();
  piStack_c4 = (int *)param_2;
  local_4 = 0;
  piStack_c8 = (int *)0x52f548;
  FUN_0064b0f0();
  piStack_c4 = (int *)param_7;
  piStack_c8 = (int *)param_6;
  iStack_cc = param_1 + 0x74;
  uStack_d0 = param_6;
  uStack_d4 = 0xff;
  iStack_d8 = 200;
  iStack_dc = 200;
  local_4._0_1_ = 1;
  FUN_00413480(200);
  uStack_d4 = 0x52f58d;
  uStack_d4 = FUN_00508170();
  iStack_d8 = param_5;
  iStack_dc = param_4;
  uVar1 = FUN_00508170();
  FUN_00515060(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  piStack_c4 = (int *)0x52f5b8;
  FUN_0064b190();
  local_4 = 0xffffffff;
  piStack_c4 = (int *)0x52f5cc;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

