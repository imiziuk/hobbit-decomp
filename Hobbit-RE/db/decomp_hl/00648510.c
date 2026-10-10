
undefined4 * FUN_00648510(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if ((param_3 != 0) && (param_1 != param_2)) {
    if (param_1 < param_2) {
      puVar5 = param_1;
      if ((((uint)param_1 | (uint)param_2) & 3) != 0) {
        uVar6 = param_3;
        if (((((uint)param_1 ^ (uint)param_2) & 3) == 0) && (3 < (int)param_3)) {
          uVar6 = 4 - ((uint)param_2 & 3);
        }
        param_3 = param_3 - uVar6;
        do {
          *(undefined1 *)puVar5 = *(undefined1 *)param_2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      for (iVar3 = (int)param_3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      param_3 = param_3 & 3;
      if (param_3 != 0) {
        do {
          *(undefined1 *)puVar5 = *(undefined1 *)param_2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return param_1;
      }
    }
    else {
      puVar5 = (undefined4 *)(param_3 + (int)param_1);
      puVar4 = (undefined1 *)((int)param_2 + param_3);
      if ((((uint)puVar5 | (uint)puVar4) & 3) != 0) {
        uVar6 = param_3;
        if (((((uint)puVar5 ^ (uint)puVar4) & 3) == 0) && (4 < (int)param_3)) {
          uVar6 = (uint)puVar4 & 3;
        }
        param_3 = param_3 - uVar6;
        do {
          puVar1 = puVar4 + -1;
          puVar4 = puVar4 + -1;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          uVar6 = uVar6 - 1;
          *(undefined1 *)puVar5 = *puVar1;
        } while (uVar6 != 0);
      }
      for (iVar3 = (int)param_3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = (undefined4 *)(puVar4 + -4);
        puVar4 = puVar4 + -4;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar2;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        puVar1 = puVar4 + -1;
        puVar4 = puVar4 + -1;
        puVar5 = (undefined4 *)((int)puVar5 - 1);
        *(undefined1 *)puVar5 = *puVar1;
      }
    }
  }
  return param_1;
}

