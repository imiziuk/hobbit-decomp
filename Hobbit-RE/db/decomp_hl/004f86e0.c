
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f86e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_28;
  float local_20;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0065fd00(0);
  FUN_00672110(&local_10);
  fVar3 = SQRT(local_8 * local_8 + local_4 * local_4) * _DAT_006e936c;
  fVar4 = (DAT_006e92e8 - *(float *)(param_1 + 0x828)) * fVar3;
  fVar5 = (local_10 + local_8) * _DAT_006e936c;
  fVar6 = (local_c + local_4) * _DAT_006e936c;
  FUN_0066c3a0(5,0x11);
  FUN_0066ddd0(*(undefined4 *)(param_1 + 0x834));
  fVar9 = (float10)FUN_0064c800(0);
  fVar10 = (float10)FUN_0064c8d0(0);
  iVar8 = 0x20;
  local_28 = (float)fVar9;
  local_20 = (float)fVar10;
  fVar7 = DAT_006e92e4;
  do {
    fVar7 = fVar7 + _DAT_006efa94;
    fVar9 = (float10)FUN_0064c800(fVar7);
    fVar1 = (float)fVar9;
    fVar9 = (float10)FUN_0064c8d0(fVar7);
    fVar2 = (float)fVar9;
    FUN_0066dfc0(fVar2 * fVar3 + fVar5,fVar1 * fVar3 + fVar6,0x3f800000);
    FUN_0066dfc0(local_20 * fVar3 + fVar5,local_28 * fVar3 + fVar6,0x3f800000);
    FUN_0066dfc0(local_20 * fVar4 + fVar5,local_28 * fVar4 + fVar6,0x3f800000);
    FUN_0066dfc0(fVar2 * fVar4 + fVar5,fVar1 * fVar4 + fVar6,0x3f800000);
    iVar8 = iVar8 + -1;
    local_28 = fVar1;
    local_20 = fVar2;
  } while (iVar8 != 0);
  FUN_0066d9a0();
  return;
}

