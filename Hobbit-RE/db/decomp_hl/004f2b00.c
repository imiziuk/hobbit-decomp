
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2b00(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  float local_54;
  float afStack_48 [17];
  
  fVar1 = *(float *)(param_1 + 0x13a0);
  if (fVar1 < _DAT_006e936c == (NAN(fVar1) || NAN(_DAT_006e936c))) {
    local_54 = ((fVar1 - _DAT_006e936c) + (fVar1 - _DAT_006e936c)) * _DAT_006e9578;
    uStack_58 = 0x4f2c01;
    fVar4 = (float10)FUN_0064c800();
    afStack_48[8] = -0.5;
    afStack_48[9] = -0.5;
    afStack_48[10] = -0.5;
    afStack_48[0xb] = 0.5;
    afStack_48[0xc] = 0.5;
    afStack_48[0xd] = 0.5;
    fVar4 = ((float10)DAT_006e92e8 - fVar4) * ((float10)_DAT_0072f314 - (float10)_DAT_0072f318) +
            (float10)_DAT_0072f318;
    afStack_48[0xe] = 0.5;
    afStack_48[0xf] = -0.5;
    iVar3 = 0;
    do {
      *(undefined4 *)((int)afStack_48 + iVar3) = *(undefined4 *)((int)afStack_48 + iVar3 + 0x20);
      *(undefined4 *)((int)afStack_48 + iVar3 + 4) = *(undefined4 *)((int)afStack_48 + iVar3 + 0x24)
      ;
      iVar2 = iVar3 + 8;
      *(float *)((int)afStack_48 + iVar3) =
           (float)(fVar4 * (float10)*(float *)((int)afStack_48 + iVar3));
      *(float *)((int)afStack_48 + iVar3 + 4) =
           (float)(fVar4 * (float10)*(float *)((int)afStack_48 + iVar3 + 4));
      *(float *)((int)afStack_48 + iVar3) = *(float *)((int)afStack_48 + iVar3) + _DAT_006e936c;
      *(float *)((int)afStack_48 + iVar3 + 4) =
           *(float *)((int)afStack_48 + iVar3 + 4) + _DAT_006e936c;
      iVar3 = iVar2;
    } while (iVar2 < 0x20);
    local_54 = 2.56438e-43;
    uStack_58 = 3;
    piStack_5c = (int *)0x4f2cba;
    FUN_0066c3a0();
    piStack_5c = (int *)0x4f2cbf;
    FUN_0066dac0();
    piStack_68 = (int *)(param_1 + 0x13a4);
  }
  else {
    local_54 = (fVar1 + fVar1) * _DAT_006e9578;
    uStack_58 = 0x4f2b34;
    fVar4 = (float10)FUN_0064c800();
    afStack_48[8] = -0.5;
    afStack_48[9] = -0.5;
    fVar4 = ((float10)DAT_006e92e8 - fVar4) * (float10)_DAT_0072f314;
    afStack_48[10] = -0.5;
    afStack_48[0xb] = 0.5;
    afStack_48[0xc] = 0.5;
    afStack_48[0xd] = 0.5;
    afStack_48[0xe] = 0.5;
    afStack_48[0xf] = -0.5;
    iVar3 = 0;
    do {
      *(undefined4 *)((int)afStack_48 + iVar3) = *(undefined4 *)((int)afStack_48 + iVar3 + 0x20);
      *(undefined4 *)((int)afStack_48 + iVar3 + 4) = *(undefined4 *)((int)afStack_48 + iVar3 + 0x24)
      ;
      iVar2 = iVar3 + 8;
      *(float *)((int)afStack_48 + iVar3) =
           (float)(fVar4 * (float10)*(float *)((int)afStack_48 + iVar3));
      *(float *)((int)afStack_48 + iVar3 + 4) =
           (float)(fVar4 * (float10)*(float *)((int)afStack_48 + iVar3 + 4));
      *(float *)((int)afStack_48 + iVar3) = *(float *)((int)afStack_48 + iVar3) + _DAT_006e936c;
      *(float *)((int)afStack_48 + iVar3 + 4) =
           *(float *)((int)afStack_48 + iVar3 + 4) + _DAT_006e936c;
      iVar3 = iVar2;
    } while (iVar2 < 0x20);
    local_54 = 2.56438e-43;
    uStack_58 = 3;
    piStack_5c = (int *)0x4f2bdb;
    FUN_0066c3a0();
    piStack_5c = (int *)0x4f2be0;
    FUN_0066dac0();
    piStack_68 = (int *)(param_1 + 0x13c4);
  }
  piStack_5c = (int *)0x1;
  uStack_60 = 1;
  uStack_64 = 0;
  uStack_6c = 0x4f2cd1;
  FUN_006749a0();
  local_54 = -NAN;
  uStack_58 = 0x4f2ce8;
  FUN_0066ddd0();
  local_54 = 1.4013e-45;
  uStack_58 = 0x1b;
  piStack_5c = DAT_007f1000;
  uStack_60 = 0x4f2cfd;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_60 = 0;
  uStack_64 = 0xf;
  piStack_68 = DAT_007f1000;
  uStack_6c = 0x4f2d0f;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_6c = 9;
  uStack_70 = 0x13;
  piStack_74 = DAT_007f1000;
  uStack_78 = 0x4f2d21;
  (**(code **)(*DAT_007f1000 + 200))();
  uStack_78 = 1;
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14);
  FUN_0066dce0(&uStack_78);
  FUN_0066dfc0(0,0,0x3f800000);
  FUN_0066dce0(&uStack_70);
  FUN_0066dfc0(0,*(undefined4 *)(param_1 + 0x564),0x3f800000);
  FUN_0066dce0(&piStack_68);
  FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0x3f800000);
  FUN_0066dce0(&uStack_78);
  FUN_0066dfc0(0,0,0x3f800000);
  FUN_0066dce0(&piStack_68);
  FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x564),0x3f800000);
  FUN_0066dce0(&uStack_60);
  FUN_0066dfc0(*(undefined4 *)(param_1 + 0x560),0,0x3f800000);
  FUN_0066d9a0();
  return;
}

