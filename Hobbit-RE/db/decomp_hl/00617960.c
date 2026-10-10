
void __thiscall FUN_00617960(int param_1,int param_2)

{
  float10 fVar1;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffd;
    (**(code **)(*(int *)(param_1 + 0x5c8) + 0x10))(0);
    *(undefined4 *)(param_1 + 0x5f4) = 0;
    (**(code **)(*(int *)(param_1 + 0x628) + 0x10))(0);
  }
  else {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
    fVar1 = (float10)FUN_0064c6b0(0,(float)*(int *)(param_1 + 0x5e8) - DAT_006e92e8);
    *(float *)(param_1 + 0x5ec) = (float)fVar1;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
  }
  fVar1 = (float10)FUN_0064c6b0(0,(float)*(int *)(param_1 + 0x618) - DAT_006e92e8);
  *(float *)(param_1 + 0x61c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x620) = 0;
  return;
}

