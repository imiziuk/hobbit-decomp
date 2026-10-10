
undefined4 * __thiscall FUN_005e5cb0(int param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined1 local_4b4 [536];
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  uint local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_25c [584];
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1831;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Fade_00747880,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_3,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  if (iVar3 == 0) {
    local_268 = *(undefined4 *)(param_1 + 0x18);
    local_4bc = 3;
    *param_2 = 3;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Colo_0074785c,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647cf0(uVar2);
  iVar4 = FUN_00647e80(param_3,uVar2,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_299 = *(undefined1 *)(param_1 + 0x1f);
      local_29a = *(undefined1 *)(param_1 + 0x1e);
      local_29b = *(undefined1 *)(param_1 + 0x1d);
      local_29c = *(undefined1 *)(param_1 + 0x1c);
      local_4bc = 0x11;
      bVar1 = true;
      goto LAB_005e5ec4;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
    if (iVar4 == 0) {
      local_270 = (uint)*(byte *)(param_1 + 0x1e);
      bVar1 = true;
      local_4bc = 1;
      goto LAB_005e5ec4;
    }
    iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
    if (iVar4 == 0) {
      local_270 = (uint)*(byte *)(param_1 + 0x1d);
      bVar1 = true;
      local_4bc = 1;
      goto LAB_005e5ec4;
    }
    iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
    if (iVar4 == 0) {
      local_270 = (uint)*(byte *)(param_1 + 0x1c);
      bVar1 = true;
      local_4bc = 1;
      goto LAB_005e5ec4;
    }
    iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
    if (iVar3 == 0) {
      local_270 = (uint)*(byte *)(param_1 + 0x1f);
      bVar1 = true;
      local_4bc = 1;
      goto LAB_005e5ec4;
    }
  }
  bVar1 = false;
LAB_005e5ec4:
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    *param_2 = local_4bc;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Dura_00747834,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_3,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      FUN_00406a80();
      local_14 = *(undefined4 *)(param_1 + 0x20);
      local_264 = 2;
      *param_2 = 2;
      FUN_00424770(local_25c);
    }
    else {
      FUN_005ccdb0(param_2,param_3);
    }
  }
  ExceptionList = local_c;
  return param_2;
}

