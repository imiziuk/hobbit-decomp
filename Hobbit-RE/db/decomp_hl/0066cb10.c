
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066cb10(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00660270(param_1);
  if ((DAT_007f14e0 & 1) == 0) {
    DAT_007f14e0 = DAT_007f14e0 | 1;
    FUN_0064c8e0(0,&local_4,&local_8);
    FUN_0064c8e0(0,&param_1,&local_14);
    FUN_0064c8e0(0,&local_c,&local_10);
    _DAT_007f1528 = 0;
    _DAT_007f152c = 0;
    _DAT_007f1530 = 0;
    _DAT_007f1504 = 0;
    _DAT_007f1514 = 0;
    _DAT_007f1524 = 0;
    _DAT_007f1534 = 0x3f800000;
    _DAT_007f14f8 = local_10 * local_14 + local_c * local_4 * param_1;
    _DAT_007f14fc = local_c * local_8;
    _DAT_007f1500 = local_c * local_4 * local_14 - local_10 * param_1;
    _DAT_007f1508 = param_1 * local_10 * local_4 - local_c * local_14;
    _DAT_007f150c = local_10 * local_8;
    _DAT_007f1510 = local_10 * local_4 * local_14 + local_c * param_1;
    _DAT_007f1518 = param_1 * local_8;
    _DAT_007f151c = -local_4;
    _DAT_007f1520 = local_14 * local_8;
    FUN_006bfe55(&DAT_0066cd20);
  }
  if ((DAT_007f155c == 0) && (DAT_007f15f0 == 0)) {
    (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&DAT_007f1590);
  }
  else {
    (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&DAT_007f14f8);
  }
  if (DAT_007f15f0 == 0) {
    iVar1 = *DAT_007f1000;
    uVar2 = FUN_00672280();
    (**(code **)(iVar1 + 0x94))(DAT_007f1000,2,uVar2);
  }
  else {
    (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,2,&DAT_007f14f8);
  }
  iVar1 = *DAT_007f1000;
  uVar2 = FUN_006722a0();
  (**(code **)(iVar1 + 0x94))(DAT_007f1000,3,uVar2);
  return;
}

