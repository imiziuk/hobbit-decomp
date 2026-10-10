
void __thiscall FUN_0052da60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xcd0) = 1;
  FUN_0052db90(0xc);
  FUN_00526600();
  FUN_006a1760(DAT_00813038);
  FUN_006a0420(DAT_00813038,1);
  FUN_006a0410(DAT_00813038,0xffffffff);
  *(undefined4 *)(param_1 + 0xccc) = 1;
  FUN_0041bcc0(param_2,param_3);
  FUN_0051ee60(param_2,param_3);
  if (DAT_00760354 != 0) {
    FUN_0041bcc0();
    FUN_004336e0();
  }
  return;
}

