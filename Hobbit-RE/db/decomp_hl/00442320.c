
void __fastcall FUN_00442320(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((0 < *(int *)(param_1 + 0x534)) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x52c) + -2),
     fVar1 < *(float *)(param_1 + 0x530) != (fVar1 == *(float *)(param_1 + 0x530)))) {
    if (*(float *)(param_1 + 0xa4c) < *(float *)(param_1 + 0x91c)) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x11e5);
      return;
    }
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    fVar2 = (float10)FUN_0064c6b0(0,(float)*(int *)(param_1 + 0x52c) - DAT_006e92e8);
    *(float *)(param_1 + 0x530) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(undefined4 *)(param_1 + 0x534) = 0;
  }
  return;
}

