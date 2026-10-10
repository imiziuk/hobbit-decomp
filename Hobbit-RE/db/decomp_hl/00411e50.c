
void __fastcall FUN_00411e50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cee3b;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x7c);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x18) != 2) && (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) {
    FUN_006c026a(iVar2,0x28,*(undefined4 *)(iVar2 + -4),&LAB_006421a0);
    FUN_006bf840(iVar2 + -4);
  }
  ExceptionList = local_c;
  return;
}

