
undefined4 __thiscall
FUN_00532370(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    while (iVar1 = FUN_00647ed0(*(undefined4 *)
                                 (*(int *)(*(int *)(param_1 + 0xc0) + iVar2 * 4) + 0x30),*param_2),
          iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0xbc) <= iVar2) {
        return *(undefined4 *)(param_1 + 0x144);
      }
    }
    *(undefined4 *)(param_1 + 0x1d8) = param_4;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    *(int *)(param_1 + 0x144) = iVar2;
    FUN_005322b0(iVar2,param_5);
  }
  return *(undefined4 *)(param_1 + 0x144);
}

