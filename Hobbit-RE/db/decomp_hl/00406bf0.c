
undefined4 __thiscall FUN_00406bf0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  iVar3 = (int)*(short *)(param_1 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
  if (iVar3 != -1) {
    iVar4 = iVar3;
    do {
      iVar4 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar4 * 0x14 + 0xe);
    } while (iVar4 != -1);
  }
  if (iVar3 != -1) {
    iVar4 = *(int *)(param_1 + 0x28c0);
    do {
      iVar1 = *(int *)(iVar4 + iVar3 * 0x14);
      if (((iVar1 != 0) && (*(uint *)(iVar1 + 8) == param_2)) && (*(uint *)(iVar1 + 0xc) == param_3)
         ) {
        if (iVar3 != -1) {
          uVar2 = *(undefined4 *)(iVar4 + iVar3 * 0x14);
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return uVar2;
        }
        break;
      }
      iVar3 = (int)*(short *)(iVar4 + iVar3 * 0x14 + 0xe);
    } while (iVar3 != -1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

