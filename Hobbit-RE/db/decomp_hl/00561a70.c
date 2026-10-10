
void __fastcall FUN_00561a70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_74;
  undefined1 local_64 [88];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dac76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00772028 == 0) {
    ExceptionList = &local_c;
    if (DAT_00772020 != (int *)0x0) {
      piVar4 = DAT_00772020 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00772020,0x2c,DAT_00772020[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_00772020 = (int *)0x0;
    DAT_00772024 = 0;
  }
  DAT_0077201c = 0;
  local_74 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      piVar4 = (int *)0x0;
      uVar1 = FUN_00649b60(*(int *)(*(int *)(param_1 + 0x30) + local_74 * 4) + 4);
      local_4 = 0;
      piVar3 = DAT_00772020;
      iVar2 = DAT_00772024;
      if (DAT_00772024 < DAT_0077201c + 1) {
        if (DAT_0077202c == 0) {
          iVar2 = DAT_00772024 / 2;
          iVar6 = 1;
          if (0 < iVar2) {
            iVar6 = iVar2;
          }
          if (iVar6 + DAT_0077201c < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = iVar2 + DAT_0077201c;
          }
        }
        else {
          iVar2 = DAT_0077201c + DAT_0077202c;
        }
        piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
        local_4._0_1_ = 1;
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3 + 1;
          *piVar3 = iVar2;
          FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
        }
        iVar6 = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < DAT_0077201c) {
          iVar5 = 0;
          do {
            FUN_0064a320(iVar5 + (int)DAT_00772020);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (iVar6 < DAT_0077201c);
        }
        piVar3 = piVar4;
        if (DAT_00772020 != (int *)0x0) {
          piVar4 = DAT_00772020 + -1;
          FUN_006c026a(DAT_00772020,0x2c,DAT_00772020[-1],FUN_00649ba0);
          FUN_006bf840(piVar4);
        }
      }
      DAT_00772024 = iVar2;
      DAT_00772020 = piVar3;
      FUN_0064a320(uVar1);
      DAT_0077201c = DAT_0077201c + 1;
      local_4 = 0xffffffff;
      FUN_00649ba0();
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(param_1 + 0x2c));
  }
  piVar4 = (int *)0x0;
  FUN_00649b20(&DAT_00720670);
  local_4 = 2;
  piVar3 = DAT_00772020;
  iVar2 = DAT_00772024;
  if (DAT_00772024 < DAT_0077201c + 1) {
    if (DAT_0077202c == 0) {
      iVar2 = DAT_00772024 / 2;
      iVar6 = 1;
      if (0 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 + DAT_0077201c < 1) {
        iVar2 = 1;
      }
      else {
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        iVar2 = iVar2 + DAT_0077201c;
      }
    }
    else {
      iVar2 = DAT_0077201c + DAT_0077202c;
    }
    piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar6 = 0;
    if (0 < DAT_0077201c) {
      iVar5 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_00772020);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0077201c);
    }
    piVar3 = piVar4;
    if (DAT_00772020 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_00772024 = iVar2;
  DAT_00772020 = piVar3;
  FUN_0064a320(local_64);
  DAT_0077201c = DAT_0077201c + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

