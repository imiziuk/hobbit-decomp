
undefined4 * __fastcall FUN_00508eb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  puVar1 = param_1 + 0x65;
  iVar2 = 5;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_006c043b(param_1 + 0x74,0x4ec,6,FUN_005099b0,&LAB_00508f60);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006499d0();
  *param_1 = &PTR_FUN_006efd10;
  ExceptionList = local_c;
  return param_1;
}

