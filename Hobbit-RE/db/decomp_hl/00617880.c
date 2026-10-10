
void __fastcall FUN_00617880(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_0066dac0();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + iVar5 * 4);
      piVar3 = (int *)FUN_004021c0(*puVar1,puVar1[1]);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x68))();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x578));
  }
  iVar5 = FUN_006193c0();
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(*(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x58c) * 4),
     piVar3 = (int *)FUN_004021c0(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14)),
     piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x5c))();
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x57c) + iVar5 * 4);
      piVar3 = (int *)FUN_004021c0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
      uVar4 = (**(code **)(*piVar3 + 0x28))(0xffff0000);
      FUN_0066a800(uVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x578));
  }
  return;
}

