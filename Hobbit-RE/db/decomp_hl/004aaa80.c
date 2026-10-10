
void __thiscall FUN_004aaa80(int param_1,float *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  if ((((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x90) - (int)piVar1 >> 2 != 0)) &&
      (*(char *)(*piVar1 + 0x38) == '\0')) &&
     ((((NAN(*(float *)(param_1 + 0x68)) || NAN(*param_2)) ==
        (*(float *)(param_1 + 0x68) == *param_2) ||
       ((NAN(*(float *)(param_1 + 0x6c)) || NAN(param_2[1])) ==
        (*(float *)(param_1 + 0x6c) == param_2[1]))) ||
      ((NAN(*(float *)(param_1 + 0x70)) || NAN(param_2[2])) ==
       (*(float *)(param_1 + 0x70) == param_2[2]))))) {
    FUN_004acb90();
    FUN_0064e7d0(s_Turned_an_immobile_primitive_0072b8b8);
  }
  return;
}

