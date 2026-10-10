
undefined4 __thiscall FUN_0047c0e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar4 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d21b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_2,s__s_FxObject_00728314,param_2);
  uStack_4 = 0;
  uVar2 = FUN_00649940();
  uVar1 = param_3;
  iVar3 = FUN_00647e40(param_3,uVar2);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if ((*param_4 == 0xf) || (*param_4 == 0x10)) {
      *(int *)(param_1 + 0x20) = param_4[0x90];
      *(int *)(param_1 + 0x24) = param_4[0x91];
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00649920(&param_3,s__s_Expire_00728308,uVar4);
    uStack_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar1,uVar2);
    uStack_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_4 == 2) {
        *(int *)(param_1 + 0x28) = param_4[0x94];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = FUN_00474b30(uVar4,uVar1,param_4);
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

