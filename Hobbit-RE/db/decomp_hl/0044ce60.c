
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044ce60(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*param_2 != 0 || param_2[1] != 0) &&
     (piVar4 = (int *)FUN_004021c0(*param_2,param_2[1]), piVar4 != (int *)0x0)) {
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
    fVar3 = (float)piVar4[0x15] + _DAT_006e9448;
    fVar1 = *pfVar5;
    fVar2 = pfVar5[2];
    FUN_0065fd00(0);
    fStack_c = fVar1 + *param_3;
    fStack_8 = fVar3 + param_3[1];
    fStack_4 = fVar2 + param_3[2];
    iVar6 = FUN_00673520(&fStack_c,0);
    if (iVar6 != 0) {
      if ((char)piVar4[0x1f] == '$') {
        iVar6 = FUN_004d57a0();
        if (iVar6 != 0) {
          return;
        }
        fVar3 = fVar3 + _DAT_006ec0ac;
      }
      else if ((char)piVar4[0x1f] == '5') {
        uVar7 = (**(code **)(*param_1 + 0x28))();
        iVar6 = FUN_004df1c0(uVar7);
        if (iVar6 == 0) {
          return;
        }
      }
      fStack_c = fVar1 + *param_3;
      fStack_8 = fVar3 + param_3[1];
      fStack_4 = fVar2 + param_3[2];
      FUN_004f7610(&fStack_c,*param_2,param_2[1]);
    }
  }
  return;
}

