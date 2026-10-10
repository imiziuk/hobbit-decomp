
void __thiscall FUN_0058a630(int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iStack_64;
  int iStack_60;
  int local_44;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcb38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0064cc00();
  FUN_00649600(s_sdbase__TraverseCells_00741f68);
  iVar11 = param_1 + 0x13e0;
  local_4 = 0;
  local_44 = 1;
  do {
    FUN_00649600(s_sdbase__TraverseCells_UserFunc_00741f48);
    uVar8 = *(ushort *)(iVar11 + 0xfaa);
    local_4._0_1_ = 1;
    if (uVar8 == 0xffff) {
      iVar2 = 0;
    }
    else {
      iVar2 = (uVar8 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar8 >> 9) * 4);
    }
    iVar2 = (*param_3)(iVar2,param_4);
    if (iVar2 == 0) {
      FUN_0064cc50();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      goto LAB_0058a992;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    iStack_64 = __ftol();
    iStack_64 = iStack_64 + -0x1000;
    iVar2 = __ftol();
    iVar3 = __ftol();
    iVar3 = iVar3 + -0x1000;
    iVar4 = __ftol();
    iVar5 = __ftol();
    iVar6 = __ftol();
    if (iStack_64 <= iVar4 + -0x1000) {
      iStack_60 = iStack_64 * 0x400;
      iVar1 = iVar2 + -0x1000;
      do {
        for (; iVar1 <= iVar5 + -0x1000; iVar1 = iVar1 + 1) {
          if (iVar3 <= iVar6 + -0x1000) {
            uVar10 = ((iStack_60 + iVar1) * 0x400 + iVar3) * 0x400;
            iVar9 = iVar3;
            do {
              uVar8 = *(ushort *)(iVar11 + 8 + (uVar10 % 0x7d1) * 2);
              while (uVar8 != 0xffff) {
                iVar7 = 0;
                if (uVar8 != 0xffff) {
                  iVar7 = (uVar8 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar8 >> 9) * 4);
                }
                if (((*(short *)(iVar7 + 8) == iStack_64) && (*(short *)(iVar7 + 10) == iVar1)) &&
                   (*(short *)(iVar7 + 0xc) == iVar9)) goto LAB_0058a8aa;
                uVar8 = *(ushort *)(iVar7 + 4);
              }
              uVar8 = 0xffff;
LAB_0058a8aa:
              if (uVar8 != 0xffff) {
                FUN_00649600(s_sdbase__TraverseCells_UserFunc_00741f48);
                iVar7 = 0;
                local_4._0_1_ = 2;
                if (uVar8 != 0xffff) {
                  iVar7 = (uVar8 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar8 >> 9) * 4);
                }
                iVar7 = (*param_3)(iVar7,param_4);
                if (iVar7 == 0) {
                  FUN_0064cc50();
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_00649720();
                  goto LAB_0058a992;
                }
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_00649720();
              }
              iVar9 = iVar9 + 1;
              uVar10 = uVar10 + 0x400;
            } while (iVar9 <= iVar6 + -0x1000);
          }
        }
        iStack_64 = iStack_64 + 1;
        iStack_60 = iStack_60 + 0x400;
        iVar1 = iVar2 + -0x1000;
      } while (iStack_64 <= iVar4 + -0x1000);
    }
    local_44 = local_44 + 1;
    iVar11 = iVar11 + 0xfb8;
  } while (local_44 < 3);
  FUN_0064cc50();
LAB_0058a992:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

