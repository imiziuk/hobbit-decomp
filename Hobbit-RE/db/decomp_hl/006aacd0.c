
int __thiscall FUN_006aacd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e80da;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  iVar2 = FUN_00647cf0(param_2);
  pvVar3 = operator_new(iVar2 + 1);
  FUN_00647d10(pvVar3,param_2);
  iVar2 = *(int *)(param_1 + 8);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar6 = *(int *)(iVar1 + 4 + iVar5 * 4) + 4 + iVar2 * 4 + *(int *)(param_1 + 4);
      puVar4 = (undefined4 *)FUN_0064b130(pvVar3);
      local_4 = 0;
      iVar2 = FUN_006482d0(iVar6,*puVar4);
      local_4 = 0xffffffff;
      FUN_0064b190();
      if (iVar2 == 0) {
        FUN_006480e0(iVar6);
        ExceptionList = local_c;
        return iVar5;
      }
      iVar2 = *(int *)(param_1 + 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  ExceptionList = local_c;
  return -1;
}

