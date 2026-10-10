
undefined4 __thiscall
FUN_00515350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7 | 0x1000,0);
  *(undefined1 *)(param_1 + 0x10f) = 0xff;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0x14;
  *(undefined1 *)(param_1 + 0x10c) = 0x1e;
  uVar1 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  uVar1 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  iVar6 = param_5[3] - param_5[1];
  iVar7 = param_5[2] - *param_5;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x15c) + 0x10))();
  iStack_10 = *piVar2;
  iStack_c = piVar2[1];
  iStack_8 = piVar2[2];
  iStack_4 = piVar2[3];
  iVar5 = iStack_8 - iStack_10;
  iVar3 = FUN_006a22a0(0x14);
  iVar3 = ((iStack_c - iStack_4) + iVar6) - iVar3;
  iVar4 = FUN_006a2260(0x26);
  iVar4 = (iVar7 - iVar5) - iVar4;
  iStack_10 = iStack_10 + iVar4;
  iStack_8 = iStack_8 + iVar4;
  iStack_c = iStack_c + iVar3;
  iStack_4 = iStack_4 + iVar3;
  (**(code **)(**(int **)(param_1 + 0x15c) + 0xc))(&iStack_10);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x158) + 0x10))();
  iStack_10 = piVar2[1];
  iStack_c = piVar2[2];
  iStack_8 = piVar2[3];
  iVar5 = iStack_c - *piVar2;
  iVar3 = FUN_006a22a0(0x14);
  iVar3 = ((iStack_10 - iStack_8) + iVar6) - iVar3;
  iVar4 = FUN_006a2260(0xb4);
  iStack_c = iStack_c + ((iVar7 - iVar5) - iVar4);
  iStack_10 = iStack_10 + iVar3;
  iStack_8 = iStack_8 + iVar3;
  (**(code **)(**(int **)(param_1 + 0x158) + 0xc))(&stack0xffffffec);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x160) + 0x10))();
  iStack_10 = piVar2[2] + (iVar7 - (piVar2[2] - *piVar2) / 2);
  iStack_c = piVar2[3] + (piVar2[1] - piVar2[3]) + iVar6;
  (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(&stack0xffffffe8);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  return param_3;
}

