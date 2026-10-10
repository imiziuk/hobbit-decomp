
void __thiscall FUN_0053ba50(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[1] * 2;
  if (((uVar2 ^ param_1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
    iVar3 = *param_1;
  }
  else {
    iVar3 = FUN_00549470(param_1 + 1);
  }
  if (*(int *)(iVar3 + 0x4c) < 0x100) {
    FUN_0053b910(&DAT_00764848);
    FUN_0053cd20(param_1 + 8,&DAT_00764848,param_2);
    iVar3 = *(int *)(param_2 + 0x34);
    iVar1 = *(int *)(param_2 + 0x38);
    param_1[0x1c] = *(int *)(param_2 + 0x30);
    param_1[0x1e] = iVar1;
    param_1[0x1d] = iVar3;
  }
  return;
}

