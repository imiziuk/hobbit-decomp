
float10 __fastcall FUN_0064ce40(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int local_8;
  int iStack_4;
  
  local_8 = 0;
  iStack_4 = 0;
  if ((int)param_1[2] != 0) {
    lVar2 = FUN_0064cb70();
    uVar1 = (uint)(lVar2 - *param_1);
    local_8 = uVar1 + *(uint *)(param_1 + 1);
    iStack_4 = (int)((ulonglong)(lVar2 - *param_1) >> 0x20) + *(int *)((int)param_1 + 0xc) +
               (uint)CARRY4(uVar1,*(uint *)(param_1 + 1));
    *(int *)param_1 = (int)lVar2;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(int *)((int)param_1 + 4) = (int)((ulonglong)lVar2 >> 0x20);
    *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
  }
  return (float10)CONCAT44(iStack_4,local_8);
}

