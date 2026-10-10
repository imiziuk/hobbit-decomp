
void __fastcall FUN_004e4be0(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = DAT_00777274;
  iVar5 = DAT_00777270;
  if (DAT_00777238 == 1) {
    iVar7 = *(int *)(param_1 + 0xc0);
    iVar4 = FUN_004021c0(DAT_00777270,DAT_00777274);
    if (iVar4 == 0) {
      return;
    }
    bVar2 = false;
    if (((*(byte *)(param_1 + 0x154) & 4) != 0) && (*(char *)(iVar4 + 0x7c) == '\x1c')) {
      bVar2 = true;
    }
    if (0 < iVar7) {
      piVar6 = *(int **)(param_1 + 0xc4);
      do {
        if ((iVar5 == *piVar6) && (iVar3 == piVar6[1])) {
          bVar2 = true;
        }
        piVar6 = piVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar1 = *(ushort *)(param_1 + 0x154);
    if (((char)uVar1 < '\0') && (*(char *)(iVar4 + 0x7c) == '\x12')) {
      iVar5 = FUN_0041bcc0();
      if ((*(int *)(iVar5 + 0x8d4) == 5) || (iVar5 = FUN_0041bcc0(), *(int *)(iVar5 + 0x8d4) == 6))
      goto LAB_004e4ce3;
      iVar5 = FUN_0041bcc0();
      if (*(int *)(iVar5 + 0x8d4) == 7) {
        FUN_004e4b20();
        return;
      }
    }
    else if (((uVar1 & 1) == 0) || (*(char *)(iVar4 + 0x7c) != '\x12')) {
      if ((((uVar1 & 0x40) != 0) && (*(char *)(iVar4 + 0x7c) == '\x12')) &&
         (iVar5 = FUN_0041bcc0(), *(int *)(iVar5 + 0x8d4) == 0x28)) goto LAB_004e4ce3;
    }
    else {
      iVar5 = FUN_0041bcc0();
      if (*(int *)(iVar5 + 0x8d4) != 2) goto LAB_004e4ce3;
    }
    if (bVar2) {
LAB_004e4ce3:
      FUN_004e4b20();
      return;
    }
  }
  else if (DAT_00777238 == 2) {
    iVar5 = FUN_004021c0(DAT_00777270,DAT_00777274);
    if (iVar5 == 0) {
      return;
    }
    uVar1 = *(ushort *)(param_1 + 0x154);
    bVar2 = false;
    if (((uVar1 & 2) != 0) && (*(char *)(iVar5 + 0x7c) == '%')) {
      bVar2 = true;
    }
    if (((uVar1 & 4) != 0) && (*(char *)(iVar5 + 0x7c) == '\x1c')) {
      bVar2 = true;
    }
    if (((uVar1 & 1) == 0) || (*(char *)(iVar5 + 0x7c) != '\x12')) {
      if (((uVar1 & 0x40) != 0) &&
         ((*(char *)(iVar5 + 0x7c) == '\x12' &&
          (iVar5 = FUN_0041bcc0(), *(int *)(iVar5 + 0x8d4) == 0x28)))) goto LAB_004e4d80;
    }
    else {
      iVar5 = FUN_0041bcc0();
      if (*(int *)(iVar5 + 0x8d4) != 2) goto LAB_004e4d80;
    }
    if (bVar2) {
LAB_004e4d80:
      FUN_004e4b20();
      return;
    }
  }
  else {
    if ((DAT_00777238 == 5) || (DAT_00777238 == 7)) {
LAB_004e4e22:
      FUN_004e4b20();
      return;
    }
    if (DAT_00777238 == 3) {
      if ((*(byte *)(param_1 + 0x154) & 8) != 0) {
        FUN_004e4b20();
        return;
      }
    }
    else if (DAT_00777238 == 6) {
      if ((*(byte *)(param_1 + 0x154) & 0x10) != 0) {
        FUN_004e4b20();
        return;
      }
    }
    else if ((DAT_00777238 == 4) && (iVar5 = FUN_004021c0(DAT_00777270,DAT_00777274), iVar5 != 0)) {
      if (((*(byte *)(param_1 + 0x154) & 2) != 0) && (*(char *)(iVar5 + 0x7c) == '%')) {
        FUN_004e4b20();
      }
      if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(char *)(iVar5 + 0x7c) == '\x12'))
      goto LAB_004e4e22;
    }
  }
  return;
}

