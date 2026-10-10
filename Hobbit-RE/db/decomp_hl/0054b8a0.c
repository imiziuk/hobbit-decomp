
int __fastcall FUN_0054b8a0(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_obj_mgr__AllocateSlot_0073cd34);
  local_4 = 0;
  if (*(int *)(param_1 + 0x28c4) == -1) {
    iVar4 = *(int *)(param_1 + 0x28d8);
    iVar2 = iVar4 + 0x200;
    if (iVar2 < 0xc00) {
      iVar2 = 0xc00;
    }
    *(int *)(param_1 + 0x28d8) = iVar2;
    FUN_0064e7d0(s_Resizing_Num_Objects_To___d_0073cd14,iVar2);
    uVar3 = thunk_FUN_0064ffa0(*(undefined4 *)(param_1 + 0x28c0),*(int *)(param_1 + 0x28d8) * 0x14,
                               s__tHC__projects_meridian_Support__0073ccc1 + 3,0xe0);
    *(undefined4 *)(param_1 + 0x28c0) = uVar3;
    *(undefined4 *)(param_1 + 0x28c4) = 0xffffffff;
    if (iVar4 < *(int *)(param_1 + 0x28d8)) {
      iVar2 = iVar4 * 0x14;
      do {
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x28c0)) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 4 + iVar2) = 0xffff;
        *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 6 + iVar2) = 0xffff;
        *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 8 + iVar2) = 0xffff;
        *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 10 + iVar2) = 0xffff;
        *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 0xc + iVar2) = 0xfffe;
        if (iVar2 != 0) {
          *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 4 + iVar2) =
               *(undefined2 *)(param_1 + 0x28c4);
          if (*(int *)(param_1 + 0x28c4) != -1) {
            *(short *)(*(int *)(param_1 + 0x28c0) + 6 + *(int *)(param_1 + 0x28c4) * 0x14) =
                 (short)iVar4;
          }
          *(int *)(param_1 + 0x28c4) = iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x14;
      } while (iVar4 < *(int *)(param_1 + 0x28d8));
    }
  }
  iVar2 = *(int *)(param_1 + 0x28c4);
  iVar4 = iVar2 * 0x14;
  psVar1 = (short *)(*(int *)(param_1 + 0x28c0) + 4 + iVar4);
  *(int *)(param_1 + 0x28c4) = (int)*psVar1;
  *psVar1 = -1;
  *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 6 + iVar4) = 0xffff;
  if (*(int *)(param_1 + 0x28c4) != -1) {
    *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 6 + *(int *)(param_1 + 0x28c4) * 0x14) = 0xffff;
  }
  *(int *)(param_1 + 0x28d4) = *(int *)(param_1 + 0x28d4) + 1;
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return iVar2;
}

