
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a59f(int param_1,int param_2,int param_3,float *param_4)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  
  fVar2 = _DAT_006ed3a4;
  puVar3 = (uint *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  puVar1 = puVar3 + *(int *)(param_1 + 0x1050);
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *param_4 = (float)*(byte *)((int)puVar3 + 2) * fVar2;
    param_4[1] = (float)*(byte *)((int)puVar3 + 1) * fVar2;
    param_4[2] = (float)(*puVar3 & 0xff) * fVar2;
    param_4[3] = (float)*(byte *)((int)puVar3 + 3) * fVar2;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

