
void __thiscall FUN_004a4190(int *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x154))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x154))();
    fStack_10 = *(float *)(iVar1 + 0x20);
    iVar1 = (**(code **)(*param_1 + 0x154))();
    FUN_0064c8e0(*(undefined4 *)(iVar1 + 0x1c),&fStack_8,&fStack_14);
    FUN_0064c8e0(fStack_10,&fStack_c,&fStack_4);
    *param_2 = fStack_c * fStack_14;
    param_2[1] = -fStack_8;
    param_2[2] = fStack_4 * fStack_14;
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x30))();
  fStack_8 = *(float *)(iVar1 + 4);
  pfVar2 = (float *)(**(code **)(*param_1 + 0x30))();
  fStack_4 = *pfVar2;
  FUN_0064c8e0(fStack_4,&fStack_c,&fStack_14);
  FUN_0064c8e0(fStack_8,&fStack_4,&fStack_10);
  *param_2 = fStack_4 * fStack_14;
  param_2[1] = -fStack_c;
  param_2[2] = fStack_10 * fStack_14;
  return;
}

