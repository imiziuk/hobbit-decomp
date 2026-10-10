
int __thiscall FUN_00557fe0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9e8b;
  local_c = ExceptionList;
  pcVar3 = param_2;
  ExceptionList = &local_c;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_1 - (int)param_2] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(char *)(param_1 + 0x9b8) = param_2[0x9b8];
  *(char *)(param_1 + 0x9b9) = param_2[0x9b9];
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0x9cc);
  *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_2 + 0x9d4);
  *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_2 + 0x9dc);
  pcVar3 = param_2 + 0x11c;
  puVar4 = (undefined4 *)(param_1 + 0x11c);
  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  iVar10 = (int)param_2 - param_1;
  pcVar3 = param_2 + 0x138;
  puVar4 = (undefined4 *)(param_1 + 0x138);
  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x154);
  param_2 = (char *)0x8;
  do {
    puVar12 = (undefined4 *)(iVar10 + (int)puVar4);
    puVar14 = puVar4;
    for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    puVar4 = puVar4 + 7;
    param_2 = (char *)((int)param_2 + -1);
  } while (param_2 != (char *)0x0);
  puVar5 = (undefined2 *)(param_1 + 0x9bc);
  iVar9 = 8;
  do {
    *puVar5 = *(undefined2 *)((int)puVar5 + iVar10);
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = param_1 + 0x238;
  iVar15 = 0x10;
  do {
    FUN_00557ca0(iVar9 + iVar10);
    iVar9 = iVar9 + 0x78;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  piVar16 = (int *)0x0;
  if (*(int *)(pcVar2 + 0x9d0) != 0) {
    pvVar6 = operator_new(*(int *)(pcVar2 + 0x9d4) << 2);
    *(void **)(param_1 + 0x9d0) = pvVar6;
    FUN_00648480(pvVar6,*(undefined4 *)(pcVar2 + 0x9d0),*(int *)(pcVar2 + 0x9d4) << 2);
  }
  if (*(int *)(pcVar2 + 0x9d8) != 0) {
    iVar9 = *(int *)(pcVar2 + 0x9dc);
    piVar7 = (int *)operator_new(iVar9 * 4 + 4);
    local_4 = 0;
    if (piVar7 != (int *)0x0) {
      piVar16 = piVar7 + 1;
      *piVar7 = iVar9;
      FUN_006c043b(piVar16,4,iVar9,&LAB_00484230,FUN_00406ba0);
    }
    *(int **)(param_1 + 0x9d8) = piVar16;
    local_4 = 0xffffffff;
    param_2 = (char *)0x0;
    if (0 < *(int *)(pcVar2 + 0x9dc)) {
      do {
        iVar10 = *(int *)(pcVar2 + 0x9d8);
        iVar9 = (int)param_2 * 4;
        puVar13 = (uint *)(*(int *)(param_1 + 0x9d8) + iVar9);
        uVar11 = *(uint *)(*(int *)(param_1 + 0x9d8) + iVar9) & 0x7fffffff;
        *puVar13 = uVar11;
        puVar17 = (uint *)(iVar10 + iVar9);
        *puVar13 = (*puVar17 ^ uVar11) & 0x7fffffff ^ uVar11;
        FUN_005492b0(puVar13,0);
        if ((int)*puVar17 < 0) {
          FUN_00549470(puVar13);
        }
        uVar8 = FUN_00549620(puVar17);
        FUN_00549670(puVar13,uVar8);
        param_2 = (char *)((int)param_2 + 1);
      } while ((int)param_2 < *(int *)(pcVar2 + 0x9dc));
    }
  }
  if (*(int *)(pcVar2 + 0xa00) != 0) {
    pvVar6 = operator_new(*(int *)(pcVar2 + 0x9dc) << 8);
    *(void **)(param_1 + 0xa00) = pvVar6;
    FUN_00648480(pvVar6,*(undefined4 *)(pcVar2 + 0xa00),*(int *)(param_1 + 0x9dc) << 8);
  }
  ExceptionList = local_c;
  return param_1;
}

