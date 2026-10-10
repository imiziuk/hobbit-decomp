
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558e90(uint param_1,float *param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  iVar5 = param_1;
  if (param_1 == 0) {
    uStack_4 = -0x100;
  }
  else {
    uVar2 = __ftol();
    uVar3 = __ftol();
    uVar1 = CONCAT11(uVar3,uVar2);
    if ((*(float *)(iVar5 + 8) < DAT_006e92e4 == (NAN(*(float *)(iVar5 + 8)) || NAN(DAT_006e92e4)))
       && (_DAT_006e95dc < *(float *)(iVar5 + 8) !=
           (NAN(_DAT_006e95dc) || NAN(*(float *)(iVar5 + 8))))) {
      uVar2 = __ftol();
      uStack_4 = (uint)CONCAT12(uVar2,uVar1) << 8;
    }
    else if (*(float *)(iVar5 + 8) < DAT_006e92e4 ==
             (NAN(*(float *)(iVar5 + 8)) || NAN(DAT_006e92e4))) {
      uVar2 = __ftol();
      uStack_4 = (uint)CONCAT12(uVar2,uVar1) << 8;
    }
    else {
      uVar2 = __ftol();
      uStack_4 = (uint)CONCAT12(uVar2,uVar1) << 8;
    }
  }
  if (param_2 == (float *)0x0) {
    uVar6 = 0xff;
  }
  else if ((*param_2 < DAT_006e92e4) ||
          (_DAT_006e95dc < *param_2 == (NAN(_DAT_006e95dc) || NAN(*param_2)))) {
    if (DAT_006e92e4 <= *param_2) {
      bVar4 = __ftol();
      uVar6 = (uint)bVar4;
    }
    else {
      bVar4 = __ftol();
      uVar6 = (uint)bVar4;
    }
  }
  else {
    bVar4 = __ftol();
    uVar6 = (uint)bVar4;
  }
  uVar2 = (undefined1)uVar6;
  param_1 = CONCAT31(param_1._1_3_,0xff);
  iVar5 = FUN_00554730(&param_1);
  if (iVar5 != 0) {
    uVar2 = (undefined1)(((param_1 & 0xff) * uVar6) / 0xff);
  }
  (**(code **)(*DAT_007f1000 + 200))
            (DAT_007f1000,0x3c,
             CONCAT31(CONCAT21(CONCAT11(uVar2,uStack_4._1_1_),uStack_4._2_1_),uStack_4._3_1_));
  return;
}

