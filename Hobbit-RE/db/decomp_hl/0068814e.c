
int FUN_0068814e(int param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar2 = DAT_00813028;
  do {
    if (iVar2 == 0) {
      pvVar1 = operator_new(0xa4);
      if (pvVar1 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00687e00();
      }
      if (iVar2 == 0) {
        iVar3 = -0x7ff8fff2;
      }
      else {
        iVar3 = FUN_00687f0d(param_1);
        if (iVar3 < 0) {
          FUN_00687e3f();
          FUN_006bf840(iVar2);
        }
        else {
          *param_2 = iVar2;
LAB_006881c5:
          iVar3 = 0;
        }
      }
      return iVar3;
    }
    if (*(int *)(iVar2 + 4) == param_1) {
      FUN_00687f0a();
      *param_2 = extraout_ECX;
      goto LAB_006881c5;
    }
    iVar2 = *(int *)(iVar2 + 0xa0);
  } while( true );
}

