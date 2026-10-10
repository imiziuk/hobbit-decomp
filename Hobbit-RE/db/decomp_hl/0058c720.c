
int __thiscall FUN_0058c720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__AcquireCell_00742150);
  local_4 = 0;
  iVar1 = FUN_0058cde0(param_2,param_3,param_4);
  if ((iVar1 == 0) || (DAT_00797c58 != 0)) {
    *(int *)(param_1 + 0x1c80c) = *(int *)(param_1 + 0x1c80c) + 1;
    iVar1 = FUN_0058cf00(param_2,param_3,param_4);
  }
  else {
    *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) + 1;
    *(int *)(param_1 + 0x1c810) = *(int *)(param_1 + 0x1c810) + 1;
    if (*(int *)(param_1 + 0x1b800) != iVar1) {
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(param_1 + 0x1b804) = *(undefined4 *)(iVar1 + 8);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(param_1 + 0x1b800) = *(undefined4 *)(iVar1 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      *(int *)(*(int *)(param_1 + 0x1b800) + 8) = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x1b800);
      *(int *)(param_1 + 0x1b800) = iVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar1;
}

