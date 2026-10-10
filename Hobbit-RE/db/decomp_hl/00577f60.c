
bool __thiscall FUN_00577f60(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbc20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_CheckCollisions_Guid__0074027c);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_0057801d:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      piVar5 = (int *)0x0;
LAB_00578051:
      if ((*(int *)(param_1 + 0x4380) == 0) || (iVar4 = FUN_004ab440(), iVar4 != 0)) {
        (**(code **)(*piVar5 + 0x70))();
        *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
        FUN_00647700(param_1,*(undefined4 *)(param_1 + 0x480),0x48,&LAB_00577900);
        bVar2 = 0 < *(int *)(param_1 + 0x480);
        local_4 = 0xffffffff;
        FUN_00649720();
      }
      else {
        local_4 = 0xffffffff;
        FUN_00649720();
        bVar2 = false;
      }
      ExceptionList = local_c;
      return bVar2;
    }
    iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
    if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == param_2)) && (*(uint *)(iVar4 + 0xc) == param_3))
    {
      if (iVar3 != -1) {
        uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
        goto LAB_00578051;
      }
      goto LAB_0057801d;
    }
    iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe);
  } while( true );
}

