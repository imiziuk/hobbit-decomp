
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a8d0(int param_1,int param_2,int param_3,float *param_4)

{
  ushort *puVar1;
  float fVar2;
  ushort *puVar3;
  
  fVar2 = _DAT_006ecde0;
  puVar3 = (ushort *)
           (*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
           *(int *)(param_1 + 0x18));
  puVar1 = puVar3 + *(int *)(param_1 + 0x1050);
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *param_4 = (float)(*(byte *)((int)puVar3 + 1) & 0xf) * fVar2;
    param_4[1] = (float)(byte)((byte)*puVar3 >> 4) * fVar2;
    param_4[2] = (float)((byte)*puVar3 & 0xf) * fVar2;
    param_4[3] = (float)(*puVar3 >> 0xc) * fVar2;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

