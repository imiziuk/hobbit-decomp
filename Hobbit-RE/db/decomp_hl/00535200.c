
void __thiscall FUN_00535200(int param_1,float param_2)

{
  int iVar1;
  
  *(float *)(param_1 + 0x270) = param_2 + *(float *)(param_1 + 0x270);
  iVar1 = FUN_00534b60();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24c) != 9) {
      FUN_00534f30(9);
    }
    FUN_00534b00(param_2);
  }
  FUN_00535130();
  switch(*(undefined4 *)(param_1 + 0x24c)) {
  case 1:
    FUN_005346e0(param_2);
    return;
  case 2:
    FUN_00534870(param_2);
    return;
  case 3:
    FUN_00534b80(param_2);
    return;
  case 4:
    FUN_00534a30(param_2);
    return;
  case 5:
    FUN_00534dd0(param_2);
    return;
  case 6:
    FUN_00534cf0(param_2);
    return;
  case 7:
    FUN_00534d60(param_2);
    return;
  case 9:
    FUN_00534b00(param_2);
    return;
  case 10:
    FUN_005345e0(param_2);
    return;
  case 0xb:
    FUN_005347e0(param_2);
  }
  return;
}

