
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c3200(int *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 local_40 [64];
  
  iVar3 = FUN_004c71a0();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x118))(local_40);
  }
  else {
    piVar4 = (int *)param_1[0x50];
    uVar1 = piVar4[1] * 2;
    if (((uVar1 ^ piVar4[1]) & 0x7fffffff ^ uVar1) == 0xffffffff) {
      iVar3 = *piVar4;
    }
    else {
      iVar3 = FUN_00549470(piVar4 + 1);
    }
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_0053cb40(s__coll_0072c884,1);
      if (iVar3 == -1) {
        iVar3 = 0;
      }
    }
    (**(code **)(*param_1 + 0x114))(local_40,iVar3);
  }
  piVar4 = (int *)FUN_0041bcc0();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
  fVar2 = (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
          (*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
          (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]);
  if (fVar2 < _DAT_006e99d0 != (NAN(fVar2) || NAN(_DAT_006e99d0))) {
    FUN_004d21b0(&stack0xffffffb8,0,0);
  }
  return;
}

