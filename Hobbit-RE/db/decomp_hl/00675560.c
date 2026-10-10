
void __fastcall FUN_00675560(int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e6bbc;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00655880();
  local_4 = local_4 & 0xffffff00;
  FUN_006c026a(param_1 + 0x20,0x150,1,&LAB_006805e0);
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x14) != 2) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x50,*(undefined4 *)(iVar1 + -4),FUN_00676ec0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = pvStack_c;
  return;
}

