
void __fastcall FUN_00446ed0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_28 [4];
  float fStack_24;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfa28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Platform_CheckForPlatform_007244d0);
  local_4 = 0;
  if ((param_1[0x235] == 0xc) || (param_1[0x235] == 0xd)) {
    iVar3 = param_1[0x286];
    iVar4 = param_1[0x287];
    if (iVar3 == 0 && iVar4 == 0) goto LAB_00446fc4;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar3 = FUN_00406ce0(iVar3,iVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar3 == -1) {
      FUN_00649720();
LAB_00446f5e:
      FUN_00446eb0();
      param_1[0x286] = 0;
      param_1[0x287] = 0;
      goto LAB_0044713c;
    }
    uVar5 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
    uVar5 = -(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5;
    FUN_00649720();
    if (uVar5 == 0) goto LAB_00446f5e;
    if ((*(uint *)(uVar5 + 0x10) & 0x200000) != 0) {
      FUN_00446e20(param_1[0x286],param_1[0x287]);
      goto LAB_0044713c;
    }
  }
  else {
LAB_00446fc4:
    iVar3 = param_1[0x1d2];
    if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 0x12)) || ((iVar3 == 0xd || (iVar3 == 8)))) {
      iVar3 = (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_28,local_1c);
      if (iVar3 == 0) goto LAB_0044713c;
      uVar5 = param_1[0x2a];
      uVar2 = param_1[0x2b];
      if (uVar5 != 0 || uVar2 != 0) {
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar5 ^ uVar2) * -0xfb & 0xfff) * 2);
        for (iVar3 = iVar4; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe))
        {
        }
        if (iVar4 == -1) {
LAB_004470b0:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            piVar1 = (int *)(DAT_0076f648 + iVar4 * 0x14);
            iVar3 = *piVar1;
            if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == uVar5)) &&
               (*(uint *)(iVar3 + 0xc) == uVar2)) {
              if (iVar4 == -1) goto LAB_004470b0;
              uVar5 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
              local_4 = (uint)local_4._1_3_ << 8;
              uVar5 = -(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5;
              FUN_00649720();
              if (uVar5 == 0) goto LAB_004470e7;
              if (((*(uint *)(uVar5 + 0x10) & 0x200000) == 0) ||
                 ((float)param_1[6] - fStack_24 < *(float *)(param_1[0x114] + 0x4c) ==
                  ((float)param_1[6] - fStack_24 == *(float *)(param_1[0x114] + 0x4c))))
              goto LAB_00447137;
              FUN_00446e20(param_1[0x2a],param_1[0x2b]);
              goto LAB_0044713c;
            }
            iVar4 = (int)*(short *)((int)piVar1 + 0xe);
          } while (iVar4 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
LAB_004470e7:
        FUN_00446eb0();
        param_1[0x286] = 0;
        param_1[0x287] = 0;
        goto LAB_0044713c;
      }
    }
  }
LAB_00447137:
  FUN_00446eb0();
LAB_0044713c:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

