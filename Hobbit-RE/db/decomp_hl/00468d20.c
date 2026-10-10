
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00468d20(int *param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Character__HandleMoveStepOver_00720eac);
  local_4 = 0;
  FUN_00401f00(param_4 * *param_3 + *param_2,param_4 * param_3[1] + param_2[1],
               param_4 * param_3[2] + param_2[2]);
  if (DAT_007734f8 - local_5c < _DAT_00726240) {
    local_54 = *param_3;
    local_6c = *param_2;
    local_68 = param_2[1];
    local_4c = param_3[2];
    local_64 = param_2[2];
    local_38 = _DAT_00726240;
    local_2c = _DAT_00726240;
    local_30 = 0;
    local_24 = local_54;
    local_28 = 0.0;
    local_20 = 0;
    local_1c = local_4c;
    local_18 = 0;
    local_10 = 0;
    fVar1 = -_DAT_00726240;
    param_4 = 0.0;
    local_14 = fVar1;
    pfVar4 = &local_28;
    do {
      FUN_00401f00(local_6c + pfVar4[-2],local_68 + pfVar4[-1],local_64 + *pfVar4);
      (**(code **)(*param_1 + 0x148))
                (param_1[2],param_1[3],&local_6c,&local_48,param_1[0x39],param_1[0x38],param_6);
      FUN_005798f0(8);
      _DAT_007778c8 = 1;
      _DAT_007778cc = param_5;
      FUN_00577e70();
      if (DAT_00773970 != 0) break;
      local_6c = local_6c + pfVar4[-2];
      param_4 = (float)((int)param_4 + 1);
      local_68 = local_68 + pfVar4[-1];
      local_64 = local_64 + *pfVar4;
      pfVar4 = pfVar4 + 3;
    } while ((int)param_4 < 3);
    if ((param_4 == 2.8026e-45) && (_DAT_00726244 < DAT_00773504)) {
      fVar2 = DAT_007734f0 - (float)param_1[0x37] / _DAT_00726240;
      if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
        fVar2 = DAT_006e92e4;
      }
      fVar3 = DAT_006e92e4 * fVar2;
      FUN_00401f00(local_54,local_38,local_4c);
      FUN_00401f00(local_54 + fVar3,fStack_50 + fVar1 * fVar2,local_4c + fVar3);
      local_4 = 0xffffffff;
      *param_2 = local_48 + *param_2;
      param_2[1] = fStack_44 + param_2[1];
      param_2[2] = fStack_40 + param_2[2];
      FUN_00649720();
      ExceptionList = local_c;
      return 1;
    }
    FUN_004357e0(&local_60);
  }
  else {
    *param_2 = local_60;
    param_2[1] = local_5c;
    param_2[2] = local_58;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

