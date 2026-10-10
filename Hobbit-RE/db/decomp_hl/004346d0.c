
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004346d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if (DAT_0075c794 != 0) {
    DAT_0075c794 = 0;
    uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_TEST_SUBTITLE_00723108);
    uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_stones_00723100);
    FUN_0052d9b0(uVar2,uVar1);
  }
  iVar3 = FUN_0052a650();
  if (iVar3 == 0) {
    FUN_00434c40(2,0x41200000);
  }
  fVar6 = (float10)FUN_00434ca0(0x15);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
    FUN_00434f50(2,0,0x41200000);
  }
  fVar6 = (float10)FUN_00434ca0(0x15);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e8)) != (fVar6 == (float10)DAT_006e92e8)) {
    FUN_00434f50(2,0,0x41a00000);
  }
  fVar6 = (float10)FUN_00434ca0(0x15);
  if ((NAN(fVar6) || NAN((float10)_DAT_006e999c)) != (fVar6 == (float10)_DAT_006e999c)) {
    FUN_00434f50(2,0,0x41f00000);
  }
  fVar6 = (float10)FUN_00434ca0(0x16);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
    FUN_00434f50(0x32,0,0x3f800000);
    FUN_00434f50(0x30,0,0x40a00000);
    FUN_00434f50(0x31,0,0x40a00000);
  }
  fVar6 = (float10)FUN_00434ca0(0x16);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e8)) != (fVar6 == (float10)DAT_006e92e8)) {
    FUN_00434f50(0x32,0,0x40000000);
    FUN_00434f50(0x30,0,0x41200000);
    FUN_00434f50(0x31,0,0x41200000);
  }
  fVar6 = (float10)FUN_00434ca0(0x16);
  if ((NAN(fVar6) || NAN((float10)_DAT_006e999c)) != (fVar6 == (float10)_DAT_006e999c)) {
    FUN_00434f50(0x32,0,0x40400000);
    FUN_00434f50(0x30,0,0x41700000);
    FUN_00434f50(0x31,0,0x41700000);
  }
  fVar6 = (float10)FUN_00434ca0(2);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) == (fVar6 == (float10)DAT_006e92e4)) {
    fVar6 = (float10)FUN_00434ca0(3);
    if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
      FUN_00434c40(3,0x3f800000);
      FUN_00434cf0(0x2c);
    }
  }
  fVar6 = (float10)FUN_00434ca0(0x74);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) == (fVar6 == (float10)DAT_006e92e4)) {
    fVar6 = (float10)FUN_00434ca0(0x1d);
    if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
      fVar6 = (float10)FUN_00434ca0(0x1d);
      if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
        FUN_00434cf0(0x1d);
        FUN_00434cf0(0x20);
      }
    }
  }
  fVar6 = (float10)FUN_00434ca0(0x33);
  if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) == (fVar6 == (float10)DAT_006e92e4)) {
    fVar6 = (float10)FUN_00434ca0(0x26);
    if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
      fVar6 = (float10)FUN_00434ca0(0x26);
      if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
        FUN_00434cf0(0x26);
        FUN_00434cf0(0x29);
      }
    }
  }
  iVar3 = FUN_0052a650();
  if (0xc < iVar3) {
    fVar6 = (float10)FUN_00434ca0(0x35);
    if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
      FUN_00434cf0(0x35);
      FUN_00435820(1,5,1);
    }
    fVar6 = (float10)FUN_00434ca0(0x33);
    if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
      FUN_00434cf0(0x33);
      FUN_00435820(0,3,1);
      fVar6 = (float10)FUN_00434ca0(0x26);
      if (fVar6 < (float10)DAT_006e92e4 != (fVar6 == (float10)DAT_006e92e4)) {
        FUN_00434cf0(0x26);
      }
      fVar6 = (float10)FUN_00434ca0(0x29);
      if (fVar6 < (float10)DAT_006e92e4 != (fVar6 == (float10)DAT_006e92e4)) {
        FUN_00434cf0(0x29);
      }
    }
  }
  fVar6 = (float10)FUN_00434ca0(8);
  if ((float10)_DAT_006e99c0 <= fVar6) {
    fVar6 = (float10)FUN_00434ca0(0x1a);
    if (fVar6 < (float10)_DAT_006e9448 != (NAN(fVar6) || NAN((float10)_DAT_006e9448))) {
      fVar6 = (float10)FUN_00434ca0(8);
      FUN_00434c40(8,(float)(fVar6 - (float10)_DAT_006e99c0));
      fVar6 = (float10)FUN_00434c10();
      FUN_00434c20((float)(fVar6 + (float10)_DAT_006e99bc));
      FUN_00434d10(0x1a,0x3f800000);
      fVar6 = (float10)FUN_00434c10();
      FUN_00434d10(4,(float)fVar6);
      local_c = 0x3f800000;
      local_8 = 1.0;
      local_4 = 0x3f800000;
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0;
      piVar4 = (int *)FUN_0041bcc0();
      uVar1 = (**(code **)(*piVar4 + 0x28))(&local_18,&local_c);
      uVar7 = FUN_00488d30(s_Bilbo_LevelUp_007230f0,uVar1);
      piVar4 = (int *)FUN_004021c0(uVar7);
      iVar3 = *piVar4;
      uVar7 = FUN_0041bcd0();
      (**(code **)(iVar3 + 0xf4))(uVar7);
      (**(code **)(*piVar4 + 0xf8))(s_Bilbo_Dummy_Root_007230dc);
      FUN_00659600(s_LevelUp_007230d4,1);
      FUN_00434ca0(4);
      iVar3 = __ftol();
      iVar5 = 0;
      if (0xf < iVar3) {
        iVar5 = 0xe;
      }
      local_8 = (float)(iVar5 + 0x29);
      uVar1 = __ftol();
      iVar3 = FUN_006a2260(uVar1);
      uVar1 = __ftol();
      iVar5 = FUN_006a22a0(uVar1);
      local_14 = (float)iVar5;
      local_18 = (float)iVar3;
      FUN_0058e610(s_HUD_LevelUp_007230c8,&local_18,1);
    }
  }
  FUN_0041bcc0();
  iVar3 = FUN_00422450();
  if (iVar3 != 0) {
    FUN_0041bcc0();
    fVar6 = (float10)FUN_00422430();
    FUN_00434c40(0x1c,(float)fVar6);
    FUN_0041bcc0();
    fVar6 = (float10)FUN_00422440();
    FUN_00434c40(0x1b,(float)fVar6);
  }
  return;
}

