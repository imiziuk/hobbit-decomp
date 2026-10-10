
void __fastcall FUN_00618cd0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + iVar4 * 4);
      if ((puVar2 != (undefined4 *)0x0) && (((byte)puVar2[6] & 0x10) != 0x10)) {
        iVar3 = FUN_004021c0(*puVar2,puVar2[1]);
        if (iVar3 != 0) {
          FUN_004c75f0(0);
          *(ushort *)(iVar3 + 0x15a) = *(ushort *)(iVar3 + 0x15a) & 0xbfff;
          FUN_004c77d0(0);
          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4) + 0x18);
          *puVar1 = *puVar1 | 0x10;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4);
        iVar3 = FUN_004021c0(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
        if (iVar3 != 0) {
          FUN_004c75f0(0);
          *(ushort *)(iVar3 + 0x15a) = *(ushort *)(iVar3 + 0x15a) & 0xbfff;
          FUN_004c77d0(0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x578));
  }
  return;
}

