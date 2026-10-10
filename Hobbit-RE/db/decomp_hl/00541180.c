
void __thiscall FUN_00541180(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = FUN_00549470(param_1 + 0xd0);
  FUN_00549580(param_1 + 0xd0);
  iVar4 = *(int *)(iVar4 + 0x58);
  iVar5 = *(int *)(param_1 + 0xd4) * 0x50;
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(iVar5 + 0x38 + iVar4) * fVar1;
  fVar3 = *(float *)(iVar5 + 0x3c + iVar4) * fVar1;
  fVar1 = *(float *)(iVar5 + 0x40 + iVar4) * fVar1;
  FUN_00541d70(&local_40);
  *param_2 = local_40 * fVar2 + local_30 * fVar3 + local_20 * fVar1 + local_10;
  param_2[1] = local_3c * fVar2 + local_2c * fVar3 + local_1c * fVar1 + local_c;
  param_2[2] = local_38 * fVar2 + local_28 * fVar3 + local_18 * fVar1 + local_8;
  return;
}

