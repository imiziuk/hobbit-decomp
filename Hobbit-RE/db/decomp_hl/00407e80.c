
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00407e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0075cf1c;
  uVar2 = DAT_0075b6e4;
  if (DAT_0075cf1c != 0) {
    *(char *)(DAT_0075cf1c + 0xba) = (char)((uint)DAT_0075b6e4 >> 0x10);
    *(char *)(iVar1 + 0xbb) = (char)((uint)uVar2 >> 0x18);
    *(char *)(iVar1 + 0xb8) = (char)uVar2;
    *(char *)(iVar1 + 0xb9) = (char)((uint)uVar2 >> 8);
    uVar2 = _DAT_0071d5a0;
    *(undefined4 *)(iVar1 + 0xbc) = _DAT_0071d59c;
    *(undefined4 *)(iVar1 + 0xc0) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  FUN_00553d60(*(undefined4 *)(param_1 + 0x150),0,0,DAT_0075b6e8);
  FUN_00553d60(*(undefined4 *)(param_1 + 0x154),0,0,DAT_0075b6e8);
  FUN_00553d60(*(undefined4 *)(param_1 + 0x158),0,0,DAT_0075b6e8);
  uVar2 = FUN_00659600(s_CicadaChorus_Loop_0071d7ac,1);
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  FUN_0065a050(uVar2,_DAT_0071d5a4);
  FUN_00551280(0,0);
  return;
}

