
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b8560(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float fStack_40;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_8;
  float fStack_4;
  
  if (param_1[0x6b] != 0) {
    (**(code **)(*param_1 + 0x28))();
    FUN_00401f00();
    fVar2 = (float10)FUN_00402000();
    fVar2 = (float10)_DAT_006e9384 - SQRT(fVar2);
    fStack_40 = (float)fVar2;
    if ((NAN(fVar2) || NAN((float10)DAT_006e92e4)) != (fVar2 == (float10)DAT_006e92e4)) {
      fStack_40 = 0.001;
    }
    FUN_00401f00();
    fVar2 = (float10)FUN_00404890();
    fVar2 = fVar2 * (float10)_DAT_006e936c * (float10)_DAT_006ee608 * (float10)fStack_40 *
            (float10)_DAT_006ee604;
    if (fVar2 < (float10)DAT_006e92e8 != (NAN(fVar2) || NAN((float10)DAT_006e92e8))) {
      fVar2 = (float10)DAT_006e92e8;
    }
    iStack_2c = param_1[0x66];
    fStack_30 = (float)((float10)(float)param_1[0x65] - fVar2);
    fStack_28 = (float)((float10)(float)param_1[0x67] - fVar2);
    fStack_24 = (float)((float10)(float)param_1[0x65] - fVar2);
    fStack_1c = (float)((float10)(float)param_1[0x67] + fVar2);
    fStack_18 = (float)((float10)(float)param_1[0x65] + fVar2);
    fStack_10 = (float)((float10)(float)param_1[0x67] + fVar2);
    fStack_c = (float)((float10)(float)param_1[0x65] + fVar2);
    fStack_4 = (float)((float10)(float)param_1[0x67] - fVar2);
    iStack_20 = iStack_2c;
    iStack_14 = iStack_2c;
    iStack_8 = iStack_2c;
    uVar1 = __ftol();
    FUN_00413480(uVar1,uVar1,uVar1);
    FUN_00469af0(param_1[0x6b]);
    FUN_0054fc60(*(undefined4 *)(param_1[0x6b] + 4),&fStack_30,0x43c80000);
    FUN_0054f9c0();
  }
  return;
}

