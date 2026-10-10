
void FUN_00647830(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                 int param_5,code *param_6)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iStack_4;
  
  iVar3 = (int)param_3;
  iVar5 = (int)param_2 - (int)param_1;
  do {
    puVar9 = param_1 + ((uint)(iVar5 / iVar3) >> 1) * iVar3;
    if (param_5 <= iVar5) {
      iVar5 = (*param_6)(param_1,puVar9);
      puVar6 = param_1;
      if (iVar5 < 1) {
        puVar6 = puVar9;
      }
      puVar4 = param_2 + -iVar3;
      iVar5 = (*param_6)(puVar6,puVar4);
      if (0 < iVar5) {
        puVar7 = puVar9;
        if (puVar6 != param_1) {
          puVar7 = param_1;
        }
        iVar5 = (*param_6)(puVar7,puVar4);
        puVar6 = puVar7;
        if (iVar5 < 0) {
          puVar6 = puVar4;
        }
      }
      iVar5 = iVar3;
      puVar4 = puVar9;
      if (puVar6 != puVar9) {
        do {
          uVar1 = *puVar4;
          *puVar4 = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
          puVar4 = puVar4 + 1;
        } while (iVar5 != 0);
      }
    }
    puVar4 = param_1;
    puVar6 = param_2 + -iVar3;
    while( true ) {
      while ((puVar7 = puVar6, puVar10 = puVar4, puVar10 < puVar9 &&
             (iVar5 = (*param_6)(puVar10,puVar9), iVar5 < 1))) {
        puVar4 = puVar10 + iVar3;
        puVar6 = puVar7;
      }
      for (; puVar9 < puVar7; puVar7 = puVar7 + -iVar3) {
        iVar5 = (*param_6)(puVar9,puVar7);
        if (0 < iVar5) {
          param_3 = puVar10 + iVar3;
          puVar4 = puVar7;
          puVar6 = puVar7;
          puVar12 = puVar7;
          puVar11 = puVar9;
          if (puVar10 == puVar9) goto LAB_00647908;
          goto LAB_00647906;
        }
      }
      puVar4 = puVar9;
      puVar11 = puVar10;
      param_3 = puVar10;
      if (puVar10 == puVar9) break;
LAB_00647906:
      puVar6 = puVar7 + -iVar3;
      puVar7 = puVar4;
      puVar12 = puVar11;
LAB_00647908:
      iStack_4 = iVar3;
      do {
        uVar1 = *puVar10;
        *puVar10 = *puVar7;
        *puVar7 = uVar1;
        puVar10 = puVar10 + 1;
        puVar7 = puVar7 + 1;
        iStack_4 = iStack_4 + -1;
        puVar4 = param_3;
        puVar9 = puVar12;
      } while (iStack_4 != 0);
    }
    puVar6 = puVar9 + iVar3;
    iVar8 = (int)puVar9 - (int)param_1;
    iVar5 = (int)param_2 - (int)puVar6;
    if (iVar5 < iVar8) {
      bVar2 = param_4 <= iVar5;
      iVar5 = iVar8;
      puVar4 = param_1;
      puVar7 = puVar9;
      if (bVar2) {
        FUN_00647830(puVar6,param_2,iVar3,param_4,param_5,param_6);
      }
    }
    else {
      puVar4 = puVar6;
      puVar7 = param_2;
      if (param_4 <= iVar8) {
        FUN_00647830(param_1,puVar9,iVar3,param_4,param_5,param_6);
      }
    }
    param_2 = puVar7;
    param_1 = puVar4;
    if (iVar5 < param_4) {
      return;
    }
  } while( true );
}

