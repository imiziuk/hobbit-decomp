
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005946b0(int param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float unaff_retaddr;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__UpdateHeadTracki_00742e8c);
  local_4 = 0;
  if (param_4 == 0) {
    param_2 = param_2 - *(float *)(param_1 + 0x108);
    param_3 = param_3 - *(float *)(param_1 + 0x104);
    if ((DAT_006e92e4 < param_2) && (*(float *)(param_1 + 0x294) < param_2)) {
      param_2 = *(float *)(param_1 + 0x294);
    }
    if ((param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) &&
       (fVar1 = -*(float *)(param_1 + 0x294), param_2 < fVar1 != (NAN(param_2) || NAN(fVar1)))) {
      param_2 = fVar1;
    }
    if ((DAT_006e92e4 < param_3) && (*(float *)(param_1 + 0x294) < param_3)) {
      param_3 = *(float *)(param_1 + 0x294);
    }
    if ((param_3 < DAT_006e92e4 != (NAN(param_3) || NAN(DAT_006e92e4))) &&
       (fVar1 = -*(float *)(param_1 + 0x294), param_3 < fVar1 != (NAN(param_3) || NAN(fVar1)))) {
      param_3 = fVar1;
    }
    param_2 = param_2 + *(float *)(param_1 + 0x108);
    param_3 = param_3 + *(float *)(param_1 + 0x104);
  }
  if (param_2 <= DAT_006e92e8) {
    if (param_2 < _DAT_006e9370 != (NAN(param_2) || NAN(_DAT_006e9370))) {
      param_2 = -1.0;
    }
  }
  else {
    param_2 = 1.0;
  }
  if (param_3 <= DAT_006e92e8) {
    if (param_3 < _DAT_006e9370 != (NAN(param_3) || NAN(_DAT_006e9370))) {
      param_3 = -1.0;
    }
  }
  else {
    param_3 = 1.0;
  }
  *(float *)(param_1 + 0x104) = param_3;
  *(float *)(param_1 + 0x108) = param_2;
  iVar2 = FUN_00592920();
  if (((*(byte *)(*(int *)(iVar2 + 0x300) + 0x130) & 0x40) == 0) &&
     ((*(int *)(param_1 + 0x158) == 0 ||
      (((byte)*(undefined4 *)(*(int *)(param_1 + 0x158) + 0x78) & 4) != 4)))) {
    fVar1 = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x100) = fVar1;
    if (DAT_006e92e8 < fVar1) {
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x294);
    *(float *)(param_1 + 0x100) = fVar1;
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
  }
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x10))(*(undefined4 *)(param_1 + 0x100));
  fVar1 = DAT_006e92e8;
  *(float *)(param_1 + 0xf0) = param_2;
  *(float *)(param_1 + 0xec) = unaff_retaddr;
  if (fVar1 < unaff_retaddr) {
    unaff_retaddr = DAT_006e92e8;
  }
  *(float *)(param_1 + 0xec) = unaff_retaddr;
  if (unaff_retaddr < _DAT_006e9370 != (NAN(unaff_retaddr) || NAN(_DAT_006e9370))) {
    unaff_retaddr = _DAT_006e9370;
  }
  *(float *)(param_1 + 0xec) = unaff_retaddr;
  if (DAT_006e92e8 < param_2) {
    param_2 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0xf0) = param_2;
  if (param_2 < _DAT_006e9370 != (NAN(param_2) || NAN(_DAT_006e9370))) {
    param_2 = _DAT_006e9370;
  }
  *(float *)(param_1 + 0xf0) = param_2;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

