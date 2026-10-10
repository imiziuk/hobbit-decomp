
int __fastcall FUN_0058cc00(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__AllocBucket_007421c4);
  local_4 = 0;
  while (*(int *)(param_1 + 0x1c808) == -1) {
    for (iVar1 = *(int *)(param_1 + 0x1b804); (iVar1 != 0 && (*(short *)(iVar1 + 0x14) == -1));
        iVar1 = *(int *)(iVar1 + 8)) {
    }
    FUN_0058ccb0(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x1c808);
  iVar2 = iVar1 * 0x198;
  *(int *)(param_1 + 0x1c808) = (int)*(short *)(iVar2 + 0x2020 + param_1);
  *(undefined2 *)(iVar2 + 0x2020 + param_1) = 0xffff;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar1;
}

