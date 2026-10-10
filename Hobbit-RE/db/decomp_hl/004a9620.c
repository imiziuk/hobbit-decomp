
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a9620(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d3d28;
  local_c = ExceptionList;
  local_14 = in_stack_00000020;
  local_4 = 0;
  local_18 = in_stack_0000001c;
  local_10 = in_stack_00000024;
  ExceptionList = &local_c;
  lVar7 = FUN_005af0f0();
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar4 = FUN_00406ce0(lVar7);
  local_4._0_1_ = 0;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
    FUN_00649720();
    if (piVar6 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x28))();
      uStack_24 = *puVar5;
      fStack_20 = (float)puVar5[1];
      uStack_1c = puVar5[2];
      FUN_00579720(0,0,&local_18,&uStack_24,0x1850);
      FUN_005798f0(2);
      iVar4 = FUN_00577e70();
      uVar3 = DAT_00773524;
      uVar2 = DAT_00773520;
      if ((iVar4 != 0) && (lVar7 != CONCAT44(DAT_00773524,DAT_00773520))) {
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 2;
        iVar4 = FUN_00406ce0(uVar2,uVar3);
        local_4._0_1_ = 0;
        if (iVar4 == -1) {
          FUN_00649720();
          piVar6 = (int *)0x0;
        }
        else {
          uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
          piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
          FUN_00649720();
        }
        puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x28))();
        uStack_24 = *puVar5;
        fStack_20 = (float)puVar5[1] + _DAT_006e9364;
        uStack_1c = puVar5[2];
      }
      in_stack_0000001c = 0xffb4e6ff;
      FUN_00551520(&local_18,&uStack_24,0x41200000,0xbfa00000,0x3dcccccd,0xbd4ccccd,10,0x3f000000,
                   &stack0x0000001c,0);
      FUN_0054d020(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&uStack_24,0x43480000
                   ,0x41200000,0x41200000,0x40a00000,0x50,0,0,0);
    }
  }
  local_4 = 0xffffffff;
  FUN_0053edb0();
  ExceptionList = local_c;
  return;
}

