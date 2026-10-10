
int __thiscall FUN_0068242f(int param_1,int *param_2,LOGFONTA *param_3)

{
  int iVar1;
  HFONT pHVar2;
  
  if ((param_2 == (int *)0x0) || (param_3 == (LOGFONTA *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_0068814e(param_2,param_1 + 0x48);
    if (-1 < iVar1) {
      pHVar2 = CreateFontIndirectA(param_3);
      *(HFONT *)(param_1 + 8) = pHVar2;
      if (pHVar2 == (HFONT)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        *(int **)(param_1 + 0x4c) = param_2;
        (**(code **)(*param_2 + 4))(param_2);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

