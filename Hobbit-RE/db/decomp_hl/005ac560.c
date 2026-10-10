
undefined4 __thiscall FUN_005ac560(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de05f;
  local_c = ExceptionList;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = *(int *)**(int **)(param_1 + 0xc);
    ExceptionList = &local_c;
    FUN_00649b60((int *)**(int **)(param_1 + 0xc) + 1);
    iVar4 = 1;
    local_4 = 1;
    if (1 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(param_1 + 0xc);
        iVar3 = iVar3 + **(int **)(iVar1 + iVar4 * 4);
        iVar2 = FUN_00647b10(1,iVar3);
        if (iVar2 <= **(int **)(iVar1 + iVar4 * 4)) {
          FUN_0064a320(*(int *)(*(int *)(param_1 + 0xc) + iVar4 * 4) + 4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_00649b60(local_38);
    local_4 = local_4 & 0xffffff00;
    FUN_00649ba0();
    ExceptionList = local_c;
    return param_2;
  }
  ExceptionList = &local_c;
  FUN_00649b20(&DAT_00720670);
  ExceptionList = local_c;
  return param_2;
}

