
void __fastcall FUN_00402cf0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[0x47] != 0) {
    param_1[0x47] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0x7fffffff;
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_0053b590();
      FUN_006bf840(iVar1);
    }
    param_1[2] = 0;
  }
  return;
}

