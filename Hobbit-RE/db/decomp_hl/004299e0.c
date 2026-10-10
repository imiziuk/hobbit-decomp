
void __fastcall FUN_004299e0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x46d0) == 0) {
    FUN_0043a3f0(0x12,s_C__projects_meridian_Support_Obj_00720b28,0x87b);
    return;
  }
  fVar2 = (float10)FUN_00426760();
  *(float *)(param_1 + 0x7ac) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x184);
  if ((0 < *(int *)(param_1 + 0x534)) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x52c) + -2),
     fVar1 < *(float *)(param_1 + 0x530) != (fVar1 == *(float *)(param_1 + 0x530)))) {
    FUN_0043a3f0(0x12,s_C__projects_meridian_Support_Obj_00720b28,0x886);
  }
  return;
}

