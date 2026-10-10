
void __thiscall FUN_00525510(int param_1,int param_2)

{
  void **ppvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7bb8;
  local_c = ExceptionList;
  if (param_2 == *(int *)(param_1 + 0x158)) {
    ExceptionList = &local_c;
    FUN_00659600(s_OptionSelect_00723150,1);
    iVar2 = FUN_006a4c80();
    if (iVar2 != -1) {
      uVar3 = FUN_006a4c40();
      FUN_0064b170(uVar3);
      iVar2 = 0;
      iVar5 = 0;
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0x1b0)) {
        do {
          iVar4 = FUN_00648280(local_58,*(undefined4 *)(iVar2 + 0x10 + *(int *)(param_1 + 0x1b4)));
          if (iVar4 == 0) {
            FUN_00525730(iVar5 * 0x5c + *(int *)(param_1 + 0x1b4));
            FUN_00525890();
            break;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x5c;
        } while (iVar5 < *(int *)(param_1 + 0x1b0));
      }
      local_4 = 0xffffffff;
      FUN_0064b190();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x160)) {
      ExceptionList = &local_c;
      FUN_00525b90();
      ppvVar1 = (void **)ExceptionList;
    }
    else {
      if (param_2 == *(int *)(param_1 + 0x15c)) {
        ExceptionList = &local_c;
        FUN_00659600(s_OptionSelect_00723150,1);
        FUN_00525af0();
        if (*(int *)(param_1 + 0x178) != 0) {
          FUN_006a58d0(1);
        }
        FUN_006608d0(0x3f800000);
        FUN_00660a00();
        uVar3 = __ftol();
        FUN_006a5e90(uVar3);
        ExceptionList = local_c;
        return;
      }
      ppvVar1 = &local_c;
      if (param_2 != *(int *)(param_1 + 0x170)) {
        return;
      }
    }
    ExceptionList = ppvVar1;
    FUN_00659600(s_OptionSelect_00723150,1);
  }
  ExceptionList = local_c;
  return;
}

