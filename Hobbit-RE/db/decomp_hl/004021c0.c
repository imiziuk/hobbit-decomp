
uint __thiscall FUN_004021c0(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cea68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar4 = (int)*(short *)(param_1 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
  if (iVar4 != -1) {
    iVar5 = iVar4;
    do {
      iVar5 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar5 * 0x14 + 0xe);
    } while (iVar5 != -1);
  }
  if (iVar4 != -1) {
    iVar5 = *(int *)(param_1 + 0x28c0);
    do {
      iVar2 = *(int *)(iVar5 + iVar4 * 0x14);
      if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == param_2)) && (*(uint *)(iVar2 + 0xc) == param_3)
         ) {
        if (iVar4 != -1) {
          uVar3 = *(uint *)(iVar5 + iVar4 * 0x14);
          bVar1 = *(byte *)(uVar3 + 0x7f);
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return -(uint)((bVar1 & 0x10) != 0) & uVar3;
        }
        break;
      }
      iVar4 = (int)*(short *)(iVar5 + iVar4 * 0x14 + 0xe);
    } while (iVar4 != -1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

