
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00448c70(int *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [3];
  float fStack_4c;
  undefined1 auStack_40 [48];
  float fStack_10;
  float fStack_8;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_70 = *pfVar1;
  fStack_6c = pfVar1[1];
  fStack_68 = pfVar1[2];
  if (param_2 == 0) {
    fVar2 = 40.0;
  }
  else {
    FUN_00540e90(s_WEAPON_00720f68,auStack_40,0);
    fStack_4c = fStack_10 - fStack_70;
    fVar2 = SQRT(fStack_4c * fStack_4c + (fStack_8 - fStack_68) * (fStack_8 - fStack_68));
  }
  FUN_00449810(&fStack_64,fVar2);
  fStack_60 = fStack_60 - fStack_6c;
  if (fStack_60 < DAT_006e92e4 != (NAN(fStack_60) || NAN(DAT_006e92e4))) {
    fStack_60 = -fStack_60;
  }
  if (_DAT_006ec0ac < fStack_60) {
    FUN_00448560();
  }
  afStack_58[0] = fStack_64 - fStack_70;
  fStack_60 = fStack_6c;
  afStack_58[2] = fStack_5c - fStack_68;
  afStack_58[1] = 0.0;
  FUN_00469060(&fStack_70,afStack_58,0,*(undefined4 *)(param_1[0x114] + 0x58),0,1,1);
  (**(code **)(*param_1 + 0x14))(&fStack_70,0);
  return;
}

