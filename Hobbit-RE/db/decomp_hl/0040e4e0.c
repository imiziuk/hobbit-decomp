
void __thiscall FUN_0040e4e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ced38;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x28) == 0) || (param_2 != 0)) &&
     ((*(int *)(param_1 + 0x2c) == 0 || (param_2 == 0)))) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(int *)(param_1 + 0x2c) = param_2;
    iVar3 = 0;
    do {
      FUN_00649920(&param_2,s_ForgeBright00_i_0071e6ac,iVar3);
      uVar4 = 0;
      local_4 = 0;
      uVar1 = FUN_00649940(0);
      piVar2 = (int *)FUN_0054c0f0(uVar1,uVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x110))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  ExceptionList = local_c;
  return;
}

