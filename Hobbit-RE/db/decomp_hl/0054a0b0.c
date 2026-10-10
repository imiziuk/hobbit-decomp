
void __thiscall FUN_0054a0b0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_4;
  if (((*(int *)(param_1 + 0xc) != 0) &&
      (piVar3 = *(int **)(param_1 + 4), param_3 == (int *)*piVar3)) && (param_4 == piVar3)) {
    piVar2 = (int *)piVar3[1];
    if (piVar2 != DAT_0076cd84) {
      do {
        FUN_0054ab40(piVar2[2]);
        piVar3 = (int *)*piVar2;
        FUN_00549fa0();
        FUN_006bf840(piVar2);
        piVar2 = piVar3;
      } while (piVar3 != DAT_0076cd84);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_0076cd84;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  piVar3 = param_3;
  if (param_3 != param_4) {
    do {
      if ((int *)piVar3[2] == DAT_0076cd84) {
        piVar1 = (int *)piVar3[1];
        param_3 = piVar3;
        if (piVar3 == (int *)piVar1[2]) {
          do {
            param_3 = piVar1;
            piVar1 = (int *)param_3[1];
          } while (param_3 == (int *)piVar1[2]);
        }
        if ((int *)param_3[2] != piVar1) goto LAB_0054a166;
      }
      else {
        piVar1 = (int *)FUN_0054b130((int *)piVar3[2]);
LAB_0054a166:
        param_3 = piVar1;
      }
      FUN_0054a6a0(&param_4,piVar3);
      piVar3 = param_3;
    } while (param_3 != piVar2);
  }
  *param_2 = param_3;
  return;
}

