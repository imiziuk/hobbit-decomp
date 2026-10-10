
undefined4 __fastcall FUN_0063ffc0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5ce2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__ReadFields_0074b2c4);
  puVar1 = (uint *)(param_1 + 0x18);
  local_4 = 0;
  FUN_0063fe30(puVar1,8);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    FUN_0064ff40(*(undefined4 *)(param_1 + 0x20),s_C__projects_meridian_xCore_Auxil_0074b310,0xd4);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x24) < uVar2) {
      if (uVar2 < 0x400) {
        uVar2 = 0x400;
      }
      *(uint *)(param_1 + 0x24) = uVar2;
      uVar3 = thunk_FUN_0064ffa0(*(undefined4 *)(param_1 + 0x20),uVar2,
                                 s_C__projects_meridian_xCore_Auxil_0074b2d8,0xc9);
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
    FUN_0063fe30(*(undefined4 *)(param_1 + 0x20),*puVar1);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x20) + 8;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

