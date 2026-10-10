
void __thiscall FUN_00526640(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  int iStack_164;
  int *piStack_160;
  int *piStack_15c;
  int local_144;
  int local_140 [77];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7d29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0081303c != 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(DAT_0081303c + 0x394) = 0;
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    piStack_15c = (int *)s_IDS_DONE_00731f38;
    piStack_160 = (int *)&DAT_0071ceb4;
    iStack_164 = 0x52668f;
    uVar1 = FUN_006ab1a0();
  }
  piStack_15c = (int *)0x1;
  piStack_160 = (int *)DAT_00813038;
  iStack_164 = 0x5266a8;
  FUN_006a0420();
  if (*(int *)(param_1 + 0x15c) == 0) {
    piStack_15c = local_140;
    piStack_160 = &local_144;
    iStack_164 = 0x5266c3;
    FUN_0065f8a0();
    piStack_15c = (int *)0x0;
    piStack_160 = (int *)0x25;
    iStack_164 = 0;
    CRect::CRect((CRect *)&uStack_174,0,0,local_144,local_140[0]);
    uVar2 = FUN_006a1430(DAT_00813038,s_message_00733f68);
    piStack_15c = (int *)param_3;
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    piStack_160 = (int *)0x526714;
    FUN_0064b0f0();
    piStack_15c = (int *)param_2;
    local_4 = 0;
    piStack_160 = (int *)0x52672e;
    FUN_0064b130();
    piStack_15c = (int *)0x0;
    piStack_160 = (int *)0x1;
    iStack_164 = param_1 + 0x164;
    uStack_16c = 0xffffffff;
    local_4._0_1_ = 1;
    uStack_170 = 0x526751;
    iStack_168 = extraout_ECX;
    FUN_00406b70();
    uStack_16c = 0x526758;
    uStack_16c = FUN_00508170();
    uStack_174 = 0;
    uStack_170 = uVar1;
    uVar1 = FUN_00508170();
    FUN_00515db0(uVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    piStack_15c = (int *)0x526780;
    FUN_0064b190();
    local_4 = 0xffffffff;
    piStack_15c = (int *)0x526797;
    FUN_0064b190();
    piStack_15c = (int *)0x40a00000;
    piStack_160 = (int *)0x5267a7;
    FUN_00515fc0();
  }
  else {
    piStack_15c = (int *)param_3;
    piStack_160 = (int *)0x5267c9;
    FUN_0064b0f0();
    piStack_15c = (int *)param_2;
    local_4 = 2;
    piStack_160 = (int *)0x5267e7;
    FUN_0064b130();
    piStack_15c = (int *)0x0;
    piStack_160 = (int *)0x1;
    iStack_168 = param_1 + 0x164;
    uStack_16c = 0xffffffff;
    local_4._0_1_ = 3;
    uStack_170 = 0x52680a;
    iStack_164 = iStack_168;
    FUN_00406b70();
    uStack_16c = 0x526811;
    uStack_16c = FUN_00508170();
    uStack_174 = 0;
    uStack_170 = uVar1;
    uVar1 = FUN_00508170();
    FUN_00515db0(uVar1);
    local_4 = CONCAT31(local_4._1_3_,2);
    piStack_15c = (int *)0x526839;
    FUN_0064b190();
    local_4 = 0xffffffff;
    piStack_15c = (int *)0x526850;
    FUN_0064b190();
    piStack_15c = (int *)0x40a00000;
    piStack_160 = (int *)0x526860;
    FUN_00515fc0();
  }
  piStack_15c = (int *)0xffffffff;
  iStack_164 = 0x526874;
  piStack_160 = (int *)DAT_00813038;
  FUN_006a0410();
  ExceptionList = local_c;
  return;
}

