
void __thiscall
FUN_00589e60(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,undefined4 param_8)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  
  FUN_00589de0();
  *(undefined4 *)(param_1 + 0x418) = param_8;
  iVar4 = 0;
  puVar5 = (undefined2 *)(param_1 + 0x13d2);
  do {
    *(undefined4 *)(puVar5 + -0x7db) = 0;
    puVar6 = (undefined4 *)(puVar5 + -0x7d1);
    for (iVar3 = 1000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0xffff;
    uVar2 = FUN_0058a310(0,0,0,iVar4,0);
    *puVar5 = uVar2;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0x7dc;
  } while (iVar4 < 3);
  fVar1 = DAT_006e92e8 / param_2;
  *(float *)(param_1 + 0x420) = param_2;
  *(float *)(param_1 + 0x424) = param_3;
  *(float *)(param_1 + 0x13d8) = param_4;
  *(float *)(param_1 + 0x13dc) = param_5;
  *(float *)(param_1 + 0x2390) = param_6;
  *(float *)(param_1 + 0x2394) = param_7;
  *(float *)(param_1 + 0x428) = fVar1;
  *(float *)(param_1 + 0x42c) = DAT_006e92e8 / param_3;
  *(float *)(param_1 + 0x13e0) = DAT_006e92e8 / param_4;
  *(float *)(param_1 + 0x13e4) = DAT_006e92e8 / param_5;
  *(float *)(param_1 + 0x2398) = DAT_006e92e8 / param_6;
  *(float *)(param_1 + 0x239c) = DAT_006e92e8 / param_7;
  return;
}

