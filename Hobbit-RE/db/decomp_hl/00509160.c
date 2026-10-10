
void __fastcall FUN_00509160(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_006a22a0(0x158);
  uVar2 = FUN_006a2260(600);
  uVar3 = FUN_006a22a0(0x70);
  uVar4 = FUN_006a2260(0x10e);
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar4;
  FUN_006a2cc0();
  return;
}

