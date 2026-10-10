
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006746f0(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 0x88) & 0x400) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffbff;
    if (*(int *)(param_1 + 0x70) == 0) {
      *(float *)(param_1 + 0x470) =
           (float)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) * _DAT_006e936c;
      *(float *)(param_1 + 0x478) =
           (float)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x50)) * _DAT_006e936c;
      FUN_006746a0();
      *(float *)(param_1 + 0x474) = -*(float *)(param_1 + 0x24c);
      *(float *)(param_1 + 0x47c) = -*(float *)(param_1 + 0x24c);
      return;
    }
    *(float *)(param_1 + 0x470) =
         (float)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54)) * _DAT_006e936c;
    *(float *)(param_1 + 0x478) =
         (float)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x50)) * _DAT_006e936c;
    fVar1 = (float)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54)) /
            *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x474) = fVar1;
    *(float *)(param_1 + 0x47c) = fVar1;
  }
  return;
}

