
void __thiscall FUN_005c4930(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  piVar9 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar6 = true;
  piVar7 = piVar1;
  piVar8 = (int *)piVar1[1];
  while (piVar8 != DAT_007ba9f4) {
    bVar6 = *param_3 < piVar8[3];
    piVar7 = piVar8;
    if (bVar6) {
      piVar8 = (int *)*piVar8;
    }
    else {
      piVar8 = (int *)piVar8[2];
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    param_3 = (int *)FUN_005c4f10(piVar7,0);
    *param_3 = (int)DAT_007ba9f4;
    param_3[2] = (int)DAT_007ba9f4;
    FUN_005c4fe0(param_3 + 3,piVar9);
    puVar10 = param_3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (((piVar7 == *(int **)(param_1 + 4)) || (piVar8 != DAT_007ba9f4)) || (*piVar9 < piVar7[3])) {
      *piVar7 = (int)param_3;
      piVar1 = *(int **)(param_1 + 4);
      if (piVar7 == piVar1) {
        piVar1[1] = (int)param_3;
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar7 == (int *)*piVar1) {
        *piVar1 = (int)param_3;
      }
    }
    else {
      piVar7[2] = (int)param_3;
      if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    puVar11 = param_3;
    if (param_3 != *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
      do {
        puVar2 = (undefined4 *)puVar11[1];
        if (puVar2[8] != 0) break;
        puVar3 = *(undefined4 **)puVar2[1];
        if (puVar2 == puVar3) {
          iVar4 = ((undefined4 *)puVar2[1])[2];
          if (*(int *)(iVar4 + 0x20) == 0) {
            puVar2[8] = 1;
            *(undefined4 *)(iVar4 + 0x20) = 1;
            *(undefined4 *)(*(int *)(puVar11[1] + 4) + 0x20) = 0;
            puVar11 = *(undefined4 **)(puVar11[1] + 4);
          }
          else {
            if (puVar11 == (undefined4 *)puVar2[2]) {
              FUN_005c4be0(puVar2);
              puVar11 = puVar2;
            }
            *(undefined4 *)(puVar11[1] + 0x20) = 1;
            *(undefined4 *)(*(int *)(puVar11[1] + 4) + 0x20) = 0;
            FUN_005c4c40(*(undefined4 *)(puVar11[1] + 4));
          }
        }
        else if (puVar3[8] == 0) {
          puVar2[8] = 1;
          puVar3[8] = 1;
          *(undefined4 *)(*(int *)(puVar11[1] + 4) + 0x20) = 0;
          puVar11 = *(undefined4 **)(puVar11[1] + 4);
        }
        else {
          if (puVar11 == (undefined4 *)*puVar2) {
            FUN_005c4c40(puVar2);
            puVar11 = puVar2;
          }
          *(undefined4 *)(puVar11[1] + 0x20) = 1;
          *(undefined4 *)(*(int *)(puVar11[1] + 4) + 0x20) = 0;
          FUN_005c4be0(*(undefined4 *)(puVar11[1] + 4));
        }
      } while (puVar11 != *(undefined4 **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
    *param_2 = puVar10;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar6) {
    if (piVar7 == (int *)*piVar1) goto LAB_005c4b15;
    FUN_005c4f30();
  }
  if (*piVar9 <= piVar7[3]) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar7;
    return;
  }
LAB_005c4b15:
  puVar10 = (undefined4 *)FUN_005c4ca0(&param_3,piVar8,piVar7,piVar9);
  uVar5 = *puVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar5;
  return;
}

