
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004767c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(ushort *)(param_1 + 0x10) & 2) == 0) {
    return;
  }
  *(float *)(param_1 + 0x14) = param_2 + *(float *)(param_1 + 0x14);
  if ((*(ushort *)(param_1 + 0x10) & 4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_00659e10(*(undefined4 *)(param_1 + 0x54));
    if (((((iVar2 != 0) || (iVar2 = FUN_00659e70(*(undefined4 *)(param_1 + 0x54)), iVar2 != 0)) ||
         (iVar2 = FUN_00659ed0(*(undefined4 *)(param_1 + 0x54)), iVar2 != 0)) ||
        (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 8))) &&
       (fVar1 = *(float *)(param_1 + 8) + _DAT_006ec06c,
       fVar1 < *(float *)(param_1 + 0x14) == (fVar1 == *(float *)(param_1 + 0x14)))) {
      return;
    }
    piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x100))();
    }
    iVar2 = FUN_00659e10(*(undefined4 *)(param_1 + 0x54));
    if ((iVar2 != 0) || (iVar2 = FUN_00659e70(*(undefined4 *)(param_1 + 0x54)), iVar2 != 0)) {
      FUN_00659c80(*(undefined4 *)(param_1 + 0x54),0);
    }
    FUN_0054ec40();
    FUN_0064e870(6,s_CINEMA__Finished_dialog__s_00727d94,*(undefined4 *)(param_1 + 0x28));
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
    return;
  }
  iVar2 = FUN_00659e10(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_00659e70(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_00659ed0(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 != 0) {
    return;
  }
  piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x100))();
  }
  FUN_0054ec40();
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  FUN_0064e870(6,s_CINEMA__Finished_dialog__s_00727d94,*(undefined4 *)(param_1 + 0x28));
  return;
}

