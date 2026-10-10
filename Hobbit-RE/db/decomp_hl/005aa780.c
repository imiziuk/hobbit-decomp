
undefined8 __fastcall FUN_005aa780(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    uVar2 = FUN_0054bad0(0x2f,0,0);
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_004021c0(uVar2);
  }
  return *(undefined8 *)(param_1 + 8);
}

