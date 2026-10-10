
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00688d4b(int param_1,int param_2,int param_3,float *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  
  fVar3 = _DAT_006f406c;
  puVar4 = (ushort *)
           (*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
           *(int *)(param_1 + 0x18));
  puVar1 = puVar4 + *(int *)(param_1 + 0x1050);
  for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    *param_4 = (float)(int)((char)((char)*puVar4 << 3) >> 3) * fVar3;
    param_4[1] = (float)(int)((char)((char)(uVar2 >> 5) << 3) >> 3) * fVar3;
    param_4[2] = 0.0;
    param_4[3] = (float)(*puVar4 >> 10) * _DAT_006f9ee0;
    param_4 = param_4 + 4;
  }
  return;
}

