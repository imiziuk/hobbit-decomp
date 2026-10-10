
int __fastcall FUN_00557e00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00557c00();
  FUN_00557c00();
  iVar1 = 8;
  do {
    FUN_00557c00();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_006c043b(param_1 + 0x238,0x78,0x10,&LAB_00557c30,&LAB_00557c70);
  local_4 = 0;
  FUN_00648600(param_1,0,0x100);
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x9b8) = 0;
  *(undefined1 *)(param_1 + 0x9b9) = 0;
  *(undefined1 *)(param_1 + 0x9ba) = 0;
  *(undefined1 *)(param_1 + 0x9bb) = 0;
  *(undefined4 *)(param_1 + 0x9cc) = 0;
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(undefined4 *)(param_1 + 0x9d4) = 0;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  *(undefined4 *)(param_1 + 0x9dc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0x32;
  *(undefined4 *)(param_1 + 0x10c) = 2;
  puVar2 = (undefined4 *)(param_1 + 0x9e0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xa00) = 0;
  ExceptionList = local_c;
  return param_1;
}

