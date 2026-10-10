
void __thiscall FUN_005f42e0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_2 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar1;
  if (*(float *)(param_1 + 0x10) <= fVar1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar2 = FUN_00647b10(0,99);
    if (iVar2 < *(int *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  FUN_005f11b0(param_2);
  return;
}

