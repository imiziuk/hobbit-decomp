
void __thiscall FUN_005960d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int local_24;
  int local_20 [2];
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd300;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__SetupAnimList_0074309c);
  local_4 = 0;
  FUN_006501d0(s_PhysController__SetupAnimList_0074309c);
  local_4._0_1_ = 1;
  if (param_2 != 0) {
    iVar3 = 0;
    bVar1 = true;
    if (0 < *(int *)(param_1 + 0x144)) {
      piVar7 = *(int **)(param_1 + 0x148);
      do {
        if (*piVar7 == param_2) goto LAB_005964fd;
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x144));
    }
    if (*(int *)(param_1 + 0x150) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (((((*(int *)(param_1 + 0x158) != 0) && (iVar3 = *(int *)(param_1 + 0x158) + 8, iVar3 != 0))
         && (param_2 + 8 != 0)) && (iVar3 = FUN_00647e40(iVar3,param_2 + 8), iVar3 == 0)) ||
       (param_4 != 0)) {
      bVar1 = false;
    }
    local_18 = 0;
    iVar3 = FUN_00594390(param_2 + 8);
    if ((bVar1) && (iVar3 != 0)) {
      local_24 = 0;
      local_20[0] = 0;
      iVar4 = FUN_00592920();
      local_18 = FUN_005b7480(*(undefined4 *)(iVar4 + 0x1b0),*(undefined4 *)(param_1 + 0x158),iVar3,
                              &local_24,local_20);
      if ((local_24 != 0) && (local_24 != *(int *)(param_1 + 0x158))) {
        iVar3 = *(int *)(param_1 + 0x144);
        if (*(int *)(param_1 + 0x14c) < iVar3 + 1) {
          if (*(int *)(param_1 + 0x154) == 0) {
            iVar5 = *(int *)(param_1 + 0x14c) / 2;
            iVar4 = 1;
            if (0 < iVar5) {
              iVar4 = iVar5;
            }
            if (iVar4 + iVar3 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar3 = iVar3 + iVar5;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x154) + iVar3;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x144)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar4 * 4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x144));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x148));
          *(void **)(param_1 + 0x148) = pvVar6;
          *(int *)(param_1 + 0x14c) = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 4) = local_24;
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
      }
      if ((local_20[0] != 0) && (local_20[0] != *(int *)(param_1 + 0x158))) {
        iVar3 = *(int *)(param_1 + 0x144);
        if (*(int *)(param_1 + 0x14c) < iVar3 + 1) {
          if (*(int *)(param_1 + 0x154) == 0) {
            iVar5 = *(int *)(param_1 + 0x14c) / 2;
            iVar4 = 1;
            if (0 < iVar5) {
              iVar4 = iVar5;
            }
            if (iVar4 + iVar3 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar3 = iVar3 + iVar5;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x154) + iVar3;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x144)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar4 * 4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x144));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x148));
          *(void **)(param_1 + 0x148) = pvVar6;
          *(int *)(param_1 + 0x14c) = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 4) = local_20[0];
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x144);
    if (*(int *)(param_1 + 0x14c) < iVar3 + 1) {
      if (*(int *)(param_1 + 0x154) == 0) {
        iVar5 = *(int *)(param_1 + 0x14c) / 2;
        iVar4 = 1;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar3 + iVar4 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar3 = iVar3 + iVar5;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x154) + iVar3;
      }
      pvVar6 = operator_new(iVar3 * 4);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x144)) {
        do {
          *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x144));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x148));
      *(void **)(param_1 + 0x148) = pvVar6;
      *(int *)(param_1 + 0x14c) = iVar3;
    }
    *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 4) = param_2;
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
    bVar1 = false;
    if ((((*(int *)(param_1 + 0x158) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x200) == 0x200)) &&
        (iVar3 = FUN_00592190(), *(int *)(iVar3 + 0xe0) < 1)) &&
       (fVar2 = (float)(*(int *)(iVar3 + 0xd8) + -2),
       fVar2 < *(float *)(iVar3 + 0xdc) == (fVar2 == *(float *)(iVar3 + 0xdc)))) {
      bVar1 = true;
    }
    if ((((local_18 & 1) == 0) || (param_4 != 0)) && (!bVar1)) {
      FUN_00592ae0(**(undefined4 **)(param_1 + 0x148),param_3,0xbf800000,1);
      iVar3 = *(int *)(param_1 + 0x144) + -1;
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x148)) =
               *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x148));
          iVar4 = iVar4 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
    }
  }
LAB_005964fd:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

