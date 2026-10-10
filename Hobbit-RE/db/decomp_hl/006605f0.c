
void FUN_006605f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_7) {
    do {
      if (0 < param_6) {
        iVar1 = __ftol();
        iVar3 = param_6;
        do {
          iVar2 = __ftol();
          iVar2 = (iVar2 + iVar1 * param_2) * 4;
          *param_5 = *(undefined1 *)(iVar2 + param_1);
          param_5[1] = *(undefined1 *)(param_1 + 1 + iVar2);
          param_5[2] = *(undefined1 *)(param_1 + 2 + iVar2);
          param_5[3] = *(undefined1 *)(param_1 + 3 + iVar2);
          param_5 = param_5 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

