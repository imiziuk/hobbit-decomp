
void __thiscall
FUN_0054ae60(int param_1,undefined4 *param_2,int param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = (int *)operator_new(0x24);
  piVar2[1] = (int)param_4;
  piVar2[8] = 0;
  *piVar2 = DAT_0076cd84;
  piVar2[2] = DAT_0076cd84;
  FUN_0054b2e0(piVar2 + 3,param_5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if ((param_4 != *(int **)(param_1 + 4)) && (param_3 == DAT_0076cd84)) {
    iVar3 = FUN_0054b450(param_4 + 3);
    if (-1 < iVar3) {
      param_4[2] = (int)piVar2;
      if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
      }
      goto LAB_0054aef2;
    }
  }
  *param_4 = (int)piVar2;
  piVar4 = *(int **)(param_1 + 4);
  if (param_4 == piVar4) {
    piVar4[1] = (int)piVar2;
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
  }
  else if (param_4 == (int *)*piVar4) {
    *piVar4 = (int)piVar2;
  }
LAB_0054aef2:
  piVar4 = piVar2;
  if (piVar2 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if (piVar5[8] != 0) break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar3 = ((undefined4 *)piVar5[1])[2];
        if (*(int *)(iVar3 + 0x20) == 0) {
          piVar5[8] = 1;
          *(undefined4 *)(iVar3 + 0x20) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != DAT_0076cd84) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined4 *)(piVar4[1] + 0x20) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != DAT_0076cd84) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar1[2]) {
              piVar1[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar1 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_0054b0a2:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if (piVar6[8] != 0) {
          if (piVar4 == (int *)*piVar5) {
            iVar3 = *piVar5;
            *piVar5 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != DAT_0076cd84) {
              *(int **)(*(int *)(iVar3 + 8) + 4) = piVar5;
            }
            *(int *)(iVar3 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar3;
              }
              else {
                *piVar4 = iVar3;
              }
            }
            *(int **)(iVar3 + 8) = piVar5;
            piVar5[1] = iVar3;
            piVar4 = piVar5;
          }
          *(undefined4 *)(piVar4[1] + 0x20) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != DAT_0076cd84) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
          }
          else {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar1) {
              *piVar1 = (int)piVar6;
            }
            else {
              piVar1[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_0054b0a2;
        }
        piVar5[8] = 1;
        piVar6[8] = 1;
        *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
  *param_2 = piVar2;
  return;
}

