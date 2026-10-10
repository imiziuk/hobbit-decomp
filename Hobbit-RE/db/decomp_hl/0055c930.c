
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055c930(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x5c);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x5c) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_0055cb70();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4) + 0x5c);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4) + 0x5c) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_0055cbc0();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_0055c8b0();
        FUN_006bf840(iVar2);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (DAT_00772214 == 0) {
    if (DAT_0077220c != 0) {
      FUN_00407f70(3);
    }
    DAT_0077220c = 0;
    DAT_00772210 = 0;
  }
  DAT_00772208 = 0;
  if (DAT_00771fd4 == 0) {
    if (DAT_00771fcc != 0) {
      FUN_004253b0(3);
    }
    DAT_00771fcc = 0;
    _DAT_00771fd0 = 0;
  }
  DAT_00771fc8 = 0;
  if (DAT_0077224c == 0) {
    if (DAT_00772244 != 0) {
      FUN_00407f70(3);
    }
    DAT_00772244 = 0;
    DAT_00772248 = 0;
  }
  DAT_00772240 = 0;
  if (DAT_00772044 == 0) {
    FUN_006bf840(DAT_0077203c);
    DAT_0077203c = 0;
    _DAT_00772040 = 0;
  }
  _DAT_00772038 = 0;
  if (DAT_00771f9c == 0) {
    if (DAT_00771f94 != 0) {
      FUN_00407f70(3);
    }
    DAT_00771f94 = 0;
    DAT_00771f98 = 0;
  }
  DAT_00771f90 = 0;
  if (DAT_00772230 == 0) {
    if (DAT_00772228 != 0) {
      FUN_00407f70(3);
    }
    DAT_00772228 = 0;
    DAT_0077222c = 0;
  }
  DAT_00772224 = 0;
  FUN_00566970();
  DAT_0073e824 = 1;
  DAT_0073e828 = 1;
  return;
}

