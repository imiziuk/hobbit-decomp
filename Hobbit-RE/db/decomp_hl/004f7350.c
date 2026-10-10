
void __fastcall FUN_004f7350(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6198;
  local_c = ExceptionList;
  uVar5 = *(undefined4 *)(param_1 + 0x890);
  uVar2 = *(undefined4 *)(param_1 + 0x894);
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar4 = FUN_00406ce0(uVar5,uVar2);
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    bVar1 = *(byte *)(uVar3 + 0x7f);
    FUN_00649720();
    if ((-(uint)((bVar1 & 0x10) != 0) & uVar3) != 0) {
      FUN_004c2f60(1,0);
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0x8a8);
  local_18 = 0x4d;
  do {
    uVar5 = *puVar6;
    uVar2 = puVar6[1];
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 1;
    iVar4 = FUN_00406ce0(uVar5,uVar2);
    local_4 = 0xffffffff;
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      bVar1 = *(byte *)(uVar3 + 0x7f);
      FUN_00649720();
      if ((-(uint)((bVar1 & 0x10) != 0) & uVar3) != 0) {
        FUN_004c2f60(1,0);
      }
    }
    puVar6 = puVar6 + 2;
    local_18 = local_18 - 1;
  } while (local_18 != 0);
  puVar7 = (uint *)(param_1 + 0x138c);
  local_14 = 5;
  do {
    *puVar7 = 0x7fffffff;
    local_18 = 0x7fffffff;
    FUN_005492b0(&local_18,0);
    local_4 = 2;
    *puVar7 = (*puVar7 & 0x7fffffff ^ (local_18 * 2 ^ local_18) & 0x7fffffff ^ local_18 * 2) &
              0x7fffffff ^ *puVar7 & 0x7fffffff;
    FUN_005492b0(puVar7,0);
    if ((local_18 & 0x80000000) != 0) {
      FUN_00549470(puVar7);
    }
    uVar5 = FUN_00549620(&local_18);
    FUN_00549670(puVar7,uVar5);
    local_4 = 0xffffffff;
    FUN_00549580(&local_18);
    FUN_00549350(&local_18);
    puVar7 = puVar7 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  ExceptionList = local_c;
  return;
}

