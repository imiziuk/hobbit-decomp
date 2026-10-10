
int __thiscall FUN_00667630(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_006bfb28();
  }
  uVar7 = *(uint *)(param_2 + 8) - param_3;
  if (param_4 < uVar7) {
    uVar7 = param_4;
  }
  if (param_1 == param_2) {
    uVar7 = uVar7 + param_3;
    if (*(uint *)(param_1 + 8) < uVar7) {
      FUN_006bfb28();
    }
    FUN_00669460();
    iVar2 = *(int *)(param_1 + 8) - uVar7;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      FUN_00667840(*(int *)(param_1 + 4) + uVar7 * 2,*(int *)(param_1 + 4) + (uVar7 + iVar8) * 2,
                   iVar2 - iVar8);
      iVar8 = *(int *)(param_1 + 8) - iVar8;
      cVar1 = FUN_00668620(iVar8,0);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 8) = iVar8;
        *(undefined2 *)(*(int *)(param_1 + 4) + iVar8 * 2) = 0;
      }
    }
    FUN_00669460();
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 < param_3) {
      param_3 = uVar7;
    }
    if (param_3 == 0) {
      return param_1;
    }
    FUN_00667840(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + param_3 * 2,uVar7 - param_3);
    iVar8 = *(int *)(param_1 + 8) - param_3;
    cVar1 = FUN_00668620(iVar8,0);
    if (cVar1 == '\0') {
      return param_1;
    }
    FUN_00668600(iVar8);
    return param_1;
  }
  if ((uVar7 != 0) && (uVar7 == *(uint *)(param_2 + 8))) {
    puVar3 = *(undefined **)(param_2 + 4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_006f962c;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      iVar8 = *(int *)(param_1 + 4);
      if (iVar8 != 0) {
        cVar1 = *(char *)(iVar8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_006bf840(iVar8 + -2);
        }
        else {
          *(char *)(iVar8 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      puVar3 = *(undefined **)(param_2 + 4);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &DAT_006f962c;
      }
      *(undefined **)(param_1 + 4) = puVar3;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar3[-1] = puVar3[-1] + '\x01';
      return param_1;
    }
  }
  uVar4 = FUN_00669330();
  if (uVar4 < uVar7) {
    FUN_006bf8fc();
  }
  iVar8 = *(int *)(param_1 + 4);
  if (((iVar8 == 0) || (cVar1 = *(char *)(iVar8 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      FUN_006678a0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar7 <= *(uint *)(param_1 + 0xc))) goto LAB_006677ff;
    FUN_006678a0(1);
  }
  else if (uVar7 == 0) {
    *(char *)(iVar8 + -1) = cVar1 + -1;
    FUN_006678a0(0);
    return param_1;
  }
  FUN_00669340(uVar7);
LAB_006677ff:
  puVar3 = *(undefined **)(param_2 + 4);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_006f962c;
  }
  puVar6 = (undefined2 *)(puVar3 + param_3 * 2);
  puVar5 = *(undefined2 **)(param_1 + 4);
  for (uVar4 = uVar7; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *puVar6;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(uint *)(param_1 + 8) = uVar7;
  *(undefined2 *)(*(int *)(param_1 + 4) + uVar7 * 2) = 0;
  return param_1;
}

