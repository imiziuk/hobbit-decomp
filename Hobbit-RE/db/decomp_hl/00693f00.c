
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693f00(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 & 1) == 0) {
    FUN_0068e2ef(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      pcVar4 = "Invalid sRGB after IDAT";
      goto LAB_00693f27;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 8) != 0)) {
        pcVar4 = "Duplicate sRGB chunk";
        goto LAB_00693f27;
      }
    }
    else {
      FUN_0068e312(param_1,"Out of place sRGB chunk");
    }
  }
  if (param_3 == 1) {
    FUN_00693134(uVar2,(int)&param_1 + 3,1);
    iVar3 = FUN_00693a0a(uVar2,0);
    if (iVar3 != 0) {
      return;
    }
    uVar1 = param_1 >> 0x18;
    if (3 < uVar1) {
      FUN_0068e312(uVar2,"Unknown sRGB intent");
      return;
    }
    if (((*(byte *)(param_2 + 8) & 1) != 0) &&
       ((float)_DAT_006fbd08 <
        ABS((*(float *)(uVar2 + 0x130) * _DAT_006e997c + (float)_DAT_006efa68) -
            (float)_DAT_006fbd10))) {
      FUN_0068e312(uVar2,"Ignoring incorrect gAMA value when sRGB is also present");
    }
    FUN_006905aa(uVar2,param_2,uVar1);
    return;
  }
  pcVar4 = "Incorrect sRGB chunk length";
LAB_00693f27:
  FUN_0068e312(uVar2,pcVar4);
  FUN_00693a0a(uVar2,param_3);
  return;
}

