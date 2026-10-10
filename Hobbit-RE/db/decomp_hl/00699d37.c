
void FUN_00699d37(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x69] = (int)puVar1;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  *puVar1 = FUN_00699c5b;
  puVar1[2] = &DAT_006979c2;
  puVar1[3] = &LAB_00699d23;
  if (4 < param_1[0x19]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x15]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  FUN_006994a9();
  FUN_006995c6();
  if (param_1[0x13] == 2) {
    FUN_00699c25();
  }
  return;
}

