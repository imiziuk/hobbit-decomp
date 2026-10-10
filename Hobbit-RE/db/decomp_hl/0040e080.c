
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040e080(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar7 = FUN_0054c150(s_AA_Cart_0071df0c,1);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  piVar3 = (int *)FUN_0054c0f0(s_forge_structure_001_0071e698,1);
  piVar4 = (int *)FUN_0054c0f0(s_forge_structure_002_0071e684,1);
  pfVar5 = (float *)(**(code **)(*piVar3 + 0x28))();
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
  fVar1 = (pfVar5[1] + pfVar6[1]) * _DAT_006e936c;
  fVar2 = (pfVar5[2] + pfVar6[2]) * _DAT_006e936c;
  *(float *)(param_1 + 0x18) = (*pfVar5 + *pfVar6) * _DAT_006e936c;
  *(float *)(param_1 + 0x20) = fVar2;
  *(float *)(param_1 + 0x1c) = fVar1;
  return;
}

