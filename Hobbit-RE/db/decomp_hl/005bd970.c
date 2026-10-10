
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005bd970(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) - param_2;
    *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) - param_2;
    piVar3 = (int *)FUN_0041bcc0();
    fVar6 = (float10)(**(code **)(*piVar3 + 0x110))();
    if (fVar6 < (float10)_DAT_006f4358 != (NAN(fVar6) || NAN((float10)_DAT_006f4358))) {
      fVar6 = (float10)DAT_006e92e4;
    }
    fVar2 = (float10)_DAT_006e9988;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
    fVar6 = (float10)param_2 * fVar2 * fVar6;
    fVar1 = (float)(fVar6 + (float10)*(float *)(param_1 + 0x88));
    *(float *)(param_1 + 0x90) = (float)fVar6;
    *(float *)(param_1 + 0x88) = fVar1;
    if (((*(float *)(param_1 + 0x8c) < _DAT_006e9988 ==
          (NAN(*(float *)(param_1 + 0x8c)) || NAN(_DAT_006e9988))) || (fVar1 < _DAT_006e9988)) ||
       (*(float *)(param_1 + 0x124) < DAT_006e92e4 == (*(float *)(param_1 + 0x124) == DAT_006e92e4))
       ) {
      if (((*(float *)(param_1 + 0x8c) < _DAT_006e9984 ==
            (NAN(*(float *)(param_1 + 0x8c)) || NAN(_DAT_006e9984))) || (fVar1 < _DAT_006e9984)) ||
         (*(float *)(param_1 + 0x128) < DAT_006e92e4 ==
          (*(float *)(param_1 + 0x128) == DAT_006e92e4))) {
        if (fVar6 <= (float10)_DAT_006e92f4) {
          fVar1 = fVar1 - param_2 * _DAT_006e92f4;
          if (fVar1 < DAT_006e92e4) {
            fVar1 = DAT_006e92e4;
          }
          *(float *)(param_1 + 0x88) = fVar1;
        }
        else {
          if (fVar6 <= (float10)_DAT_006f4350) {
            *(undefined4 *)(param_1 + 0x120) = 1;
          }
          else {
            fVar6 = fVar6 - (float10)_DAT_006f4350;
            *(undefined4 *)(param_1 + 0x120) = 2;
          }
          *(float *)(param_1 + 0x11c) = (float)fVar6;
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x90) = 0;
        }
      }
      else {
        *(float *)(param_1 + 0x11c) = (float)fVar6;
        *(undefined4 *)(param_1 + 0x120) = 4;
        uVar5 = 1;
      }
    }
    else {
      *(float *)(param_1 + 0x11c) = (float)fVar6;
      *(undefined4 *)(param_1 + 0x120) = 3;
      uVar5 = 1;
    }
    if (DAT_006e92e4 < *(float *)(param_1 + 0x90)) {
      uVar5 = 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar4 = __ftol();
      FUN_004f8a30(uVar4);
      return uVar5;
    }
  }
  FUN_004f8a30(0xffffffff);
  return uVar5;
}

