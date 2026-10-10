
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f5340(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [40];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6138;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(float *)(param_1 + 0x568) = *(float *)(param_1 + 0x568) + _DAT_006efa50;
  *(undefined4 *)(param_1 + 0x56c) = 0x3d08ab86;
  FUN_0065f8a0(&local_54,&local_58);
  fVar2 = (float)local_54;
  if (((NAN(fVar2) || NAN(*(float *)(param_1 + 0x560))) == (fVar2 == *(float *)(param_1 + 0x560)))
     || ((NAN((float)local_58) || NAN(*(float *)(param_1 + 0x564))) ==
         ((float)local_58 == *(float *)(param_1 + 0x564)))) {
    *(float *)(param_1 + 0x560) = (float)local_54;
    *(float *)(param_1 + 0x564) = (float)local_58;
    *(float *)(param_1 + 0x570) = fVar2 / _DAT_006efa34;
    FUN_004f8dc0();
  }
  piVar1 = (int *)FUN_0041bcc0();
  FUN_004f50e0();
  fVar5 = (float10)FUN_00434ca0(3);
  if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) == (fVar5 == (float10)DAT_006e92e4)) {
    *(undefined4 *)(param_1 + 0x72c) = 1;
  }
  FUN_00649b20(s_The_Ring_007200b4);
  local_4 = 0;
  fVar5 = (float10)FUN_00434cd0(local_38);
  local_50 = (float)fVar5;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  if ((NAN(local_50) || NAN(DAT_006e92e4)) == (local_50 == DAT_006e92e4)) {
    local_50 = (float)FUN_004f8d60(0x70);
    local_4c = (float)(int)local_50;
    fVar2 = (float)FUN_004f8d60(0x250);
    local_44 = local_4c;
    local_50 = fVar2;
  }
  else {
    local_4c = (float)FUN_004f8d90(0x30);
    local_50 = (float)(int)local_4c;
    fVar2 = (float)FUN_004f8d60(0x250);
    local_44 = local_50;
    local_4c = fVar2;
  }
  local_48 = (float)(int)fVar2;
  FUN_004fa430(&local_48);
  fVar5 = (float10)FUN_00422420();
  *(float *)(param_1 + 0x574) = (float)fVar5;
  FUN_004f5080();
  if ((NAN(*(float *)(param_1 + 0x574)) || NAN(*(float *)(param_1 + 0x578))) ==
      (*(float *)(param_1 + 0x574) == *(float *)(param_1 + 0x578))) {
    *(undefined4 *)(param_1 + 0x844) = 1;
    *(undefined4 *)(param_1 + 0x848) = 0x40c00000;
  }
  else if (*(float *)(param_1 + 0x848) <= DAT_006e92e4) {
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  else {
    *(float *)(param_1 + 0x848) = *(float *)(param_1 + 0x848) - *(float *)(param_1 + 0x56c);
  }
  if (*(float *)(param_1 + 0x574) < DAT_006e92e4 !=
      (NAN(*(float *)(param_1 + 0x574)) || NAN(DAT_006e92e4))) {
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  fVar2 = (float)*(int *)(param_1 + 0x874);
  if (fVar2 < *(float *)(param_1 + 0x574) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0x574)))) {
    *(float *)(param_1 + 0x574) = fVar2;
  }
  if (*(int *)(param_1 + 0x590) == 0x42200000) {
    FUN_0041bcc0();
    iVar3 = FUN_00422450();
    if (iVar3 == 0) {
      fVar5 = (float10)FUN_0050b190(*(undefined4 *)(param_1 + 0x578),
                                    *(undefined4 *)(param_1 + 0x574),DAT_006efa30,
                                    *(undefined4 *)(param_1 + 0x56c),0);
    }
    else {
      FUN_0041bcc0();
      fVar5 = (float10)FUN_00422420();
    }
    *(float *)(param_1 + 0x578) = (float)fVar5;
  }
  if (*(int *)(param_1 + 0x844) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x56c);
    uVar6 = *(undefined4 *)(param_1 + 0x84c);
    uVar8 = 0x430edb6e;
    uVar7 = 0x42480000;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x56c);
    uVar6 = *(undefined4 *)(param_1 + 0x84c);
    uVar8 = 0x447a0000;
    uVar7 = 0x437f0000;
  }
  fVar5 = (float10)FUN_0050b190(uVar6,uVar7,uVar8,uVar4,0);
  *(float *)(param_1 + 0x84c) = (float)fVar5;
  fVar5 = (float10)FUN_00422460();
  local_4c = (float)fVar5;
  *(float *)(param_1 + 0x57c) = (float)fVar5;
  fVar5 = (float10)FUN_0050b190(*(undefined4 *)(param_1 + 0x580),local_4c,DAT_006efa30,
                                *(undefined4 *)(param_1 + 0x56c),0);
  *(float *)(param_1 + 0x580) = (float)fVar5;
  FUN_004fa4f0(0x42055555);
  FUN_004fa4f0(0x42055555);
  if (*(int *)(param_1 + 0x7dc) != -1) {
    iVar3 = FUN_005268d0();
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x7dc);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x7dc);
    }
    FUN_0058e840(uVar4,iVar3 != 0);
  }
  iVar3 = FUN_004228e0();
  *(int *)(param_1 + 0x7d4) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x7d8)) {
    FUN_0058e880(*(undefined4 *)(param_1 + 0x7dc));
    *(undefined4 *)(param_1 + 0x7dc) = 0xffffffff;
  }
  else {
    if (iVar3 < *(int *)(param_1 + 0x7d8)) {
      *(int *)(param_1 + 0x7d8) = iVar3;
    }
    if (*(int *)(param_1 + 0x7dc) == -1) {
      uVar4 = __ftol();
      local_4c = (float)FUN_004f8d60(uVar4);
      local_50 = (float)(int)local_4c;
      uVar4 = __ftol();
      local_4c = (float)FUN_004f8d90(uVar4);
      fStack_3c = (float)(int)local_4c;
      fStack_40 = local_50;
      uVar4 = FUN_0058e610(s_HUD_silverPenny_0072f7fc,&fStack_40,0);
      *(undefined4 *)(param_1 + 0x7dc) = uVar4;
      FUN_0058e6a0(uVar4,DAT_0072f434);
    }
  }
  FUN_0050b190((float)*(int *)(param_1 + 0x7d8),(float)*(int *)(param_1 + 0x7d4),DAT_006efa30,
               *(undefined4 *)(param_1 + 0x56c),1);
  uVar4 = __ftol();
  *(undefined4 *)(param_1 + 0x7d8) = uVar4;
  FUN_00434ca0(8);
  iVar3 = __ftol();
  *(int *)(param_1 + 0x7e4) = iVar3;
  if (iVar3 != *(int *)(param_1 + 0x7e8)) {
    *(int *)(param_1 + 0x7e8) = iVar3;
  }
  uVar4 = FUN_00423c80();
  *(undefined4 *)(param_1 + 0x83c) = uVar4;
  iVar3 = (**(code **)(*piVar1 + 0x108))(1);
  if (iVar3 == 0) {
    FUN_00423c90(0,0);
    *(undefined4 *)(param_1 + 0x840) = 0x42c80000;
    *(undefined4 *)(param_1 + 0x83c) = 0;
  }
  if ((*(int *)(param_1 + 0x83c) == 0) && (iVar3 = FUN_0052d730(), iVar3 == 0)) {
    fVar5 = (float10)FUN_0050b190(*(undefined4 *)(param_1 + 0x840),0x42c80000,
                                  _DAT_006ec0e4 / *(float *)(param_1 + 0x18c),
                                  *(undefined4 *)(param_1 + 0x56c),0);
    *(float *)(param_1 + 0x840) = (float)fVar5;
  }
  else {
    iVar3 = FUN_00472df0();
    if (((iVar3 == 0) || (iVar3 = FUN_00472e20(), iVar3 == 0)) &&
       (iVar3 = FUN_0052d730(), iVar3 == 0)) {
      fVar5 = (float10)FUN_0050b190(*(undefined4 *)(param_1 + 0x840),0,
                                    _DAT_006ec0e4 / *(float *)(param_1 + 400),
                                    *(undefined4 *)(param_1 + 0x56c),0);
      *(float *)(param_1 + 0x840) = (float)fVar5;
      FUN_00434d10(0xa6,*(undefined4 *)(param_1 + 0x56c));
    }
  }
  iVar3 = __ftol();
  if (iVar3 < 1) {
    FUN_00424ce0();
  }
  FUN_004f8970(*(undefined4 *)(param_1 + 0x56c));
  ExceptionList = pvStack_10;
  return;
}

