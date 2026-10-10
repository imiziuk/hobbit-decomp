
undefined4 __thiscall
FUN_0056a730(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar3 = param_5;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006db4b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_M_0073f820,param_4,param_5);
  uStack_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if ((*param_3 == 1) || (*param_3 == 0xc)) {
      *(int *)(param_1 + 0xc) = param_3[0x93];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_00567310(param_2,param_3,param_4,uVar3);
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

