
void FUN_00559300(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 float param_6,float param_7)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcVar1 = (char *)(param_3 * 0x78 + 0x238 + param_2);
  fVar6 = (float10)FUN_006c135a();
  fVar2 = (float)fVar6;
  fVar6 = (float10)FUN_006c135a();
  fVar3 = (float)fVar6;
  FUN_00559100(param_1,param_2,param_3);
  if ((pcVar1[2] & 2U) == 0) {
    FUN_00557d60(&fStack_40);
    fVar4 = fStack_40 * fVar2;
    fVar5 = fStack_2c * fVar3;
    fStack_40 = fStack_40 * param_6;
    fStack_2c = fStack_2c * param_7;
    fStack_20 = fVar4 + fStack_30 * fVar3 + fStack_20;
    fStack_1c = fVar5 + fStack_3c * fVar2 + fStack_1c;
  }
  else {
    fStack_40 = param_6;
    uStack_10 = 0;
    fStack_30 = 0.0;
    uStack_c = 0;
    fStack_3c = 0.0;
    uStack_8 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    uStack_14 = 0;
    uStack_24 = 0;
    uStack_34 = 0;
    uStack_18 = 0x3f800000;
    uStack_4 = 0x3f800000;
    fStack_2c = param_7;
    fStack_20 = fVar2;
    fStack_1c = fVar3;
  }
  (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,param_1 + 0x10,&fStack_40);
  (**(code **)(*DAT_007f1000 + 0xfc))
            (DAT_007f1000,param_1,0xb,(uint)*(byte *)(param_2 + 0x9bc + *pcVar1 * 2) | (uint)fVar3);
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x18,2);
  return;
}

