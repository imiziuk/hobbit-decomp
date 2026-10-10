
void __fastcall FUN_0054f370(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  char *local_3c;
  int local_24;
  int local_20;
  uint local_1c;
  undefined1 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9a28;
  pvStack_c = ExceptionList;
  local_3c = s_decal_mgr__Render_0073d29c;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_3c = (char *)0x26;
  local_4 = 0;
  local_24 = -1;
  local_20 = 0;
  FUN_0066c3a0(3);
  local_3c = (char *)0x54f3c5;
  FUN_0054f240();
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) < 0) goto LAB_0054f554;
    do {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 != 0) {
        iVar4 = (int)local_1c >> (*(byte *)(param_1 + 0x1e) & 0x1f);
        uVar2 = *(uint *)(param_1 + 0x18) & local_1c;
        local_3c = (char *)0x54f406;
        uVar5 = __allshl();
        if (((*(uint *)(iVar1 + iVar4 * 0x18) & (uint)uVar5) == 0 &&
             (*(uint *)(iVar1 + 4 + iVar4 * 0x18) & (uint)((ulonglong)uVar5 >> 0x20)) == 0) &&
           (*(char *)(*(int *)(iVar1 + 8 + iVar4 * 0x18) + 0x2f8 + uVar2 * 0x2fc) != '\0')) {
          pcVar3 = (char *)(uVar2 * 0x2fc + *(int *)(iVar1 + 8 + iVar4 * 0x18));
          local_3c = pcVar3 + 0x2d0;
          iVar1 = FUN_00549470();
          local_3c = pcVar3 + 0x2d0;
          FUN_00549580();
          if ((iVar1 != local_20) || (*(int *)(pcVar3 + 0x2ec) != local_24)) {
            local_3c = (char *)0x54f47a;
            FUN_0066d9a0();
            local_3c = (char *)0x26;
            FUN_0066c3a0(3);
            local_3c = (char *)0x54f491;
            FUN_0054f240();
            local_3c = pcVar3;
            FUN_0054f290();
            if (iVar1 != 0) {
              local_3c = (char *)0x1;
              FUN_006749a0(iVar1,0,1);
            }
            local_24 = *(int *)(pcVar3 + 0x2ec);
            local_20 = iVar1;
          }
          local_3c = *(char **)(pcVar3 + 0x2d4);
          FUN_0066ddd0();
          iVar1 = 0;
          if (0 < *(int *)(pcVar3 + 0x2e4) * 3) {
            iVar4 = 0;
            do {
              local_3c = (char *)(*(int *)(pcVar3 + 0x2e0) + iVar1 * 8);
              FUN_0066dce0();
              FUN_0066de80(*(int *)(pcVar3 + 0x2dc) + iVar4);
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar1 < *(int *)(pcVar3 + 0x2e4) * 3);
          }
          local_18 = (undefined1 *)&local_3c;
          if (*(float *)(pcVar3 + 0x2f0) < DAT_006e92e4 !=
              (NAN(*(float *)(pcVar3 + 0x2f0)) || NAN(DAT_006e92e4))) {
            pcVar3[0x2f8] = '\0';
            local_18 = (undefined1 *)&local_3c;
          }
        }
      }
LAB_0054f554:
      local_1c = local_1c + 1;
    } while ((int)local_1c < *(int *)(param_1 + 0x10));
  }
  local_3c = (char *)0x54f56d;
  FUN_0066d9a0();
  local_3c = (char *)0x0;
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x2f);
  FUN_00649720();
  ExceptionList = local_18;
  return;
}

