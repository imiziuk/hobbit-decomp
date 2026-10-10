
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005568c0(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00556ec0();
  piVar9 = (int *)*param_3;
  piVar5 = param_3 + 2;
  local_1c = param_3;
  piVar8 = piVar5;
  if (piVar9 == DAT_00771d6c) {
    piVar9 = (int *)*piVar5;
  }
  else {
    piVar3 = (int *)*piVar5;
    if (piVar3 != DAT_00771d6c) {
      local_1c = piVar3;
      for (piVar8 = (int *)*piVar3; piVar8 != DAT_00771d6c; piVar8 = (int *)*piVar8) {
        local_1c = piVar8;
      }
      piVar9 = (int *)local_1c[2];
      piVar8 = local_1c + 2;
    }
  }
  FUN_006bf84b();
  if (local_1c == param_3) {
    piVar9[1] = local_1c[1];
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = piVar9;
    }
    else {
      puVar6 = (undefined4 *)param_3[1];
      if ((int *)*puVar6 == param_3) {
        *puVar6 = piVar9;
      }
      else {
        puVar6[2] = piVar9;
      }
    }
    local_18 = *(int **)(param_1 + 4);
    if ((int *)*local_18 == param_3) {
      if ((int *)*piVar5 == DAT_00771d6c) {
        *local_18 = param_3[1];
      }
      else {
        piVar8 = (int *)*piVar9;
        piVar5 = piVar9;
        while (piVar3 = piVar8, piVar3 != DAT_00771d6c) {
          piVar5 = piVar3;
          piVar8 = (int *)*piVar3;
        }
        *local_18 = (int)piVar5;
      }
    }
    if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
      if ((int *)*param_3 == DAT_00771d6c) {
        piVar5 = (int *)param_3[1];
      }
      else {
        piVar8 = (int *)piVar9[2];
        piVar5 = piVar9;
        while (piVar3 = piVar8, piVar3 != DAT_00771d6c) {
          piVar5 = piVar3;
          piVar8 = (int *)piVar3[2];
        }
      }
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar5;
    }
  }
  else {
    *(int **)(*param_3 + 4) = local_1c;
    *local_1c = *param_3;
    if (local_1c == (int *)*piVar5) {
      piVar9[1] = (int)local_1c;
    }
    else {
      piVar9[1] = local_1c[1];
      *(int **)local_1c[1] = piVar9;
      *piVar8 = *piVar5;
      *(int **)(*piVar5 + 4) = local_1c;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_1c;
    }
    else {
      puVar6 = (undefined4 *)param_3[1];
      if ((int *)*puVar6 == param_3) {
        *puVar6 = local_1c;
      }
      else {
        puVar6[2] = local_1c;
      }
    }
    local_1c[1] = param_3[1];
    iVar2 = local_1c[0xb];
    local_1c[0xb] = param_3[0xb];
    param_3[0xb] = iVar2;
    local_1c = param_3;
  }
  if (local_1c[0xb] == 1) {
    if (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if (piVar9[0xb] != 1) break;
        piVar5 = (int *)piVar9[1];
        if (piVar9 == (int *)*piVar5) {
          piVar5 = (int *)piVar5[2];
          if (piVar5[0xb] == 0) {
            piVar5[0xb] = 1;
            *(undefined4 *)(piVar9[1] + 0x2c) = 0;
            iVar2 = piVar9[1];
            piVar5 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar5;
            if ((int *)*piVar5 != DAT_00771d6c) {
              ((int *)*piVar5)[1] = iVar2;
            }
            piVar5[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
            }
            else {
              piVar8 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar8) {
                *piVar8 = (int)piVar5;
              }
              else {
                piVar8[2] = (int)piVar5;
              }
            }
            *piVar5 = iVar2;
            *(int **)(iVar2 + 4) = piVar5;
            piVar5 = *(int **)(piVar9[1] + 8);
          }
          if ((*(int *)(*piVar5 + 0x2c) != 1) || (*(int *)(piVar5[2] + 0x2c) != 1)) {
            if (*(int *)(piVar5[2] + 0x2c) == 1) {
              *(undefined4 *)(*piVar5 + 0x2c) = 1;
              iVar2 = *piVar5;
              piVar5[0xb] = 0;
              *piVar5 = *(int *)(iVar2 + 8);
              if (*(int **)(iVar2 + 8) != DAT_00771d6c) {
                (*(int **)(iVar2 + 8))[1] = (int)piVar5;
              }
              *(int *)(iVar2 + 4) = piVar5[1];
              if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
              }
              else {
                piVar8 = (int *)piVar5[1];
                if (piVar5 == (int *)piVar8[2]) {
                  piVar8[2] = iVar2;
                }
                else {
                  *piVar8 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar5;
              piVar5[1] = iVar2;
              piVar5 = *(int **)(piVar9[1] + 8);
            }
            piVar5[0xb] = *(int *)(piVar9[1] + 0x2c);
            *(undefined4 *)(piVar9[1] + 0x2c) = 1;
            *(undefined4 *)(piVar5[2] + 0x2c) = 1;
            puVar6 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)puVar6[2];
            puVar6[2] = *puVar7;
            if ((int *)*puVar7 != DAT_00771d6c) {
              ((int *)*puVar7)[1] = (int)puVar6;
            }
            puVar7[1] = puVar6[1];
            if (puVar6 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
              *puVar7 = puVar6;
            }
            else {
              piVar5 = (int *)puVar6[1];
              if (puVar6 == (undefined4 *)*piVar5) {
                *piVar5 = (int)puVar7;
                *puVar7 = puVar6;
              }
              else {
                piVar5[2] = (int)puVar7;
                *puVar7 = puVar6;
              }
            }
LAB_00556ca0:
            puVar6[1] = puVar7;
            break;
          }
        }
        else {
          piVar5 = (int *)*piVar5;
          if (piVar5[0xb] == 0) {
            piVar5[0xb] = 1;
            *(undefined4 *)(piVar9[1] + 0x2c) = 0;
            piVar5 = (int *)piVar9[1];
            iVar2 = *piVar5;
            *piVar5 = *(int *)(iVar2 + 8);
            if (*(int **)(iVar2 + 8) != DAT_00771d6c) {
              (*(int **)(iVar2 + 8))[1] = (int)piVar5;
            }
            *(int *)(iVar2 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
            }
            else {
              piVar8 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar8[2]) {
                piVar8[2] = iVar2;
              }
              else {
                *piVar8 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar5;
            piVar5[1] = iVar2;
            piVar5 = *(int **)piVar9[1];
          }
          if ((*(int *)(piVar5[2] + 0x2c) != 1) || (*(int *)(*piVar5 + 0x2c) != 1)) {
            if (*(int *)(*piVar5 + 0x2c) == 1) {
              *(undefined4 *)(piVar5[2] + 0x2c) = 1;
              piVar8 = (int *)piVar5[2];
              piVar5[0xb] = 0;
              piVar5[2] = *piVar8;
              if ((int *)*piVar8 != DAT_00771d6c) {
                ((int *)*piVar8)[1] = (int)piVar5;
              }
              piVar8[1] = piVar5[1];
              if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
              }
              else {
                piVar3 = (int *)piVar5[1];
                if (piVar5 == (int *)*piVar3) {
                  *piVar3 = (int)piVar8;
                }
                else {
                  piVar3[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar5;
              piVar5[1] = (int)piVar8;
              piVar5 = *(int **)piVar9[1];
            }
            piVar5[0xb] = *(int *)(piVar9[1] + 0x2c);
            *(undefined4 *)(piVar9[1] + 0x2c) = 1;
            *(undefined4 *)(*piVar5 + 0x2c) = 1;
            puVar6 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)*puVar6;
            *puVar6 = puVar7[2];
            if ((int *)puVar7[2] != DAT_00771d6c) {
              ((int *)puVar7[2])[1] = (int)puVar6;
            }
            puVar7[1] = puVar6[1];
            if (puVar6 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
            }
            else {
              puVar4 = (undefined4 *)puVar6[1];
              if (puVar6 == (undefined4 *)puVar4[2]) {
                puVar4[2] = puVar7;
              }
              else {
                *puVar4 = puVar7;
              }
            }
            puVar7[2] = puVar6;
            goto LAB_00556ca0;
          }
        }
        piVar5[0xb] = 0;
        piVar9 = (int *)piVar9[1];
      } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    piVar9[0xb] = 1;
  }
  FUN_006bf8e7();
  local_4 = 0;
  FUN_00556e10(local_1c[8]);
  puVar6 = (undefined4 *)FUN_00556e80(local_1c[8]);
  FUN_00556e10(*puVar6);
  FUN_005570a0(local_10,local_18,local_14);
  FUN_006bf840(local_1c[8]);
  local_1c[8] = 0;
  local_1c[10] = 0;
  FUN_006bf84b();
  iVar2 = DAT_00771d70;
  _DAT_00771d74 = _DAT_00771d74 + -1;
  iVar10 = 0;
  if (_DAT_00771d74 == 0) {
    DAT_00771d70 = 0;
    iVar10 = iVar2;
  }
  FUN_006bf8e7();
  if (iVar10 != 0) {
    FUN_006bf840(iVar10);
  }
  iVar2 = local_1c[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  FUN_006bf840(local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

