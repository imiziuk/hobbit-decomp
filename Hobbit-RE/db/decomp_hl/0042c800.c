
void __thiscall FUN_0042c800(float param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float local_4;
  
  iVar2 = *(int *)((int)param_1 + 0x450);
  *(undefined4 *)((int)param_1 + 0x3a0c) = *(undefined4 *)(iVar2 + 0x10c);
  *(undefined4 *)((int)param_1 + 0x3a10) = *(undefined4 *)(iVar2 + 0x110);
  *(undefined4 *)((int)param_1 + 0x3a14) = *(undefined4 *)(iVar2 + 0x114);
  local_4 = param_1;
  FUN_0064c8e0(param_3,&local_4,&param_3);
  fVar1 = *(float *)((int)param_1 + 0x3a0c);
  *(float *)((int)param_1 + 0x3a0c) = fVar1 * param_3 + local_4 * *(float *)((int)param_1 + 0x3a14);
  *(float *)((int)param_1 + 0x3a14) = *(float *)((int)param_1 + 0x3a14) * param_3 - fVar1 * local_4;
  *(float *)((int)param_1 + 0x3a0c) = *(float *)((int)param_1 + 0x3a0c) + *param_2;
  *(float *)((int)param_1 + 0x3a10) = param_2[1] + *(float *)((int)param_1 + 0x3a10);
  *(float *)((int)param_1 + 0x3a14) = param_2[2] + *(float *)((int)param_1 + 0x3a14);
  return;
}

