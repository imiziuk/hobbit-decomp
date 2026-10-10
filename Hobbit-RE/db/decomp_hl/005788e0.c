
void __thiscall FUN_005788e0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
  *(undefined4 *)(param_1 + 0x3d28) = 0;
  *(undefined4 *)(param_1 + 0x3d2c) = *param_2;
  *(undefined4 *)(param_1 + 0x3d30) = param_2[1];
  *(undefined4 *)(param_1 + 0x3d34) = param_2[2];
  *(undefined4 *)(param_1 + 0x3d38) = param_2[3];
  *(undefined4 *)(param_1 + 0x3d3c) = param_2[4];
  *(undefined4 *)(param_1 + 0x3d40) = param_2[5];
  piVar1 = (int *)FUN_004021c0(param_3,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x74))();
  }
  return;
}

