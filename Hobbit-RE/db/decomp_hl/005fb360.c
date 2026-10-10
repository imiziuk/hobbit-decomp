
void __thiscall FUN_005fb360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2ea0;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar4 = FUN_00406ce0(uVar1,uVar2);
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    FUN_00649720();
    if (piVar6 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar6 + 0x154))();
      iVar5 = FUN_00549470(iVar4 + 0xd0);
      FUN_00549580(iVar4 + 0xd0);
      FUN_00649b20(*(int *)(iVar4 + 0xd4) * 0x50 + *(int *)(iVar5 + 0x58));
      local_4 = 1;
      iVar4 = (**(code **)(*piVar6 + 0x154))();
      iVar5 = FUN_00549470(iVar4 + 0xd0);
      FUN_00549580(iVar4 + 0xd0);
      iVar4 = FUN_00647ed0(*(undefined4 *)(param_1 + 0x18),
                           *(int *)(iVar4 + 0xd4) * 0x50 + *(int *)(iVar5 + 0x58));
      if (iVar4 == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      }
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
  }
  FUN_005f11b0(param_2);
  ExceptionList = local_c;
  return;
}

