
void __fastcall FUN_00412470(undefined4 *param_1)

{
  int iVar1;
  
  thunk_FUN_0063daf0(param_1 + 0x16,0x40);
  FUN_0063cd20(param_1 + 9,0x20);
  param_1[8] = param_1[9];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar1 = FUN_004131a0();
  if (iVar1 != 0) {
    FUN_004d0bc0(0xffffffff,0);
    FUN_004c7660(0);
    FUN_004c75f0(0);
    FUN_004c74d0(0x3f800000);
    FUN_004c77d0(0);
    *(byte *)(iVar1 + 0x15b) = *(byte *)(iVar1 + 0x15b) & 0xbf;
  }
  iVar1 = FUN_00413200();
  if (iVar1 != 0) {
    FUN_004d22c0(1);
  }
  *param_1 = 0;
  FUN_00429100();
  return;
}

