
undefined4 __thiscall
FUN_00569b00(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  uVar4 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f698,param_4,param_5);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
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
    FUN_00649920(&param_4,s_AI_Tweaks_Goal_List__d_Goal__d_P_0073f7ac,uVar4,uVar1);
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_2,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_3 == 2) {
        *(int *)(param_1 + 0x54) = param_3[0x94];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = FUN_00567310(param_2,param_3,uVar4,uVar1);
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

