
void __thiscall FUN_0058ccb0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_00649600(s_poly_cache__DestroyCell_007421dc);
  sVar2 = *(short *)(param_2 + 3);
  *(undefined2 *)(param_2 + 3) = 0xffff;
  while (iVar4 = (int)sVar2, iVar4 != -1) {
    sVar2 = *(short *)(iVar4 * 0x198 + 0x2020 + param_1);
    *(undefined2 *)(iVar4 * 0x198 + 0x2020 + param_1) = *(undefined2 *)(param_1 + 0x1c808);
    *(int *)(param_1 + 0x1c808) = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1b808 + *(short *)(param_2 + 5) * 4);
  puVar3 = (undefined4 *)*puVar1;
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    do {
      puVar5 = puVar3;
      if (puVar5 == param_2) break;
      puVar3 = (undefined4 *)*puVar5;
      puVar6 = puVar5;
    } while ((undefined4 *)*puVar5 != (undefined4 *)0x0);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *param_2;
      goto LAB_0058cd3d;
    }
  }
  *puVar1 = *param_2;
LAB_0058cd3d:
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 0x1b804) = param_2[2];
  }
  else {
    *(undefined4 *)(param_2[1] + 8) = param_2[2];
  }
  if (param_2[2] == 0) {
    *(undefined4 *)(param_1 + 0x1b800) = param_2[1];
  }
  else {
    *(undefined4 *)(param_2[2] + 4) = param_2[1];
  }
  *(undefined4 **)(*(int *)(param_1 + 0x1b804) + 4) = param_2;
  param_2[2] = *(undefined4 *)(param_1 + 0x1b804);
  param_2[1] = 0;
  *(undefined4 **)(param_1 + 0x1b804) = param_2;
  *(undefined2 *)(param_2 + 5) = 0xffff;
  *param_2 = 0;
  *(undefined2 *)((int)param_2 + 0xe) = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  FUN_00649720();
  return;
}

