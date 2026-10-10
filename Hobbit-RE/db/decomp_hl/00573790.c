
void FUN_00573790(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  char *local_7c [6];
  undefined4 local_64 [11];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db8ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleOneShotAudioEve_0073fe6c);
  local_4 = 0;
  uVar1 = FUN_00573650(local_38,param_3,param_4);
  local_4._0_1_ = 1;
  uVar2 = FUN_0053f310(0);
  FUN_0064a4f0(local_64,uVar1,uVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00649ba0();
  uVar1 = FUN_0053f310(1);
  iVar3 = FUN_00647cf0(uVar1);
  if (iVar3 == 0) {
LAB_0057387f:
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 4;
    iVar3 = FUN_00406ce0(param_3,param_4);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar3 == -1) {
      FUN_00649720();
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
      uVar4 = -(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4;
      FUN_00649720();
    }
    FUN_00401f00(*(float *)(uVar4 + 0x44) + *(float *)(uVar4 + 0x50),
                 *(float *)(uVar4 + 0x54) + *(float *)(uVar4 + 0x48),
                 *(float *)(uVar4 + 0x58) + *(float *)(uVar4 + 0x4c));
    FUN_00402160(&local_94,local_7c,0x3f000000);
    local_88 = local_94;
    local_84 = local_90;
    local_80 = local_8c;
LAB_00573938:
    iVar3 = FUN_00659650(local_64[0],&local_88,1);
  }
  else {
    iVar3 = FUN_00647ed0(uVar1,s_Center_of_Object_0073fe58);
    if (iVar3 == 0) goto LAB_0057387f;
    iVar3 = FUN_00647ed0(uVar1,s_Center_of_Event_0073fe48);
    if (iVar3 == 0) {
      local_88 = *param_2;
      local_84 = param_2[1];
      local_80 = param_2[2];
      goto LAB_00573938;
    }
    iVar3 = FUN_00659600(local_64[0],1);
  }
  if ((((iVar3 == 0) && (DAT_007edac8 == 2)) && (DAT_00772cd4 != 0)) || (DAT_00772cd8 != 0)) {
    local_7c[0] = s_FINE_0073fe3c;
    local_7c[1] = s_DISTCLIP_0073fe30;
    local_7c[2] = s_NOTFOUND_0073fe24;
    local_7c[3] = s_PRIORITY_0073fe18;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 5;
    iVar3 = FUN_00406ce0(param_3,param_4);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar3 == -1) {
      FUN_00649720();
    }
    else {
      uVar4 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
      uVar4 = -(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4;
      FUN_00649720();
      if (((uVar4 != 0) && (*(char *)(uVar4 + 0x7c) == '\x1c')) && (DAT_00772cdc != 0))
      goto LAB_00573a31;
    }
    FUN_0064e870(7,s_ONE_SHOT___s____s_0073fe04,local_7c[DAT_007edac8],local_64[0]);
  }
LAB_00573a31:
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

