
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00636480(int param_1)

{
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x54) = 1;
  fVar3 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  *(float *)(param_1 + 0x58) = (float)fVar3;
  bVar1 = NAN(DAT_006e92e4);
  bVar2 = *(float *)(param_1 + 0x5c) < DAT_006e92e4;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if ((bVar2 != (NAN(*(float *)(param_1 + 0x5c)) || bVar1)) ||
     (_DAT_006e9364 < *(float *)(param_1 + 0x5c))) {
    *(undefined4 *)(param_1 + 0x5c) = 0x40400000;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_005be250();
  return;
}

