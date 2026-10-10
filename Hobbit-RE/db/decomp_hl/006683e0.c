
void __thiscall FUN_006683e0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar5 >> 2)) {
    if (param_3 <= (uint)((int)puVar5 - (int)param_2 >> 2)) {
      if (param_3 != 0) {
        puVar7 = puVar5;
        for (puVar4 = puVar5 + -param_3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar7 = puVar7 + 1;
        }
        puVar5 = *(undefined4 **)(param_1 + 8);
        for (puVar7 = puVar5 + -param_3; param_2 != puVar7; puVar7 = puVar7 + -1) {
          puVar5 = puVar5 + -1;
          *puVar5 = puVar7[-1];
        }
        puVar5 = param_2 + param_3;
        if (param_2 != puVar5) {
          do {
            *param_2 = *param_4;
            param_2 = param_2 + 1;
          } while (param_2 != puVar5);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
      }
      return;
    }
    puVar7 = param_2 + param_3;
    if (param_2 != puVar5) {
      puVar4 = puVar7 + -param_3;
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined4 **)(param_1 + 8);
    for (iVar2 = param_3 - ((int)puVar5 - (int)param_2 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_4;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar5) {
      do {
        *param_2 = *param_4;
        param_2 = param_2 + 1;
      } while (param_2 != puVar5);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar5 - iVar2 >> 2, uVar6 <= param_3)) {
    uVar6 = param_3;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar5 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)operator_new(iVar3 * 4);
  puVar7 = puVar4;
  for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != param_2; puVar5 = puVar5 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar5;
    }
    puVar7 = puVar7 + 1;
  }
  puVar5 = puVar7;
  uVar6 = param_3;
  if (param_3 != 0) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_4;
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar5 = puVar7 + param_3;
  if (param_2 != puVar1) {
    param_2 = (undefined4 *)((int)puVar5 + (param_3 * -4 - (int)puVar7) + (int)param_2);
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
      }
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    } while (param_2 != puVar1);
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 4));
  *(undefined4 **)(param_1 + 0xc) = puVar4 + iVar2;
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 **)(param_1 + 8) =
         puVar4 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + param_3;
    *(undefined4 **)(param_1 + 4) = puVar4;
    return;
  }
  *(undefined4 **)(param_1 + 8) = puVar4 + param_3;
  *(undefined4 **)(param_1 + 4) = puVar4;
  return;
}

