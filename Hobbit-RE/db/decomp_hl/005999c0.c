
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005999c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x274) = 0;
  FUN_00592920();
  uVar7 = FUN_004a4160();
  piVar4 = (int *)FUN_004021c0(uVar7);
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    return;
  }
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  piVar4 = (int *)FUN_00592920();
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
  fVar1 = pfVar6[1] - pfVar5[1];
  fVar3 = SQRT(fVar1 * fVar1 +
               (*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
               (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]));
  fVar2 = _DAT_006f4088;
  if (fVar3 < _DAT_006f40c4) {
    fVar2 = _DAT_006f4084;
    if (fVar3 <= _DAT_006e9364) goto LAB_00599aa2;
    fVar2 = (fVar3 - _DAT_006e9364) * _DAT_006e9350 * _DAT_006f4088;
  }
  fVar2 = fVar2 + _DAT_006f4084;
LAB_00599aa2:
  if (fVar1 <= _DAT_006f408c + fVar2) {
    if (fVar1 < fVar2 - _DAT_006f408c != (NAN(fVar1) || NAN(fVar2 - _DAT_006f408c))) {
      *(float *)(param_1 + 0x220) =
           _DAT_006f40b4 * *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x220);
    }
    return;
  }
  *(float *)(param_1 + 0x220) =
       *(float *)(param_1 + 0x220) - _DAT_006f40b4 * *(float *)(param_1 + 0x294);
  return;
}

