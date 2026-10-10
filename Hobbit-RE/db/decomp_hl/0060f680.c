
undefined4 __fastcall FUN_0060f680(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 0x7c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x90);
  iStack_4 = 4;
  do {
    piVar1 = (int *)FUN_004021c0(*puVar3,puVar3[1]);
    if (piVar1 == (int *)0x0) {
LAB_0060f6e5:
      iVar2 = FUN_005b6e70();
      if (iVar2 != 0) {
        FUN_006109e0();
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x108))(0);
      if (iVar2 == 0) goto LAB_0060f6e5;
      iVar2 = FUN_005af120();
      FUN_004a4170(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
    puVar3 = puVar3 + 2;
    iStack_4 = iStack_4 + -1;
    if (iStack_4 == 0) {
      return 0;
    }
  } while( true );
}

