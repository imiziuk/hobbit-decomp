
void __thiscall FUN_004aa440(int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float afStack_24 [3];
  undefined1 auStack_18 [24];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x28))();
  afStack_3c[3] = *pfVar1;
  fStack_2c = pfVar1[1];
  fStack_28 = pfVar1[2];
  afStack_3c[0] = *param_2;
  afStack_3c[1] = param_2[1];
  afStack_3c[2] = param_2[2];
  afStack_24[0] = 1e+06;
  afStack_24[1] = 100000.0;
  afStack_24[2] = 1e+06;
  iVar3 = 0;
  do {
    if (*(float *)((int)afStack_24 + iVar3) < *(float *)((int)afStack_3c + iVar3)) {
      *(undefined4 *)((int)afStack_3c + iVar3) = *(undefined4 *)((int)afStack_24 + iVar3);
    }
    if (*(float *)((int)afStack_3c + iVar3) < -*(float *)((int)afStack_24 + iVar3)) {
      *(float *)((int)afStack_3c + iVar3) = -*(float *)((int)afStack_24 + iVar3);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xc);
  FUN_004357e0(param_1 + 0x11);
  FUN_004357e0(param_1 + 0x14);
  pfVar1 = (float *)(param_1 + 5);
  *pfVar1 = afStack_3c[0];
  param_1[6] = (int)afStack_3c[1];
  param_1[7] = (int)afStack_3c[2];
  iVar3 = (**(code **)(*param_1 + 0x38))();
  FUN_004357e0(iVar3);
  FUN_004357e0(iVar3 + 0xc);
  FUN_0042faf0(pfVar1);
  FUN_0042faf0(pfVar1);
  if ((param_1[4] & 0x4000000U) != 0) {
    afStack_24[0] = afStack_3c[0] - afStack_3c[3];
    afStack_24[1] = afStack_3c[1] - fStack_2c;
    afStack_24[2] = afStack_3c[2] - fStack_28;
    FUN_004aad90(afStack_24);
  }
  if (((char)param_1[0x1f] == '\x1c') || ((char)param_1[0x1f] == '\x12')) {
    afStack_24[0] = afStack_3c[0] - afStack_3c[3];
    afStack_24[1] = afStack_3c[1] - fStack_2c;
    afStack_24[2] = afStack_3c[2] - fStack_28;
    FUN_004ab260(afStack_24);
  }
  FUN_0058b130(auStack_18,param_1 + 0x11,(int)*(char *)((int)param_1 + 0x7d),param_1,
               (int)param_1 + 0x62);
  if (param_3 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x28))();
    param_1[8] = *piVar2;
    param_1[9] = piVar2[1];
    param_1[10] = piVar2[2];
  }
  piVar2 = (int *)param_1[0x23];
  if ((((piVar2 != (int *)0x0) && (param_1[0x24] - (int)piVar2 >> 2 != 0)) &&
      (*(char *)(*piVar2 + 0x38) == '\0')) &&
     (((pfVar1 = (float *)(**(code **)(*param_1 + 0x28))(),
       (NAN(afStack_3c[3]) || NAN(*pfVar1)) == (afStack_3c[3] == *pfVar1) ||
       ((NAN(fStack_2c) || NAN(pfVar1[1])) == (fStack_2c == pfVar1[1]))) ||
      ((NAN(fStack_28) || NAN(pfVar1[2])) == (fStack_28 == pfVar1[2]))))) {
    FUN_004acb90();
    FUN_0064e7d0(s_Moved_an_immobile_primitive_0072b7f0);
  }
  return;
}

