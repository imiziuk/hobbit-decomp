
undefined8 __fastcall FUN_0064cdf0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  if ((int)param_1[2] != 0) {
    lVar4 = FUN_0064cb70();
    uVar2 = (uint)(lVar4 - *param_1);
    iVar1 = uVar2 + *(uint *)(param_1 + 1);
    iVar3 = (int)((ulonglong)(lVar4 - *param_1) >> 0x20) + *(int *)((int)param_1 + 0xc) +
            (uint)CARRY4(uVar2,*(uint *)(param_1 + 1));
    *param_1 = lVar4;
    *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  return CONCAT44(iVar3,iVar1);
}

