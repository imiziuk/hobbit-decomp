
void __fastcall FUN_00584f20(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc610;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderLights_00740ec0);
  local_4 = 0;
  iVar2 = FUN_0065f190(s_RenderLights_00740eb0);
  if (iVar2 != 0) {
    uVar3 = FUN_0054c5c0(3,s_C__projects_meridian_Support_Gam_00740e7c,0x5ca);
    lVar6 = FUN_0054c790();
    while (lVar6 != 0) {
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar4 = (int)*(short *)(&DAT_0076cd88 +
                             (((uint)lVar6 ^ (uint)((ulonglong)lVar6 >> 0x20)) * -0xfb & 0xfff) * 2)
      ;
      for (iVar2 = iVar4; iVar2 != -1; iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe)) {
      }
      while (iVar4 != -1) {
        piVar5 = (int *)(DAT_0076f648 + iVar4 * 0x14);
        iVar2 = *piVar5;
        if ((iVar2 != 0) && (lVar6 == *(longlong *)(iVar2 + 8))) {
          if (iVar4 != -1) {
            uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            goto LAB_0058504e;
          }
          break;
        }
        iVar4 = (int)*(short *)((int)piVar5 + 0xe);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      piVar5 = (int *)0x0;
LAB_0058504e:
      iVar2 = FUN_00494680();
      if (((iVar2 != 0) && (*(int *)(param_1 + 0x9c) != 0)) ||
         ((iVar2 = FUN_00494680(), iVar2 == 0 && (*(int *)(param_1 + 0x98) != 0)))) {
        (**(code **)(*piVar5 + 0x60))();
      }
      lVar6 = FUN_0054c790();
    }
    FUN_0054c880(uVar3);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

