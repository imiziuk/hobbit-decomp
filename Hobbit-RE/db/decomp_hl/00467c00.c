
int __thiscall FUN_00467c00(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  int in_stack_00000030;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d0d68;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uVar4 = 1;
  if (in_stack_00000030 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_00659600(param_2,1);
  }
  else {
    ExceptionList = &pvStack_c;
    uVar1 = (**(code **)(*param_1 + 0x28))();
    iVar2 = FUN_00659630(param_2,uVar1,uVar4);
  }
  param_1[0x3c] = iVar2;
  fVar3 = (float10)FUN_00658020(iVar2);
  FUN_0054e780(param_2,(float)fVar3,1);
  if (0 < param_1[0x3c]) {
    (**(code **)(*param_1 + 0xf4))(0,0);
    (**(code **)(*param_1 + 0xfc))(param_1[0x3c]);
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return iVar2;
}

