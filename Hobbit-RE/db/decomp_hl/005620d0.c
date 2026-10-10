
void __fastcall FUN_005620d0(int param_1)

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
  puStack_8 = &LAB_006daccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00772230 == 0) {
    ExceptionList = &local_c;
    if (DAT_00772228 != (int *)0x0) {
      piVar4 = DAT_00772228 + -1;
      ExceptionList = &local_c;
      FUN_006c026a(DAT_00772228,0x2c,DAT_00772228[-1],FUN_00649ba0);
      FUN_006bf840(piVar4);
    }
    DAT_00772228 = (int *)0x0;
    DAT_0077222c = 0;
  }
  DAT_00772224 = 0;
  if (DAT_007721dc == 0) {
    if (DAT_007721d4 != 0) {
      iVar2 = DAT_007721d4 + -4;
      FUN_006c026a(DAT_007721d4,0x2c,*(undefined4 *)(DAT_007721d4 + -4),FUN_00649ba0);
      FUN_006bf840(iVar2);
    }
    DAT_007721d4 = 0;
    DAT_007721d8 = 0;
  }
  DAT_007721d0 = 0;
  local_74 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar6 = 0;
      FUN_0055eb10(*(undefined4 *)(*(int *)(param_1 + 0x4c) + local_74 * 4),local_74);
      uVar1 = FUN_00649b60(*(int *)(*(int *)(param_1 + 0x4c) + local_74 * 4) + 0x10);
      local_4 = 0;
      piVar4 = DAT_00772228;
      iVar2 = DAT_0077222c;
      if (DAT_0077222c < DAT_00772224 + 1) {
        if (DAT_00772234 == 0) {
          iVar2 = DAT_0077222c / 2;
          iVar5 = 1;
          if (0 < iVar2) {
            iVar5 = iVar2;
          }
          if (iVar5 + DAT_00772224 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = iVar2 + DAT_00772224;
          }
        }
        else {
          iVar2 = DAT_00772224 + DAT_00772234;
        }
        piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
        local_4._0_1_ = 1;
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + 1;
          *piVar3 = iVar2;
          FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < DAT_00772224) {
          iVar5 = 0;
          do {
            FUN_0064a320(iVar5 + (int)DAT_00772228);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (iVar6 < DAT_00772224);
        }
        if (DAT_00772228 != (int *)0x0) {
          piVar3 = DAT_00772228 + -1;
          FUN_006c026a(DAT_00772228,0x2c,DAT_00772228[-1],FUN_00649ba0);
          FUN_006bf840(piVar3);
        }
      }
      DAT_0077222c = iVar2;
      DAT_00772228 = piVar4;
      FUN_0064a320(uVar1);
      DAT_00772224 = DAT_00772224 + 1;
      local_4 = 0xffffffff;
      FUN_00649ba0();
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(param_1 + 0x48));
  }
  FUN_00649b20(&DAT_00720670);
  local_4 = 2;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

