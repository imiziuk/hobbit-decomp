
void FUN_004b1090(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_44;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4073;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0072bae4 != 0) {
    DAT_0072bae4 = 0;
    ExceptionList = &local_c;
    if (DAT_0075d3b8 == 0) {
      ExceptionList = &local_c;
      if (DAT_0075d3b0 != (int *)0x0) {
        ExceptionList = &local_c;
        FUN_00407f70(3);
      }
      DAT_0075d3b0 = (int *)0x0;
      DAT_0075d3b4 = 0;
    }
    DAT_0075d3ac = 0;
    local_44 = 0;
    iVar1 = FUN_00434e50();
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00434e80(local_44);
        FUN_00649b20(uVar2);
        local_4 = 0;
        piVar4 = DAT_0075d3b0;
        iVar1 = DAT_0075d3b4;
        if (DAT_0075d3b4 < DAT_0075d3ac + 1) {
          if (DAT_0075d3bc == 0) {
            iVar1 = DAT_0075d3b4 / 2;
            iVar6 = 1;
            if (0 < iVar1) {
              iVar6 = iVar1;
            }
            if (iVar6 + DAT_0075d3ac < 1) {
              iVar1 = 1;
            }
            else {
              if (iVar1 < 1) {
                iVar1 = 1;
              }
              iVar1 = iVar1 + DAT_0075d3ac;
            }
          }
          else {
            iVar1 = DAT_0075d3bc + DAT_0075d3ac;
          }
          piVar3 = (int *)operator_new(iVar1 * 0x2c + 4);
          local_4._0_1_ = 1;
          if (piVar3 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = piVar3 + 1;
            *piVar3 = iVar1;
            FUN_006c043b(piVar4,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
          }
          iVar6 = 0;
          local_4 = (uint)local_4._1_3_ << 8;
          if (0 < DAT_0075d3ac) {
            iVar5 = 0;
            do {
              FUN_0064a320(iVar5 + (int)DAT_0075d3b0);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 0x2c;
            } while (iVar6 < DAT_0075d3ac);
          }
          if (DAT_0075d3b0 != (int *)0x0) {
            FUN_00407f70(3);
          }
        }
        DAT_0075d3b4 = iVar1;
        DAT_0075d3b0 = piVar4;
        FUN_0064a320(local_38);
        DAT_0075d3ac = DAT_0075d3ac + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        local_44 = local_44 + 1;
        iVar1 = FUN_00434e50();
      } while (local_44 < iVar1);
    }
  }
  FUN_004c3f80(param_1);
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 0xd;
  FUN_00647d10(iVar1,&DAT_0072bbd4);
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0x22;
  *(int *)(iVar1 + 0xf4) = DAT_0075d3ac;
  *(undefined **)(iVar1 + 0x100) = &DAT_0075d3a4;
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10(iVar1,s_Amount_0072bbcc);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Rotates_Slowly_0072bc50);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 3;
        FUN_00647d10(iVar1,s_Bobs_Slowly_0072bc44);
        *(undefined4 *)(iVar1 + 0x84) = 2;
      }
    }
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_Picked_Up_0072bc38);
  *(undefined4 *)(iVar1 + 0x84) = 0x32;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_Regenerates_0072bba4);
  *(undefined4 *)(iVar1 + 0x84) = 0x22;
  FUN_00537ff0(param_1,s_Regeneration_Time_0072bc24,2,0x800000,0x7f7fffff);
  FUN_00499e60(param_1,s_Glow_Off_Distance_0072bc10,2,0,0xffffffff);
  FUN_00499e60(param_1,s_Glow_On_Distance_0072bbfc,2,0,0xffffffff);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_Does_Vacuum_0072bbf0);
    *(undefined4 *)(iVar1 + 0x84) = 2;
  }
  ExceptionList = local_c;
  return;
}

