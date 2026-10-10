
/* WARNING: Removing unreachable block (ram,0x0063be00) */
/* WARNING: Removing unreachable block (ram,0x0063be24) */
/* WARNING: Removing unreachable block (ram,0x0063bdb7) */
/* WARNING: Removing unreachable block (ram,0x0063bd5c) */
/* WARNING: Removing unreachable block (ram,0x0063bd7a) */
/* WARNING: Removing unreachable block (ram,0x0063bd80) */
/* WARNING: Removing unreachable block (ram,0x0063bda4) */
/* WARNING: Removing unreachable block (ram,0x0063bdac) */
/* WARNING: Removing unreachable block (ram,0x0063bdde) */

void __thiscall FUN_0063bb40(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c0600(param_2,param_3);
  if (0 < *(int *)(param_1 + 0x6c)) {
    piVar1 = *(int **)(param_1 + 0x70);
    iVar3 = FUN_005c03e0(1,1,0x20,1);
    if ((((*piVar1 == 0) && (piVar1[1] == iVar3 * 0x10000)) && (piVar1[5] == 4)) &&
       (*(int *)piVar1[6] == 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
      goto LAB_0063bbc0;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
LAB_0063bbc0:
  puVar4 = (undefined4 *)FUN_0063ba50();
  iVar3 = *(int *)(param_1 + 0xa4);
  uVar10 = *(uint *)(param_1 + 0x74);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xa8) - iVar3 >> 4;
  }
  if (uVar5 < uVar10) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0xa8) - iVar3 >> 4;
    }
    puVar8 = *(undefined4 **)(param_1 + 0xa8);
    uVar10 = uVar10 - iVar7;
    if ((uint)(*(int *)(param_1 + 0xac) - (int)puVar8 >> 4) < uVar10) {
      param_2 = uVar10;
      if ((iVar3 != 0) && (uVar10 < (uint)((int)puVar8 - iVar3 >> 4))) {
        param_2 = FUN_0063c7e0();
      }
      iVar7 = FUN_0063c7e0();
      iVar7 = iVar7 + param_2;
      iVar3 = iVar7;
      if (iVar7 < 0) {
        iVar3 = 0;
      }
      pvVar6 = operator_new(iVar3 << 4);
      iVar3 = FUN_0063c830(*(undefined4 *)(param_1 + 0xa4),puVar8,pvVar6);
      FUN_0063c880(iVar3,uVar10,puVar4);
      FUN_0063c830(puVar8,*(undefined4 *)(param_1 + 0xa8),uVar10 * 0x10 + iVar3);
      FUN_0063c800(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      FUN_006bf840(*(undefined4 *)(param_1 + 0xa4));
      *(void **)(param_1 + 0xac) = (void *)(iVar7 * 0x10 + (int)pvVar6);
      iVar3 = FUN_0063c7e0();
      *(void **)(param_1 + 0xa8) = (void *)((iVar3 + uVar10) * 0x10 + (int)pvVar6);
      *(void **)(param_1 + 0xa4) = pvVar6;
    }
    else if (uVar10 != 0) {
      FUN_0063c830(puVar8,puVar8,puVar8 + uVar10 * 4);
      FUN_0063c880(*(int *)(param_1 + 0xa8),uVar10 - (*(int *)(param_1 + 0xa8) - (int)puVar8 >> 4),
                   puVar4);
      puVar2 = *(undefined4 **)(param_1 + 0xa8);
      for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8[2] = puVar4[2];
        puVar8[3] = puVar4[3];
      }
      *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + uVar10 * 0x10;
    }
  }
  else if ((iVar3 != 0) && (uVar10 < (uint)(*(int *)(param_1 + 0xa8) - iVar3 >> 4))) {
    iVar7 = *(int *)(param_1 + 0xa8);
    iVar3 = uVar10 * 0x10 + iVar3;
    for (iVar9 = iVar3; iVar9 != iVar7; iVar9 = iVar9 + 0x10) {
      FUN_0063ba60();
    }
    *(int *)(param_1 + 0xa8) = iVar3;
  }
  local_4 = 0xffffffff;
  FUN_0063ba60();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    param_3 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x68);
      iVar9 = 0;
      if (0 < *(int *)(iVar7 + 8 + param_3)) {
        do {
          FUN_0063bf50(iVar3,iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(iVar7 + param_3 + 8));
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 0x2c;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  ExceptionList = local_c;
  return;
}

