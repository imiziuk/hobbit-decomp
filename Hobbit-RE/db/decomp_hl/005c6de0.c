
void __thiscall FUN_005c6de0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_clutter_mgr__HideClutter_007461b0);
  local_4 = 0;
  if ((((int)param_2 <= *(int *)(param_1 + 0x58)) && (iVar1 = *(int *)(param_1 + 0x6c), iVar1 != 0))
     && (iVar2 = (int)param_2 >> (*(byte *)(param_1 + 0x66) & 0x1f), uVar5 = __allshl(),
        (*(uint *)(iVar1 + iVar2 * 0x18) & (uint)uVar5) == 0 &&
        (*(uint *)(iVar1 + 4 + iVar2 * 0x18) & (uint)((ulonglong)uVar5 >> 0x20)) == 0)) {
    uVar4 = *(uint *)(param_1 + 0x60) & param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 8 +
                    ((int)param_2 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x24 + uVar4 * 0x28);
    if (((uVar3 != 0xffffffff) && (iVar2 = *(int *)(DAT_0076f648 + uVar3 * 0x14), iVar2 != 0)) &&
       (((*(byte *)(iVar2 + 0x7f) & 0x10) != 0 && ((iVar2 != 0 && (*(int *)(iVar2 + 0x10) < 0))))))
    {
      FUN_0054be30(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      *(undefined2 *)(iVar1 + uVar4 * 0x28 + 0x24) = 0;
      *(short *)(param_1 + 0x94) = (short)param_2;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

