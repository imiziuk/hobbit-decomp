
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f8ad0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar1 = *(float *)(param_1 + 0x87c) - _DAT_006efa50;
  *(float *)(param_1 + 0x87c) = fVar1;
  if (fVar1 <= DAT_006e92e4) {
    *(undefined4 *)(param_1 + 0x880) = 0;
    fVar1 = *(float *)(param_1 + 0x878) - _DAT_006efa50;
    *(float *)(param_1 + 0x878) = fVar1;
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      iVar2 = *(int *)(param_1 + 0x888) + -4;
      *(undefined4 *)(param_1 + 0x878) = 0;
      *(int *)(param_1 + 0x888) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x888) = 0;
        *(undefined4 *)(param_1 + 0x884) = 0;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x880) = *(uint *)(param_1 + 0x880) ^ 1;
  }
  local_4 = 0;
  local_c = *(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x560) / _DAT_006efa3c;
  local_14 = _DAT_0075e360 * *(float *)(param_1 + 0x570);
  local_10 = _DAT_0075e364 * *(float *)(param_1 + 0x570);
  local_8 = _DAT_006efa44 + local_10 + _DAT_006efa44 + local_10 +
            *(float *)(param_1 + 0x564) / _DAT_006efa40;
  if (*(int *)(param_1 + 0x880) == 0) {
    FUN_0066c3a0(7,0x37);
    FUN_0066db80(param_1 + 0x1b4,0);
    FUN_0066e5a0(&local_c,&local_14,0xffffffff);
    FUN_0066d9a0();
    return;
  }
  return;
}

