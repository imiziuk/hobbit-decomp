
undefined4 __thiscall
FUN_00515ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7 | 0x1000,0);
  *(undefined1 *)(param_1 + 0x10f) = 0xff;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0x14;
  *(undefined1 *)(param_1 + 0x10c) = 0x1e;
  uVar4 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  uVar4 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  uVar4 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  FUN_006a3e90(s_frame2_00731f80);
  iVar6 = *param_5;
  iVar1 = param_5[2];
  iVar2 = param_5[3];
  iVar3 = param_5[1];
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x15c) + 0x10))();
  iStack_4 = (piVar5[1] - piVar5[3]) + -8 + (iVar2 - iVar3);
  iStack_10 = (*piVar5 - piVar5[2]) + -8 + (iVar1 - iVar6);
  iStack_8 = piVar5[2] + iStack_10;
  iStack_10 = *piVar5 + iStack_10;
  iStack_c = piVar5[1] + iStack_4;
  iStack_4 = piVar5[3] + iStack_4;
  (**(code **)(**(int **)(param_1 + 0x15c) + 0xc))(&iStack_10);
  iVar6 = (**(code **)(**(int **)(param_1 + 0x158) + 0x10))();
  iStack_8 = (*(int *)(iVar6 + 4) - *(int *)(iVar6 + 0xc)) + -8 + (iVar2 - iVar3);
  iStack_10 = *(int *)(iVar6 + 4) + iStack_8;
  iStack_8 = *(int *)(iVar6 + 0xc) + iStack_8;
  iStack_c = *(int *)(iVar6 + 8) + 8;
  (**(code **)(**(int **)(param_1 + 0x158) + 0xc))(&stack0xffffffec);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1c0) = DAT_00733f38;
  *(undefined4 *)(param_1 + 0x1c4) = DAT_00733f3c;
  return param_4;
}

