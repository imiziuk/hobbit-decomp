
void __thiscall FUN_005c21c0(int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  param_1[1] = param_2;
  pvVar1 = operator_new(param_2 * 0x38);
  *param_1 = (int)pvVar1;
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      *(short *)(iVar2 + 0x28 + *param_1) = (short)iVar5 + 1;
      *(short *)(iVar2 + 0x2a + *param_1) = (short)iVar5 + -1;
      *(undefined4 *)(iVar2 + 0x18 + *param_1) = 0;
      *(undefined4 *)(iVar2 + 0x1c + *param_1) = 0;
      *(undefined1 *)(iVar2 + 0x2c + *param_1) = 0x40;
      *(undefined1 *)(iVar2 + 0x2d + *param_1) = 0;
      puVar4 = (undefined4 *)(*param_1 + iVar2);
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4 = (undefined4 *)(iVar2 + 0xc + *param_1);
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x38;
    } while (iVar5 < param_1[1]);
  }
  *(undefined2 *)(*param_1 + 0x2a) = 0xffff;
  *(undefined2 *)(param_1[1] * 0x38 + -0x10 + *param_1) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  uVar3 = FUN_005496c0(s_WaterRing_xbmp_00745d54,&DAT_0071ef4c);
  FUN_00549430(param_1 + 4,uVar3);
  return;
}

