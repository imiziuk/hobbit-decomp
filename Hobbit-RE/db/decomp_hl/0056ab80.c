
int * __fastcall FUN_0056ab80(int param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db51b;
  local_c = ExceptionList;
  iVar2 = (int)*(short *)(param_1 + 0x1c);
  ExceptionList = &local_c;
  piVar1 = (int *)operator_new(iVar2 * 0x20 + 4);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    FUN_006c043b(piVar1 + 1,0x20,iVar2,FUN_00567b80,FUN_0040b700);
    ExceptionList = local_c;
    return piVar1 + 1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

