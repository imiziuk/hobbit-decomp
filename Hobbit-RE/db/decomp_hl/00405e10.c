
void __thiscall FUN_00405e10(int param_1,int param_2)

{
  switch(param_2) {
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
    *(undefined4 *)(param_1 + 0x230) = 0;
    break;
  default:
    *(undefined4 *)(param_1 + 0x230) = 1;
  }
  if (((param_2 == 5) || (param_2 == 7)) || (param_2 == 9)) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  if ((param_2 == 0) || (param_2 == 2)) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x238) = 1;
  }
  if (param_2 == 0xe) {
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x23c) = 1;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FUN_0053b700(1,0);
  FUN_00406360(0);
  *(int *)(param_1 + 500) = param_2;
  return;
}

