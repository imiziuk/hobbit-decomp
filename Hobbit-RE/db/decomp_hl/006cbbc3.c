
int FUN_006cbbc3(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                int param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int aiStack_98 [2];
  byte *pbStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  byte *pbStack_78;
  int iStack_74;
  undefined1 *puStack_70;
  int iStack_6c;
  uint local_40;
  byte local_3a [14];
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fdbf0;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffb0;
  if (DAT_008160a8 == 0) {
    iStack_6c = 0x6cbc07;
    ExceptionList = &local_14;
    iVar3 = (*(code *)PTR_FUN_0075b2bc)();
    if (iVar3 == 0) {
      iStack_6c = 0x6cbc24;
      iVar3 = CompareStringA(0,0,&DAT_0075cec0,1,&DAT_0075cec0,1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_008160a8 = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_008160a8 = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_006cbe40();
  }
  if (0 < param_6) {
    param_6 = FUN_006cbe40();
  }
  if (DAT_008160a8 == 2) {
    iStack_6c = 0x6cbc82;
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar3;
  }
  if (DAT_008160a8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_00815f44;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      iVar3 = (*(code *)PTR_FUN_0075b2cc)();
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (local_40 < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pbVar4 = local_3a;
        while( true ) {
          if (local_3a[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pbVar4[1] == 0) break;
          if ((*pbVar4 <= *param_3) && (*param_3 <= pbVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pbVar4 = pbVar4 + 2;
          local_3a[0] = *pbVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (local_40 < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pbVar4 = local_3a;
        while( true ) {
          if (local_3a[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pbVar4[1] == 0) break;
          if ((*pbVar4 <= *param_5) && (*param_5 <= pbVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pbVar4 = pbVar4 + 2;
          local_3a[0] = *pbVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    iStack_6c = 0x6cbd52;
    local_20 = (*(code *)PTR_FUN_0075b2e8)();
    if (local_20 != 0) {
      local_8 = 0;
      iStack_6c = 0x6cbd6c;
      FUN_006c04f0();
      puVar1 = PTR_FUN_0075b2e8;
      local_8 = 0xffffffff;
      if (&stack0x00000000 != (undefined1 *)0x68) {
        iStack_6c = local_20;
        pbStack_78 = param_3;
        uStack_7c = 1;
        iStack_80 = param_7;
        uStack_84 = 0x6cbdaf;
        iStack_74 = param_4;
        puStack_70 = &stack0xffffff98;
        local_28 = &stack0xffffff98;
        local_1c = &stack0xffffff98;
        iVar3 = (*(code *)PTR_FUN_0075b2e8)();
        if (iVar3 != 0) {
          uStack_84 = 0;
          uStack_88 = 0;
          iStack_8c = param_6;
          pbStack_90 = param_5;
          aiStack_98[1] = 9;
          aiStack_98[0] = param_7;
          iVar3 = (*(code *)puVar1)();
          if (iVar3 != 0) {
            local_8 = 1;
            local_24 = iVar3;
            FUN_006c04f0();
            local_8 = 0xffffffff;
            if ((&stack0x00000000 != (undefined1 *)0x98) &&
               (local_2c = (undefined1 *)aiStack_98, local_1c = (undefined1 *)aiStack_98,
               iVar5 = (*(code *)PTR_FUN_0075b2e8)(param_7,1,param_5,param_6,aiStack_98,iVar3),
               iVar5 != 0)) {
              iVar3 = (*(code *)PTR_FUN_0075b2bc)
                                (param_1,param_2,local_28,local_20,aiStack_98,iVar3);
              ExceptionList = local_14;
              return iVar3;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

