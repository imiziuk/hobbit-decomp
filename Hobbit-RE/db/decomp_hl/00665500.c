
void __fastcall FUN_00665500(int param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e667b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x260c) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2604));
  }
  if (*(int *)(param_1 + 0x25f0) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x25e8));
  }
  FUN_006c026a(param_1 + 100,0x480,8,FUN_00671570);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840(iVar2 + -2);
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  ExceptionList = local_c;
  return;
}

