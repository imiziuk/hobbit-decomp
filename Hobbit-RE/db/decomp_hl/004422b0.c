
void __fastcall FUN_004422b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa20);
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0x3e000000;
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(uVar1);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  FUN_004430e0(0xc);
  *(undefined4 *)(param_1 + 0x7b0) = 0x49742400;
  FUN_004300c0();
  return;
}

