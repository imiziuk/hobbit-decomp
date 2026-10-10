
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056b8e0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar1 = FUN_0056c2a0(7,0);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x68);
    iVar1 = *(int *)(param_2 + 100);
    *(int *)(param_1 + 0x710) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 8);
    }
    else {
      iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x6bc));
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_004606d0();
        *(float *)(param_1 + 0x6b0) = (float)((float10)_DAT_006e9448 / fVar2);
      }
    }
  }
  else {
    iVar1 = FUN_0056c2a0(8,0);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 100);
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 8;
  }
  return;
}

