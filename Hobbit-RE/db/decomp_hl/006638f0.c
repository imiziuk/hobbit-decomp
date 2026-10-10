
void __thiscall FUN_006638f0(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 0x4c);
  bVar4 = true;
  piVar2 = piVar1;
  piVar3 = (int *)piVar1[1];
  while (piVar3 != DAT_007f1444) {
    bVar4 = param_2 < (uint)piVar3[3];
    piVar2 = piVar3;
    if (bVar4) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_00668110(local_4,piVar3,piVar2,&param_2);
    return;
  }
  if (bVar4) {
    if (piVar2 == (int *)*piVar1) goto LAB_0066396f;
    FUN_00669270();
  }
  if (param_2 <= (uint)piVar2[3]) {
    return;
  }
LAB_0066396f:
  FUN_00668110(local_4,piVar3,piVar2,&param_2);
  return;
}

