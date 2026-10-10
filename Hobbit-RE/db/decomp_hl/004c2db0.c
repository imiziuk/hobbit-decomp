
void __fastcall FUN_004c2db0(int *param_1)

{
  int iVar1;
  int iStack_14;
  int iStack_10;
  
  if ((*(byte *)((int)param_1 + 0x7f) & 0x10) == 0) {
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xef ^ 0x10;
    FUN_0054c080((int)(short)param_1[0x1e]);
    iVar1 = FUN_005495d0(param_1 + 0x2f);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x100))();
      (**(code **)(*param_1 + 0x124))();
      return;
    }
    (**(code **)(*param_1 + 0x9c))(0);
    (**(code **)(*param_1 + 0x44))();
    iStack_14 = param_1[2];
    iStack_10 = param_1[3];
    FUN_0058c830(param_1 + 0x11,&iStack_14);
  }
  return;
}

