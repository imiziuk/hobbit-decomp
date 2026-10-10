
void __fastcall FUN_005922b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00595ad0();
  *(undefined4 *)(param_1 + 0x230) = uVar1;
  *(undefined4 *)(param_1 + 0x22c) = 2;
  uVar1 = FUN_00593dd0(1,1,0xfffffffe);
  uVar4 = 1;
  uVar3 = 0xbf800000;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = 0;
  uVar1 = FUN_00593dd0(1,1,0xffffffff);
  FUN_00592ae0(uVar1,uVar2,uVar3,uVar4);
  *(undefined4 *)(param_1 + 400) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
  return;
}

