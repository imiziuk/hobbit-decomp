
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693e00(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  iVar2 = param_1;
  uVar5 = *(uint *)(param_1 + 0x58);
  if ((uVar5 & 1) == 0) {
    FUN_0068e2ef(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar5 & 4) != 0) goto LAB_00693e32;
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) goto LAB_00693e32;
    }
    else {
      FUN_0068e312(param_1,"Out of place gAMA chunk");
    }
  }
  if (param_3 == 4) {
    FUN_00693134(iVar2,&param_1,4);
    iVar4 = FUN_00693a0a(iVar2,0);
    if (iVar4 != 0) {
      return;
    }
    uVar5 = FUN_006930fe();
    if (uVar5 == 0) {
      return;
    }
    if (((*(uint *)(iVar3 + 8) & 0x800) != 0) &&
       (_DAT_006fbd08 < ABS((double)uVar5 - _DAT_006fbd10))) {
      FUN_0068e312(iVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      return;
    }
    fVar1 = (float)uVar5 * _DAT_006ec0e0;
    *(float *)(iVar2 + 0x130) = fVar1;
    FUN_006904ae(iVar2,iVar3,(double)fVar1);
    return;
  }
LAB_00693e32:
  FUN_0068e312(iVar2);
  FUN_00693a0a(iVar2,param_3);
  return;
}

