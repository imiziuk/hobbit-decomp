
int FUN_0067e3a0(int *param_1,int *param_2,uint param_3,int param_4,int param_5,uint param_6,
                undefined4 param_7,uint param_8,uint param_9,int param_10,uint param_11,
                uint param_12,int param_13,uint *param_14,undefined4 *param_15)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_440 [256];
  uint local_40 [5];
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_006861bc();
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == 0)) ||
     (param_15 == (undefined4 *)0x0)) {
    iVar6 = -0x7789f794;
LAB_0067e3f0:
    FUN_006861d5();
    return iVar6;
  }
  iVar6 = FUN_00687abe(param_2,param_3,param_13);
  uVar4 = param_12;
  if (iVar6 < 0) goto LAB_0067e3f0;
  param_3 = 1;
  for (; local_18 != 0; local_18 = *(int *)(local_18 + 0x28)) {
    param_3 = param_3 + 1;
  }
  if ((param_4 == 0) || (param_4 == -1)) {
    param_4 = local_2c;
  }
  if ((param_5 == 0) || (param_5 == -1)) {
    param_5 = local_28;
  }
  if (param_8 == 0) {
    if (param_12 == 0) {
      param_8 = 0x16;
      if (local_40[0] != 0x14) {
LAB_0067e48f:
        param_8 = local_40[0];
      }
    }
    else {
      if (local_40[0] != 0x14) {
        if ((int)local_40[0] < 0x16) goto LAB_0067e48f;
        if (0x17 < (int)local_40[0]) {
          if (((local_40[0] == 0x18) || (local_40[0] == 0x1b)) || (local_40[0] == 0x1e)) {
            param_8 = 0x19;
          }
          else {
            if (local_40[0] != 0x32) goto LAB_0067e48f;
            param_8 = 0x33;
          }
          goto LAB_0067e492;
        }
      }
      param_8 = 0x15;
    }
  }
LAB_0067e492:
  if (param_10 == -1) {
    iVar6 = FUN_0067da08(local_40[0]);
    param_10 = (uint)(*(int *)(iVar6 + 4) != 3) * 2 + 0x80002;
  }
  if (param_11 == 0xffffffff) {
    iVar6 = FUN_0067da08(local_40[0]);
    param_11 = ((*(int *)(iVar6 + 4) != 3) - 1 & 0xfffffffd) + 5;
  }
  if ((((char)param_10 == '\x01') || ((param_11 & 0xff) == 2)) ||
     (param_13 = 0, (param_11 & 0xff) == 5)) {
    param_13 = 1;
  }
  if (local_24 == 0) {
    puVar7 = local_440;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(local_24 + uVar5 * 4);
      if (uVar1 == (param_12 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00ff00)) {
        local_440[uVar5] = 0;
      }
      else {
        local_440[uVar5] = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x100);
    param_12 = 0;
  }
  if (param_14 == (uint *)0x0) {
    if (param_8 == 0x28) {
LAB_0067e5a2:
      param_8 = 0x15;
    }
    else if (param_8 == 0x29) {
      uVar4 = 0;
      param_8 = 0x16;
      pcVar3 = (char *)(local_24 + 3);
      do {
        if (*pcVar3 != -1) goto LAB_0067e5a2;
        uVar4 = uVar4 + 1;
        pcVar3 = pcVar3 + 4;
      } while (uVar4 < 0x100);
    }
  }
  else {
    puVar7 = local_440;
    puVar8 = param_14;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  iVar6 = FUN_0067e0c4(param_1,&param_4,&param_5,&param_6,param_7,&param_8,param_9);
  if ((-1 < iVar6) &&
     (iVar6 = (**(code **)(*param_1 + 0x50))
                        (param_1,param_4,param_5,param_6,param_7,param_8,param_9,&local_c),
     -1 < iVar6)) {
    param_2 = local_c;
    param_9 = (uint)(param_9 == 0);
    if (param_9 != 0) {
      iVar6 = (**(code **)(*param_1 + 0x50))(param_1,param_4,param_5,param_6,0,param_8,2,&local_10);
      if (iVar6 < 0) goto LAB_0067e706;
      param_2 = local_10;
    }
    param_8 = 0;
    puVar7 = local_40;
    if (param_3 != 0) {
      while (param_8 < param_6) {
        iVar6 = (**(code **)(*param_2 + 0x3c))(param_2,param_8,&local_8);
        if (iVar6 < 0) goto LAB_0067e706;
        iVar6 = FUN_0067de8e(local_8,param_14,0,puVar7[1],*puVar7,puVar7[2],local_440,puVar7 + 3,
                             param_10,param_12);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if (iVar6 < 0) goto LAB_0067e706;
        param_8 = param_8 + 1;
        if (param_3 <= param_8) break;
        puVar7 = (uint *)puVar7[10];
      }
    }
    if (param_13 == 0) {
      for (; param_8 < param_6; param_8 = param_8 + 1) {
        iVar6 = (**(code **)(*param_2 + 0x3c))(param_2,param_8,&local_8);
        if (iVar6 < 0) goto LAB_0067e706;
        iVar6 = FUN_0067de8e(local_8,param_14,0,puVar7[1],*puVar7,puVar7[2],local_440,puVar7 + 3,
                             param_11,param_12);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if (iVar6 < 0) goto LAB_0067e706;
      }
    }
    else if ((param_3 < param_6) &&
            (iVar6 = FUN_0067e26f(param_2,local_440,param_3 - 1,param_11), iVar6 < 0))
    goto LAB_0067e706;
    if ((param_9 == 0) ||
       (iVar6 = (**(code **)(*param_1 + 0x74))(param_1,local_10,local_c), -1 < iVar6)) {
      piVar2 = local_c;
      local_c = (int *)0x0;
      *param_15 = piVar2;
      iVar6 = 0;
    }
  }
LAB_0067e706:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  FUN_006861d5();
  return iVar6;
}

