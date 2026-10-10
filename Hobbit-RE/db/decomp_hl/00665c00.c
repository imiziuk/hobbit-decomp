
void __thiscall
FUN_00665c00(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            uint param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  int local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  FUN_005b6940();
  uVar5 = param_6;
  piVar12 = (int *)(param_1 + 4);
  local_10 = *piVar12;
  if (param_5 == *(int *)(param_1 + 0x10)) {
    uVar11 = (int)param_4 - *(int *)(param_1 + 0xc) >> 2;
  }
  else {
    uVar11 = ((param_5 - *(int *)(param_1 + 0x10) >> 2) + -1) * 0x400 +
             (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 2) +
             ((int)((int)param_4 - param_2) >> 2);
  }
  uVar7 = *(int *)(param_1 + 0x2c) - uVar11;
  param_2 = uVar11;
  if (uVar11 < uVar7) {
    if (uVar11 < param_6) {
      uVar6 = param_6 - uVar11;
      uVar7 = param_6;
      while (param_6 = uVar6, uVar6 = uVar11, param_6 != 0) {
        if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0xc) == *piVar12)) {
          FUN_00666ba0();
        }
        iVar8 = *(int *)(param_1 + 0xc) + -4;
        *(int *)(param_1 + 0xc) = iVar8;
        FUN_00669b80(iVar8,param_7);
        uVar7 = param_6 - 1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        uVar6 = uVar7;
      }
      while (param_6 = uVar6, param_6 != 0) {
        local_10 = *piVar12;
        local_c = *(undefined4 *)(param_1 + 8);
        local_8 = *(undefined4 **)(param_1 + 0xc);
        local_4 = *(undefined4 *)(param_1 + 0x10);
        iVar8 = FUN_00666db0(&local_20,uVar5 - 1);
        param_2 = *(uint *)(iVar8 + 8);
        if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0xc) == *piVar12)) {
          FUN_00666ba0();
        }
        iVar8 = *(int *)(param_1 + 0xc) + -4;
        *(int *)(param_1 + 0xc) = iVar8;
        FUN_00669b80(iVar8,param_2);
        uVar7 = param_6 - 1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        uVar6 = uVar7;
      }
      param_2 = *piVar12;
      param_3 = *(undefined4 *)(param_1 + 8);
      param_4 = *(undefined4 **)(param_1 + 0xc);
      param_5 = *(undefined4 *)(param_1 + 0x10);
      param_6 = uVar7;
      FUN_00669200(uVar5);
      uVar3 = param_5;
      puVar10 = param_4;
      uVar1 = param_3;
      iVar8 = param_2;
      FUN_00669200(uVar11);
      puVar2 = param_4;
      local_4 = param_5;
      local_c = param_3;
      local_10 = param_2;
      local_2c = uVar1;
      local_30 = iVar8;
      local_28 = puVar10;
      local_24 = uVar3;
      if (puVar10 != param_4) {
        do {
          *local_28 = *param_7;
          FUN_006666e0();
        } while (local_28 != puVar2);
        return;
      }
    }
    else {
      if (param_6 != 0) {
        do {
          local_10 = *piVar12;
          local_c = *(undefined4 *)(param_1 + 8);
          local_8 = *(undefined4 **)(param_1 + 0xc);
          local_4 = *(undefined4 *)(param_1 + 0x10);
          iVar8 = FUN_00666db0(&local_20,uVar5 - 1);
          uVar1 = *(undefined4 *)(iVar8 + 8);
          if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0xc) == *piVar12)) {
            FUN_00666ba0();
          }
          iVar8 = *(int *)(param_1 + 0xc) + -4;
          *(int *)(param_1 + 0xc) = iVar8;
          FUN_00669b80(iVar8,uVar1);
          param_6 = param_6 - 1;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        } while (param_6 != 0);
        param_6 = 0;
        uVar11 = param_2;
      }
      param_2 = *piVar12;
      param_3 = *(undefined4 *)(param_1 + 8);
      param_4 = *(undefined4 **)(param_1 + 0xc);
      param_5 = *(undefined4 *)(param_1 + 0x10);
      FUN_00669200(uVar5);
      uVar3 = param_5;
      puVar10 = param_4;
      uVar1 = param_3;
      iVar8 = param_2;
      FUN_00669200(uVar11);
      puVar2 = param_4;
      local_10 = param_2;
      local_4 = param_5;
      local_c = param_3;
      local_30 = iVar8;
      local_28 = puVar10;
      local_2c = uVar1;
      local_24 = uVar3;
      FUN_00669200(uVar5);
      local_20 = iVar8;
      local_1c = uVar1;
      local_14 = uVar3;
      local_18 = puVar10;
      local_10 = local_30;
      local_c = local_2c;
      local_4 = local_24;
      local_8 = local_28;
      while (local_8 != puVar2) {
        *local_18 = *local_8;
        FUN_006666e0();
        FUN_006666e0();
      }
      param_2 = iVar8;
      param_3 = uVar1;
      param_4 = puVar10;
      param_5 = uVar3;
      FUN_00669200(uVar11);
      puVar10 = param_4;
      local_10 = param_2;
      local_30 = *piVar12;
      local_4 = param_5;
      local_28 = *(undefined4 **)(param_1 + 0xc);
      local_c = param_3;
      local_2c = *(undefined4 *)(param_1 + 8);
      local_24 = *(undefined4 *)(param_1 + 0x10);
      FUN_00669200(uVar11);
      puVar2 = param_7;
      local_10 = local_30;
      local_c = local_2c;
      local_8 = local_28;
      local_4 = local_24;
      if (local_28 != puVar10) {
        do {
          *local_8 = *puVar2;
          FUN_006666e0();
        } while (local_8 != puVar10);
        return;
      }
    }
  }
  else if (uVar7 < param_6) {
    for (iVar8 = param_6 - uVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_006660a2:
        FUN_00666a50();
        iVar9 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar9 + 4;
LAB_006660b2:
        FUN_00669b80(iVar9,param_7);
      }
      else {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == *(int *)(param_1 + 0x18)) goto LAB_006660a2;
        *(int *)(param_1 + 0x1c) = iVar9 + 4;
        if (iVar9 + 4 != *(int *)(param_1 + 0x18)) goto LAB_006660b2;
        FUN_00669b80(iVar9,param_7);
        FUN_00666a50();
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    param_6 = 0;
    if (uVar7 != 0) {
      do {
        param_2 = *piVar12;
        param_3 = *(undefined4 *)(param_1 + 8);
        param_4 = *(undefined4 **)(param_1 + 0xc);
        param_5 = *(undefined4 *)(param_1 + 0x10);
        iVar8 = FUN_00666db0(&local_10,param_6 + uVar11);
        uVar1 = *(undefined4 *)(iVar8 + 8);
        if (*(int *)(param_1 + 0x2c) == 0) {
LAB_00666143:
          FUN_00666a50();
          iVar8 = *(int *)(param_1 + 0x1c);
          *(int *)(param_1 + 0x1c) = iVar8 + 4;
LAB_00666155:
          FUN_00669b80(iVar8,uVar1);
        }
        else {
          iVar8 = *(int *)(param_1 + 0x1c);
          if (iVar8 == *(int *)(param_1 + 0x18)) goto LAB_00666143;
          *(int *)(param_1 + 0x1c) = iVar8 + 4;
          if (iVar8 + 4 != *(int *)(param_1 + 0x18)) goto LAB_00666155;
          FUN_00669b80(iVar8,uVar1);
          FUN_00666a50();
        }
        param_6 = param_6 + 1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      } while (param_6 < uVar7);
    }
    param_2 = *piVar12;
    param_4 = *(undefined4 **)(param_1 + 0xc);
    param_3 = *(undefined4 *)(param_1 + 8);
    param_5 = *(undefined4 *)(param_1 + 0x10);
    FUN_00669200(uVar11);
    uVar3 = param_5;
    puVar10 = param_4;
    uVar1 = param_3;
    iVar8 = param_2;
    FUN_00669200(uVar7);
    puVar2 = param_4;
    local_c = uVar1;
    local_10 = iVar8;
    local_8 = puVar10;
    local_4 = uVar3;
    if (puVar10 != param_4) {
      do {
        *local_8 = *param_7;
        FUN_006666e0();
      } while (local_8 != puVar2);
      return;
    }
  }
  else {
    if (param_6 != 0) {
      iVar8 = (uVar7 - param_6) + uVar11;
      do {
        local_10 = *piVar12;
        local_c = *(undefined4 *)(param_1 + 8);
        local_8 = *(undefined4 **)(param_1 + 0xc);
        local_4 = *(undefined4 *)(param_1 + 0x10);
        iVar9 = FUN_00666db0(&local_20,iVar8);
        FUN_006663f0(*(undefined4 *)(iVar9 + 8));
        iVar8 = iVar8 + 1;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
      param_6 = 0;
    }
    param_4 = *(undefined4 **)(param_1 + 0xc);
    param_3 = *(undefined4 *)(param_1 + 8);
    param_5 = *(undefined4 *)(param_1 + 0x10);
    uVar11 = param_2;
    param_2 = *piVar12;
    FUN_00669200(uVar11);
    uVar4 = param_5;
    uVar3 = param_4;
    uVar1 = param_3;
    iVar8 = param_2;
    FUN_00669200(uVar7);
    piVar12 = &local_10;
    uVar11 = uVar5;
    FUN_00666db0(&local_20,uVar7);
    puVar10 = (undefined4 *)FUN_00668060(piVar12,uVar11);
    FUN_00669b00(&local_30,iVar8,uVar1,uVar3,uVar4,*puVar10,puVar10[1],puVar10[2],puVar10[3],param_2
                 ,param_3,param_4,param_5);
    puVar10 = (undefined4 *)FUN_00666db0(&param_2,uVar5);
    FUN_00669ac0(iVar8,uVar1,uVar3,uVar4,*puVar10,puVar10[1],puVar10[2],puVar10[3],param_7);
  }
  return;
}

