
void FUN_00558d10(uint param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_1;
  
  uVar2 = param_1;
  local_1 = 0xff;
  iVar1 = FUN_00554730(&local_1);
  if (iVar1 == 0) {
    local_1 = 0xff;
  }
  if (param_2 == '\0') {
    uVar4 = (uint)param_1._3_1_;
  }
  else {
    uVar4 = ((uint)param_1._3_1_ * (uint)local_1) / 0xff;
    param_1._3_1_ = (byte)uVar4;
  }
  if (param_3 == '\0') {
    uVar2 = uVar2 & 0xff;
    uVar3 = (uint)param_1._1_1_;
  }
  else {
    uVar4 = (uint)local_1;
    param_1._2_1_ = (byte)((param_1._2_1_ * uVar4) / 0xff);
    uVar3 = (param_1._1_1_ * uVar4) / 0xff;
    uVar2 = ((uVar2 & 0xff) * uVar4) / 0xff;
    uVar4 = (uint)param_1._3_1_;
  }
  (**(code **)(*DAT_007f1000 + 200))
            (DAT_007f1000,0x3c,
             (((uVar4 & 0xff) << 8 | (uint)param_1._2_1_) << 8 | uVar3 & 0xff) << 8 | uVar2 & 0xff);
  return;
}

