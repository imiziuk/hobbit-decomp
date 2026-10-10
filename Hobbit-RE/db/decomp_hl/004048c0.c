
void __thiscall FUN_004048c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceadb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_00647cf0();
    if (0 < iVar2) {
      piVar1 = (int *)(param_1 + 0xc);
      FUN_00549580();
      FUN_00549430(piVar1);
      iVar2 = FUN_00549470();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 8) == 0) {
          pvVar3 = operator_new(0x80);
          local_4 = 0;
          if (pvVar3 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0053b4d0();
          }
          local_4 = 0xffffffff;
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
        FUN_005492b0(&stack0xffffffe4,0);
        if (*piVar1 < 0) {
          FUN_00549470(&stack0xffffffe4);
        }
        uVar4 = FUN_00549620(piVar1);
        FUN_00549670(&stack0xffffffe4,uVar4);
        FUN_0053b5f0();
        FUN_0053b700(0);
        FUN_00549580();
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_00549580();
      ExceptionList = local_c;
      return;
    }
  }
  FUN_00549430(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

