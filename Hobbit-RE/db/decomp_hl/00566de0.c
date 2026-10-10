
void FUN_00566de0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db0ab;
  local_c = ExceptionList;
  if (DAT_0073f524 != 0) {
    ExceptionList = &local_c;
    FUN_006501d0(s_AIGoal__InitStatics_0073f528);
    local_4 = 0;
    DAT_0073f524 = 0;
    FUN_0054d950(&DAT_00772254,&DAT_00772398);
    local_44 = 0;
    if (0 < DAT_0077225c) {
      local_48 = 0;
      do {
        iVar5 = 0;
        FUN_00649b80(local_48 + DAT_00772260);
        local_4._0_1_ = 1;
        piVar3 = DAT_007723c0;
        iVar1 = DAT_007723c4;
        if (DAT_007723c4 < DAT_007723bc + 1) {
          if (DAT_007723cc == 0) {
            iVar1 = DAT_007723c4 / 2;
            iVar4 = 1;
            if (0 < iVar1) {
              iVar4 = iVar1;
            }
            if (iVar4 + DAT_007723bc < 1) {
              iVar1 = 1;
            }
            else {
              if (iVar1 < 1) {
                iVar1 = 1;
              }
              iVar1 = iVar1 + DAT_007723bc;
            }
          }
          else {
            iVar1 = DAT_007723bc + DAT_007723cc;
          }
          piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
          local_4._0_1_ = 2;
          if (piVar2 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = piVar2 + 1;
            *piVar2 = iVar1;
            FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
          }
          local_4._0_1_ = 1;
          if (0 < DAT_007723bc) {
            iVar4 = 0;
            do {
              FUN_0064a320(iVar4 + (int)DAT_007723c0);
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 0x2c;
            } while (iVar5 < DAT_007723bc);
          }
          if (DAT_007723c0 != (int *)0x0) {
            piVar2 = DAT_007723c0 + -1;
            FUN_006c026a(DAT_007723c0,0x2c,DAT_007723c0[-1],FUN_00649ba0);
            FUN_006bf840(piVar2);
          }
        }
        DAT_007723c4 = iVar1;
        DAT_007723c0 = piVar3;
        FUN_0064a320(local_38);
        DAT_007723bc = DAT_007723bc + 1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649ba0();
        local_44 = local_44 + 1;
        local_48 = local_48 + 0x4c;
      } while (local_44 < DAT_0077225c);
    }
    local_4 = 0xffffffff;
    FUN_006501e0();
  }
  ExceptionList = local_c;
  return;
}

