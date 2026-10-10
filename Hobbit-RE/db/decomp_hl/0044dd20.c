
undefined4 __fastcall FUN_0044dd20(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfc68;
  pvStack_c = ExceptionList;
  pcStack_38 = s_bilbo__Conversation_CheckForStar_00724a94;
  uStack_3c = 0x44dd4c;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  pcStack_38 = *(char **)(param_1 + 0xc);
  uStack_3c = *(undefined4 *)(param_1 + 8);
  local_4 = 0;
  uStack_40 = 0x44dd66;
  iVar4 = FUN_0059d010();
  if (((iVar4 == 0) && (*(int *)(param_1 + 0x8d4) != 0x21)) && (*(int *)(param_1 + 0x8d4) != 0x20))
  {
    uVar2 = *(uint *)(param_1 + 0x5950);
    uVar3 = *(uint *)(param_1 + 0x5954);
    if ((uVar2 != 0 || uVar3 != 0) && (*(int *)(param_1 + 0x650) != 0)) {
      pcStack_38 = s_obj_mgr__LockObject_Guid__0071cef0;
      uStack_3c = 0x44ddbc;
      FUN_00649600();
      iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      for (; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
        iVar4 = *(int *)(DAT_0076f648 + iVar5 * 0x14);
        if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar3))
        {
          if (iVar5 != -1) {
            uVar2 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            pcStack_38 = (char *)0x44de5f;
            FUN_00649720();
            goto LAB_0044de5f;
          }
          break;
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      pcStack_38 = (char *)0x44de39;
      FUN_00649720();
      piVar6 = (int *)0x0;
LAB_0044de5f:
      pcStack_38 = (char *)0x44de66;
      iVar4 = FUN_004a1210();
      if (iVar4 == 0) {
        pcStack_38 = (char *)0x44de92;
        iVar4 = FUN_004a1240();
        if (iVar4 == 0) goto LAB_0044df92;
        pcStack_38 = (char *)0x44dea1;
        lVar7 = FUN_004a1230();
        pcStack_38 = s_obj_mgr__LockObject_Guid__0071cef0;
        uStack_3c = 0x44deb3;
        FUN_00649600();
        iVar5 = (int)*(short *)(&DAT_0076cd88 +
                               (((uint)lVar7 ^ (uint)((ulonglong)lVar7 >> 0x20)) * -0xfb & 0xfff) *
                               2);
        for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe))
        {
        }
        if (iVar5 == -1) {
LAB_0044df2c:
          local_4 = (uint)local_4._1_3_ << 8;
          pcStack_38 = (char *)0x44df3a;
          FUN_00649720();
        }
        else {
          do {
            piVar6 = (int *)(DAT_0076f648 + iVar5 * 0x14);
            iVar4 = *piVar6;
            if ((iVar4 != 0) && (lVar7 == *(longlong *)(iVar4 + 8))) {
              if (iVar5 == -1) goto LAB_0044df2c;
              uVar2 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
              bVar1 = *(byte *)(uVar2 + 0x7f);
              local_4 = (uint)local_4._1_3_ << 8;
              pcStack_38 = (char *)0x44df5e;
              FUN_00649720();
              if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) != 0) {
                pcStack_38 = (char *)0x44df69;
                FUN_0046a550();
              }
              goto LAB_0044df69;
            }
            iVar5 = (int)*(short *)((int)piVar6 + 0xe);
          } while (iVar5 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          pcStack_38 = (char *)0x44df25;
          FUN_00649720();
        }
      }
      else {
        (**(code **)(*piVar6 + 0x104))(auStack_60);
        FUN_0059c060();
      }
LAB_0044df69:
      local_4 = 0xffffffff;
      pcStack_38 = (char *)0x44df7a;
      FUN_00649720();
      ExceptionList = pvStack_c;
      return 1;
    }
  }
LAB_0044df92:
  local_4 = 0xffffffff;
  pcStack_38 = (char *)0x44dfa3;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 0;
}

