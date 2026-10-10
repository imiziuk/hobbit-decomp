
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00405860(int param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  undefined4 local_1c;
  
  fVar10 = (float10)FUN_0064cd90();
  if (fVar10 <= (float10)_DAT_006e9340) {
    bVar2 = false;
LAB_004058ad:
    uVar8 = 0;
  }
  else {
    bVar2 = true;
    iVar7 = FUN_006710d0(0xb8,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0xf0) != 0)) goto LAB_004058ad;
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xb7,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0xf4) != 0)) goto LAB_004058da;
    uVar8 = 1;
  }
  else {
LAB_004058da:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xd1,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0xf8) != 0)) goto LAB_00405907;
    uVar8 = 1;
  }
  else {
LAB_00405907:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xd0,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0xfc) != 0)) goto LAB_00405934;
    uVar8 = 1;
  }
  else {
LAB_00405934:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(200,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x100) != 0)) goto LAB_00405961;
    uVar8 = 1;
  }
  else {
LAB_00405961:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xa9,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x108) != 0)) goto LAB_0040598e;
    uVar8 = 1;
  }
  else {
LAB_0040598e:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xaa,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x104) != 0)) goto LAB_004059bb;
    uVar8 = 1;
  }
  else {
LAB_004059bb:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xd2,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x10c) != 0)) goto LAB_004059e8;
    uVar8 = 1;
  }
  else {
LAB_004059e8:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xb5,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x110) != 0)) goto LAB_00405a15;
    uVar8 = 1;
  }
  else {
LAB_00405a15:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0x5e,0);
    if ((iVar7 == 0) || (*(int *)(param_1 + 0x114) != 0)) goto LAB_00405a3f;
    uVar8 = 1;
  }
  else {
LAB_00405a3f:
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = uVar8;
  if (bVar2) {
    iVar7 = FUN_006710d0(0xbc,0);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x118) == 0)) {
      uVar8 = 1;
      goto LAB_00405a6e;
    }
  }
  uVar8 = 0;
LAB_00405a6e:
  *(undefined4 *)(param_1 + 0x118) = uVar8;
  fVar1 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20);
  local_1c = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x28);
  fVar3 = DAT_006e92e8 / SQRT(fVar1 * fVar1 + local_1c * local_1c);
  iVar7 = FUN_0064cf30(fVar3);
  if (iVar7 == 0) {
    local_1c = 0.0;
    fVar1 = DAT_006e92e4;
    fVar3 = DAT_006e92e4;
  }
  else {
    local_1c = local_1c * fVar3;
    fVar1 = fVar1 * fVar3;
    fVar3 = fVar3 * DAT_006e92e4;
  }
  fVar4 = (fVar1 - DAT_006e92e4 * fVar3) * _DAT_006e9348;
  fVar5 = local_1c * _DAT_006e935c;
  fVar6 = (local_1c * DAT_006e92e4 - fVar1 * DAT_006e92e4) * _DAT_006e9348 +
          *(float *)(param_1 + 0x18) + fVar3 * _DAT_006e935c + _DAT_006e9364;
  *(float *)(param_1 + 0x2e8) =
       (DAT_006e92e4 * fVar3 - local_1c) * _DAT_006e9348 + *(float *)(param_1 + 0x14) +
       fVar1 * _DAT_006e935c;
  *(float *)(param_1 + 0x2f0) = fVar4 + *(float *)(param_1 + 0x1c) + fVar5;
  *(float *)(param_1 + 0x2ec) = fVar6;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 8) + 1;
    if (0xc < iVar7) {
      iVar7 = 0;
    }
    FUN_0053b700(iVar7,0);
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    FUN_0064cc30();
    FUN_0064cc00();
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
    if (iVar7 < 0) {
      iVar7 = 0xc;
    }
    FUN_0053b700(iVar7,0);
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    FUN_0064cc30();
    FUN_0064cc00();
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_00404a90();
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    FUN_0064cc30();
    FUN_0064cc00();
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_004050b0();
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    FUN_0064cc30();
    FUN_0064cc00();
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    *(uint *)(param_1 + 0x1e8) = (uint)(*(int *)(param_1 + 0x1e8) == 0);
    FUN_0064cc30();
    FUN_0064cc00();
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(float *)(param_1 + 0x154 + iVar7 * 4) =
         _DAT_006e9304 + *(float *)(param_1 + 0x154 + iVar7 * 4);
    FUN_00405d70();
    FUN_0064cc30();
    FUN_0064cc00();
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(float *)(param_1 + 0x154 + iVar7 * 4) =
         *(float *)(param_1 + 0x154 + iVar7 * 4) - _DAT_006e9304;
    FUN_00405d70();
    FUN_0064cc30();
    FUN_0064cc00();
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if ((*(int *)(param_1 + 0x10c) != 0) &&
     (uVar9 = (uint)(*(int *)(param_1 + 0x1ec) == 0), *(uint *)(param_1 + 0x1ec) = uVar9, uVar9 != 0
     )) {
    FUN_00405e10(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(uint *)(param_1 + 0x150) = (uint)(*(int *)(param_1 + 0x150) == 0);
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_00429100();
    return;
  }
  return;
}

