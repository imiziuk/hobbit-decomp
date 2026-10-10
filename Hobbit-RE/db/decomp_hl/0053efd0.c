
void FUN_0053efd0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined4 local_158 [8];
  undefined4 local_137 [8];
  undefined4 local_114 [5];
  undefined4 local_100 [10];
  undefined4 auStack_d8 [4];
  undefined4 local_c8 [8];
  undefined4 local_a8 [42];
  
  FUN_0053eba0();
  uVar1 = FUN_0053f1a0();
  FUN_0053ebb0(uVar1);
  uVar1 = FUN_0053f1b0();
  FUN_0053ebd0(uVar1);
  iVar5 = 0;
  iVar2 = FUN_0053f1c0();
  if (0 < iVar2) {
    do {
      uVar1 = FUN_0053f210(iVar5);
      FUN_0053ebf0(iVar5,uVar1);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0053f1c0();
    } while (iVar5 < iVar2);
  }
  iVar5 = 0;
  iVar2 = FUN_0053f1d0();
  if (0 < iVar2) {
    do {
      fVar6 = (float10)FUN_0053f230(iVar5);
      FUN_0053ec10(iVar5,(float)fVar6);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0053f1d0();
    } while (iVar5 < iVar2);
  }
  iVar5 = 0;
  iVar2 = FUN_0053f1e0();
  if (0 < iVar2) {
    do {
      uVar1 = FUN_0053f260(local_168,iVar5);
      FUN_0053ec30(iVar5,uVar1);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0053f1e0();
    } while (iVar5 < iVar2);
  }
  iVar5 = 0;
  iVar2 = FUN_0053f1f0();
  if (0 < iVar2) {
    do {
      uVar1 = FUN_0053f2c0(iVar5);
      FUN_0053ec60(iVar5,uVar1);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0053f1f0();
    } while (iVar5 < iVar2);
  }
  iVar5 = 0;
  iVar2 = FUN_0053f200();
  if (0 < iVar2) {
    do {
      uVar1 = FUN_0053f310(iVar5);
      FUN_0053ec80(iVar5,uVar1);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0053f200();
    } while (iVar5 < iVar2);
  }
  *param_1 = local_15c;
  puVar4 = local_158;
  puVar3 = param_1;
  for (iVar2 = 8; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
  puVar3 = local_137;
  puVar4 = (undefined4 *)((int)param_1 + 0x25);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  puVar3 = local_114;
  puVar4 = param_1 + 0x12;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_100;
  puVar4 = param_1 + 0x17;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_1 + 0x1f;
  puVar4 = (undefined4 *)((int)puVar3 + (int)local_158 + (4 - (int)param_1));
  iVar2 = 2;
  do {
    *puVar3 = puVar4[-2];
    puVar3[1] = puVar4[-1];
    puVar3[2] = *puVar4;
    puVar3 = puVar3 + 3;
    puVar4 = puVar4 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = local_c8;
  puVar4 = param_1 + 0x25;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_a8;
  puVar4 = param_1 + 0x2d;
  for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  return;
}

