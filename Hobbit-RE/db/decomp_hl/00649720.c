
void __fastcall FUN_00649720(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((DAT_007ccff0 != 0) && (DAT_007ccfac != 0)) {
    if (DAT_007ccf28 != 0) {
      *(int *)(DAT_007ccff4 + 0x18) = *(int *)(DAT_007ccff4 + 0x18) + 1;
      iVar5 = DAT_007ccff4;
      puVar1 = (uint *)(DAT_007ccff4 + 0x10);
      uVar7 = FUN_0064cb70();
      uVar3 = *param_1;
      uVar6 = (uint)uVar7 - *param_1;
      uVar4 = param_1[1];
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      *(int *)(iVar5 + 0x14) =
           *(int *)(iVar5 + 0x14) +
           (((int)((ulonglong)uVar7 >> 0x20) - uVar4) - (uint)((uint)uVar7 < uVar3)) +
           (uint)CARRY4(uVar2,uVar6);
    }
    DAT_007ccff4 = *(int *)(DAT_007ccff4 + 4);
  }
  return;
}

