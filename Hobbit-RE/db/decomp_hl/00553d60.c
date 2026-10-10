
void __thiscall FUN_00553d60(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x4c))) && (-1 < param_3)) &&
     (((param_3 < 8 && (-1 < param_4)) && (param_4 < 4)))) {
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 100) + 8 +
              ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x154 +
     (param_3 * 7 + param_4 + (*(uint *)(param_1 + 0x58) & param_2) * 0x281) * 4) = param_5;
  }
  return;
}

