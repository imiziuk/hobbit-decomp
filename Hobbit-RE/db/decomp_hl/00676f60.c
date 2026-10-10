
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00676f60(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  _DAT_007f8794 = 1;
  do {
    while( true ) {
      piVar3 = (int *)FUN_00655730(1,0);
      iVar4 = *(int *)(piVar3[2] + 0x10);
      iVar1 = *(int *)(iVar4 + 0x1c);
      FUN_00655730(1,0);
      if (piVar3[10] != 1) break;
      piVar3[10] = 2;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
      piVar3[0xc] = *(int *)(iVar1 + 0x1e0);
      *(int *)(iVar1 + 0x1e0) = *(int *)(iVar1 + 0x1e0) + 1;
      piVar2 = *(int **)(iVar1 + 0x1ec);
      iVar4 = piVar2[3];
      while (iVar4 <= piVar3[3]) {
        piVar2 = (int *)piVar2[1];
        iVar4 = piVar2[3];
      }
      piVar3[1] = (int)piVar2;
      *piVar3 = *piVar2;
      *(int **)(*piVar2 + 4) = piVar3;
      *piVar2 = (int)piVar3;
      iVar4 = *(int *)(iVar1 + 0x1dc) + 1;
      *(int *)(iVar1 + 0x1dc) = iVar4;
      if (iVar4 == 1) goto LAB_00677011;
      FUN_00655630(0,1);
    }
    FUN_00680720();
LAB_00677011:
    FUN_00680890();
    FUN_00655630(0,1);
  } while( true );
}

