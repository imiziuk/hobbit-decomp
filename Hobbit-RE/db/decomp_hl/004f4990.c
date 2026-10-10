
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f4990(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  float fVar4;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  float local_3c [2];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  DAT_0072f3e4 = 0x15e;
  DAT_0072f3b8 = 0x15e;
  DAT_0072f39c = 0x15e;
  DAT_0072f380 = 300;
  local_3d = 0xff;
  local_3e = 0;
  local_3f = 0;
  local_40 = 0;
  uVar3 = 0xff;
  if (*(int *)(param_1 + 0x170) < 0) {
    DAT_0072f380 = 300;
    DAT_0072f39c = 0x15e;
    DAT_0072f3b8 = 0x15e;
    DAT_0072f3e4 = 0x15e;
    return;
  }
  iVar2 = FUN_0054ec80();
  if (iVar2 != 0) {
    return;
  }
  if (100 < *(int *)(param_1 + 0x170)) {
    *(undefined4 *)(param_1 + 0x170) = 100;
  }
  if (*(int *)(param_1 + 0x17c) == 0) {
    *(undefined4 *)(param_1 + 0x180) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    uVar3 = 0x80;
  }
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 0:
    fVar4 = (float)(param_1 + 0xd4);
    local_3c[0] = _DAT_0075e350 * *(float *)(param_1 + 0x570);
    local_30 = *(float *)(param_1 + 0x570) * _DAT_0075e354;
    local_34 = local_3c[0];
    local_3c[0] = (float)__ftol();
    FUN_004f4940(local_1c,local_3c);
    local_3c[0] = (float)*(int *)(param_1 + 0x170) * *(float *)(param_1 + 0x570) * _DAT_0072f418;
    local_2c = _DAT_0075f7c0 * *(float *)(param_1 + 0x570);
    local_28 = _DAT_0075f7c4 * *(float *)(param_1 + 0x570);
    local_24 = _DAT_0075f814 * *(float *)(param_1 + 0x570);
    local_20 = _DAT_0075f818 * *(float *)(param_1 + 0x570);
    FUN_004f48d0(local_10,local_1c,&local_24,&local_2c,local_3c);
    break;
  case 1:
    fVar4 = (float)(param_1 + 0x94);
    local_34 = _DAT_0075f7b8 * *(float *)(param_1 + 0x570);
    local_30 = *(float *)(param_1 + 0x570) * _DAT_0075f7bc;
    local_24 = local_34;
    local_3c[0] = (float)__ftol();
    FUN_004f4940(local_1c,local_3c);
    local_3c[0] = (float)*(int *)(param_1 + 0x170) * *(float *)(param_1 + 0x570) * _DAT_0072f41c;
    local_24 = _DAT_0075e380 * *(float *)(param_1 + 0x570);
    local_20 = _DAT_0075e384 * *(float *)(param_1 + 0x570);
    fVar1 = *(float *)(param_1 + 0x570);
    local_2c = _DAT_0075e370 * fVar1;
    local_28 = _DAT_0075e374;
    goto LAB_004f4dc0;
  case 2:
    fVar4 = (float)(param_1 + 0xb4);
    local_34 = _DAT_0075e358 * *(float *)(param_1 + 0x570);
    local_30 = *(float *)(param_1 + 0x570) * _DAT_0075e35c;
    local_24 = local_34;
    local_3c[0] = (float)__ftol();
    FUN_004f4940(local_1c,local_3c);
    local_3c[0] = (float)*(int *)(param_1 + 0x170) * *(float *)(param_1 + 0x570) * _DAT_0072f420;
    local_24 = _DAT_0075f81c * *(float *)(param_1 + 0x570);
    local_20 = _DAT_0075f820 * *(float *)(param_1 + 0x570);
    local_2c = _DAT_0075f7ac * *(float *)(param_1 + 0x570);
    local_28 = _DAT_0075f7b0 * *(float *)(param_1 + 0x570);
    FUN_004f48d0(local_10,local_1c,&local_2c,&local_24,local_3c);
    break;
  case 3:
    fVar4 = (float)(param_1 + 0x34);
    local_34 = _DAT_0075f82c * *(float *)(param_1 + 0x570);
    local_30 = *(float *)(param_1 + 0x570) * _DAT_0075f830;
    local_24 = local_34;
    local_3c[0] = (float)__ftol();
    FUN_004f4940(local_1c,local_3c);
    local_3c[0] = (float)*(int *)(param_1 + 0x170) * *(float *)(param_1 + 0x570) * _DAT_0072f424;
    local_24 = _DAT_0075f7fc * *(float *)(param_1 + 0x570);
    local_20 = _DAT_0075f800 * *(float *)(param_1 + 0x570);
    local_2c = _DAT_0075f83c * *(float *)(param_1 + 0x570);
    local_28 = _DAT_0075f840 * *(float *)(param_1 + 0x570);
    FUN_004f48d0(local_10,local_1c,&local_2c,&local_24,local_3c);
    break;
  default:
    fVar4 = local_3c[0];
    break;
  case 5:
    fVar4 = (float)(param_1 + 0xf4);
    local_34 = _DAT_0075f770 * *(float *)(param_1 + 0x570);
    local_30 = *(float *)(param_1 + 0x570) * _DAT_0075f774;
    local_24 = local_34;
    local_3c[0] = (float)__ftol();
    FUN_004f4940(local_1c,local_3c);
    local_3c[0] = (float)*(int *)(param_1 + 0x170) * *(float *)(param_1 + 0x570) * _DAT_0072f428;
    local_24 = _DAT_0075e348 * *(float *)(param_1 + 0x570);
    local_20 = _DAT_0075e34c * *(float *)(param_1 + 0x570);
    fVar1 = *(float *)(param_1 + 0x570);
    local_2c = _DAT_0075f844 * fVar1;
    local_28 = _DAT_0075f848;
LAB_004f4dc0:
    local_28 = local_28 * fVar1;
    FUN_004f48d0(local_10,local_1c,&local_2c,&local_24,local_3c);
  }
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(fVar4,0);
  FUN_0066e5a0(local_1c,&local_34,
               CONCAT31((int3)(CONCAT22((short)(CONCAT13(uVar3,0xff0000) >> 0x10),0xff00) >> 8),0xff
                       ));
  FUN_0066d9a0();
  FUN_0066b4f0(local_10,&local_40,&local_40,&local_40,&local_40,0);
  return;
}

