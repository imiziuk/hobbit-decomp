
/* WARNING: Removing unreachable block (ram,0x005c2fdd) */
/* WARNING: Removing unreachable block (ram,0x005c2ff2) */
/* WARNING: Removing unreachable block (ram,0x005c3001) */
/* WARNING: Removing unreachable block (ram,0x005c300a) */
/* WARNING: Removing unreachable block (ram,0x005c3010) */

void __thiscall FUN_005c2da0(int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  
  piVar1 = (int *)FUN_005c3e00();
  *piVar1 = (int)param_2;
  piVar1[1] = (int)param_3;
  piVar1[2] = param_4;
  if (param_3 != (int *)0x0) {
    if ((int)param_2 < 0) {
      if (*(int *)(param_1 + 0x2c) <= (int)param_2) {
        return;
      }
      if ((*(byte *)(param_3 + 2) & 1) == 0) {
        piVar1[3] = *(int *)(param_1 + 0x38);
        *(int **)(param_1 + 0x38) = piVar1;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x2c) <= (int)param_2) {
        return;
      }
      if ((*(char *)(*(int *)(*(int *)(param_1 + 0x54) + (int)param_2 * 4) +
                    *(int *)(param_1 + 0x50)) == '\0') && ((*(byte *)(param_3 + 2) & 1) == 0)) {
        iVar2 = *(int *)(param_1 + 0x30) + (int)param_2 * 0x24;
        piVar1[3] = *(int *)(iVar2 + (param_3[1] + (*(byte *)(param_3 + 2) & 4)) * 4);
        *(int **)(iVar2 + (param_3[1] + (*(byte *)(param_3 + 2) & 4)) * 4) = piVar1;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        return;
      }
    }
    piVar1[3] = *(int *)(param_1 + 0x40);
    *(int **)(param_1 + 0x40) = piVar1;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if ((*(byte *)(param_3 + 2) & 8) != 0) {
      param_2 = piVar1;
      param_2 = (int *)(**(code **)(*param_3 + 0x14))(piVar1);
      iVar2 = FUN_005c4430(&param_2);
      puVar8 = *(undefined4 **)(iVar2 + 8);
      if (*(int *)(iVar2 + 0xc) - (int)puVar8 >> 2 == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if ((iVar3 == 0) || (uVar6 = (int)puVar8 - iVar3 >> 2, uVar6 < 2)) {
          uVar6 = 1;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)puVar8 - iVar3 >> 2;
        }
        iVar3 = iVar3 + uVar6;
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = 0;
        }
        pvVar5 = operator_new(iVar4 * 4);
        param_3 = (int *)pvVar5;
        for (puVar7 = *(undefined4 **)(iVar2 + 4); puVar7 != puVar8; puVar7 = puVar7 + 1) {
          FUN_00669b80(pvVar5,puVar7);
          pvVar5 = (void *)((int)pvVar5 + 4);
        }
        FUN_00669300(pvVar5,1,&stack0x00000000);
        FUN_006692d0(puVar8,*(undefined4 *)(iVar2 + 8),(int)pvVar5 + 4);
        FUN_005b8840(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        FUN_006bf840(*(undefined4 *)(iVar2 + 4));
        iVar4 = *(int *)(iVar2 + 4);
        *(void **)(iVar2 + 0xc) = (void *)((int)param_3 + iVar3 * 4);
        if (iVar4 == 0) {
          *(int **)(iVar2 + 4) = param_3;
          *(int *)(iVar2 + 8) = (int)param_3 + 4;
          return;
        }
        *(int **)(iVar2 + 4) = param_3;
        *(int *)(iVar2 + 8) = (int)param_3 + (*(int *)(iVar2 + 8) - iVar4 >> 2) * 4 + 4;
        return;
      }
      FUN_006692d0(puVar8,puVar8,puVar8 + 1);
      FUN_00669300(*(int *)(iVar2 + 8),1 - (*(int *)(iVar2 + 8) - (int)puVar8 >> 2),&stack0x00000000
                  );
      puVar7 = *(undefined4 **)(iVar2 + 8);
      if (puVar8 != puVar7) {
        do {
          *puVar8 = unaff_retaddr;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar7);
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 4;
        return;
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 4;
    }
  }
  return;
}

