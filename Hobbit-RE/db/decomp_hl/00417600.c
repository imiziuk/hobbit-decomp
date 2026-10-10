
void __thiscall FUN_00417600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_0041a080(param_2);
  iVar2 = param_1 + 0x2ac;
  iVar4 = 4;
  do {
    FUN_0063cd20(iVar2,0x20);
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_0063cd20(param_1 + 700,0x20);
  FUN_0063cd60(param_1 + 0x2c0,0x20);
  FUN_0063cd60(param_1 + 0x2c4,0x20);
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x3f8) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x3fc) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x400) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x424) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x428) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x42c) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x430) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x2a8) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x4a0) = uVar1;
  uVar1 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x4a4) = uVar1;
  FUN_0063cfe0(param_1 + 0x438);
  puVar3 = (undefined4 *)(param_1 + 0x4b0);
  iVar2 = 2;
  do {
    FUN_0063cfe0(puVar3 + -6);
    param_2 = *puVar3;
    FUN_0063cd20(&param_2,0x20);
    *puVar3 = param_2;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  return;
}

