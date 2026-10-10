
void __fastcall FUN_006a0f10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x130);
      iVar2 = 2;
      do {
        puVar1[-8] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[0xc] = 0;
        puVar1[0x13] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        puVar1[0x20] = 0;
        puVar1[0x27] = 0;
        puVar1[0x28] = 0;
        puVar1[0x29] = 0;
        puVar1[-0x1c] = 0;
        puVar1[-0x15] = 0;
        puVar1[-0x14] = 0;
        puVar1[-0x13] = 0;
        puVar1[0xe8] = 0;
        puVar1[0xef] = 0;
        puVar1[0xf0] = 0;
        puVar1[0xf1] = 0;
        puVar1[0xfc] = 0;
        puVar1[0x103] = 0;
        puVar1[0x104] = 0;
        puVar1[0x105] = 0;
        puVar1[0x110] = 0;
        puVar1[0x117] = 0;
        puVar1[0x118] = 0;
        puVar1[0x119] = 0;
        puVar1[0xd4] = 0;
        puVar1[0xdb] = 0;
        puVar1[0xdc] = 0;
        puVar1[0xdd] = 0;
        puVar1[0x34] = 0;
        puVar1[0x3b] = 0;
        puVar1[0x3c] = 0;
        puVar1[0x3d] = 0;
        puVar1[0x48] = 0;
        puVar1[0x4f] = 0;
        puVar1[0x50] = 0;
        puVar1[0x51] = 0;
        puVar1[0x84] = 0;
        puVar1[0x8b] = 0;
        puVar1[0x8c] = 0;
        puVar1[0x8d] = 0;
        puVar1[0x98] = 0;
        puVar1[0x9f] = 0;
        puVar1[0xa0] = 0;
        puVar1[0xa1] = 0;
        puVar1 = puVar1 + 10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}

