
void FUN_00697d1e(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x68] = (int)puVar1;
  *puVar1 = &DAT_006979c2;
  iVar2 = param_1[9];
  if (iVar2 == 1) {
    bVar4 = param_1[8] == 1;
LAB_00697d6d:
    if (!bVar4) {
LAB_00697d6f:
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) {
        bVar4 = param_1[8] == 3;
      }
      else {
        if (5 < iVar2) goto LAB_00697d63;
        bVar4 = param_1[8] == 4;
      }
      goto LAB_00697d6d;
    }
LAB_00697d63:
    if (param_1[8] < 1) goto LAB_00697d6f;
  }
  iVar2 = param_1[10];
  if (iVar2 == 1) {
    iVar2 = 1;
    param_1[0x19] = 1;
    if ((param_1[9] == 1) || (param_1[9] == 3)) {
      puVar1[1] = FUN_0069786d;
      if (1 < param_1[8]) {
        iVar3 = 0x54;
        do {
          *(undefined1 *)(param_1[0x31] + 0x30 + iVar3) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < param_1[8]);
      }
      goto LAB_00697e26;
    }
  }
  else if (iVar2 == 2) {
    param_1[0x19] = 3;
    if (param_1[9] == 3) {
      puVar1[1] = FUN_00697b00;
      goto LAB_00697dd9;
    }
    bVar4 = param_1[9] == 2;
LAB_00697de5:
    if (bVar4) goto LAB_00697de7;
  }
  else {
    if (iVar2 == 4) {
      param_1[0x19] = 4;
      if (param_1[9] != 5) {
        bVar4 = param_1[9] == 4;
        goto LAB_00697de5;
      }
      puVar1[1] = FUN_00697890;
LAB_00697dd9:
      FUN_00697753();
      goto LAB_00697e26;
    }
    if (iVar2 == param_1[9]) {
      param_1[0x19] = param_1[8];
LAB_00697de7:
      puVar1[1] = FUN_00697803;
      goto LAB_00697e26;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x19;
  (**(code **)*param_1)(param_1);
LAB_00697e26:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
  }
  else {
    param_1[0x1a] = 1;
  }
  return;
}

