
void __fastcall FUN_00426c60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(param_1 + 0x46d4);
  iVar5 = 0;
  iVar3 = 0;
  if (iVar1 != -1) {
    iVar5 = *(int *)(param_1 + 0x46d8 + iVar1 * 8);
    iVar3 = *(int *)(param_1 + 0x46dc + iVar1 * 8);
  }
  FUN_004267a0();
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x46d4) = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x4cd8)) {
    piVar2 = (int *)(param_1 + 0x46d8);
    do {
      if ((*piVar2 == iVar5) && (piVar2[1] == iVar3)) {
        *(int *)(param_1 + 0x46d4) = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0x4cd8));
  }
  if (*(int *)(param_1 + 0x46d0) != 0) {
    if (*(int *)(param_1 + 0x46d4) == -1) {
      *(undefined4 *)(param_1 + 0x46d0) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x8d4);
    if ((((iVar1 == 0x1a) || (iVar1 == 0x1b)) || (iVar1 == 0xc)) ||
       (((iVar1 == 0xd || (iVar1 == 9)) || (iVar1 == 0x15)))) {
      *(undefined4 *)(param_1 + 0x46d0) = 0;
    }
    if (*(int *)(param_1 + 0x660) != 0) {
      *(undefined4 *)(param_1 + 0x46d4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x46d0) = 0;
      *(undefined4 *)(param_1 + 0x660) = 0;
      FUN_00425b50();
    }
    if (*(int *)(param_1 + 0x46d0) != 0) {
      iVar1 = FUN_00647b10(0,100);
      if ((iVar1 < 8) &&
         (iVar1 = FUN_00426b90(*(undefined4 *)(param_1 + 0x46d8 + *(int *)(param_1 + 0x46d4) * 8),
                               *(undefined4 *)(param_1 + 0x46dc + *(int *)(param_1 + 0x46d4) * 8)),
         iVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x46d0) = 0;
      }
      if (*(int *)(param_1 + 0x46d0) != 0) {
        return;
      }
    }
    FUN_00425b50();
    if (*(int *)(param_1 + 0x46d0) != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (*(int *)(param_1 + 0x8d4) != 0x15)) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x46d4) = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x4cd8)) {
      puVar4 = (undefined4 *)(param_1 + 0x46d8);
      do {
        iVar5 = FUN_00426b90(*puVar4,puVar4[1]);
        if (iVar5 != 0) {
          *(int *)(param_1 + 0x46d4) = iVar1;
          break;
        }
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar1 < *(int *)(param_1 + 0x4cd8));
    }
    if (*(int *)(param_1 + 0x46d4) == -1) {
      FUN_0056b710();
    }
    else {
      *(undefined4 *)(param_1 + 0x46d0) = 1;
      FUN_00425b30();
    }
    if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
       (*(int *)(param_1 + 0x3b0) == 0)) {
      iVar1 = *(int *)(param_1 + 0x46cc);
      if (iVar1 == 0) {
        FUN_00437360(3);
        return;
      }
      if (iVar1 == 1) {
        FUN_00437360(5);
        return;
      }
      if (iVar1 == 2) {
        FUN_00437360(6);
        return;
      }
      fVar6 = (float10)FUN_00434ca0(3);
      if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) == (fVar6 == (float10)DAT_006e92e4)) {
        FUN_00437360(3);
        return;
      }
      FUN_00437360(5);
    }
  }
  return;
}

