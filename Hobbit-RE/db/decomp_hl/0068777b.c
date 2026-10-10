
undefined4 __thiscall FUN_0068777b(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  uint local_2c;
  uint local_24;
  uint local_20;
  int *local_1c;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_3 < 4) {
    return 0x80004005;
  }
  if (*param_2 != 0x20534444) {
    return 0x80004005;
  }
  if (param_3 - 4 < 0x7c) {
    return 0x80004005;
  }
  uVar7 = param_3 - 0x80;
  local_1c = param_2 + 0x20;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2[4];
  param_1[6] = param_2[3];
  if ((param_2[0x1c] & 0xfc00U) == 0xfc00) {
    local_24 = 6;
  }
  else {
    if ((param_2[0x1c] & 0xfc00U) != 0) {
      return 0x80004005;
    }
    local_24 = 1;
  }
  local_20 = param_2[7];
  if (local_20 == 0) {
    local_20 = 1;
  }
  iVar3 = param_2[0x15];
  uVar1 = 0x31545844;
  if ((((iVar3 != 0x31545844) && (uVar1 = 0x32545844, iVar3 != 0x32545844)) &&
      (uVar1 = 0x33545844, iVar3 != 0x33545844)) &&
     ((uVar1 = 0x34545844, iVar3 != 0x34545844 && (uVar1 = 0x35545844, iVar3 != 0x35545844)))) {
    iVar3 = param_2[0x14];
    if ((iVar3 == 0x41) && ((param_2[0x16] == 0x20 && (param_2[0x1a] == -0x1000000)))) {
      param_2 = (int *)0x15;
      uVar1 = (uint)param_2;
    }
    else if ((iVar3 == 0x40) && (param_2[0x16] == 0x20)) {
      param_2 = (int *)0x16;
      uVar1 = (uint)param_2;
    }
    else {
      if (iVar3 == 0x40) {
        if ((param_2[0x16] == 0x10) && (param_2[0x18] == 0x7e0)) {
          param_2 = (int *)0x17;
          uVar1 = (uint)param_2;
          goto LAB_006878fd;
        }
        if ((param_2[0x16] == 0x10) && (param_2[0x18] == 0x3e0)) {
          param_2 = (int *)0x18;
          uVar1 = (uint)param_2;
          goto LAB_006878fd;
        }
      }
      if (iVar3 != 0x41) {
        return 0x80004005;
      }
      if ((param_2[0x16] == 0x10) && (param_2[0x1a] == 0x8000)) {
        param_2 = (int *)0x19;
        uVar1 = (uint)param_2;
      }
      else {
        if (param_2[0x16] != 0x10) {
          return 0x80004005;
        }
        if (param_2[0x1a] != 0xf000) {
          return 0x80004005;
        }
        param_2 = (int *)0x1a;
        uVar1 = (uint)param_2;
      }
    }
  }
LAB_006878fd:
  param_2 = (int *)uVar1;
  local_10 = 0;
  param_3 = uVar7;
  if (local_24 != 0) {
    do {
      uVar1 = param_1[3];
      uVar2 = param_1[4];
      local_30 = param_1[5];
      local_2c = param_1[6];
      puVar5 = param_1;
      if (local_10 != 0) {
        pvVar4 = operator_new(0x30);
        if (pvVar4 == (void *)0x0) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = (uint *)FUN_006861bc();
        }
        if (puVar5 == (uint *)0x0) {
          return 0x8007000e;
        }
        local_14[0xb] = (uint)puVar5;
      }
      local_14 = puVar5;
      local_c = 0;
      if (local_20 != 0) {
        do {
          puVar5 = local_14;
          if (local_c != 0) {
            pvVar4 = operator_new(0x30);
            if (pvVar4 == (void *)0x0) {
              puVar5 = (uint *)0x0;
            }
            else {
              puVar5 = (uint *)FUN_006861bc();
            }
            if (puVar5 == (uint *)0x0) {
              return 0x8007000e;
            }
            local_18[10] = (uint)puVar5;
          }
          if (param_2 < 0x32545845) {
            if (param_2 == (int *)0x32545844) {
LAB_006879f0:
              local_8 = ((int)(local_30 + 3) >> 2) << 4;
LAB_006879fc:
              uVar6 = (int)(local_2c + 3) >> 2;
            }
            else {
              if (param_2 < 0x15) goto LAB_00687a0b;
              uVar6 = local_2c;
              if (param_2 < 0x17) {
                local_8 = local_30 << 2;
              }
              else {
                if (0x1a < param_2) {
                  if (param_2 != (int *)0x31545844) goto LAB_00687a0b;
                  local_8 = ((int)(local_30 + 3) >> 2) << 3;
                  goto LAB_006879fc;
                }
                local_8 = local_30 * 2;
              }
            }
            uVar7 = uVar6 * local_8;
          }
          else if (((param_2 == (int *)0x33545844) || (param_2 == (int *)0x34545844)) ||
                  (param_2 == (int *)0x35545844)) goto LAB_006879f0;
LAB_00687a0b:
          puVar5[3] = uVar1;
          *puVar5 = (uint)param_2;
          puVar5[4] = uVar2;
          puVar5[1] = (uint)local_1c;
          puVar5[5] = local_30;
          puVar5[2] = local_8;
          puVar5[6] = local_2c;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          if (param_3 < uVar7) {
            return 0x80004005;
          }
          local_1c = (int *)((int)local_1c + uVar7);
          param_3 = param_3 - uVar7;
          if (local_30 == 1) {
            local_30 = 1;
          }
          else {
            local_30 = (int)local_30 >> 1;
          }
          if (local_2c == 1) {
            local_2c = 1;
          }
          else {
            local_2c = (int)local_2c >> 1;
          }
          local_c = local_c + 1;
          local_18 = puVar5;
        } while (local_c < local_20);
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_24);
  }
  return 0;
}

