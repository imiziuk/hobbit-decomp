
void FUN_005832c0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_28;
  uint local_24;
  uint local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc140;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_lighting_mgr__TouchObjects_00740734);
  local_4 = 0;
  FUN_0054d4f0(&local_28,0xffffffff,0x1c50,param_1);
  if (local_28 != -1) {
    FUN_00588ff0(local_28);
    iVar3 = FUN_00589010(local_28,&local_24);
    uVar1 = local_24;
    uVar2 = local_20;
    while (iVar3 != 0) {
      local_24 = uVar1;
      local_20 = uVar2;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
      for (iVar3 = iVar4; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
      }
      while (iVar4 != -1) {
        piVar5 = (int *)(DAT_0076f648 + iVar4 * 0x14);
        iVar3 = *piVar5;
        if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == uVar1)) && (*(uint *)(iVar3 + 0xc) == uVar2))
        {
          if (iVar4 != -1) {
            uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            goto LAB_00583400;
          }
          break;
        }
        iVar4 = (int)*(short *)((int)piVar5 + 0xe);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      piVar5 = (int *)0x0;
LAB_00583400:
      (**(code **)(*piVar5 + 0x9c))(1);
      iVar3 = FUN_00589010(local_28,&local_24);
      uVar1 = local_24;
      uVar2 = local_20;
    }
    FUN_00588b20(local_28);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

