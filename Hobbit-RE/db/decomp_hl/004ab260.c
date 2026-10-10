
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ab260(int *param_1,float *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_4;
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  uStack_24 = *puVar2;
  fStack_20 = ((float)param_1[0x15] - (float)param_1[0x12]) * _DAT_006e936c + (float)puVar2[1];
  uStack_1c = puVar2[2];
  fVar5 = (float10)FUN_00557bc0();
  if (fVar5 < (float10)_DAT_006ec0e0 == (NAN(fVar5) || NAN((float10)_DAT_006ec0e0))) {
    fVar5 = (float10)DAT_006e92e8 / fVar5;
    fStack_10 = (float)(fVar5 * (float10)param_2[2]);
    fStack_18 = (float)(fVar5 * (float10)*param_2);
    fStack_14 = (float)(fVar5 * (float10)param_2[1]);
    fStack_4 = fStack_10;
    uVar3 = FUN_0054c5c0(0x28,s_C__projects_meridian_Support_Obj_0072b7a4,0x818);
    sVar1 = FUN_0054c7c0();
    while (-1 < sVar1) {
      iVar4 = FUN_004e2330(&uStack_24);
      if ((iVar4 != 0) &&
         (_DAT_006ebfd8 <
          SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]))) {
        FUN_004851f0(&uStack_24,&fStack_18);
      }
      sVar1 = FUN_0054c7c0();
    }
    FUN_0054c880(uVar3);
    return;
  }
  return;
}

