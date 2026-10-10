
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005bada0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float unaff_ESI;
  
  piVar3 = (int *)FUN_0041bcc0();
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
  fVar1 = *pfVar4;
  fVar2 = pfVar4[2];
  piVar3 = (int *)FUN_005af120();
  iVar5 = (**(code **)(*piVar3 + 0x154))();
  if (*(int *)(iVar5 + 0x13c) != 0) {
    FUN_005423d0();
  }
  fVar1 = fVar1 - *(float *)(*(int *)(iVar5 + 0x140) + 0xc);
  fVar2 = fVar2 - *(float *)(*(int *)(iVar5 + 0x140) + 0x14);
  FUN_0064cf30(DAT_006e92e8 / SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  (**(code **)(*(int *)(param_1 + 0xb0) + 0x10))(0x3f800000);
  if (unaff_ESI < DAT_006e92e8 != (NAN(unaff_ESI) || NAN(DAT_006e92e8))) {
    if (unaff_ESI < _DAT_006e9370) {
      *(float *)(param_1 + 0xc4) = _DAT_006e9370;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
    *(float *)(param_1 + 0xc4) = unaff_ESI;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  *(float *)(param_1 + 0xc4) = DAT_006e92e8;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

