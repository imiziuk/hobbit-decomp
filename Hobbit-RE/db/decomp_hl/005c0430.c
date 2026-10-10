
void FUN_005c0430(uint param_1,uint *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  *param_3 = (param_1 >> 2 & 3) + 1;
  *param_2 = param_1 >> 4 & 0xf;
  switch(param_1 & 3) {
  case 0:
    *param_4 = 8;
    *param_5 = 0;
    return;
  case 1:
    *param_4 = 0x10;
    *param_5 = 0;
    return;
  case 2:
    *param_4 = 0x20;
    *param_5 = 0;
    return;
  case 3:
    *param_4 = 0x20;
    *param_5 = 1;
  }
  return;
}

