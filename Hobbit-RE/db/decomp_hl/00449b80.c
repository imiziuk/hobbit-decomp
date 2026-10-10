
void __thiscall FUN_00449b80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_>bilbo__Rope_ScanForRopes_007245e7 + 1);
  local_4 = 0;
  if (*(int *)(param_1 + 0x4668) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3a50);
    uVar4 = *(undefined4 *)(param_1 + 0x3a54);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar5 = FUN_00406ce0(uVar3,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      bVar2 = *(byte *)(uVar6 + 0x7f);
      FUN_00649720();
      if ((-(uint)((bVar2 & 0x10) != 0) & uVar6) != 0) {
        FUN_00449d90();
        goto LAB_00449d5b;
      }
    }
    *(undefined4 *)(param_1 + 0x3a50) = 0;
    *(undefined4 *)(param_1 + 0x3a54) = 0;
    *(undefined4 *)(param_1 + 0x4660) = 0;
    *(undefined4 *)(param_1 + 0x4658) = 0;
    *(undefined4 *)(param_1 + 0x465c) = 0;
    *(undefined4 *)(param_1 + 0x4668) = 0;
  }
  FUN_00588ff0(param_2);
  puVar1 = (undefined4 *)(param_1 + 0x3a50);
  iVar5 = FUN_00589010(param_2,puVar1);
  while (iVar5 != 0) {
    uVar3 = *puVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x3a54);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar5 = FUN_00406ce0(uVar3,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
      FUN_00649720();
    }
    if ((*(uint *)(uVar6 + 0x10) & 0x80000) != 0) {
      *(undefined4 *)(param_1 + 0x3a34) = *(undefined4 *)(uVar6 + 0x44);
      *(undefined4 *)(param_1 + 0x3a38) = *(undefined4 *)(uVar6 + 0x48);
      *(undefined4 *)(param_1 + 0x3a3c) = *(undefined4 *)(uVar6 + 0x4c);
      *(undefined4 *)(param_1 + 0x3a40) = *(undefined4 *)(uVar6 + 0x50);
      *(undefined4 *)(param_1 + 0x3a44) = *(undefined4 *)(uVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x3a48) = *(undefined4 *)(uVar6 + 0x58);
      FUN_00449d90();
      iVar5 = FUN_00449e80();
      if (iVar5 != 0) break;
    }
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x3a54) = 0;
    *(undefined4 *)(param_1 + 0x4660) = 0;
    *(undefined4 *)(param_1 + 0x4658) = 0;
    *(undefined4 *)(param_1 + 0x465c) = 0;
    iVar5 = FUN_00589010(param_2,puVar1);
  }
LAB_00449d5b:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

