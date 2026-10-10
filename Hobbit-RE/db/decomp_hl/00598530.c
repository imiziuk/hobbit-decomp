
undefined4 __thiscall FUN_00598530(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd430;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  *param_2 = 1;
  local_4 = 0;
  uStack_1c = CONCAT44(uStack_1c._4_4_,(undefined4)uStack_1c);
  if (*(int *)(param_1 + 400) != 0) {
    iVar1 = FUN_00566dd0();
    uStack_1c = CONCAT44(uStack_1c._4_4_,(undefined4)uStack_1c);
    if ((iVar1 == 3) &&
       (uStack_1c = CONCAT44(uStack_1c._4_4_,(undefined4)uStack_1c),
       *(int *)(*(int *)(param_1 + 400) + 0xc) == 1)) {
      local_3c = (void *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_34 = 0;
      local_48 = 0;
      local_44 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      pvVar2 = operator_new(4);
      iVar1 = 0;
      if (0 < local_40) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar1 * 4) = *(undefined4 *)((int)local_3c + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_40);
      }
      FUN_006bf840();
      local_38 = 1;
      *(undefined4 *)((int)pvVar2 + local_40 * 4) = 0x1c;
      local_40 = local_40 + 1;
      local_3c = pvVar2;
      FUN_00592920();
      uStack_1c = FUN_004a4160();
      uStack_24 = *(undefined4 *)(param_1 + 0x288);
      uStack_20 = *(undefined4 *)(param_1 + 0x28c);
      uStack_2c = 1;
      uStack_14 = 1;
      FUN_0042a610(&local_48);
      FUN_0054e3f0();
      if (local_34 != 2) {
        FUN_006bf840();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

