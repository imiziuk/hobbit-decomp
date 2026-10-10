
void __fastcall FUN_0041c960(int *param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf3b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0054c5c0(0x30,s_C__projects_meridian_Support_Obj_007200c0,0x1eb);
  lVar7 = FUN_0054c790();
  if (lVar7 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 0;
    iVar3 = FUN_00406ce0(lVar7);
    local_4 = 0xffffffff;
    if (iVar3 == -1) {
      FUN_00649720();
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
      uVar5 = -(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5;
      FUN_00649720();
    }
    local_4c = *(undefined4 *)(uVar5 + 0xac);
    local_50 = *(undefined4 *)(uVar5 + 0xa8);
    local_48 = *(undefined4 *)(uVar5 + 0xb0);
    (**(code **)(*param_1 + 0x14))(&local_50,0);
    local_4c = 0;
    local_48 = *(undefined4 *)(uVar5 + 0xb4);
    uStack_44 = 0;
    (**(code **)(*param_1 + 0x1c))(&local_4c);
    iVar3 = uVar5 + 0xd0;
    iVar4 = FUN_00647ed0(iVar3,s_Ch05_Swordlight_0071ce90);
    if (iVar4 == 0) {
      FUN_00402af0();
    }
    iVar4 = FUN_00647ed0(iVar3,s_Ch01_Hobbiton_0071ee70);
    if (iVar4 != 0) {
      FUN_00434c40(0x35,0x3f800000);
    }
    param_1[0x106] = 0;
    if (*PTR_s_Ch02_RoastMutton_00720054 != '\0') {
      ppuVar6 = &PTR_s_Ch02_RoastMutton_00720054;
      do {
        iVar4 = FUN_00647ed0(iVar3,*ppuVar6);
        if (iVar4 == 0) {
          param_1[0x106] = 1;
          break;
        }
        ppuVar1 = ppuVar6 + 1;
        ppuVar6 = ppuVar6 + 1;
      } while (**ppuVar1 != '\0');
    }
    if (param_1[0x106] == 0) {
      FUN_00434c40(0x33,0x3f800000);
      FUN_00435820(0,3,1);
    }
    param_1[0x107] = 0;
    if (*PTR_s_Ch00_DreamWorld_00720064 != '\0') {
      ppuVar6 = &PTR_s_Ch00_DreamWorld_00720064;
      do {
        iVar4 = FUN_00647ed0(iVar3,*ppuVar6);
        if (iVar4 == 0) {
          param_1[0x107] = 1;
          break;
        }
        ppuVar1 = ppuVar6 + 1;
        ppuVar6 = ppuVar6 + 1;
      } while (**ppuVar1 != '\0');
    }
    if (param_1[0x107] == 0) {
      FUN_00649b20(s_The_Ring_007200b4);
      local_4 = 1;
      FUN_00434d90(auStack_38,0x3f800000);
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
  }
  FUN_0054c880(uVar2);
  ExceptionList = pvStack_c;
  return;
}

