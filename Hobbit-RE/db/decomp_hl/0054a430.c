
undefined4 * __thiscall FUN_0054a430(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int *local_4;
  
  uVar3 = (uint)param_3;
  piVar8 = (int *)param_1[1];
  piVar9 = (int *)piVar8[1];
  bVar10 = true;
  local_4 = param_1;
  if (piVar9 != DAT_0076cd84) {
    do {
      piVar8 = piVar9;
      puVar5 = (undefined1 *)piVar8[4];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_006f3ce8;
      }
      iVar6 = FUN_0054b4a0(0,*(undefined4 *)(uVar3 + 8),puVar5,piVar8[5]);
      bVar10 = iVar6 < 0;
      if (bVar10) {
        piVar9 = (int *)*piVar8;
      }
      else {
        piVar9 = (int *)piVar8[2];
      }
    } while (piVar9 != DAT_0076cd84);
  }
  if ((char)param_1[2] != '\0') {
    param_3 = (undefined4 *)FUN_005c4f10(piVar8,0);
    *param_3 = DAT_0076cd84;
    param_3[2] = DAT_0076cd84;
    FUN_0054b2e0(param_3 + 3,uVar3);
    param_1[3] = param_1[3] + 1;
    if (((piVar8 == (int *)param_1[1]) || (piVar9 != DAT_0076cd84)) ||
       (iVar6 = FUN_0054b450(piVar8 + 3), iVar6 < 0)) {
      *piVar8 = (int)param_3;
      piVar9 = (int *)param_1[1];
      if (piVar8 == piVar9) {
        piVar9[1] = (int)param_3;
        *(undefined4 **)(param_1[1] + 8) = param_3;
      }
      else if (piVar8 == (int *)*piVar9) {
        *piVar9 = (int)param_3;
      }
    }
    else {
      piVar8[2] = (int)param_3;
      if (piVar8 == *(int **)(param_1[1] + 8)) {
        *(undefined4 **)(param_1[1] + 8) = param_3;
      }
    }
    puVar4 = param_3;
    puVar7 = param_3;
    if (param_3 != *(undefined4 **)(param_1[1] + 4)) {
      do {
        puVar1 = (undefined4 *)puVar7[1];
        if (puVar1[8] != 0) break;
        puVar2 = *(undefined4 **)puVar1[1];
        if (puVar1 == puVar2) {
          iVar6 = ((undefined4 *)puVar1[1])[2];
          if (*(int *)(iVar6 + 0x20) == 0) {
            puVar1[8] = 1;
            *(undefined4 *)(iVar6 + 0x20) = 1;
            *(undefined4 *)(*(int *)(puVar7[1] + 4) + 0x20) = 0;
            puVar7 = *(undefined4 **)(puVar7[1] + 4);
          }
          else {
            if (puVar7 == (undefined4 *)puVar1[2]) {
              FUN_0054b0d0(puVar1);
              puVar7 = puVar1;
            }
            *(undefined4 *)(puVar7[1] + 0x20) = 1;
            *(undefined4 *)(*(int *)(puVar7[1] + 4) + 0x20) = 0;
            FUN_0054b150(*(undefined4 *)(puVar7[1] + 4));
          }
        }
        else if (puVar2[8] == 0) {
          puVar1[8] = 1;
          puVar2[8] = 1;
          *(undefined4 *)(*(int *)(puVar7[1] + 4) + 0x20) = 0;
          puVar7 = *(undefined4 **)(puVar7[1] + 4);
        }
        else {
          if (puVar7 == (undefined4 *)*puVar1) {
            FUN_0054b150(puVar1);
            puVar7 = puVar1;
          }
          *(undefined4 *)(puVar7[1] + 0x20) = 1;
          *(undefined4 *)(*(int *)(puVar7[1] + 4) + 0x20) = 0;
          FUN_0054b0d0(*(undefined4 *)(puVar7[1] + 4));
        }
      } while (puVar7 != *(undefined4 **)(param_1[1] + 4));
    }
    *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x20) = 1;
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  local_4 = piVar8;
  if (bVar10) {
    if (piVar8 == *(int **)param_1[1]) goto LAB_0054a658;
    FUN_0054b1b0();
  }
  iVar6 = FUN_0054b450(uVar3);
  if (-1 < iVar6) {
    param_3 = (undefined4 *)((uint)param_3 & 0xffffff00);
    FUN_0054abf0(&local_4,&param_3);
    return param_2;
  }
LAB_0054a658:
  puVar7 = (undefined4 *)FUN_0054ae60(&param_3,piVar9,piVar8,uVar3);
  *param_2 = *puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

