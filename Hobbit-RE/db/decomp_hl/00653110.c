
undefined4 __thiscall FUN_00653110(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_3c;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e64e8;
  local_c = ExceptionList;
  if (*(int *)(&DAT_006f6cf0 + *(char *)(param_1 + 0x1d) * 0x7c) < 9) {
    iVar5 = 1 << ((byte)*(int *)(&DAT_006f6cf0 + *(char *)(param_1 + 0x1d) * 0x7c) & 0x1f);
    ExceptionList = &local_c;
    local_34 = param_1;
    iVar1 = thunk_FUN_0064ff70(iVar5 << 7,s_C__projects_meridian_xCore_x_fil_0074d648,0x274);
    local_30 = iVar1;
    FUN_00650250();
    iVar4 = 0;
    local_4 = 0;
    FUN_00650e90(3,iVar5,0x20,0,iVar1,0,0,0xffffffff,0);
    if (0 < iVar5) {
      local_3c = (undefined1 *)(iVar1 + 2);
      do {
        FUN_00650b50(local_38,iVar4);
        iVar1 = 0x20;
        puVar2 = local_3c;
        do {
          puVar2[1] = local_38[3];
          *puVar2 = local_38[2];
          puVar2[-1] = local_38[1];
          puVar2[-2] = local_38[0];
          puVar2 = puVar2 + iVar5 * 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar4 = iVar4 + 1;
        local_3c = local_3c + 4;
        iVar1 = local_30;
      } while (iVar4 < iVar5);
    }
    uVar3 = FUN_00653240(param_2);
    FUN_0064ff40(iVar1,s_C__projects_meridian_xCore_x_fil_0074d690,0x283);
    local_4 = 0xffffffff;
    thunk_FUN_00650380();
    ExceptionList = local_c;
    return uVar3;
  }
  return 0;
}

