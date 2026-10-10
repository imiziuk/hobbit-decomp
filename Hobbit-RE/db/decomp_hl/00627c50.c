
void __thiscall FUN_00627c50(int param_1,float param_2)

{
  float fVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    fVar1 = param_2 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x58) = fVar1;
    *(float *)(param_1 + 0x5c) = param_2 + *(float *)(param_1 + 0x5c);
    if ((*(float *)(param_1 + 0x54) <= fVar1) && (DAT_006e92e4 < *(float *)(param_1 + 0x54))) {
      FUN_005be370();
      return;
    }
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370();
      return;
    }
    break;
  case 6:
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) goto switchD_00627c5c_default;
    break;
  case 8:
    break;
  default:
switchD_00627c5c_default:
    FUN_005be370();
    return;
  }
  FUN_005be370();
  return;
}

