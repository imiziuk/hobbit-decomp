
int __fastcall FUN_0058cb60(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__AllocCell_007421ac);
  local_4 = 0;
  if (*(short *)(*(int *)(param_1 + 0x1b804) + 0x14) != -1) {
    FUN_0058ccb0(*(int *)(param_1 + 0x1b804));
  }
  iVar1 = *(int *)(param_1 + 0x1b804);
  iVar2 = *(int *)(iVar1 + 8);
  *(int *)(param_1 + 0x1b804) = iVar2;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x1b800);
  *(int *)(*(int *)(param_1 + 0x1b800) + 8) = iVar1;
  *(int *)(param_1 + 0x1b800) = iVar1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar1;
}

