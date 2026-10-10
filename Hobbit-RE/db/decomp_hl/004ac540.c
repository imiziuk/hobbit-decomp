
void __fastcall FUN_004ac540(int *param_1)

{
  int iStack_10;
  int iStack_c;
  
  if ((*(byte *)((int)param_1 + 0x7f) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x40))();
    FUN_0054bfe0((int)(short)param_1[0x1e]);
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xef;
    if ((param_1[4] & 0x109000U) != 0) {
      iStack_10 = param_1[2];
      iStack_c = param_1[3];
      FUN_0058c830(param_1 + 0x11,&iStack_10);
    }
  }
  return;
}

