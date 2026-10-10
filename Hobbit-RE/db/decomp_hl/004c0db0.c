
int __fastcall FUN_004c0db0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x140);
  iVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[1] * 2;
    if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
      iVar3 = *piVar1;
    }
    else {
      iVar3 = FUN_00549470(piVar1 + 1);
    }
    if (iVar3 == 0) {
      return -1;
    }
    iVar3 = FUN_0053cb40(s__coll_0072c884,1);
    if (iVar3 == -1) {
      iVar3 = 0;
    }
  }
  return iVar3;
}

