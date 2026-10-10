
void __fastcall FUN_005aea00(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006de548;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  piVar1 = (int *)FUN_005aecb0();
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))();
    }
    *(int **)(param_1 + 0xbc) = piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

