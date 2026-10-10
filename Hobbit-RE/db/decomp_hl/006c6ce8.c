
int FUN_006c6ce8(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPSTR param_5,int param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  LCID LStack_84;
  uint uStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  LPCSTR pCStack_64;
  int iStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fdb00;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_00815f4c == 0) {
    iStack_58 = 0x6c6d30;
    ExceptionList = &local_14;
    iVar1 = (*(code *)PTR_FUN_0075b2e4)();
    if (iVar1 == 0) {
      iStack_58 = 0x6c6d4c;
      iVar1 = LCMapStringA(0,0x100,&DAT_0075cec0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_00815f4c = 2;
    }
    else {
      DAT_00815f4c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_006cbe40();
  }
  if (DAT_00815f4c == 2) {
    iStack_58 = 0x6c6d95;
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_00815f4c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_00815f44;
    }
    iStack_58 = 0x6c6dcd;
    iVar1 = (*(code *)PTR_FUN_0075b2e8)();
    if (iVar1 != 0) {
      local_8 = 0;
      iStack_58 = 0x6c6dea;
      FUN_006c04f0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 != (undefined1 *)0x54) {
        iStack_60 = param_4;
        pCStack_64 = param_3;
        uStack_68 = 1;
        iStack_6c = param_7;
        uStack_70 = 0x6c6e25;
        puStack_5c = &stack0xffffffac;
        iStack_58 = iVar1;
        iVar2 = (*(code *)PTR_FUN_0075b2e8)();
        if (iVar2 != 0) {
          uStack_70 = 0;
          uStack_74 = 0;
          uStack_80 = param_2;
          LStack_84 = param_1;
          puStack_7c = &stack0xffffffac;
          iStack_78 = iVar1;
          iVar2 = (*(code *)PTR_FUN_0075b2e4)();
          if (iVar2 != 0) {
            if ((param_2 & 0x400) == 0) {
              local_8 = 1;
              FUN_006c04f0();
              local_8 = 0xffffffff;
              if (&stack0x00000000 == (undefined1 *)0x84) {
                ExceptionList = local_14;
                return 0;
              }
              iVar1 = (*(code *)PTR_FUN_0075b2e4)
                                (param_1,param_2,&stack0xffffffac,iVar1,&LStack_84,iVar2);
              if (iVar1 == 0) {
                ExceptionList = local_14;
                return 0;
              }
              if (param_6 == 0) {
                param_6 = 0;
                param_5 = (LPSTR)0x0;
              }
              iVar2 = (*(code *)PTR_FUN_0075b2ec)
                                (param_7,0x220,&LStack_84,iVar2,param_5,param_6,0,0);
              iVar1 = iVar2;
            }
            else {
              if (param_6 == 0) {
                ExceptionList = local_14;
                return iVar2;
              }
              if (param_6 < iVar2) {
                ExceptionList = local_14;
                return 0;
              }
              iVar1 = (*(code *)PTR_FUN_0075b2e4)
                                (param_1,param_2,&stack0xffffffac,iVar1,param_5,param_6);
            }
            if (iVar1 != 0) {
              ExceptionList = local_14;
              return iVar2;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

