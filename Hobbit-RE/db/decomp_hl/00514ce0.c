
void __thiscall
FUN_00514ce0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
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
  int iStack_ac;
  int aiStack_a8 [39];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d7263;
  pvStack_c = ExceptionList;
  piStack_c4 = &iStack_ac;
  piStack_c8 = aiStack_a8;
  iStack_cc = 0x514d10;
  ExceptionList = &pvStack_c;
  FUN_0065f8a0();
  if (param_4 == 0) {
    piStack_c4 = (int *)s_IDS_YES_00732280;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x514d32;
    param_4 = FUN_006ab1a0();
  }
  if (param_5 == 0) {
    piStack_c4 = (int *)s_IDS_NO_00732278;
    piStack_c8 = (int *)&DAT_0071ceb4;
    iStack_cc = 0x514d53;
    param_5 = FUN_006ab1a0();
  }
  if ((*(int *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x17c) == 0)) {
    *(short *)(param_1 + 0x180) = *(short *)(param_1 + 0x180) + -1;
    piStack_c4 = (int *)0x1;
    piStack_c8 = (int *)DAT_00813038;
    iStack_cc = 0x514d89;
    FUN_006a16c0();
  }
  piStack_c4 = (int *)0x0;
  piStack_c8 = (int *)0x25;
  iStack_cc = 0;
  CRect::CRect((CRect *)&iStack_dc,aiStack_a8[0] / 2 + -0x96,iStack_ac / 2 + -100,
               aiStack_a8[0] / 2 + 0x96,iStack_ac / 2 + 100);
  uVar1 = FUN_006a1430(DAT_00813038,s_mcmessage_0073226c);
  *(short *)(param_1 + 0x180) = *(short *)(param_1 + 0x180) + 1;
  piStack_c4 = (int *)param_3;
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  piStack_c8 = (int *)0x514dfa;
  FUN_0064b0f0();
  piStack_c4 = (int *)param_2;
  iStack_4 = 0;
  piStack_c8 = (int *)0x514e18;
  FUN_0064b130();
  piStack_c4 = (int *)param_7;
  piStack_c8 = (int *)param_6;
  iStack_cc = param_1 + 0x17c;
  uStack_d0 = param_6;
  uStack_d4 = 0xff;
  iStack_d8 = 200;
  iStack_dc = 200;
  iStack_4._0_1_ = 1;
  FUN_00413480(200);
  uStack_d4 = 0x514e60;
  uStack_d4 = FUN_00508170();
  iStack_d8 = param_5;
  iStack_dc = param_4;
  uVar1 = FUN_00508170();
  FUN_00515060(uVar1);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piStack_c4 = (int *)0x514e8e;
  FUN_0064b190();
  iStack_4 = 0xffffffff;
  piStack_c4 = (int *)0x514ea2;
  FUN_0064b190();
  ExceptionList = pvStack_c;
  return;
}

