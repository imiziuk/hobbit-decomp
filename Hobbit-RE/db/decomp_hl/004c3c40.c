
void __thiscall FUN_004c3c40(int *param_1,int param_2)

{
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_18 = param_1[0x11];
  iStack_14 = param_1[0x12];
  iStack_10 = param_1[0x13];
  iStack_c = param_1[0x14];
  iStack_8 = param_1[0x15];
  iStack_4 = param_1[0x16];
  param_1[0x4d] = param_2;
  param_1[0x4c] = param_2;
  param_1[0x4e] = param_2;
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x124))();
  FUN_004c3500(&iStack_18,0);
  return;
}

