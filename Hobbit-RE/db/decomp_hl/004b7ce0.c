
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b7ce0(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_84;
  uint local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 local_4c;
  undefined4 local_4b;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4498;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)(param_2 + 0x30);
  ExceptionList = &pvStack_c;
  param_1[0x5c] = iVar2;
  iVar6 = *(int *)(param_2 + 0x34);
  param_1[0x5d] = iVar6;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar2 = FUN_00406ce0(iVar2,iVar6);
  local_4 = 0xffffffff;
  if (iVar2 == -1) {
    FUN_00649720();
    local_84 = 0;
  }
  else {
    local_84 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
    local_84 = -(uint)((*(byte *)(local_84 + 0x7f) & 0x10) != 0) & local_84;
    FUN_00649720();
  }
  iVar2 = param_1[0x60];
  if (*(int *)(&DAT_0075d4a4 + iVar2 * 0x24) != 0) {
    if ((iVar2 == 0x17) || (iVar2 == 0x18)) {
      iVar2 = FUN_0041bcc0();
      local_4c = 0;
      puVar4 = &local_4b;
      for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      uVar3 = 0;
      if (*(int *)(iVar2 + 0x3d0) == 0) {
        iVar2 = FUN_0041bcc0();
        if (*(int *)(iVar2 + 0x3c0) != 0) {
          FUN_004272d0();
          goto LAB_004b7e19;
        }
      }
      else {
        FUN_00427320();
LAB_004b7e19:
        uVar3 = __ftol();
      }
      FUN_00649920(&local_80,*(undefined4 *)(&DAT_0075d4a4 + param_1[0x60] * 0x24),uVar3);
      local_4 = 1;
      uVar3 = FUN_00649940();
      FUN_00647d10(&local_4c,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      uVar7 = 1;
      uVar3 = (**(code **)(*param_1 + 0x28))(1);
      FUN_00659630(&local_4c,uVar3,uVar7);
    }
    else {
      uVar7 = 1;
      uVar3 = (**(code **)(*param_1 + 0x28))(1);
      FUN_00659630(*(undefined4 *)(&DAT_0075d4a4 + param_1[0x60] * 0x24),uVar3,uVar7);
    }
  }
  iVar2 = param_1[0x60];
  if (*(int *)(&DAT_0075d4a8 + iVar2 * 0x24) != 0) {
    if ((iVar2 == 0x17) || (iVar2 == 0x18)) {
      iVar2 = FUN_0041bcc0();
      local_4c = 0;
      puVar4 = &local_4b;
      for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      uVar3 = 0;
      if (*(int *)(iVar2 + 0x3d0) == 0) {
        iVar2 = FUN_0041bcc0();
        if (*(int *)(iVar2 + 0x3c0) != 0) {
          FUN_004272d0();
          goto LAB_004b7f52;
        }
      }
      else {
        FUN_00427320();
LAB_004b7f52:
        uVar3 = __ftol();
      }
      FUN_00649920(&local_80,*(undefined4 *)(&DAT_0075d4a8 + param_1[0x60] * 0x24),uVar3);
      local_4 = 2;
      uVar3 = FUN_00649940();
      FUN_00647d10(&local_4c,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      uStack_64 = 0x3f800000;
      uStack_60 = 0x3f800000;
      uStack_5c = 0x3f800000;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uVar3 = (**(code **)(*param_1 + 0x28))(&uStack_70,&uStack_64);
      FUN_00488d30(&local_4c,uVar3);
    }
    else {
      uStack_70 = 0x3f800000;
      uStack_6c = 0x3f800000;
      uStack_68 = 0x3f800000;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uVar3 = (**(code **)(*param_1 + 0x28))(&uStack_64,&uStack_70);
      FUN_00488d30(*(undefined4 *)(&DAT_0075d4a8 + param_1[0x60] * 0x24),uVar3);
    }
  }
  if ((((local_84 != 0) && (*(char *)(local_84 + 0x7c) == '3')) &&
      ((iVar2 = param_1[0x60], iVar2 == 0x19 ||
       (((iVar2 == 0x1a || (iVar2 == 0x1b)) || (iVar2 == 0x1c)))))) &&
     (iVar2 = FUN_004d2f40(), iVar2 != 0)) {
    FUN_004d2f50();
  }
  if (param_1[0x61] == 6) {
    param_1[0x57] = 0;
  }
  if (param_1[0x61] != 0) {
    if (local_84 == 0) {
      ExceptionList = pvStack_c;
      return 1;
    }
    if ((*(uint *)(local_84 + 0x10) & param_1[0x55]) == 0) goto LAB_004b8065;
  }
  param_1[0x5a] = 1;
LAB_004b8065:
  if (local_84 != 0) {
    iVar2 = param_1[0x60];
    if (((iVar2 == 0x19) || (iVar2 == 0x1a)) || ((iVar2 == 0x1b || (iVar2 == 0x1c)))) {
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
      _DAT_007ba708 = *puVar4;
      _DAT_007ba70c = puVar4[1];
      _DAT_007ba710 = puVar4[2];
      _DAT_007ba738 = 1;
    }
    if (param_1[0x60] == 0xe) {
      local_80 = (uint)*(byte *)(local_84 + 0x7c);
      fVar1 = (float)local_80;
      if (((NAN(fVar1) || NAN(_DAT_006ee600)) == (fVar1 == _DAT_006ee600)) &&
         ((NAN(fVar1) || NAN(_DAT_006e92f4)) == (fVar1 == _DAT_006e92f4))) {
        if ((*(byte *)(local_84 + 0x10) & 0x50) != 0) {
          param_1[0x5a] = 0;
          ExceptionList = pvStack_c;
          return 0;
        }
      }
      else if (*(float *)(param_2 + 0x14) < _DAT_006e936c !=
               (NAN(*(float *)(param_2 + 0x14)) || NAN(_DAT_006e936c))) {
        fStack_74 = (float)param_1[0x62];
        fStack_50 = *(float *)(param_2 + 0x18) * _DAT_006e9550;
        local_7c = *(float *)(param_2 + 0x10) * _DAT_006e9550 * fStack_74;
        fStack_78 = *(float *)(param_2 + 0x14) * _DAT_006e9550 * fStack_74;
        fStack_74 = fStack_50 * fStack_74;
        pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
        fStack_50 = fStack_74 + pfVar5[2];
        fStack_54 = fStack_78 + pfVar5[1];
        fStack_58 = local_7c + *pfVar5;
        (**(code **)(*param_1 + 0x14))(&fStack_58,0);
        param_1[0x5a] = 0;
        ExceptionList = pvStack_c;
        return 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

