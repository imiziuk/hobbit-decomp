
void __fastcall FUN_004c06c0(int param_1)

{
  void **ppvVar1;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [3];
  void *local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d46a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rigid_instance__UpdateL2W_0072c818);
  local_4 = 0;
  iVar2 = FUN_004c71a0();
  if (iVar2 != 0) {
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x68),local_58,&local_5c);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x6c),&local_6c,&local_68);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x70),&local_60,&local_64);
    local_4c = (void *)((local_64 * local_68 + local_60 * local_58[0] * local_6c) *
                       *(float *)(param_1 + 0x130));
    local_48[0] = local_60 * local_5c * *(float *)(param_1 + 0x130);
    local_48[1] = (local_60 * local_58[0] * local_68 - local_64 * local_6c) *
                  *(float *)(param_1 + 0x130);
    local_48[3] = (local_6c * local_64 * local_58[0] - local_60 * local_68) *
                  *(float *)(param_1 + 0x134);
    local_38 = local_64 * local_5c * *(float *)(param_1 + 0x134);
    local_34 = (local_64 * local_58[0] * local_68 + local_60 * local_6c) *
               *(float *)(param_1 + 0x134);
    local_2c = local_6c * local_5c * *(float *)(param_1 + 0x138);
    local_28 = -local_58[0] * *(float *)(param_1 + 0x138);
    local_24 = local_68 * local_5c * *(float *)(param_1 + 0x138);
    local_1c = *(undefined4 *)(param_1 + 0x14);
    local_14 = *(undefined4 *)(param_1 + 0x1c);
    ppvVar1 = (void **)(*(int *)(param_1 + 0x140) + 0x20);
    local_18 = *(undefined4 *)(param_1 + 0x18);
    local_48[2] = 0.0;
    local_30 = 0;
    local_20 = 0;
    local_10 = 0x3f800000;
    if (ppvVar1 != &local_4c) {
      ppvVar4 = &local_4c;
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x140) + 0x28);
      do {
        puVar3[-2] = *ppvVar4;
        puVar3[-1] = ppvVar4[1];
        *puVar3 = *(undefined4 *)(((int)&local_4c - (int)ppvVar1) + (int)puVar3);
        puVar3[1] = *(undefined4 *)(((int)local_48 - (int)ppvVar1) + (int)puVar3);
        ppvVar4 = ppvVar4 + 4;
        puVar3 = puVar3 + 4;
      } while (ppvVar4 != &local_c);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

