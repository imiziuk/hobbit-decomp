
int __fastcall FUN_004c6fa0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004c71a0();
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x140);
  uVar2 = piVar1[1] * 2;
  if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
    return piVar1[2] * 0x50 + *(int *)(*piVar1 + 0x58);
  }
  iVar3 = FUN_00549470(piVar1 + 1);
  return piVar1[2] * 0x50 + *(int *)(iVar3 + 0x58);
}

