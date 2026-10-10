
void __thiscall
FUN_004d2610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x3f800000;
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) & 0xfffffffe;
  iVar1 = param_1;
  FUN_00406b70(0xff000000);
  FUN_004c08b0(param_2,param_3,param_4,param_5,iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) & 0xffffffd5 | 0x10;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  return;
}

