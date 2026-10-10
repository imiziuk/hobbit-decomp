
void FUN_0056eb10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 *param_6,int param_7)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_10 = param_4[2];
  local_18 = *param_4;
  local_14 = param_4[1];
  local_3c = *param_5;
  local_38 = param_5[1];
  local_34 = param_5[2];
  piVar2 = (int *)FUN_004021c0(*param_6,param_6[1]);
  if (piVar2 == (int *)0x0) {
    FUN_004357e0(&local_30);
    FUN_00401f20(&local_3c);
    uVar4 = FUN_00402160(&local_18,&local_c,0x42c80000);
    uVar4 = FUN_00402130(&local_24,&local_30,uVar4);
    FUN_004357e0(uVar4);
    return;
  }
  if (param_7 != 0) {
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
    local_24 = *pfVar3;
    fStack_20 = pfVar3[1];
    fStack_1c = pfVar3[2];
    local_c = 0.0;
    fStack_4 = 0.0;
    if (((char)piVar2[0x1f] == '\x12') || ((char)piVar2[0x1f] == '\x1c')) {
      fVar5 = (float10)(**(code **)(*piVar2 + 0x10c))();
      fVar1 = fStack_4;
    }
    else {
      pfVar3 = (float *)(**(code **)(*piVar2 + 0x30))();
      fVar5 = (float10)pfVar3[1];
      local_c = *pfVar3;
      fVar1 = pfVar3[2];
    }
    local_3c = local_c + local_3c;
    local_38 = (float)((float10)local_38 + fVar5);
    local_34 = local_34 + fVar1;
    FUN_00428790(local_34);
    FUN_004286f0(local_3c);
    FUN_00428740(local_38);
    FUN_00428790(local_34);
    FUN_004286f0(local_3c);
    FUN_00428740(local_38);
    FUN_00401f00(local_24 + local_30,local_2c + fStack_20,local_28 + fStack_1c);
    *param_1 = local_c;
    param_1[1] = fStack_8;
    param_1[2] = fStack_4;
    FUN_00401f00(local_24 + local_18,local_14 + fStack_20,local_10 + fStack_1c);
    *param_2 = local_c;
    param_2[1] = fStack_8;
    param_2[2] = fStack_4;
    return;
  }
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
  local_18 = *pfVar3;
  local_14 = pfVar3[1];
  local_10 = pfVar3[2];
  FUN_00428790(local_34);
  FUN_004286f0(local_3c);
  FUN_00428740(local_38);
  FUN_00401f00(local_18 + local_30,local_14 + local_2c,local_10 + local_28);
  *param_1 = local_c;
  param_1[1] = fStack_8;
  param_1[2] = fStack_4;
  uVar4 = FUN_00402130(&local_c,&local_18,param_4);
  FUN_004357e0(uVar4);
  return;
}

