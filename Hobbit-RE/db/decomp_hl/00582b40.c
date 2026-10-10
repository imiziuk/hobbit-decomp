
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00582b40(int param_1,float param_2,float param_3,undefined4 *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  
  param_2 = param_2 + *(float *)(param_1 + 0x74);
  if (((param_2 < _DAT_006e958c == (NAN(param_2) || NAN(_DAT_006e958c))) ||
      (fVar1 = DAT_006e92e4, DAT_006e92e4 <= param_2)) &&
     (fVar1 = param_2, param_2 < _DAT_006e958c == (NAN(param_2) || NAN(_DAT_006e958c)))) {
    fVar1 = _DAT_006e958c;
  }
  fVar1 = fVar1 - DAT_006e92e8;
  fVar2 = DAT_006e92e4;
  if ((fVar1 < DAT_006e92e4 == (NAN(fVar1) || NAN(DAT_006e92e4))) &&
     (fVar2 = fVar1, _DAT_006f3f1c < fVar1)) {
    fVar2 = _DAT_006f3f1c;
  }
  param_3 = param_3 * _DAT_006f3f18;
  *param_4 = 0x3f800000;
  fVar1 = DAT_006e92e8 / (param_3 * param_3);
  *param_6 = fVar1;
  *param_5 = -(SQRT(fVar1 * _DAT_006ec004) * fVar2);
  return;
}

