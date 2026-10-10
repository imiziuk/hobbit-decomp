
void __fastcall FUN_004cd5a0(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d4c00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006eeac8;
  uVar2 = param_1[0x62];
  uVar3 = param_1[99];
  local_4 = 0;
  if (uVar2 != 0 || uVar3 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
    }
    if (iVar4 == -1) {
LAB_004cd681:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
    else {
      do {
        iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
        if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar3))
        {
          if (iVar4 == -1) goto LAB_004cd681;
          uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
          bVar1 = *(byte *)(uVar2 + 0x7f);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
          if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
            FUN_0054be30(param_1[0x62],param_1[99]);
          }
          goto LAB_004cd6d7;
        }
        iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe);
      } while (iVar4 != -1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
LAB_004cd6d7:
    param_1[0x62] = 0;
    param_1[99] = 0;
  }
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

