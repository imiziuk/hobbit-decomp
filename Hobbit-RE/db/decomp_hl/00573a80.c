
void __thiscall
FUN_00573a80(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *local_20c;
  char *local_208 [4];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0 [8];
  undefined4 local_1c0 [11];
  undefined1 local_194 [44];
  undefined1 local_168 [348];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db937;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleLoopedAudioEven_0073feb8);
  local_4 = 0;
  pcVar1 = (char *)FUN_0053f210(3);
  if (((int)pcVar1 < *(int *)(param_1 + 0x24)) && (-1 < (int)pcVar1)) goto LAB_00573e8d;
  uVar2 = FUN_00573650(local_194,param_4,param_5);
  local_4._0_1_ = 1;
  uVar3 = FUN_0053f310(0);
  FUN_0064a4f0(local_1c0,uVar2,uVar3);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00649ba0();
  uVar2 = FUN_0053f310(1);
  iVar4 = FUN_00647cf0(uVar2);
  if (iVar4 == 0) {
LAB_00573b83:
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 4;
    iVar4 = FUN_00406ce0(param_4,param_5);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar4 == -1) {
      FUN_00649720();
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
      FUN_00649720();
    }
    FUN_00401f00(*(float *)(uVar7 + 0x44) + *(float *)(uVar7 + 0x50),
                 *(float *)(uVar7 + 0x54) + *(float *)(uVar7 + 0x48),
                 *(float *)(uVar7 + 0x58) + *(float *)(uVar7 + 0x4c));
    FUN_00402160(&local_1ec,local_208,0x3f000000);
LAB_00573c36:
    local_1f8 = local_1ec;
    local_1f4 = local_1e8;
    local_1f0 = local_1e4;
    local_1e0[2] = FUN_00659650(local_1c0[0],&local_1f8,1);
  }
  else {
    iVar4 = FUN_00647ed0(uVar2,s_Center_of_Object_0073fe58);
    if (iVar4 == 0) goto LAB_00573b83;
    iVar4 = FUN_00647ed0(uVar2,s_Center_of_Event_0073fe48);
    if (iVar4 == 0) {
      local_1ec = *param_3;
      local_1e8 = param_3[1];
      local_1e4 = param_3[2];
      goto LAB_00573c36;
    }
    local_1e0[2] = FUN_00659600(local_1c0[0],1);
  }
  if ((((local_1e0[2] == 0) && (DAT_007edac8 == 2)) && (DAT_00772cd4 != 0)) || (DAT_00772cd8 != 0))
  {
    local_208[0] = s_FINE_0073fe3c;
    local_208[1] = s_DISTCLIP_0073fe30;
    local_208[2] = s_NOTFOUND_0073fe24;
    local_208[3] = s_PRIORITY_0073fe18;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 5;
    iVar4 = FUN_00406ce0(param_4,param_5);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
      FUN_00649720();
      if (((uVar7 != 0) && (*(char *)(uVar7 + 0x7c) == '\x1c')) && (DAT_00772cdc != 0))
      goto LAB_00573d46;
    }
    FUN_0064e870(7,s_LOOPING___s____s_0073fea4,local_208[DAT_007edac8],local_1c0[0]);
  }
LAB_00573d46:
  pcVar1 = s_Forever___Infinite_0073fe90;
  local_1e0[0] = param_4;
  local_1e0[1] = param_5;
  uVar2 = FUN_0053f310(2);
  iVar4 = FUN_00647ed0(uVar2,pcVar1);
  local_1e0[3] = (uint)(iVar4 == 0);
  local_208[0] = *(char **)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x2c) < (int)(local_208[0] + 1)) {
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar5 = *(int *)(param_1 + 0x2c) / 2;
      iVar4 = 1;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      if ((int)(local_208[0] + iVar4) < 1) {
        local_20c = (char *)0x1;
      }
      else {
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        local_20c = local_208[0] + iVar5;
      }
    }
    else {
      local_20c = local_208[0] + *(int *)(param_1 + 0x34);
    }
    pvVar6 = operator_new((int)local_20c * 0x18);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar5 = 0;
      do {
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar5);
        puVar11 = (undefined4 *)(iVar5 + (int)pvVar6);
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
    *(void **)(param_1 + 0x28) = pvVar6;
    *(char **)(param_1 + 0x2c) = local_20c;
  }
  piVar10 = local_1e0;
  piVar12 = (int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) * 0x18);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  FUN_0053efd0(local_168);
  FUN_0053ebf0(3,local_208[0]);
  FUN_0053ee10(local_168);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  pcVar1 = local_208[0];
LAB_00573e8d:
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10 + (int)pcVar1 * 0x18) = 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

