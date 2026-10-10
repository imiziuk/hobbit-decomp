
void FUN_00559490(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined4 uStack_60;
  int *piStack_5c;
  int iStack_58;
  int iStack_54;
  char *pcStack_50;
  
  pcStack_50 = (char *)param_3;
  iStack_54 = param_2;
  iStack_58 = param_1;
  piStack_5c = (int *)0x5594aa;
  FUN_00559100();
  pcVar1 = (char *)(param_3 * 0x78 + 0x238 + param_2);
  pcStack_50 = pcVar1 + 0x2c;
  iStack_54 = 0x5594c5;
  FUN_00549470();
  pcStack_50 = (char *)(uint)*(byte *)(param_2 + 0x9bc + *pcVar1 * 2);
  iStack_54 = 0xb;
  iStack_58 = param_1;
  piStack_5c = DAT_007f1000;
  uStack_60 = 0x5594e2;
  (**(code **)(*DAT_007f1000 + 0xfc))();
  if ((pcVar1[2] & 2U) == 0) {
    uStack_60 = 2;
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x18);
    FUN_00557d60(&uStack_60);
    (**(code **)(*DAT_007f1000 + 0x94))
              (DAT_007f1000,*(undefined4 *)(&DAT_0073d9f0 + param_1 * 4),&uStack_60);
    return;
  }
  uStack_60 = 0;
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x18);
  return;
}

