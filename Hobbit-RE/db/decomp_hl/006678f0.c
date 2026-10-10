
void __thiscall FUN_006678f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  uVar3 = param_3;
  piVar8 = *(int **)(param_1 + 4);
  piVar7 = (int *)piVar8[1];
  bVar9 = true;
  if (piVar7 != DAT_007f1434) {
    do {
      piVar8 = piVar7;
      iVar5 = FUN_0064a9c0(uVar3,piVar8 + 3);
      bVar9 = iVar5 != 0;
      if (bVar9) {
        piVar7 = (int *)*piVar8;
      }
      else {
        piVar7 = (int *)piVar8[2];
      }
    } while (piVar7 != DAT_007f1434);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    param_3 = (undefined4 *)FUN_00669650(piVar8,0);
    *param_3 = DAT_007f1434;
    param_3[2] = DAT_007f1434;
    FUN_00669ba0(param_3 + 3,uVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (((piVar8 == *(int **)(param_1 + 4)) || (piVar7 != DAT_007f1434)) ||
       (iVar5 = FUN_0064a9c0(uVar3,piVar8 + 3), iVar5 != 0)) {
      *piVar8 = (int)param_3;
      piVar7 = *(int **)(param_1 + 4);
      if (piVar8 == piVar7) {
        piVar7[1] = (int)param_3;
        *(undefined4 **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar8 == (int *)*piVar7) {
        *piVar7 = (int)param_3;
      }
    }
    else {
      piVar8[2] = (int)param_3;
      if (piVar8 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(undefined4 **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    puVar4 = param_3;
    puVar6 = param_3;
    if (param_3 != *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
      do {
        puVar1 = (undefined4 *)puVar6[1];
        if (puVar1[0xe] != 0) break;
        puVar2 = *(undefined4 **)puVar1[1];
        if (puVar1 == puVar2) {
          iVar5 = ((undefined4 *)puVar1[1])[2];
          if (*(int *)(iVar5 + 0x38) == 0) {
            puVar1[0xe] = 1;
            *(undefined4 *)(iVar5 + 0x38) = 1;
            *(undefined4 *)(*(int *)(puVar6[1] + 4) + 0x38) = 0;
            puVar6 = *(undefined4 **)(puVar6[1] + 4);
          }
          else {
            if (puVar6 == (undefined4 *)puVar1[2]) {
              FUN_00669590(puVar1);
              puVar6 = puVar1;
            }
            *(undefined4 *)(puVar6[1] + 0x38) = 1;
            *(undefined4 *)(*(int *)(puVar6[1] + 4) + 0x38) = 0;
            FUN_006695f0(*(undefined4 *)(puVar6[1] + 4));
          }
        }
        else if (puVar2[0xe] == 0) {
          puVar1[0xe] = 1;
          puVar2[0xe] = 1;
          *(undefined4 *)(*(int *)(puVar6[1] + 4) + 0x38) = 0;
          puVar6 = *(undefined4 **)(puVar6[1] + 4);
        }
        else {
          if (puVar6 == (undefined4 *)*puVar1) {
            FUN_006695f0(puVar1);
            puVar6 = puVar1;
          }
          *(undefined4 *)(puVar6[1] + 0x38) = 1;
          *(undefined4 *)(*(int *)(puVar6[1] + 4) + 0x38) = 0;
          FUN_00669590(*(undefined4 *)(puVar6[1] + 4));
        }
      } while (puVar6 != *(undefined4 **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x38) = 1;
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar9) {
    if (piVar8 == (int *)**(undefined4 **)(param_1 + 4)) goto LAB_00667b0c;
    FUN_00669670();
  }
  iVar5 = FUN_0064a9c0(piVar8 + 3,uVar3);
  if (iVar5 == 0) {
    *param_2 = piVar8;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
LAB_00667b0c:
  puVar6 = (undefined4 *)FUN_00668bb0(&param_3,piVar7,piVar8,uVar3);
  *param_2 = *puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

