
void FUN_00453ce0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_90;
  undefined1 local_64 [44];
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d0071;
  local_c = ExceptionList;
  iVar7 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  local_4._0_1_ = 1;
  uVar2 = FUN_005496c0(local_38,s_Audio_0071ce88);
  FUN_00649b20(uVar2);
  local_4._0_1_ = 2;
  FUN_00658080(local_90);
  iVar3 = FUN_00658290(local_90,&DAT_0075c9ac);
  if (iVar3 != 0) {
    FUN_00649b20(s_MUSIC_Silence_00724fb8);
    local_4._0_1_ = 3;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 3;
    piVar5 = DAT_0075c9b8;
    iVar3 = DAT_0075c9bc;
    if (DAT_0075c9bc < DAT_0075c9b4 + 1) {
      if (DAT_0075c9c4 == 0) {
        iVar3 = DAT_0075c9bc / 2;
        iVar6 = 1;
        if (0 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar6 + DAT_0075c9b4 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + DAT_0075c9b4;
        }
      }
      else {
        iVar3 = DAT_0075c9b4 + DAT_0075c9c4;
      }
      piVar4 = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 4;
      if (piVar4 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = piVar4 + 1;
        *piVar4 = iVar3;
        FUN_006c043b(piVar5,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      local_4._0_1_ = 3;
      if (0 < DAT_0075c9b4) {
        iVar6 = 0;
        do {
          FUN_0064a320(iVar6 + (int)DAT_0075c9b8);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075c9b4);
      }
      uVar1 = (undefined1)local_4;
      if (DAT_0075c9b8 != (int *)0x0) {
        piVar4 = DAT_0075c9b8 + -1;
        FUN_006c026a(DAT_0075c9b8,0x2c,DAT_0075c9b8[-1],FUN_00649ba0);
        FUN_006bf840(piVar4);
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    DAT_0075c9bc = iVar3;
    DAT_0075c9b8 = piVar5;
    FUN_0064a320(local_64);
    DAT_0075c9b4 = DAT_0075c9b4 + 1;
    local_4._0_1_ = 2;
    FUN_00649ba0();
  }
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

