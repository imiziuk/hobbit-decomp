
void __thiscall
FUN_004af7a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  byte bVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(byte *)((int)param_1 + 0x16f) = *(byte *)((int)param_1 + 0x16f) & 0xfb;
  *(undefined2 *)((int)param_1 + 0x172) = 32000;
  FUN_004d22c0(0);
  uVar9 = 0;
  uVar8 = 1;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = extraout_ECX;
  FUN_00406b70(0xff000000);
  FUN_004c08b0(param_2,param_3,param_4,param_5,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)((int)param_1 + 0x83) = 0xff;
  *(undefined1 *)((int)param_1 + 0x82) = 0xff;
  FUN_004b0eb0(2);
  *(undefined2 *)((int)param_1 + 0x16a) = 5;
  *(undefined2 *)(param_1 + 0x5d) = 0xea6;
  *(ushort *)((int)param_1 + 0x16e) = *(ushort *)((int)param_1 + 0x16e) & 0xe613 | 0x213;
  (**(code **)(*param_1 + 0xd0))(s_stonepile_rgeom_0072247c);
  param_1[0x59] = -1;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  FUN_004ab3e0(0);
  FUN_004ab400(0);
  FUN_004ab420(0);
  FUN_004ab450(0);
  FUN_004ab480(0);
  bVar1 = *(byte *)((int)param_1 + 0x7f);
  *(byte *)((int)param_1 + 0x7f) = bVar1 | 1;
  param_1[0x58] = 0;
  if ((*(byte *)((int)param_1 + 0x16f) & 8) != 0) {
    *(byte *)((int)param_1 + 0x7f) = bVar1 & 0xfe;
  }
  return;
}

