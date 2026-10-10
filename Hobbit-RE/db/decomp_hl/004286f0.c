
void __thiscall FUN_004286f0(float param_1,float param_2)

{
  float fVar1;
  float local_4;
  
  local_4 = param_1;
  FUN_0064c8e0(param_2,&param_2,&local_4);
  fVar1 = *(float *)((int)param_1 + 4);
  *(float *)((int)param_1 + 4) = fVar1 * local_4 - *(float *)((int)param_1 + 8) * param_2;
  *(float *)((int)param_1 + 8) = *(float *)((int)param_1 + 8) * local_4 + fVar1 * param_2;
  return;
}

