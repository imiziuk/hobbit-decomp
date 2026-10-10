
void __thiscall FUN_00553ed0(int param_1,uint param_2,byte param_3)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x4c))) {
    *(float *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                       ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x138 +
              (*(uint *)(param_1 + 0x58) & param_2) * 0xa04) = (float)param_3;
  }
  return;
}

