
undefined4 __thiscall FUN_004c2e80(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((*(ushort *)(param_1 + 0x15a) & 0x1000) == 0) &&
     ((*(ushort *)(param_1 + 0x15a) & 0x400) != 0)) {
    if (param_2 != 0 || param_3 != 0) {
      iVar1 = FUN_004021c0(param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(char *)(iVar1 + 0x7c) == '\x12') && ((*(byte *)(param_1 + 0x15d) & 4) != 0)) {
        *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
        uVar3 = 0x3f800000;
        uVar2 = 7;
        *(undefined4 *)(*(int *)(param_1 + 0x144) + 4) = 0x3a83126f;
        FUN_0041bcc0(7,0x3f800000);
        FUN_0044c120(uVar2,uVar3);
      }
      if ((*(char *)(iVar1 + 0x7c) == '\x1c') && ((*(byte *)(param_1 + 0x15d) & 2) != 0)) {
        *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
        *(undefined4 *)(*(int *)(param_1 + 0x144) + 4) = 0x3a83126f;
      }
      if (*(char *)(iVar1 + 0x7c) == '\x05') {
        *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
        if ((*(byte *)(iVar1 + 0x15b) & 4) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x144) + 4) = 0x3e800000;
          return 1;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x144) + 4) = 0x3a83126f;
      }
    }
    return 1;
  }
  return 0;
}

