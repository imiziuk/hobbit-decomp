
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f58f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 in_stack_fffffea8;
  undefined4 in_stack_fffffeac;
  undefined4 uVar6;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8 [61];
  
  local_11c = *(float *)(param_1 + 0x560) / _DAT_006efa38;
  local_fc = 0.0;
  local_10c = 0.0;
  local_104 = *(float *)(param_1 + 0x564) * _DAT_006efa7c;
  if (param_2 == 0) {
    local_118 = *(float *)(param_1 + 0x564) * _DAT_006edbfc;
    local_120 = *(float *)(param_1 + 0x570);
  }
  else {
    local_120 = 1.0;
    local_108 = local_11c;
    iVar3 = FUN_006a2260(0x37);
    local_11c = (float)iVar3;
    in_stack_fffffeac = 0x4f5960;
    iVar3 = FUN_006a22a0(0x74);
    local_118 = (float)iVar3;
    local_104 = local_118 - _DAT_006e99a0;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x7e8);
  local_108 = local_11c;
  FUN_004f6010(&local_108);
  FUN_004f60b0(in_stack_fffffea8,in_stack_fffffeac,uVar6,param_2);
  local_128 = local_120 * _DAT_006ec0b8;
  iVar3 = 0;
  pfVar4 = local_f8;
  local_114 = local_120 * _DAT_006e9554;
  fVar1 = local_120 * _DAT_006ef418;
  fVar2 = local_fc;
  do {
    if (iVar3 == 0xf) {
      local_10c = local_10c + local_128;
      fVar2 = DAT_006e92e4;
    }
    *pfVar4 = fVar2;
    fVar2 = fVar2 + fVar1;
    pfVar4[1] = local_10c;
    pfVar4 = pfVar4 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  local_124 = local_128;
  local_110 = local_114;
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x294,0);
  iVar3 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x874) + (*(int *)(param_1 + 0x874) >> 0x1f & 3U)) >> 2) {
    do {
      local_12c = 0;
      local_134 = local_11c + local_f8[iVar3 * 2] + _DAT_006ee600;
      local_130 = local_118 + local_f8[iVar3 * 2 + 1] + _DAT_006e99bc;
      iVar5 = FUN_0052d730();
      if ((iVar5 == 0) || (DAT_00763e30 != 0)) {
        FUN_0066e5a0(&local_134,&local_128,0x80000000);
      }
      else {
        FUN_0066e5a0(&local_134,&local_128,0x80000000);
      }
      FUN_0066e5a0(&local_134,&local_114,0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*(int *)(param_1 + 0x874) + (*(int *)(param_1 + 0x874) >> 0x1f & 3U)) >>
                     2);
  }
  FUN_0066d9a0();
  local_128 = local_120 * _DAT_006efa78;
  local_124 = local_120 * _DAT_006efa74;
  local_114 = local_120 * _DAT_006efa70;
  local_110 = local_120 * _DAT_006e99e8;
  local_10c = local_114;
  local_100 = local_110;
  FUN_0066c3a0(7,0x37);
  FUN_0041bcc0(0);
  iVar3 = FUN_00422450();
  FUN_0066db80(((iVar3 != 0) + 6) * 0x20 + 0x194 + param_1);
  iVar5 = 0;
  iVar3 = __ftol();
  if (0 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
    do {
      local_134 = local_11c + local_f8[iVar5 * 2];
      local_12c = 0;
      local_130 = local_118 + local_f8[iVar5 * 2 + 1];
      iVar3 = FUN_0052d730();
      if ((iVar3 == 0) || (DAT_00763e30 != 0)) {
        FUN_0066e5a0(&local_134,&local_128,0x80000000);
      }
      else {
        FUN_0066e5a0(&local_134,&local_128,0x80000000);
      }
      FUN_0066e5a0(&local_134,&local_114,0xffffffff);
      iVar5 = iVar5 + 1;
      iVar3 = __ftol();
    } while (iVar5 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  }
  FUN_0066d9a0();
  fVar2 = local_120 * _DAT_006e99d8;
  local_128 = fVar1;
  local_124 = fVar1;
  local_114 = fVar2;
  local_110 = fVar2;
  local_fc = (float)__ftol();
  if ((float10)DAT_006e92e4 < extraout_ST0 - (float10)(int)local_fc) {
    iVar3 = __ftol();
    iVar5 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    FUN_0066c3a0(7,0x37);
    FUN_0041bcc0(0);
    iVar3 = FUN_00422450();
    FUN_0066db80(((iVar3 != 0) + 6) * 0x20 + 0x194 + param_1);
    local_12c = 0;
    local_134 = local_11c + local_f8[iVar5 * 2] + _DAT_006e99bc;
    local_130 = local_118 + local_f8[iVar5 * 2 + 1] + _DAT_006e958c;
    iVar3 = FUN_0052d730();
    if ((iVar3 == 0) || (DAT_00763e30 != 0)) {
      FUN_0066e5a0(&local_134,&local_128,0x80000000);
    }
    else {
      FUN_0066e5a0(&local_134,&local_128,0x80000000);
    }
    FUN_0066e5a0(&local_134,&local_114,0xffffffff);
    FUN_0066d9a0();
  }
  local_128 = local_10c;
  local_124 = local_100;
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x194,0);
  iVar5 = 0;
  iVar3 = __ftol();
  if (0 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
    do {
      local_134 = local_11c + local_f8[iVar5 * 2];
      local_12c = 0;
      local_130 = local_118 + local_f8[iVar5 * 2 + 1];
      FUN_0052d730();
      FUN_0066e5a0(&local_134,&local_128,0xffffffff);
      iVar5 = iVar5 + 1;
      iVar3 = __ftol();
    } while (iVar5 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  }
  FUN_0066d9a0();
  local_100 = (float)__ftol();
  if ((float10)DAT_006e92e4 < extraout_ST0_00 - (float10)(int)local_100) {
    iVar3 = __ftol();
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    FUN_0066c3a0(7,0x37);
    FUN_0066db80(param_1 + 0x214,0);
    local_134 = local_11c + local_f8[iVar3 * 2] + _DAT_006e99bc;
    local_12c = 0;
    local_130 = local_118 + local_f8[iVar3 * 2 + 1] + _DAT_006e958c;
    local_128 = fVar2;
    local_124 = fVar2;
    FUN_0052d730();
    FUN_0066e5a0(&local_134,&local_128,0xffffffff);
    FUN_0066d9a0();
  }
  return;
}

