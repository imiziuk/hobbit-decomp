
void FUN_004cbb50(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4bb9;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_0072d0e4 != 0) {
    DAT_0072d0e4 = 0;
    ExceptionList = &local_c;
    FUN_00649b20();
    local_4 = 0;
    piVar2 = DAT_0075da54;
    iVar1 = DAT_0075da58;
    if (DAT_0075da58 < DAT_0075da50 + 1) {
      if (DAT_0075da60 == 0) {
        iVar1 = DAT_0075da58 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075da50 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075da50;
        }
      }
      else {
        iVar1 = DAT_0075da60 + DAT_0075da50;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075da50) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075da50);
      }
      piVar2 = piVar3;
      if (DAT_0075da54 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075da58 = iVar1;
    DAT_0075da54 = piVar2;
    FUN_0064a320();
    DAT_0075da50 = DAT_0075da50 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 2;
    piVar3 = DAT_0075da54;
    iVar1 = DAT_0075da58;
    if (DAT_0075da58 < DAT_0075da50 + 1) {
      if (DAT_0075da60 == 0) {
        iVar1 = DAT_0075da58 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075da50 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075da50;
        }
      }
      else {
        iVar1 = DAT_0075da60 + DAT_0075da50;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075da50) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075da50);
      }
      if (DAT_0075da54 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075da58 = iVar1;
    DAT_0075da54 = piVar3;
    FUN_0064a320();
    DAT_0075da50 = DAT_0075da50 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 4;
    piVar3 = DAT_0075da54;
    iVar1 = DAT_0075da58;
    if (DAT_0075da58 < DAT_0075da50 + 1) {
      if (DAT_0075da60 == 0) {
        iVar1 = DAT_0075da58 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075da50 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075da50;
        }
      }
      else {
        iVar1 = DAT_0075da60 + DAT_0075da50;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075da50) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075da50);
      }
      if (DAT_0075da54 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075da58 = iVar1;
    DAT_0075da54 = piVar3;
    FUN_0064a320();
    DAT_0075da50 = DAT_0075da50 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xc;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(int *)(iVar1 + 0xf4) = DAT_0075da50;
    *(undefined **)(iVar1 + 0x100) = &DAT_0075da48;
  }
  FUN_004ab4e0();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 2;
  }
  FUN_00537ff0();
  FUN_00537ff0(param_1,s_PainRadius_00725a64,2,0x800000);
  FUN_00537ff0(param_1,s_PainAmount_0072d268,2,0x800000,0x7f7fffff);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 2;
  }
  FUN_005669e0();
  FUN_00537ff0(param_1,s_ElevatorDestLength_0072d42c);
  FUN_005669e0(param_1,s_DoesRegenerate_0072d24c,2);
  FUN_00537ff0(param_1,s_RegenerationDelay_0072d418,2,0x800000,0x7f7fffff);
  FUN_00537ff0();
  FUN_00537ff0(param_1,s_ShrinkRate_0072d224,2,0x800000);
  FUN_005669e0(param_1,s_EndAnchor_Locked_0072d404,2);
  FUN_00401f00();
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_EndAnchor_Pos_0072d3f4,2);
  FUN_00537ff0(param_1,s_Length_0072d2d4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_SegmentLength_0072d3e4,2,0x800000,0x7f7fffff);
  FUN_00537ff0();
  FUN_005669e0(param_1,s_Wiggle_0072d3dc);
  FUN_00537ff0(param_1,s_RenderHeigthAbove_0072d3c8,2,0x800000,0x7f7fffff);
  FUN_004f1e00(param_1,s_Texture___Top_0072d3b8,4,1,2);
  FUN_004f1e00();
  FUN_00459f30(param_1,s_AttachToObject_0072d394,5,1,2);
  FUN_00537ff0(param_1,s_AttachWeight_0072d1f8,2,0x800000,0x7f7fffff);
  FUN_00537ff0();
  FUN_00499e60(param_1,s_Current_State_0072d374,0x38,0);
  FUN_00537ff0(param_1,s_Current_Length_0072d364,0x38,0x800000,0x7f7fffff);
  ExceptionList = local_c;
  return;
}

