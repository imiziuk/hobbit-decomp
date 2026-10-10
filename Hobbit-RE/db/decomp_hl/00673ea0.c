
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00673ea0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 8) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffff7;
    FUN_00648600((float *)(param_1 + 0x14c),0,0x40);
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
      iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
      iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50);
    }
    fVar1 = (float)(iVar3 + 1) * _DAT_006e936c;
    fVar2 = (float)(iVar4 + 1) * _DAT_006e936c;
    *(float *)(param_1 + 0x14c) = fVar1;
    *(float *)(param_1 + 0x160) = -fVar2;
    *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
    *(float *)(param_1 + 0x17c) = (float)*(int *)(param_1 + 0x4c) + fVar1;
    *(float *)(param_1 + 0x180) = (float)*(int *)(param_1 + 0x50) + fVar2;
  }
  return;
}

