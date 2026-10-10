
undefined4 __fastcall FUN_0040f100(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (*(int *)(param_1 + 0x28) != 5) {
    uVar3 = FUN_004c7410();
    return uVar3;
  }
  if ((*(int *)(iVar2 + 0x140) != 0) &&
     (fVar1 = *(float *)(*(int *)(iVar2 + 0x140) + 0x10),
     fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8)))) {
    return 0;
  }
  return 1;
}

