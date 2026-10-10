
void __fastcall FUN_0061ac80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x42) == 10) {
    uVar2 = 1;
    uVar1 = __ftol(1);
    FUN_004f4e70(uVar1,uVar2);
    return;
  }
  uVar2 = 0;
  uVar1 = __ftol(0);
  FUN_004f4e70(uVar1,uVar2);
  return;
}

