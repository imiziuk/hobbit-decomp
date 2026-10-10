
undefined4 __fastcall FUN_00448920(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfab0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__PushBox_CheckForActivateP_007245a0);
  uVar3 = *(uint *)(param_1 + 0x5918);
  uVar4 = *(uint *)(param_1 + 0x591c);
  local_4 = 0;
  *(uint *)(param_1 + 0x5930) = *(uint *)(param_1 + 0x5930) & 0xfffffffd;
  if (uVar3 == 0 && uVar4 == 0) {
    uVar3 = *(uint *)(param_1 + 200);
    uVar4 = *(uint *)(param_1 + 0xcc);
  }
  if (uVar3 != 0 || uVar4 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar1 = (int)*(short *)(&DAT_0076cd88 + ((uVar3 ^ uVar4) * -0xfb & 0xfff) * 2);
    for (iVar2 = iVar1; iVar2 != -1; iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe)) {
    }
    for (; iVar1 != -1; iVar1 = (int)*(short *)(DAT_0076f648 + iVar1 * 0x14 + 0xe)) {
      iVar2 = *(int *)(DAT_0076f648 + iVar1 * 0x14);
      if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == uVar3)) && (*(uint *)(iVar2 + 0xc) == uVar4)) {
        if (iVar1 != -1) {
          uVar3 = *(uint *)(DAT_0076f648 + iVar1 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          uVar3 = -(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3;
          FUN_00649720();
          if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x126) & 1) == 0)) {
            iVar2 = FUN_004ba6e0();
            if (iVar2 == 0) {
              *(uint *)(param_1 + 0x5930) = *(uint *)(param_1 + 0x5930) | 2;
            }
            if (*(int *)(param_1 + 0x650) != 0) {
              FUN_004ba6c0(iVar2 == 0);
              if (iVar2 == 0) {
                *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x591c);
                *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x5918);
                FUN_0043a3f0(0x25,s_C__projects_meridian_Support_Obj_00724540,0xbe);
              }
              else {
                FUN_00448560();
                *(uint *)(param_1 + 0x5930) = *(uint *)(param_1 + 0x5930) & 0xfffffffd;
              }
              puStack_8 = (undefined1 *)0xffffffff;
              FUN_00649720();
              ExceptionList = pvStack_10;
              return 1;
            }
          }
          goto LAB_00448a1c;
        }
        break;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_00448a1c:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

