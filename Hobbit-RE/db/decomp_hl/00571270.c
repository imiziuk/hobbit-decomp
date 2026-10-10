
void __fastcall FUN_00571270(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 4;
  uVar2 = FUN_0054bad0(0x3b,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = uVar2;
  FUN_004021c0(uVar1,(int)((ulonglong)uVar2 >> 0x20));
  FUN_0056b6b0(1);
  FUN_0056c5d0();
  return;
}

