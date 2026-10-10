
void FUN_00435880(void)

{
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = (float10)FUN_00434ca0(0x30);
  if ((NAN(fVar1) || NAN((float10)DAT_006e92e4)) == (fVar1 == (float10)DAT_006e92e4)) {
    fVar1 = (float10)FUN_00434ca0(4);
    if ((float10)DAT_006e92e4 < fVar1) {
      FUN_00434ca0(4);
      fVar1 = (float10)FUN_00434c10();
      if (extraout_ST1 < fVar1) {
        FUN_00659600(s_OptionSelect_00723150,1);
        FUN_00434dd0(0x30,0x3f800000);
        FUN_00434d10(4,0x41c00000);
        return;
      }
      FUN_00659600(s_OptionCancel_00723140,1);
    }
  }
  return;
}

