
void __fastcall FUN_0059d3f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_bc;
  undefined1 local_b0 [44];
  undefined1 local_84 [120];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd82a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_007985d4 == 0) {
    ExceptionList = &local_c;
    if (DAT_007985cc != (int *)0x0) {
      piVar4 = DAT_007985cc + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_007985cc,0x2c,DAT_007985cc[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_007985cc = (int *)0x0;
    DAT_007985d0 = 0;
  }
  DAT_007985c8 = 0;
  local_bc = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar4 = (int *)0x0;
      uVar1 = FUN_0064b130(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + local_bc * 4) + 0x70)
                          );
      local_4 = 0;
      FUN_00649b80(uVar1);
      local_4._0_1_ = 1;
      piVar3 = DAT_007985cc;
      iVar2 = DAT_007985d0;
      if (DAT_007985d0 < DAT_007985c8 + 1) {
        if (DAT_007985d8 == 0) {
          iVar2 = DAT_007985d0 / 2;
          iVar5 = 1;
          if (0 < iVar2) {
            iVar5 = iVar2;
          }
          if (iVar5 + DAT_007985c8 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = iVar2 + DAT_007985c8;
          }
        }
        else {
          iVar2 = DAT_007985c8 + DAT_007985d8;
        }
        piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
        local_4._0_1_ = 2;
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3 + 1;
          *piVar3 = iVar2;
          FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
        }
        local_4._0_1_ = 1;
        if (0 < DAT_007985c8) {
          iVar5 = 0;
          iVar6 = 0;
          do {
            FUN_0064a320(iVar5 + (int)DAT_007985cc);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (iVar6 < DAT_007985c8);
        }
        piVar3 = piVar4;
        if (DAT_007985cc != (int *)0x0) {
          piVar4 = DAT_007985cc + -1;
          FUN_006c026a(DAT_007985cc,0x2c,DAT_007985cc[-1],FUN_00649ba0);
          FUN_006bf840(piVar4);
        }
      }
      DAT_007985d0 = iVar2;
      DAT_007985cc = piVar3;
      FUN_0064a320(local_b0);
      DAT_007985c8 = DAT_007985c8 + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      local_4 = 0xffffffff;
      FUN_0064b190();
      local_bc = local_bc + 1;
    } while (local_bc < *(int *)(param_1 + 0x4c));
  }
  iVar5 = 0;
  FUN_00649b20(&DAT_00720670);
  local_4 = 3;
  piVar4 = DAT_007985cc;
  iVar2 = DAT_007985d0;
  if (DAT_007985d0 < DAT_007985c8 + 1) {
    if (DAT_007985d8 == 0) {
      iVar2 = DAT_007985d0 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_007985c8 < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_007985c8;
      }
    }
    else {
      iVar2 = DAT_007985c8 + DAT_007985d8;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 4;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < DAT_007985c8) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_007985cc);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_007985c8);
    }
    if (DAT_007985cc != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007985d0 = iVar2;
  DAT_007985cc = piVar4;
  FUN_0064a320(local_84);
  DAT_007985c8 = DAT_007985c8 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

