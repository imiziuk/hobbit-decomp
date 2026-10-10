
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __thiscall FUN_0054baf0(int param_1,int param_2,uint param_3,uint param_4,char param_5)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  lVar9 = CONCAT44(param_4,param_3);
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d9758;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00649600(s_obj_mgr__CreateObject_0073ccfc);
  local_c = 0;
  FUN_006501d0(s_obj_mgr__CreateObject_0073ccfc);
  local_c._0_1_ = 1;
  if ((param_3 != 0 || param_4 != 0) || (lVar9 = FUN_005c76a0(), lVar9 != 0)) {
    while( true ) {
      param_4 = (uint)((ulonglong)lVar9 >> 0x20);
      param_3 = (uint)lVar9;
      iVar7 = ((param_3 ^ param_4) * -0xfb & 0xfff) * 2;
      iVar4 = (int)*(short *)(iVar7 + param_1);
      if (iVar4 != -1) {
        iVar5 = iVar4;
        do {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar5 * 0x14 + 0xe);
        } while (iVar5 != -1);
      }
      while( true ) {
        if (iVar4 == -1) goto LAB_0054bbdf;
        piVar2 = (int *)(*(int *)(param_1 + 0x28c0) + iVar4 * 0x14);
        iVar5 = *piVar2;
        if ((iVar5 != 0) && (lVar9 == *(longlong *)(iVar5 + 8))) break;
        iVar4 = (int)*(short *)((int)piVar2 + 0xe);
      }
      if (iVar4 == -1) break;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar7 = (int)*(short *)(&DAT_0076cd88 + iVar7);
      for (iVar4 = iVar7; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      while (iVar7 != -1) {
        piVar2 = (int *)(DAT_0076f648 + iVar7 * 0x14);
        iVar4 = *piVar2;
        if ((iVar4 != 0) && (lVar9 == *(longlong *)(iVar4 + 8))) {
          if (iVar7 != -1) {
            uVar8 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
            local_c._0_1_ = 1;
            uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
            FUN_00649720();
            goto LAB_0054bdfb;
          }
          break;
        }
        iVar7 = (int)*(short *)((int)piVar2 + 0xe);
      }
      local_c._0_1_ = 1;
      FUN_00649720();
      uVar8 = 0;
LAB_0054bdfb:
      if (*(char *)(uVar8 + 0x7c) == '\x12') break;
      FUN_0064e7d0(s_GUID_Collision__SkippingGuid_0073cd4c);
      lVar9 = FUN_005c76a0();
    }
  }
LAB_0054bbdf:
  _DAT_0076fa20 = 1;
  iVar7 = FUN_0054b8a0();
  iVar4 = (param_2 + 0x100) * 0x20;
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + 1;
  iVar4 = param_2 * 0x20 + param_1;
  *(int *)(iVar4 + 0x2004) = *(int *)(iVar4 + 0x2004) + 1;
  if (*(int *)(iVar4 + 0x200c) != -1) {
    *(short *)(*(int *)(param_1 + 0x28c0) + 6 + *(int *)(iVar4 + 0x200c) * 0x14) = (short)iVar7;
  }
  iVar5 = iVar7 * 0x14;
  *(undefined2 *)(iVar5 + 4 + *(int *)(param_1 + 0x28c0)) = *(undefined2 *)(iVar4 + 0x200c);
  *(undefined2 *)(iVar5 + 6 + *(int *)(param_1 + 0x28c0)) = 0xffff;
  *(int *)(iVar4 + 0x200c) = iVar7;
  FUN_0054e500(iVar7,lVar9);
  uVar6 = (**(code **)((&DAT_0076f908)[param_2] + 8))();
  *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x28c0)) = uVar6;
  *(char *)(*(int *)(iVar5 + *(int *)(param_1 + 0x28c0)) + 0x7c) = (char)param_2;
  *(longlong *)(*(int *)(iVar5 + *(int *)(param_1 + 0x28c0)) + 8) = lVar9;
  *(undefined4 *)(*(int *)(iVar5 + *(int *)(param_1 + 0x28c0)) + 0x10) =
       *(undefined4 *)((&DAT_0076f908)[param_2] + 0xc);
  *(short *)(*(int *)(iVar5 + *(int *)(param_1 + 0x28c0)) + 0x78) = (short)iVar7;
  pbVar1 = (byte *)(*(int *)(iVar5 + *(int *)(param_1 + 0x28c0)) + 0x7f);
  *pbVar1 = *pbVar1 | 0x10;
  iVar4 = *(int *)(iVar5 + *(int *)(param_1 + 0x28c0));
  bVar3 = *(byte *)(iVar4 + 0x7f);
  *(byte *)(iVar4 + 0x7f) = (param_5 << 5 ^ bVar3) & 0x20 ^ bVar3;
  _DAT_0076fa20 = 0;
  (**(code **)(**(int **)(iVar5 + *(int *)(param_1 + 0x28c0)) + 4))();
  local_c = (uint)local_c._1_3_ << 8;
  FUN_006501e0();
  local_c = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return lVar9;
}

