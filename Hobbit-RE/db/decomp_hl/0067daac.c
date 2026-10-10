
undefined4
FUN_0067daac(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,int *param_6,
            uint param_7,int param_8)

{
  int *in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_138 [10];
  undefined4 local_110;
  undefined4 local_10c;
  uint local_d4;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_a8;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int local_20;
  uint local_1c [6];
  
  if (in_EAX == (int *)0x0) {
    return 0x8876086c;
  }
  if (param_5 == 0xffffffff) {
    param_5 = 0;
  }
  if (param_5 != (param_5 & 3)) {
    return 0x8876086c;
  }
  if ((param_8 == 2) && ((param_5 & 3) != 0)) {
    return 0x8876086c;
  }
  if (((param_7 != 0) && (param_7 != 1)) && (param_7 != 2)) {
    return 0x8876086c;
  }
  (**(code **)(*in_EAX + 0x18))();
  (**(code **)(*in_EAX + 0x1c))();
  (**(code **)(*in_EAX + 0x20))();
  if (param_1 == (uint *)0x0) {
    param_7 = 0xffffffff;
  }
  else {
    param_7 = *param_1;
  }
  if (param_2 == (uint *)0x0) {
    local_1c[5] = 0xffffffff;
  }
  else {
    local_1c[5] = *param_2;
  }
  if (param_3 == (uint *)0x0) {
    local_1c[4] = 0xffffffff;
  }
  else {
    local_1c[4] = *param_3;
  }
  if (param_7 == 0xffffffff) {
    param_7 = local_1c[5];
    if (local_1c[5] != 0xffffffff) goto LAB_0067db79;
    uVar4 = 0x100;
    param_7 = 0x100;
LAB_0067db8b:
    local_1c[5] = uVar4;
  }
  else {
    if (local_1c[5] == 0xffffffff) {
      local_1c[5] = param_7;
    }
LAB_0067db79:
    uVar4 = 1;
    if (param_7 == 0) {
      param_7 = 1;
    }
    if (local_1c[5] == 0) goto LAB_0067db8b;
  }
  uVar6 = 1;
  uVar4 = param_7;
  if ((param_8 == 1) && (uVar4 = local_1c[5], local_1c[5] < param_7)) {
    local_1c[5] = param_7;
    uVar4 = local_1c[5];
  }
  param_7 = uVar4;
  if ((local_1c[4] == 0xffffffff) || (local_1c[4] == 0)) {
    local_1c[4] = 1;
  }
  if (param_8 == 2) {
    if (local_b0 < local_1c[4]) {
      local_1c[4] = local_b0;
    }
    if (local_b0 < param_7) {
      param_7 = local_b0;
    }
  }
  else {
    if (local_b8 < param_7) {
      param_7 = local_b8;
    }
    if (local_b4 < local_1c[5]) {
      local_1c[5] = local_b4;
    }
    if (param_8 != 0) goto LAB_0067dc2a;
    if ((local_d4 & 0x20) != 0) {
      local_a8 = 1;
    }
    if (local_a8 == 0) goto LAB_0067dc2a;
    if (local_a8 * local_1c[5] < param_7) {
      param_7 = local_a8 * local_1c[5];
    }
    local_b0 = local_a8 * param_7;
  }
  if (local_b0 < local_1c[5]) {
    local_1c[5] = local_b0;
  }
LAB_0067dc2a:
  uVar2 = local_1c[5];
  uVar1 = local_1c[4];
  uVar4 = param_7;
  local_1c[0] = 2;
  local_28 = param_8 * 4;
  local_1c[1] = 0x20000;
  local_1c[2] = 0x40000;
  if ((local_1c[param_8] & local_d4) != 0) {
    param_7 = 1;
    if (1 < uVar4) {
      do {
        param_7 = param_7 << 1;
      } while (param_7 < uVar4);
    }
    local_1c[5] = 1;
    uVar4 = uVar6;
    if (1 < uVar2) {
      do {
        uVar4 = uVar4 << 1;
      } while (uVar4 < uVar2);
      local_1c[5] = uVar4;
    }
    local_1c[4] = 1;
    if (1 < uVar1) {
      do {
        uVar6 = uVar6 << 1;
      } while (uVar6 < uVar1);
      local_1c[4] = uVar6;
    }
  }
  if ((param_6 != (int *)0x0) &&
     ((((iVar3 = *param_6, iVar3 == 0x31545844 || (iVar3 == 0x32545844)) || (iVar3 == 0x33545844))
      || ((iVar3 == 0x34545844 || (iVar3 == 0x35545844)))))) {
    param_7 = param_7 + 3 & 0xfffffffc;
    local_1c[5] = local_1c[5] + 3 & 0xfffffffc;
  }
  local_1c[0] = 0x4000;
  local_1c[1] = 0x10000;
  local_1c[2] = 0x8000;
  if (param_4 == (uint *)0x0) {
    local_1c[3] = 0xffffffff;
  }
  else {
    local_1c[3] = *param_4;
  }
  if ((((local_1c[param_8] & local_d4) == 0) || ((param_7 & param_7 - 1) != 0)) ||
     (((local_1c[5] & local_1c[5] - 1) != 0 || ((local_1c[4] & local_1c[4] - 1) != 0)))) {
    local_1c[3] = 1;
  }
  else {
    uVar4 = 1;
    for (uVar6 = param_7; (uVar6 != 0 && ((uVar6 & 1) == 0)); uVar6 = uVar6 >> 1) {
      uVar4 = uVar4 + 1;
    }
    uVar6 = 1;
    for (uVar1 = local_1c[5]; (uVar1 != 0 && ((uVar1 & 1) == 0)); uVar1 = uVar1 >> 1) {
      uVar6 = uVar6 + 1;
    }
    uVar1 = 1;
    for (uVar2 = local_1c[4]; (uVar2 != 0 && ((uVar2 & 1) == 0)); uVar2 = uVar2 >> 1) {
      uVar1 = uVar1 + 1;
    }
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if ((param_8 == 2) && (uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    if ((uVar4 < local_1c[3]) || (local_1c[3] == 0)) {
      local_1c[3] = uVar4;
    }
  }
  local_1c[0] = 3;
  local_1c[1] = 5;
  local_1c[2] = 4;
  if (param_6 == (int *)0x0) {
    param_8 = 0;
  }
  else {
    param_8 = *param_6;
  }
  local_20 = 0;
  local_2c = FUN_0067da08(param_8);
  uVar4 = 0xffffffff;
  piVar7 = &DAT_00753528;
  if (&DAT_00753528 < PTR_DAT_007539d8) {
    do {
      if ((piVar7[9] != 0) &&
         (iVar3 = (**(code **)(*local_24 + 0x28))
                            (local_24,local_10c,local_110,local_30,param_5,
                             *(undefined4 *)((int)local_1c + local_28),*piVar7), -1 < iVar3)) {
        iVar3 = *piVar7;
        if (iVar3 == param_8) {
          local_20 = param_8;
          break;
        }
        if (piVar7[8] != 0) {
          uVar6 = FUN_0067da2c();
          if ((uVar6 < uVar4) || ((uVar6 == uVar4 && ((uint)piVar7[2] < (uint)local_138[2])))) {
            piVar8 = piVar7;
            piVar9 = local_138;
            local_20 = iVar3;
            for (iVar5 = 10; uVar4 = uVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar9 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar9 = piVar9 + 1;
            }
          }
        }
      }
      piVar7 = piVar7 + 10;
    } while (piVar7 < PTR_DAT_007539d8);
  }
  (**(code **)(*local_24 + 8))(local_24);
  if (local_20 != 0) {
    if (param_1 != (uint *)0x0) {
      *param_1 = param_7;
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = local_1c[5];
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = local_1c[4];
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_1c[3];
    }
    if (param_6 != (int *)0x0) {
      *param_6 = local_20;
    }
    return 0;
  }
  return 0x8876086a;
}

