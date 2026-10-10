
void FUN_00508d80(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007327dc) {
    iVar3 = 0;
    do {
      puVar1 = PTR_DAT_007327e0;
      switch(*(undefined4 *)(PTR_DAT_007327e0 + iVar3)) {
      case 4:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
      case 3:
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 5;
        break;
      case 5:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x20) = 6;
        break;
      case 6:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x20) = 7;
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0xc) = 0x10e;
        *(undefined4 *)(puVar1 + iVar3 + 0x14) = 0x8c;
        break;
      case 0x11:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 0;
        *(undefined4 *)(puVar1 + iVar3 + 0x24) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x28) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x2c) = 1;
        break;
      case 0x12:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x24) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x28) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x2c) = 1;
        break;
      case 0x13:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x24) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x28) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x2c) = 1;
        break;
      case 0x14:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 3;
        *(undefined4 *)(puVar1 + iVar3 + 0x24) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x28) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x2c) = 1;
        break;
      case 0x15:
        *(undefined4 *)(PTR_DAT_007327e0 + iVar3 + 0x1c) = 2;
        *(undefined4 *)(puVar1 + iVar3 + 0x20) = 4;
        *(undefined4 *)(puVar1 + iVar3 + 0x24) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x28) = 1;
        *(undefined4 *)(puVar1 + iVar3 + 0x2c) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < DAT_007327dc);
  }
  return;
}

