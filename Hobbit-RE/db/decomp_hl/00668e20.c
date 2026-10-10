
void __thiscall FUN_00668e20(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  puVar8 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar11 = true;
  piVar6 = piVar1;
  piVar7 = (int *)piVar1[1];
  while (piVar7 != DAT_007f143c) {
    bVar11 = *param_3 < (uint)piVar7[3];
    piVar6 = piVar7;
    if (bVar11) {
      piVar7 = (int *)*piVar7;
    }
    else {
      piVar7 = (int *)piVar7[2];
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    param_3 = (uint *)FUN_006699f0(piVar6,0);
    *param_3 = (uint)DAT_007f143c;
    param_3[2] = (uint)DAT_007f143c;
    FUN_00669bf0(param_3 + 3,puVar8);
    puVar9 = param_3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (((piVar6 == *(int **)(param_1 + 4)) || (piVar7 != DAT_007f143c)) ||
       (*puVar8 < (uint)piVar6[3])) {
      *piVar6 = (int)param_3;
      piVar1 = *(int **)(param_1 + 4);
      if (piVar6 == piVar1) {
        piVar1[1] = (int)param_3;
        *(uint **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar6 == (int *)*piVar1) {
        *piVar1 = (int)param_3;
      }
    }
    else {
      piVar6[2] = (int)param_3;
      if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(uint **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    puVar10 = param_3;
    if (param_3 != *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
      do {
        puVar2 = (undefined4 *)puVar10[1];
        if (puVar2[5] != 0) break;
        puVar3 = *(undefined4 **)puVar2[1];
        if (puVar2 == puVar3) {
          iVar4 = ((undefined4 *)puVar2[1])[2];
          if (*(int *)(iVar4 + 0x14) == 0) {
            puVar2[5] = 1;
            *(undefined4 *)(iVar4 + 0x14) = 1;
            *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
            puVar10 = *(undefined4 **)(puVar10[1] + 4);
          }
          else {
            if (puVar10 == (undefined4 *)puVar2[2]) {
              FUN_00669080(puVar2);
              puVar10 = puVar2;
            }
            *(undefined4 *)(puVar10[1] + 0x14) = 1;
            *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
            FUN_006690e0(*(undefined4 *)(puVar10[1] + 4));
          }
        }
        else if (puVar3[5] == 0) {
          puVar2[5] = 1;
          puVar3[5] = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          puVar10 = *(undefined4 **)(puVar10[1] + 4);
        }
        else {
          if (puVar10 == (undefined4 *)*puVar2) {
            FUN_006690e0(puVar2);
            puVar10 = puVar2;
          }
          *(undefined4 *)(puVar10[1] + 0x14) = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          FUN_00669080(*(undefined4 *)(puVar10[1] + 4));
        }
      } while (puVar10 != *(undefined4 **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) = 1;
    *param_2 = puVar9;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar11) {
    if (piVar6 == (int *)*piVar1) goto LAB_00669005;
    FUN_00669a60();
  }
  if (*puVar8 <= (uint)piVar6[3]) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar6;
    return;
  }
LAB_00669005:
  puVar9 = (undefined4 *)FUN_00669750(&param_3,piVar7,piVar6,puVar8);
  uVar5 = *puVar9;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar5;
  return;
}

