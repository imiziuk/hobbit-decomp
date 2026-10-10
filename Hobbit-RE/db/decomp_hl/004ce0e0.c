
void __thiscall
FUN_004ce0e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
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
  piVar1 = param_1;
  FUN_00406b70(0xff000000);
  FUN_004c08b0(param_2,param_3,param_4,param_5,piVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)((int)param_1 + 0x83) = 0xff;
  *(undefined1 *)((int)param_1 + 0x82) = 0xff;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  FUN_004ab3e0(0);
  FUN_004ab400(0);
  FUN_004ab420(0);
  FUN_004ab450(0);
  FUN_004ab480(0);
  return;
}

