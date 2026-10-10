
undefined4 __fastcall FUN_006abc80(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  uVar1 = *(undefined4 *)(param_1 + *(int *)(param_1 + 4) * 4);
  if (*(int *)(param_1 + 4) < 0) {
    iVar3 = _BinkWait_4(*(undefined4 *)(param_1 + 0x1c));
    while (iVar3 != 0) {
      FUN_00653be0(1);
      iVar3 = _BinkWait_4(*(undefined4 *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    iVar3 = _BinkWait_4(*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 != 0) {
      return uVar1;
    }
  }
  bVar2 = false;
  while( true ) {
    _BinkDoFrame_4(*(undefined4 *)(param_1 + 0x1c));
    _BinkNextFrame_4(*(undefined4 *)(param_1 + 0x1c));
    piVar4 = *(int **)(param_1 + 0x1c);
    iVar3 = _BinkCopyToBuffer_28
                      (piVar4,*(undefined4 *)(param_1 + 0x20),*piVar4 << 2,piVar4[1],0,0,0x80000003)
    ;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 4) = iVar3;
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      piVar4 = (int *)FUN_00674f30(*(undefined4 *)(param_1 + *(int *)(param_1 + 4) * 4));
      iStack_8 = **(int **)(param_1 + 0x1c);
      iStack_20 = (*(int **)(param_1 + 0x1c))[1];
      iVar3 = iStack_8 * 4;
      uStack_10 = 0;
      uStack_c = 0;
      iStack_4 = iStack_20;
      iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,0,&iStack_18,&uStack_10,0);
      if (iVar5 == 0) {
        iStack_24 = *(int *)(param_1 + 0x20);
        iVar5 = iStack_14;
        if (0 < iStack_20) {
          do {
            FUN_00648480(iVar5,iStack_24,iVar3);
            iStack_24 = iStack_24 + iVar3;
            iStack_20 = iStack_20 + -1;
            iVar5 = iVar5 + iStack_18;
          } while (iStack_20 != 0);
        }
        (**(code **)(*piVar4 + 0x44))(piVar4,0);
      }
      bVar2 = true;
    }
    if (*(uint *)(*(int *)(param_1 + 0x1c) + 8) <= *(uint *)(*(int *)(param_1 + 0x1c) + 0xc)) break;
    if (bVar2) {
      return *(undefined4 *)(param_1 + *(int *)(param_1 + 4) * 4);
    }
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 4) * 4);
}

