
void __fastcall FUN_0047a4d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar3 = 6;
  FUN_0064e870(6,s_CINEMA__Starting_fx_00728164);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    FUN_0056b660(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
    return;
  }
  if (iVar1 == 1) {
    fVar4 = DAT_006e92e8 / *(float *)(param_1 + 8);
    FUN_00425250(param_1 + 0x34);
    FUN_004f8520(*(undefined4 *)(param_1 + 0x2c),uVar3,fVar4);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
    return;
  }
  if (iVar1 == 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    fVar2 = (float10)FUN_004811c0(uVar3);
    FUN_004f8640(*(undefined4 *)(param_1 + 0x30),
                 (float)((fVar2 - (float10)*(float *)(param_1 + 0x30)) /
                        (float10)*(float *)(param_1 + 8)),uVar3);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
    return;
  }
  if (iVar1 == 3) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = uVar3;
    FUN_00425250(param_1 + 0x34);
    FUN_004f8580(uVar3,uVar5);
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}

