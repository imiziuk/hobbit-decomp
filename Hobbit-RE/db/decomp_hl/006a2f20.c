
undefined4 __thiscall
FUN_006a2f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x34) = *param_4;
  *(undefined4 *)(param_1 + 0x38) = param_4[1];
  *(undefined4 *)(param_1 + 0x3c) = param_4[2];
  *(undefined4 *)(param_1 + 0x40) = param_4[3];
  *(undefined4 *)(param_1 + 0x44) = *param_4;
  *(undefined4 *)(param_1 + 0x48) = param_4[1];
  *(undefined4 *)(param_1 + 0x4c) = param_4[2];
  *(undefined4 *)(param_1 + 0x50) = param_4[3];
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0xa0) = 0x12;
  *(undefined1 *)(param_1 + 0xa7) = 0xff;
  *(undefined1 *)(param_1 + 0xa6) = 0xff;
  *(undefined1 *)(param_1 + 0xa5) = 0xff;
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x20) < iVar5 + 1) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        iVar2 = *(int *)(iVar1 + 0x20) / 2;
        iVar4 = 1;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        if (iVar4 + iVar5 < 1) {
          iVar5 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar5 = iVar5 + iVar2;
        }
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x28) + iVar5;
      }
      pvVar3 = operator_new(iVar5 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x18)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 0x18));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0x1c));
      *(int *)(iVar1 + 0x20) = iVar5;
      *(void **)(iVar1 + 0x1c) = pvVar3;
    }
    iVar5 = *(int *)(iVar1 + 0x18) + 1;
    *(int *)(iVar1 + 0x18) = iVar5;
    *(int *)(*(int *)(iVar1 + 0x1c) + -4 + iVar5 * 4) = param_1;
  }
  return 1;
}

