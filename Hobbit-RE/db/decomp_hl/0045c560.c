
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0045c560(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_1 + 0xd0) = param_2;
  fVar1 = SQRT(param_2 * param_2 * _DAT_006e9338);
  fVar2 = -fVar1;
  *(float *)(param_1 + 0x30) = fVar2;
  *(float *)(param_1 + 0x34) = fVar2;
  *(float *)(param_1 + 0x2c) = fVar2;
  *(float *)(param_1 + 0x3c) = fVar1;
  *(float *)(param_1 + 0x40) = fVar1;
  *(float *)(param_1 + 0x38) = fVar1;
  *(undefined4 *)(param_1 + 0xfc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  *(undefined4 *)(param_1 + 0x104) = param_5;
  *(undefined4 *)(param_1 + 0x108) = param_6;
  *(undefined4 *)(param_1 + 0x10c) = param_7;
  return;
}

