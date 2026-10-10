
void __thiscall FUN_004c0b30(int param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d46e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_instance__GetL2W_0072c84c);
  local_4 = 0;
  iVar1 = FUN_004c71a0();
  if (iVar1 == 0) {
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x68),local_18,&local_1c);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x6c),&param_3,&local_28);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x70),&local_20,&local_24);
    *param_2 = (local_24 * local_28 + local_20 * local_18[0] * param_3) *
               *(float *)(param_1 + 0x130);
    param_2[1] = local_20 * local_1c * *(float *)(param_1 + 0x130);
    param_2[2] = (local_20 * local_18[0] * local_28 - local_24 * param_3) *
                 *(float *)(param_1 + 0x130);
    param_2[4] = (param_3 * local_24 * local_18[0] - local_20 * local_28) *
                 *(float *)(param_1 + 0x134);
    param_2[5] = local_24 * local_1c * *(float *)(param_1 + 0x134);
    param_2[6] = (local_24 * local_18[0] * local_28 + local_20 * param_3) *
                 *(float *)(param_1 + 0x134);
    param_2[8] = param_3 * local_1c * *(float *)(param_1 + 0x138);
    param_2[9] = -local_18[0] * *(float *)(param_1 + 0x138);
    param_2[10] = local_28 * local_1c * *(float *)(param_1 + 0x138);
    param_2[0xc] = *(float *)(param_1 + 0x14);
    param_2[0xd] = *(float *)(param_1 + 0x18);
    param_2[0xe] = *(float *)(param_1 + 0x1c);
    param_2[3] = 0.0;
    param_2[7] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xf] = 1.0;
  }
  else {
    fVar2 = param_3;
    if (param_3 == -NAN) {
      fVar2 = 0.0;
    }
    FUN_0053c110(fVar2,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

