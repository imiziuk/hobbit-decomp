
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00555fa0(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_00556580();
  piVar9 = (int *)*param_3;
  piVar6 = param_3 + 2;
  local_1c = param_3;
  piVar8 = piVar6;
  if (piVar9 == DAT_00771d64) {
    piVar9 = (int *)*piVar6;
  }
  else {
    piVar2 = (int *)*piVar6;
    if (piVar2 != DAT_00771d64) {
      local_1c = piVar2;
      for (piVar8 = (int *)*piVar2; piVar8 != DAT_00771d64; piVar8 = (int *)*piVar8) {
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
      puVar5 = (undefined4 *)param_3[1];
      if ((int *)*puVar5 == param_3) {
        *puVar5 = piVar9;
      }
      else {
        puVar5[2] = piVar9;
      }
    }
    local_18 = *(int **)(param_1 + 4);
    if ((int *)*local_18 == param_3) {
      if ((int *)*piVar6 == DAT_00771d64) {
        *local_18 = param_3[1];
      }
      else {
        piVar8 = (int *)*piVar9;
        piVar6 = piVar9;
        while (piVar2 = piVar8, piVar2 != DAT_00771d64) {
          piVar6 = piVar2;
          piVar8 = (int *)*piVar2;
        }
        *local_18 = (int)piVar6;
      }
    }
    if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
      if ((int *)*param_3 == DAT_00771d64) {
        piVar6 = (int *)param_3[1];
      }
      else {
        piVar8 = (int *)piVar9[2];
        piVar6 = piVar9;
        while (piVar2 = piVar8, piVar2 != DAT_00771d64) {
          piVar6 = piVar2;
          piVar8 = (int *)piVar2[2];
        }
      }
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
    }
  }
  else {
    *(int **)(*param_3 + 4) = local_1c;
    *local_1c = *param_3;
    if (local_1c == (int *)*piVar6) {
      piVar9[1] = (int)local_1c;
    }
    else {
      piVar9[1] = local_1c[1];
      *(int **)local_1c[1] = piVar9;
      *piVar8 = *piVar6;
      *(int **)(*piVar6 + 4) = local_1c;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_1c;
    }
    else {
      puVar5 = (undefined4 *)param_3[1];
      if ((int *)*puVar5 == param_3) {
        *puVar5 = local_1c;
      }
      else {
        puVar5[2] = local_1c;
      }
    }
    local_1c[1] = param_3[1];
    iVar1 = local_1c[8];
    local_1c[8] = param_3[8];
    param_3[8] = iVar1;
    local_1c = param_3;
  }
  if (local_1c[8] == 1) {
    if (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if (piVar9[8] != 1) break;
        piVar6 = *(int **)piVar9[1];
        if (piVar9 == piVar6) {
          piVar6 = (int *)((undefined4 *)piVar9[1])[2];
          if (piVar6[8] == 0) {
            piVar6[8] = 1;
            *(undefined4 *)(piVar9[1] + 0x20) = 0;
            iVar1 = piVar9[1];
            piVar6 = *(int **)(iVar1 + 8);
            *(int *)(iVar1 + 8) = *piVar6;
            if ((int *)*piVar6 != DAT_00771d64) {
              ((int *)*piVar6)[1] = iVar1;
            }
            piVar6[1] = *(int *)(iVar1 + 4);
            if (iVar1 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            }
            else {
              piVar8 = *(int **)(iVar1 + 4);
              if (iVar1 == *piVar8) {
                *piVar8 = (int)piVar6;
              }
              else {
                piVar8[2] = (int)piVar6;
              }
            }
            *piVar6 = iVar1;
            *(int **)(iVar1 + 4) = piVar6;
            piVar6 = *(int **)(piVar9[1] + 8);
          }
          if ((*(int *)(*piVar6 + 0x20) != 1) || (*(int *)(piVar6[2] + 0x20) != 1)) {
            if (*(int *)(piVar6[2] + 0x20) == 1) {
              *(undefined4 *)(*piVar6 + 0x20) = 1;
              iVar1 = *piVar6;
              piVar6[8] = 0;
              *piVar6 = *(int *)(iVar1 + 8);
              if (*(int **)(iVar1 + 8) != DAT_00771d64) {
                (*(int **)(iVar1 + 8))[1] = (int)piVar6;
              }
              *(int *)(iVar1 + 4) = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
              }
              else {
                piVar8 = (int *)piVar6[1];
                if (piVar6 == (int *)piVar8[2]) {
                  piVar8[2] = iVar1;
                }
                else {
                  *piVar8 = iVar1;
                }
              }
              *(int **)(iVar1 + 8) = piVar6;
              piVar6[1] = iVar1;
              piVar6 = *(int **)(piVar9[1] + 8);
            }
            piVar6[8] = *(int *)(piVar9[1] + 0x20);
            *(undefined4 *)(piVar9[1] + 0x20) = 1;
            *(undefined4 *)(piVar6[2] + 0x20) = 1;
            puVar5 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)puVar5[2];
            puVar5[2] = *puVar7;
            if ((int *)*puVar7 != DAT_00771d64) {
              ((int *)*puVar7)[1] = (int)puVar5;
            }
            puVar7[1] = puVar5[1];
            if (puVar5 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
              *puVar7 = puVar5;
            }
            else {
              piVar6 = (int *)puVar5[1];
              if (puVar5 == (undefined4 *)*piVar6) {
                *piVar6 = (int)puVar7;
                *puVar7 = puVar5;
              }
              else {
                piVar6[2] = (int)puVar7;
                *puVar7 = puVar5;
              }
            }
LAB_0055636e:
            puVar5[1] = puVar7;
            break;
          }
        }
        else {
          if (piVar6[8] == 0) {
            piVar6[8] = 1;
            *(undefined4 *)(piVar9[1] + 0x20) = 0;
            piVar6 = (int *)piVar9[1];
            iVar1 = *piVar6;
            *piVar6 = *(int *)(iVar1 + 8);
            if (*(int **)(iVar1 + 8) != DAT_00771d64) {
              (*(int **)(iVar1 + 8))[1] = (int)piVar6;
            }
            *(int *)(iVar1 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
            }
            else {
              piVar8 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar8[2]) {
                piVar8[2] = iVar1;
              }
              else {
                *piVar8 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar6;
            piVar6[1] = iVar1;
            piVar6 = *(int **)piVar9[1];
          }
          if ((*(int *)(piVar6[2] + 0x20) != 1) || (*(int *)(*piVar6 + 0x20) != 1)) {
            if (*(int *)(*piVar6 + 0x20) == 1) {
              *(undefined4 *)(piVar6[2] + 0x20) = 1;
              piVar8 = (int *)piVar6[2];
              piVar6[8] = 0;
              piVar6[2] = *piVar8;
              if ((int *)*piVar8 != DAT_00771d64) {
                ((int *)*piVar8)[1] = (int)piVar6;
              }
              piVar8[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
              }
              else {
                piVar2 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar2) {
                  *piVar2 = (int)piVar8;
                }
                else {
                  piVar2[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar6;
              piVar6[1] = (int)piVar8;
              piVar6 = *(int **)piVar9[1];
            }
            piVar6[8] = *(int *)(piVar9[1] + 0x20);
            *(undefined4 *)(piVar9[1] + 0x20) = 1;
            *(undefined4 *)(*piVar6 + 0x20) = 1;
            puVar5 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)*puVar5;
            *puVar5 = puVar7[2];
            if ((int *)puVar7[2] != DAT_00771d64) {
              ((int *)puVar7[2])[1] = (int)puVar5;
            }
            puVar7[1] = puVar5[1];
            if (puVar5 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
            }
            else {
              puVar3 = (undefined4 *)puVar5[1];
              if (puVar5 == (undefined4 *)puVar3[2]) {
                puVar3[2] = puVar7;
              }
              else {
                *puVar3 = puVar7;
              }
            }
            puVar7[2] = puVar5;
            goto LAB_0055636e;
          }
        }
        piVar6[8] = 0;
        piVar9 = (int *)piVar9[1];
      } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    piVar9[8] = 1;
  }
  FUN_006bf8e7();
  FUN_00556e10(local_1c[5]);
  puVar5 = (undefined4 *)FUN_00556e80(local_1c[5]);
  FUN_00556e10(*puVar5);
  local_18 = local_14;
  if (local_1c[7] != 0) {
    puVar5 = (undefined4 *)FUN_00556e00();
    FUN_00556e10(*puVar5);
    cVar4 = FUN_00556eb0(local_c);
    if (cVar4 != '\0') {
      FUN_00556e10(local_1c[5]);
      cVar4 = FUN_00556eb0(local_c);
      if (cVar4 != '\0') {
        puVar5 = (undefined4 *)FUN_00556e90(local_1c[5]);
        FUN_00556db0(*puVar5);
        piVar6 = (int *)FUN_00556e90(local_1c[5]);
        *piVar6 = DAT_00771d6c;
        local_1c[7] = 0;
        piVar6 = (int *)FUN_00556e80(local_1c[5]);
        *piVar6 = local_1c[5];
        piVar6 = (int *)FUN_00556ea0(local_1c[5]);
        *piVar6 = local_1c[5];
        FUN_005b8370(local_8);
        goto LAB_005564a0;
      }
    }
  }
  cVar4 = FUN_00556eb0(&local_18);
  while (cVar4 == '\0') {
    puVar5 = (undefined4 *)FUN_00556e20(local_c,0);
    FUN_005568c0(local_4,*puVar5);
    cVar4 = FUN_00556eb0(&local_18);
  }
LAB_005564a0:
  FUN_006bf840(local_1c[5]);
  local_1c[5] = 0;
  local_1c[7] = 0;
  FUN_006bf84b();
  iVar1 = DAT_00771d6c;
  _DAT_00771d68 = _DAT_00771d68 + -1;
  iVar10 = 0;
  if (_DAT_00771d68 == 0) {
    DAT_00771d6c = 0;
    iVar10 = iVar1;
  }
  FUN_006bf8e7();
  if (iVar10 != 0) {
    FUN_006bf840(iVar10);
  }
  FUN_006bf840(local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = param_3;
  return;
}

