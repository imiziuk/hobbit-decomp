
undefined4 FUN_0047d680(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d23b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_1,s__s_Trigger_Name_00728470,param_1);
  uStack_4 = 0;
  uVar2 = FUN_00649940();
  uVar1 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if ((*param_3 == 0xd) || (*param_3 == 4)) {
      FUN_0064a2e0(param_3 + 2);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = FUN_00474b30(uVar4,uVar1,param_3);
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

