
BOOL FUN_006cba7a(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,int param_5,LCID param_6)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iStack_50;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fdbe0;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar4 = DAT_008160a4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_008160a4 == 0) {
    ExceptionList = &local_14;
    iVar2 = (*(code *)PTR_FUN_0075b2dc)();
    iVar4 = 1;
    puVar1 = local_1c;
    if (iVar2 == 0) {
      iStack_50 = 0x6cbad9;
      BVar3 = GetStringTypeA(0,1,&DAT_0075cec0,1,local_20);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar4 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_008160a4 = iVar4;
  if (DAT_008160a4 != 2) {
    if (DAT_008160a4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_00815f44;
      }
      iStack_50 = param_5;
      iVar4 = (*(code *)PTR_FUN_0075b2e8)();
      if (iVar4 != 0) {
        local_8 = 0;
        FUN_006c04f0();
        local_1c = (undefined1 *)&iStack_50;
        _memset(&iStack_50,0,iVar4 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x50) &&
           (iVar4 = (*(code *)PTR_FUN_0075b2e8)(param_5,1,param_2,param_3,&iStack_50,iVar4),
           iVar4 != 0)) {
          BVar3 = (*(code *)PTR_FUN_0075b2dc)(param_1,&iStack_50,iVar4,param_4);
          ExceptionList = local_14;
          return BVar3;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_00815f34;
  }
  iStack_50 = 0x6cbb0d;
  BVar3 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar3;
}

