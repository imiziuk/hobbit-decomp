
void __thiscall
FUN_00667230(int param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  puVar6 = *(undefined2 **)(param_1 + 8);
  uVar7 = (int)param_4 - (int)param_3 >> 1;
  if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 1) < uVar7) {
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 == 0) || (uVar5 = (int)puVar6 - iVar1 >> 1, uVar5 <= uVar7)) {
      uVar5 = uVar7;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar6 - iVar1 >> 1;
    }
    iVar1 = iVar1 + uVar5;
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    puVar3 = (undefined2 *)operator_new(iVar2 * 2);
    puVar4 = puVar3;
    for (puVar6 = *(undefined2 **)(param_1 + 4); puVar6 != param_2; puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    if (param_3 != param_4) {
      iVar2 = (int)param_3 - (int)puVar4;
      do {
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = *(undefined2 *)(iVar2 + (int)puVar4);
        }
        puVar4 = puVar4 + 1;
      } while ((undefined2 *)(iVar2 + (int)puVar4) != param_4);
    }
    puVar6 = *(undefined2 **)(param_1 + 8);
    if (param_2 != puVar6) {
      iVar2 = (int)param_2 - (int)puVar4;
      do {
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = *(undefined2 *)(iVar2 + (int)puVar4);
        }
        puVar4 = puVar4 + 1;
      } while ((undefined2 *)(iVar2 + (int)puVar4) != puVar6);
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 4));
    iVar2 = *(int *)(param_1 + 4);
    *(undefined2 **)(param_1 + 0xc) = puVar3 + iVar1;
    if (iVar2 == 0) {
      *(undefined2 **)(param_1 + 4) = puVar3;
      *(undefined2 **)(param_1 + 8) = puVar3 + uVar7;
      return;
    }
    *(undefined2 **)(param_1 + 4) = puVar3;
    *(undefined2 **)(param_1 + 8) = puVar3 + (*(int *)(param_1 + 8) - iVar2 >> 1) + uVar7;
    return;
  }
  if ((uint)((int)puVar6 - (int)param_2 >> 1) < uVar7) {
    puVar4 = param_2 + uVar7;
    if (param_2 != puVar6) {
      puVar3 = puVar4 + -uVar7;
      do {
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = *puVar3;
        }
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (puVar3 != puVar6);
    }
    puVar4 = *(undefined2 **)(param_1 + 8);
    for (puVar6 = param_3 + ((int)puVar4 - (int)param_2 >> 1); puVar6 != param_4;
        puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    puVar6 = param_3 + (*(int *)(param_1 + 8) - (int)param_2 >> 1);
    if (param_3 != puVar6) {
      iVar1 = (int)param_2 - (int)param_3;
      do {
        *(undefined2 *)(iVar1 + (int)param_3) = *param_3;
        param_3 = param_3 + 1;
      } while (param_3 != puVar6);
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar7 * 2;
      return;
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    puVar4 = puVar6;
    for (puVar3 = puVar6 + -uVar7; puVar3 != puVar6; puVar3 = puVar3 + 1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *puVar3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar6 = *(undefined2 **)(param_1 + 8);
    for (puVar4 = puVar6 + -uVar7; param_2 != puVar4; puVar4 = puVar4 + -1) {
      puVar6 = puVar6 + -1;
      *puVar6 = puVar4[-1];
    }
    if (param_3 != param_4) {
      iVar1 = (int)param_2 - (int)param_3;
      do {
        *(undefined2 *)(iVar1 + (int)param_3) = *param_3;
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar7 * 2;
  return;
}

