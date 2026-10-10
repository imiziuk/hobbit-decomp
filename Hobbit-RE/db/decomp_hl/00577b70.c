
void __fastcall FUN_00577b70(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_68;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbbe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_CaptureObjects_0074023c);
  uVar2 = *(uint *)(param_1 + 0x3d80);
  uVar3 = *(uint *)(param_1 + 0x3d84);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x4384) = 1;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
  for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  while (iVar4 != -1) {
    piVar1 = (int *)(DAT_0076f648 + iVar4 * 0x14);
    iVar5 = *piVar1;
    if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar3)) {
      if (iVar4 != -1) {
        local_68 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        local_68 = -(uint)((*(byte *)(local_68 + 0x7f) & 0x10) != 0) & local_68;
        FUN_00649720();
        goto LAB_00577c7c;
      }
      break;
    }
    iVar4 = (int)*(short *)((int)piVar1 + 0xe);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_68 = 0;
LAB_00577c7c:
  local_44 = *(undefined4 *)(param_1 + 0x3d88);
  local_38 = 0x7f7fffff;
  local_34 = 0x7f7fffff;
  local_30 = 0x7f7fffff;
  local_2c = 0xff7fffff;
  local_28 = 0xff7fffff;
  local_24 = 0xff7fffff;
  local_48 = 0xffffffff;
  local_40 = (int)*(short *)(&DAT_0076cd88 +
                            ((*(uint *)(param_1 + 0x3d80) ^ *(uint *)(param_1 + 0x3d84)) * -0xfb &
                            0xfff) * 2);
  for (iVar5 = local_40; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  for (; local_40 != -1; local_40 = (int)*(short *)(DAT_0076f648 + local_40 * 0x14 + 0xe)) {
    iVar5 = *(int *)(DAT_0076f648 + local_40 * 0x14);
    if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == *(uint *)(param_1 + 0x3d80))) &&
       (*(uint *)(iVar5 + 0xc) == *(uint *)(param_1 + 0x3d84))) break;
  }
  local_20 = *(undefined4 *)(param_1 + 0x3d48);
  local_18 = *(undefined4 *)(param_1 + 0x4380);
  local_14 = &DAT_00777880;
  local_10 = DAT_007778c0;
  if (local_68 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = (uint)*(byte *)(local_68 + 0x7c);
  }
  local_3c = 9;
  puVar6 = (undefined4 *)FUN_0057dc80();
  local_38 = *puVar6;
  local_34 = puVar6[1];
  local_30 = puVar6[2];
  local_2c = puVar6[3];
  local_28 = puVar6[4];
  local_24 = puVar6[5];
  FUN_0058a630(&local_38,FUN_00577940,&local_48);
  *(undefined4 *)(param_1 + 0x4388) = local_48;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

