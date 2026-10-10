
void FUN_00677bb0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_007f8948;
  iVar2 = 7;
  do {
    if (piVar3[2] != 0) {
      piVar3[2] = 0;
      if (((*(int *)(piVar3[-0xc] + 0x10) != 0) &&
          (iVar1 = *(int *)(*(int *)(piVar3[-0xc] + 0x10) + 8), iVar1 != 0)) &&
         (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
        iVar1 = FUN_00676660(iVar1,&DAT_00752958);
        piVar3[-0x11] = iVar1;
        FUN_00677990(piVar3 + -0x42,0);
      }
    }
    if ((*piVar3 == 0) || (piVar3[-0x42] == 0)) {
      if (piVar3[1] == 0) {
        if (piVar3[-0x42] != 0) {
          if (piVar3[-0x42] == 1) {
            iVar1 = piVar3[-0xc];
          }
          else {
            if (piVar3[-0x42] != 2) goto LAB_00677cd6;
            FUN_0067b230(piVar3[-0xb]);
            iVar1 = piVar3[-0xc];
          }
          FUN_0067b230(iVar1);
        }
      }
      else {
        iVar1 = *(int *)(piVar3[-0x12] + 0x28);
        if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
          piVar3[1] = 0;
          if (piVar3[-0x11] != 0) {
            FUN_00676860(piVar3[-0x11]);
            piVar3[-0x11] = 0;
          }
          piVar3[-0x42] = 0;
          piVar3[3] = 0;
        }
      }
    }
    else {
      *piVar3 = 0;
      if (piVar3[-0x42] == 1) {
        if (piVar3[-0xc] != 0) {
          *(undefined4 *)(*(int *)(piVar3[-0xc] + 0x10) + 0x94) = 5;
        }
      }
      else if (piVar3[-0x42] == 2) {
        if (piVar3[-0xc] != 0) {
          *(undefined4 *)(*(int *)(piVar3[-0xc] + 0x10) + 0x94) = 5;
        }
        if (piVar3[-0xb] != 0) {
          *(undefined4 *)(*(int *)(piVar3[-0xb] + 0x10) + 0x94) = 5;
        }
      }
    }
LAB_00677cd6:
    piVar3 = piVar3 + 0x46;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

