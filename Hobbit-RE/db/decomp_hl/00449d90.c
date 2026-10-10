
void __fastcall FUN_00449d90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004021c0(*(undefined4 *)(param_1 + 0x3a50),*(undefined4 *)(param_1 + 0x3a54));
  iVar2 = FUN_004c8970();
  iVar2 = iVar2 + -1;
  iVar5 = 0;
  if (iVar2 != *(int *)(param_1 + 0x4658)) {
    piVar1 = (int *)(param_1 + 0x465c);
    *piVar1 = *piVar1 + (iVar2 - *(int *)(param_1 + 0x4658));
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x465c) = 0;
    }
    *(int *)(param_1 + 0x4658) = iVar2;
  }
  if (*(int *)(param_1 + 0x465c) < 0) {
    *(undefined4 *)(param_1 + 0x465c) = 0;
  }
  iVar2 = FUN_004c8970();
  if (iVar2 + -1 < *(int *)(param_1 + 0x465c)) {
    iVar2 = FUN_004c8970();
    *(int *)(param_1 + 0x465c) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x4658)) {
    puVar4 = (undefined4 *)(param_1 + 0x3a60);
    do {
      puVar3 = (undefined4 *)FUN_004c8990(local_18,iVar5);
      puVar4[-2] = *puVar3;
      iVar5 = iVar5 + 1;
      puVar4[-1] = puVar3[1];
      *puVar4 = puVar3[2];
      puVar3 = (undefined4 *)FUN_004c8990(local_c,iVar5);
      puVar4[1] = *puVar3;
      puVar4[2] = puVar3[1];
      puVar4[3] = puVar3[2];
      puVar4 = puVar4 + 6;
    } while (iVar5 < *(int *)(param_1 + 0x4658));
  }
  return;
}

