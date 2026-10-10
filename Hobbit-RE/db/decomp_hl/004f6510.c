
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f6510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int in_stack_00000018;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_134;
  float afStack_fc [62];
  
  iVar7 = 0;
  local_134 = 0.0;
  iVar1 = 0;
  fVar8 = DAT_006e92e4;
  do {
    if (iVar7 == 6) {
      iVar7 = 0;
      local_134 = local_134 + _DAT_006ec0b8;
      fVar8 = DAT_006e92e4;
    }
    afStack_fc[iVar1 * 2 + 1] = fVar8;
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 1;
    afStack_fc[iVar1 * 2] = local_134;
    fVar8 = fVar8 + _DAT_006ef418;
  } while (iVar1 < 0x1e);
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x294,0);
  iVar7 = 0;
  iVar1 = __ftol();
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = __ftol(0x80000000);
      uVar3 = __ftol();
      uVar4 = FUN_0041b9c0(0x41600000,0x41600000);
      uVar9 = 0;
      iVar5 = FUN_006a22a0(uVar2,0,uVar4);
      fVar8 = (float)iVar5;
      iVar5 = FUN_006a2260(uVar3,fVar8);
      uVar4 = FUN_00401f00((float)iVar5,fVar8,uVar9);
      FUN_0066e5a0(uVar4);
      uVar10 = 0xffffffff;
      uVar4 = FUN_0041b9c0(0x41200000,0x41200000);
      uVar9 = 0;
      iVar5 = FUN_006a22a0(uVar2,0,uVar4,uVar10);
      fVar8 = (float)iVar5;
      iVar5 = FUN_006a2260(uVar3,fVar8);
      uVar2 = FUN_00401f00((float)iVar5,fVar8,uVar9);
      FUN_0066e5a0(uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  FUN_0066d9a0();
  FUN_0066c3a0(7,0x17);
  iVar1 = ((in_stack_00000018 != 0) + 6) * 0x20 + 0x194 + param_1;
  FUN_0066db80(iVar1,0);
  iVar5 = 0;
  iVar7 = __ftol();
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  if (0 < iVar7) {
    do {
      uVar2 = __ftol(0x80000000);
      uVar3 = __ftol();
      uVar4 = FUN_0041b9c0(0x41b80000,0x41a80000);
      uVar9 = 0;
      iVar6 = FUN_006a22a0(uVar2,0,uVar4);
      fVar8 = (float)iVar6;
      iVar6 = FUN_006a2260(uVar3,fVar8);
      uVar4 = FUN_00401f00((float)iVar6,fVar8,uVar9);
      FUN_0066e5a0(uVar4);
      uVar10 = 0xffffffff;
      uVar4 = FUN_0041b9c0(0x41980000,0x41880000);
      uVar9 = 0;
      iVar6 = FUN_006a22a0(uVar2,0,uVar4,uVar10);
      fVar8 = (float)iVar6;
      iVar6 = FUN_006a2260(uVar3,fVar8);
      uVar2 = FUN_00401f00((float)iVar6,fVar8,uVar9);
      FUN_0066e5a0(uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar7);
  }
  FUN_0066d9a0();
  iVar7 = __ftol();
  if ((float10)DAT_006e92e4 < extraout_ST0 - (float10)iVar7) {
    FUN_0066c3a0(7,0x37);
    FUN_0066db80(iVar1,0);
    uVar2 = __ftol(0x80000000);
    uVar3 = __ftol();
    uVar4 = FUN_0041b9c0(0x41800000,0x41800000);
    uVar9 = 0;
    iVar1 = FUN_006a22a0(uVar2,0,uVar4);
    fVar8 = (float)iVar1;
    iVar1 = FUN_006a2260(uVar3,fVar8);
    uVar4 = FUN_00401f00((float)iVar1,fVar8,uVar9);
    FUN_0066e5a0(uVar4);
    uVar10 = 0xffffffff;
    uVar4 = FUN_0041b9c0(0x41400000,0x41400000);
    uVar9 = 0;
    iVar1 = FUN_006a22a0(uVar2,0,uVar4,uVar10);
    fVar8 = (float)iVar1;
    iVar1 = FUN_006a2260(uVar3,fVar8);
    uVar2 = FUN_00401f00((float)iVar1,fVar8,uVar9);
    FUN_0066e5a0(uVar2);
    FUN_0066d9a0();
  }
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x194,0);
  iVar7 = 0;
  iVar1 = __ftol();
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  if (0 < iVar1) {
    do {
      uVar4 = 0xffffffff;
      uVar2 = FUN_0041b9c0(0x41980000,0x41880000);
      uVar3 = 0;
      uVar2 = __ftol(0,uVar2,uVar4);
      iVar5 = FUN_006a22a0(uVar2);
      fVar8 = (float)iVar5;
      uVar2 = __ftol(fVar8);
      iVar5 = FUN_006a2260(uVar2);
      uVar2 = FUN_00401f00((float)iVar5,fVar8,uVar3);
      FUN_0066e5a0(uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  FUN_0066d9a0();
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x194,0);
  iVar1 = __ftol();
  if ((float10)DAT_006e92e4 < extraout_ST0_00 - (float10)iVar1) {
    uVar4 = 0xffffffff;
    uVar2 = FUN_0041b9c0(0x41400000,0x41400000);
    uVar3 = 0;
    uVar2 = __ftol(0,uVar2,uVar4);
    iVar1 = FUN_006a22a0(uVar2);
    fVar8 = (float)iVar1;
    uVar2 = __ftol(fVar8);
    iVar1 = FUN_006a2260(uVar2);
    uVar2 = FUN_00401f00((float)iVar1,fVar8,uVar3);
    FUN_0066e5a0(uVar2);
  }
  FUN_0066d9a0();
  return;
}

