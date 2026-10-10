
void __thiscall FUN_004c7010(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d498b;
  local_c = ExceptionList;
  iVar1 = param_1 + 0x13c;
  ExceptionList = &local_c;
  FUN_00549430(iVar1,param_2);
  FUN_005493e0(iVar1);
  pcVar2 = (char *)FUN_005493e0(iVar1);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = &DAT_0075b6e0;
  }
  if (*pcVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x140);
    if (iVar1 != 0) {
      FUN_0053b590();
      FUN_006bf840(iVar1);
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  else if (*(int *)(param_1 + 0x140) == 0) {
    pvVar3 = operator_new(0xa0);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      FUN_0053b4d0();
    }
    *(void **)(param_1 + 0x140) = pvVar3;
    *(undefined4 *)((int)pvVar3 + 0x80) = 0x3f800000;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x84) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x90) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x94) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x88) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x98) = 0xffffffff;
    local_4 = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x9c) = 0xffffffff;
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
  }
  FUN_004c7930();
  ExceptionList = local_c;
  return;
}

