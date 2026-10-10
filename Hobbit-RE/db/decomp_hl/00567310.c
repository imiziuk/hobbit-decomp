
undefined4 __thiscall
FUN_00567310(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_5,s_AI_Tweaks_Goal_List__d_Goal__d_M_0073f554,param_4,param_5);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if ((iVar2 == 0) && (*param_3 == 3)) {
    *(uint *)(param_1 + 4) =
         (param_3[0x95] << 1 ^ *(uint *)(param_1 + 4)) & 2 ^ *(uint *)(param_1 + 4);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

