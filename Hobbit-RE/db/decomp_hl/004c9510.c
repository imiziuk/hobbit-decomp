
void __fastcall FUN_004c9510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined1 *local_54;
  undefined1 auStack_50 [4];
  undefined1 *puStack_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d4a90;
  pvStack_c = ExceptionList;
  local_54 = (undefined1 *)&local_68;
  local_68 = (undefined *)0xffff0000;
  ExceptionList = &pvStack_c;
  FUN_0066a810();
  local_54 = (undefined1 *)&local_68;
  local_68 = (undefined *)0xff00ff00;
  FUN_0066a810();
  iVar4 = 0;
  uVar2 = extraout_ECX;
  if (*(int *)(param_1 + 0xf4) != 0) {
    local_54 = (undefined1 *)&local_68;
    local_68 = (undefined *)0xffffff00;
    FUN_00401f00(0,-*(float *)(param_1 + 0xf8));
    FUN_00402130(local_3c,param_1 + 0x14);
    FUN_0066a810();
    uVar2 = extraout_ECX_00;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    local_68 = (undefined *)0x1;
    local_54 = &stack0xffffff94;
    FUN_00406b70(0xffffffff);
    uVar5 = *(undefined4 *)(param_1 + 0x110);
    uVar6 = CONCAT44(uVar2,*(undefined4 *)(param_1 + 0x114));
    uVar2 = FUN_00401f00(0,0x3f800000,0);
    uVar2 = FUN_00402160(local_48,uVar2,uVar5,uVar6);
    uVar2 = FUN_00402130(local_30,param_1 + 0x14,uVar2);
    FUN_0066a6e0(uVar2);
  }
  local_54 = (undefined1 *)&local_68;
  local_68 = (undefined *)0xffffff00;
  FUN_00669cf0();
  local_68 = &DAT_0071ff7c;
  if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0xe4)) {
    local_68 = &DAT_0071ff78;
  }
  FUN_00649920(&local_54,s_nPts__2d_Len__5_1f_Sleeping__s_0072d170,*(undefined4 *)(param_1 + 0x120),
               (double)*(float *)(param_1 + 0x130));
  uStack_4 = 0;
  local_68 = (undefined *)0x4c96aa;
  local_68 = (undefined *)FUN_00649940();
  puStack_4c = &stack0xffffff94;
  FUN_00406b70(0xffffffff);
  FUN_0066ae20(param_1 + 0x14);
  uStack_4 = 0xffffffff;
  local_68 = (undefined *)0x4c96d1;
  FUN_00649950();
  local_68 = &DAT_0071ff7c;
  if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0xe4)) {
    local_68 = &DAT_0071ff78;
  }
  FUN_00649920(auStack_50);
  uStack_4 = 1;
  local_68 = (undefined *)0x4c9710;
  local_68 = (undefined *)FUN_00649940();
  puStack_4c = &stack0xffffff94;
  FUN_00406b70(0xffffffff);
  uVar2 = FUN_00401f00(0,0x41c80000,0);
  uVar2 = FUN_00402130(auStack_18,param_1 + 0x14,uVar2);
  FUN_0066ae20(uVar2);
  uStack_4 = 0xffffffff;
  local_68 = (undefined *)0x4c9753;
  FUN_00649950();
  if (0 < *(int *)(param_1 + 0x120) + -1) {
    iVar3 = 0;
    do {
      local_68 = (undefined *)0x0;
      puStack_4c = &stack0xffffff94;
      iVar1 = *(int *)(param_1 + 0x124) + iVar3;
      FUN_00406b70(0xffffffff);
      FUN_00669ca0(iVar1 + 0xc,iVar1 + 0x38);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar4 < *(int *)(param_1 + 0x120) + -1);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      puStack_4c = (undefined1 *)&local_68;
      local_68 = (undefined *)0xff00ff00;
      FUN_0066a810();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x120));
  }
  ExceptionList = pvStack_c;
  return;
}

