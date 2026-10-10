
void __fastcall FUN_005c3d30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df5c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if (*(undefined4 **)(param_1 + 0x44) == (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    uVar2 = **(undefined4 **)(param_1 + 0x44);
  }
  FUN_005c41e0(uVar2);
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(int **)(param_1 + 0x44) == (int *)0x0) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar1 = **(int **)(param_1 + 0x44);
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x18))(iVar1);
      FUN_00669cf0(uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

