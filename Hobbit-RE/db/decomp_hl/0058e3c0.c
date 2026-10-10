
void __fastcall FUN_0058e3c0(int param_1)

{
  short sVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__InvalidateAllCells_00742240);
  iVar2 = *(int *)(param_1 + 0x1b800);
  sVar1 = *(short *)(iVar2 + 0x14);
  local_4 = 0;
  while (sVar1 != -1) {
    FUN_0058ccb0(iVar2);
    iVar2 = *(int *)(param_1 + 0x1b800);
    sVar1 = *(short *)(iVar2 + 0x14);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

