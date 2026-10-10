
void FUN_0063cf50(float param_1)

{
  int iVar1;
  
  if ((NAN(param_1) || NAN(DAT_006e92e4)) != (param_1 == DAT_006e92e4)) {
    FUN_0063d930(1);
    FUN_0063d930(1);
    return;
  }
  iVar1 = __ftol();
  if ((NAN((float)iVar1) || NAN(param_1)) != ((float)iVar1 == param_1)) {
    FUN_0063d930(1);
    FUN_0063d930(0);
    FUN_0063cc20(iVar1);
    return;
  }
  FUN_0063d930(0);
  FUN_0063cee0(param_1);
  return;
}

