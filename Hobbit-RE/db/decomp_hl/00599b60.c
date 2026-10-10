
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00599b60(int param_1)

{
  void **ppvVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  void **ppvVar7;
  void *local_4c [17];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd4e8;
  local_4c[0x10] = ExceptionList;
  ExceptionList = local_4c + 0x10;
  FUN_00649600();
  local_4 = 0;
  if (_DAT_006e999c < *(float *)(param_1 + 0x23c)) {
    FUN_00592920();
    puVar5 = (undefined4 *)FUN_00469830();
    *(undefined4 *)(param_1 + 0x260) = *puVar5;
    *(undefined4 *)(param_1 + 0x264) = puVar5[1];
    *(undefined4 *)(param_1 + 0x268) = puVar5[2];
  }
  pfVar2 = (float *)(param_1 + 0x260);
  if ((*(uint *)(param_1 + 0x4c) & 0x4000) == 0) {
    fVar3 = DAT_006e92e8 /
            SQRT(*(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268) +
                 *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x264) + *pfVar2 * *pfVar2);
    iVar6 = FUN_0064cf30();
    if (iVar6 == 0) {
      *pfVar2 = 0.0;
      *(undefined4 *)(param_1 + 0x264) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
    }
    else {
      *pfVar2 = fVar3 * *pfVar2;
      *(float *)(param_1 + 0x264) = fVar3 * *(float *)(param_1 + 0x264);
      *(float *)(param_1 + 0x268) = fVar3 * *(float *)(param_1 + 0x268);
    }
    fVar4 = *(float *)(param_1 + 0x294) * _DAT_006e9554;
    fVar3 = DAT_006e92e8 /
            SQRT(*(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x274) +
                 *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270) +
                 *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x26c));
    iVar6 = FUN_0064cf30();
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x26c) = 0;
      *(undefined4 *)(param_1 + 0x270) = 0;
      *(undefined4 *)(param_1 + 0x274) = 0;
    }
    else {
      fVar3 = fVar3 * fVar4;
      *(float *)(param_1 + 0x26c) = fVar3 * *(float *)(param_1 + 0x26c);
      *(float *)(param_1 + 0x270) = fVar3 * *(float *)(param_1 + 0x270);
      *(float *)(param_1 + 0x274) = fVar3 * *(float *)(param_1 + 0x274);
    }
    *pfVar2 = *(float *)(param_1 + 0x26c) + *pfVar2;
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x264);
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x274) + *(float *)(param_1 + 0x268);
    fVar3 = DAT_006e92e8 /
            SQRT(*(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268) +
                 *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x264) + *pfVar2 * *pfVar2);
    iVar6 = FUN_0064cf30();
    if (iVar6 == 0) {
      *pfVar2 = 0.0;
      *(undefined4 *)(param_1 + 0x264) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
    }
    else {
      *pfVar2 = fVar3 * *pfVar2;
      *(float *)(param_1 + 0x264) = fVar3 * *(float *)(param_1 + 0x264);
      *(float *)(param_1 + 0x268) = fVar3 * *(float *)(param_1 + 0x268);
    }
  }
  else {
    *pfVar2 = *(float *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x2e0);
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffbfff;
  }
  FUN_004357e0(pfVar2);
  FUN_0059b1d0();
  if (*(int *)(param_1 + 0x38) == 9) {
    local_4c[0xc] = (void *)0x0;
    local_4c[8] = (void *)0x0;
    local_4c[4] = (void *)0x0;
    local_4c[0xd] = (void *)0x0;
    local_4c[9] = (void *)0x0;
    local_4c[1] = (void *)0x0;
    local_4c[0xe] = (void *)0x0;
    local_4c[6] = (void *)0x0;
    local_4c[2] = (void *)0x0;
    local_4c[0xb] = (void *)0x0;
    local_4c[7] = (void *)0x0;
    local_4c[3] = (void *)0x0;
    local_4c[0] = (void *)0x3f800000;
    local_4c[5] = (void *)0x3f800000;
    local_4c[10] = (void *)0x3f800000;
    local_4c[0xf] = (void *)0x3f800000;
  }
  iVar6 = FUN_00592190();
  *(int *)(iVar6 + 0x148) = *(int *)(iVar6 + 0x148) + 1;
  ppvVar1 = (void **)(iVar6 + 0x4c);
  *(undefined4 *)(iVar6 + 300) = 1;
  *(int *)(iVar6 + 0x138) = *(int *)(iVar6 + 0x138) + 1;
  *(undefined4 *)(iVar6 + 0x13c) = 1;
  if (ppvVar1 != local_4c) {
    ppvVar7 = local_4c;
    puVar5 = (undefined4 *)(iVar6 + 0x54);
    do {
      puVar5[-2] = *ppvVar7;
      puVar5[-1] = ppvVar7[1];
      *puVar5 = *(undefined4 *)(((int)local_4c - (int)ppvVar1) + (int)puVar5);
      puVar5[1] = *(undefined4 *)((int)local_4c + (4 - (int)ppvVar1) + (int)puVar5);
      ppvVar7 = ppvVar7 + 4;
      puVar5 = puVar5 + 4;
    } while (ppvVar7 != local_4c + 0x10);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_4c[0x10];
  return;
}

