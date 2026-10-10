
void FUN_00424c30(undefined4 param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined8 uVar3;
  
  uVar1 = 0x19;
  fVar2 = (float10)FUN_00434ca0(0x37);
  if ((NAN(fVar2) || NAN((float10)DAT_006e92e4)) == (fVar2 == (float10)DAT_006e92e4)) {
    uVar1 = 0x1a;
  }
  else {
    fVar2 = (float10)FUN_00434ca0(0x36);
    if ((NAN(fVar2) || NAN((float10)DAT_006e92e4)) == (fVar2 == (float10)DAT_006e92e4)) {
      uVar1 = 0x1b;
    }
    else {
      fVar2 = (float10)FUN_00434ca0(0x38);
      if ((NAN(fVar2) || NAN((float10)DAT_006e92e4)) == (fVar2 == (float10)DAT_006e92e4)) {
        uVar1 = 0x1c;
      }
    }
  }
  FUN_004357e0(param_1);
  uVar3 = FUN_00425510();
  FUN_004b53a0(uVar1,uVar3);
  return;
}

