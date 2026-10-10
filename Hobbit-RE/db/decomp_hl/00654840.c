
void FUN_00654840(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_2 == param_4) {
    FUN_00648480(param_1,param_3,param_4 * param_5 >> 3);
  }
  if (param_2 == 8) {
    if ((param_4 == 4) && (0 < param_5)) {
      iVar2 = (param_5 - 1U >> 1) + 1;
      do {
        *param_1 = *param_3 >> 4;
        param_1[1] = *param_3 & 0xf;
        param_1 = param_1 + 2;
        param_3 = param_3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else if (((param_2 == 4) && (param_4 == 8)) && (0 < param_5)) {
    iVar2 = (param_5 - 1U >> 1) + 1;
    do {
      bVar1 = *param_3;
      pbVar3 = param_3 + 1;
      *param_1 = bVar1 << 4;
      param_3 = param_3 + 2;
      *param_1 = bVar1 << 4 | *pbVar3 & 0xf;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

