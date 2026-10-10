
void __thiscall FUN_0050a280(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x164) == 1) && (param_2 == 1)) && (param_3 == 0)) {
    iVar1 = *(int *)(param_1 + 0x174) + 0xd;
    *(int *)(param_1 + 0x174) = iVar1;
    if (*(int *)(param_1 + 0x178) <= iVar1) {
      *(undefined4 *)(param_1 + 0x188) = 1;
    }
  }
  *(int *)(param_1 + 0x164) = param_2;
  *(int *)(param_1 + 0x16c) = param_3;
  fVar2 = (float10)FUN_0064cbd0();
  *(double *)(param_1 + 0x180) = (double)fVar2;
  return;
}

