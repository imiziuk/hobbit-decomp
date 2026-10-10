
void __thiscall FUN_00452080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  local_c = 0x3f000000;
  local_8 = 0x3f000000;
  local_4 = 0x3f000000;
  iVar1 = param_1;
  FUN_00406b70(0xffffffff);
  FUN_004c08b0(param_2,param_3,&local_c,param_4,iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0xff;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}

