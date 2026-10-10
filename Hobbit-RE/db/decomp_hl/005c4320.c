
void __thiscall FUN_005c4320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  undefined4 uStack_24;
  int *piStack_20;
  int aiStack_8 [2];
  
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x14))();
  piStack_20 = (int *)&stack0xfffffff4;
  uStack_24 = 0x5c4358;
  FUN_005c4b50();
  if ((unaff_EBX == *(int *)(param_1 + 0x7c)) || (iVar2 < *(int *)(unaff_EBX + 0xc))) {
    aiStack_8[0] = *(int *)(param_1 + 0x7c);
    piVar3 = aiStack_8;
  }
  else {
    piVar3 = (int *)&stack0xfffffff4;
  }
  iVar2 = *piVar3;
  if (iVar2 != *(int *)(param_1 + 0x7c)) {
    piStack_20 = (int *)0x5c4390;
    FUN_00554770();
    piStack_20 = aiStack_8;
    uStack_24 = 0x89;
    (**(code **)(*DAT_007f1000 + 0xcc))(DAT_007f1000);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,0);
    FUN_00662c20();
    piVar3 = *(int **)(iVar2 + 0x14);
    if (piVar3 != *(int **)(iVar2 + 0x18)) {
      do {
        iVar1 = *piVar3;
        (**(code **)(**(int **)(iVar1 + 4) + 0xc))(iVar1);
        (**(code **)(**(int **)(iVar1 + 4) + 0x10))(iVar1);
        piVar3 = piVar3 + 1;
      } while (piVar3 != *(int **)(iVar2 + 0x18));
    }
    FUN_00662c60();
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,piStack_20);
    FUN_005c4510(&uStack_24,iVar2);
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}

