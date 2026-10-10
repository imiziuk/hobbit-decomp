
void FUN_005c4fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df651;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    if (param_2[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[3] - param_2[2]) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = (undefined4 *)operator_new(iVar2 * 4);
    param_1[2] = puVar3;
    puVar1 = (undefined4 *)param_2[3];
    for (puVar4 = (undefined4 *)param_2[2]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    param_1[3] = puVar3;
    param_1[4] = puVar3;
  }
  ExceptionList = local_c;
  return;
}

