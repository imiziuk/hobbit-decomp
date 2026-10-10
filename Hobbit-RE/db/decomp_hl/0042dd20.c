
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042dd20(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_8;
  float local_4;
  
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar9 = 0x3e000000;
  uVar8 = 1;
  uVar7 = 0;
  uVar5 = FUN_0053cc70(s_idle_no_weapon_00720e0c);
  FUN_00540840(uVar5,uVar7,uVar8,uVar9);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  FUN_004430e0(8);
  fVar3 = *(float *)(param_1 + 0x474);
  *(float *)(param_1 + 0x7b0) = *(float *)(*(int *)(param_1 + 0x450) + 4) * _DAT_006e99b0;
  pfVar1 = (float *)(param_1 + 0x3a0c);
  *pfVar1 = 0.0;
  *(undefined4 *)(param_1 + 0x3a10) = 0;
  *(undefined4 *)(param_1 + 0x3a14) = 0x41e80000;
  local_4 = fVar3;
  FUN_0064c8e0(fVar3,&local_4,&local_8);
  fVar2 = *pfVar1;
  *pfVar1 = fVar2 * local_8 + local_4 * *(float *)(param_1 + 0x3a14);
  *(float *)(param_1 + 0x3a14) = *(float *)(param_1 + 0x3a14) * local_8 - fVar2 * local_4;
  *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x3a10) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x3a10);
  *(float *)(param_1 + 0x3a14) = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x3a14);
  FUN_0042c8b0((float *)(param_1 + 0x14),fVar3,0);
  FUN_0042d800(pfVar1);
  fVar6 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x848));
  fVar4 = (float10)_DAT_006e9368;
  *(undefined4 *)(param_1 + 0x854) = 0;
  *(float *)(param_1 + 0x7ac) = (float)(fVar6 + fVar4);
  return;
}

