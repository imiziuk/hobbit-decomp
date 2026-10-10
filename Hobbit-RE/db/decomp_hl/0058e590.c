
void __fastcall FUN_0058e590(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dcce3;
  local_c = ExceptionList;
  iVar1 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      FUN_006b7660();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  local_4 = 0xffffffff;
  FUN_006c026a(param_1,0x1c,0x20,FUN_0058e520);
  ExceptionList = local_c;
  return;
}

