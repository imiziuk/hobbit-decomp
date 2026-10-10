
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441f70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar1 = *(float *)(param_1 + 0x8a0) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x8a4) - *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x8a8) - *(float *)(param_1 + 0x1c);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  *(float *)(param_1 + 0x8b8) = fVar1 / *(float *)(*(int *)(param_1 + 0x450) + 0x148);
  *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0x14);
  fVar1 = fVar1 * _DAT_006e936c;
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x8bc) = fVar1;
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar7 = 0x3e800000;
  uVar6 = 1;
  uVar5 = 0;
  uVar4 = FUN_0053cc70(&DAT_00723f9c);
  FUN_00540840(uVar4,uVar5,uVar6,uVar7);
  FUN_004430e0(0xe);
  return;
}

