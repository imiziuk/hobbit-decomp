
void __thiscall FUN_00411ba0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 400);
  do {
    iVar3 = 0x20;
    do {
      iVar1 = piVar4[7];
      iVar3 = iVar3 + -1;
      if (iVar1 != *piVar4) {
        piVar4[-7] = *piVar4;
        *piVar4 = iVar1;
        switch(iVar1) {
        case 0:
          FUN_00411900(iVar2);
          break;
        case 1:
          FUN_00411960(iVar2);
          break;
        case 2:
          FUN_00411a00(iVar2);
          break;
        case 3:
          FUN_00411a80(iVar2);
          break;
        case 4:
          FUN_00411ae0(iVar2);
        }
        *(undefined4 *)(param_1 + 0x168) = 0;
      }
      *(float *)(param_1 + 0x168) = param_2 + *(float *)(param_1 + 0x168);
      switch(*piVar4) {
      case 1:
        FUN_004119c0(iVar2);
        break;
      case 3:
        FUN_004119c0(iVar2);
        break;
      case 4:
        FUN_00411b60(iVar2);
      }
    } while ((piVar4[7] != *piVar4) && (iVar3 != 0));
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 < 7);
  return;
}

