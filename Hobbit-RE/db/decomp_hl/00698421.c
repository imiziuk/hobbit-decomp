
int * __fastcall FUN_00698421(int param_1)

{
  int in_EAX;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  if (0 < in_EAX) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      if (iVar3 < *piVar2) {
        piVar1 = piVar2 + -6;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return piVar1;
}

