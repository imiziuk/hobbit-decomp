
void __thiscall FUN_006398f0(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x50);
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    fVar1 = param_2 + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar1;
    *(float *)(param_1 + 0x7c) = param_2 + *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - param_2;
    if ((*(float *)(param_1 + 0x68) <= fVar1) && (DAT_006e92e4 < *(float *)(param_1 + 0x68))) {
      uVar4 = 2;
      FUN_005af120(2);
      iVar2 = FUN_004a1250(uVar4);
      if (iVar2 != 0) {
        FUN_005be370(param_2,6);
        return;
      }
    }
    if (iVar3 < 1) {
      if ((((*(float *)(param_1 + 0x6c) <= *(float *)(param_1 + 0x7c)) &&
           (DAT_006e92e4 < *(float *)(param_1 + 0x6c))) &&
          (DAT_006e92e4 < *(float *)(param_1 + 100))) && (iVar3 = FUN_005befc0(0), iVar3 != 0)) {
        FUN_005be370(param_2,7);
        return;
      }
    }
    else if ((*(float *)(param_1 + 0x80) < DAT_006e92e4 !=
              (*(float *)(param_1 + 0x80) == DAT_006e92e4)) && (iVar3 = FUN_005befc0(0), iVar3 != 0)
            ) {
      FUN_005be370(param_2,8);
      return;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370(param_2,5);
      return;
    }
    break;
  case 6:
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) goto switchD_00639910_default;
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370(param_2,5);
      return;
    }
    break;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370(param_2,(*(int *)(*(int *)(*(int *)(param_1 + 0x54) +
                                             *(int *)(param_1 + 0x84) * 4) + 0xc) != 0) * '\x04' +
                           '\x05');
      return;
    }
    break;
  default:
switchD_00639910_default:
    FUN_005be370(param_2,5);
    return;
  }
  FUN_005be370(param_2,param_3);
  return;
}

