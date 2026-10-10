
void FUN_00647700(undefined1 *param_1,undefined1 *param_2,int param_3,code *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  if ((param_2 != (undefined1 *)0x0) && (1 < (int)param_2)) {
    puVar6 = param_1 + (int)param_2 * param_3;
    bVar2 = 3 < (int)param_2;
    param_2 = puVar6;
    if (bVar2) {
      FUN_00647830(param_1,puVar6,param_3,param_3 * 4,param_3 * 6,param_4);
      param_2 = param_1 + param_3 * 4;
    }
    puVar10 = param_1 + param_3;
    puVar9 = puVar10;
    puVar11 = param_1;
    if (puVar10 < param_2) {
      do {
        iVar7 = (*param_4)(puVar11,puVar9);
        if (0 < iVar7) {
          puVar11 = puVar9;
        }
        puVar9 = puVar9 + param_3;
      } while (puVar9 < param_2);
      if ((puVar11 != param_1) && (puVar9 = param_1, param_1 < puVar10)) {
        do {
          uVar1 = *puVar11;
          *puVar11 = *puVar9;
          puVar11 = puVar11 + 1;
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
        } while (puVar9 < puVar10);
      }
    }
    for (; puVar9 = puVar10, puVar10 < puVar6; puVar10 = puVar10 + param_3) {
      do {
        if (puVar9 <= param_1) break;
        puVar9 = puVar9 + -param_3;
        iVar7 = (*param_4)(puVar9,puVar10);
      } while (0 < iVar7);
      if ((puVar9 + param_3 != puVar10) && (puVar11 = puVar10 + param_3 + -1, puVar10 <= puVar11)) {
        puVar8 = puVar11 + -param_3;
        do {
          uVar1 = *puVar11;
          puVar5 = puVar8;
          puVar4 = puVar11;
          while (puVar3 = puVar5, puVar9 + param_3 <= puVar3) {
            *puVar4 = *puVar3;
            puVar4 = puVar3;
            puVar5 = puVar3 + -param_3;
          }
          puVar11 = puVar11 + -1;
          puVar8 = puVar8 + -1;
          *puVar4 = uVar1;
        } while (puVar10 <= puVar11);
      }
    }
  }
  return;
}

