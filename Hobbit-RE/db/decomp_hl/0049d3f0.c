
void __thiscall
FUN_0049d3f0(int param_1,float *param_2,float *param_3,float param_4,int *param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  *(float *)(param_1 + 0x10) = *param_3;
  *(float *)(param_1 + 0x14) = param_3[1];
  *(float *)(param_1 + 0x18) = param_3[2];
  *(float *)(param_1 + 0x40) = param_4;
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  *(float *)(param_1 + 0x1c) = *param_3 - *param_2;
  *(float *)(param_1 + 0x24) = fVar3 - fVar4;
  *(float *)(param_1 + 0x20) = fVar1 - fVar2;
  fVar1 = DAT_006e92e8 /
          SQRT(*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
               *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
               *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c));
  iVar5 = FUN_0064cf30(fVar1);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
  }
  *(float *)(param_1 + 0x1c) = param_4 * *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x20) = param_4 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) = param_4 * *(float *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(undefined4 *)(param_1 + 0x30) = param_8;
  fVar1 = *param_2 - *param_3;
  fVar2 = param_2[2] - param_3[2];
  fVar6 = (float10)FUN_0064ca10(param_2[1] - param_3[1],SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  fVar7 = (float10)FUN_0064ca10(fVar1,fVar2);
  *(float *)(param_1 + 0x34) = (float)-fVar6;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(float *)(param_1 + 0x38) = (float)fVar7;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfc | 4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  (**(code **)(*param_5 + 0x14))(param_1 + 4,0);
  return;
}

