
undefined4 __thiscall FUN_00635bf0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar3 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e57b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00647e40(param_2,s_Flee_State_Flee_NavPoint_0074a608);
  if (iVar1 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Flee_NavPoint_0074a5f4,*(undefined4 *)(param_1 + 0x10));
    uStack_4 = 0;
    uVar2 = FUN_00649940();
    iVar1 = FUN_00647e40(uVar3,uVar2);
    uStack_4 = 0xffffffff;
    FUN_00649950();
    if (iVar1 != 0) {
      uVar3 = FUN_005bf900(uVar3,param_3);
      ExceptionList = pvStack_c;
      return uVar3;
    }
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  *(int *)(param_1 + 0x48) = param_3[0x90];
  *(int *)(param_1 + 0x4c) = param_3[0x91];
  ExceptionList = pvStack_c;
  return 1;
}

