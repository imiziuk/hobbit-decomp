
int __thiscall FUN_0059b420(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar7 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      if (iVar7 + iVar5 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar7 = iVar7 + iVar1;
      }
    }
    else {
      iVar7 = iVar7 + *(int *)(param_1 + 0x18);
    }
    pvVar2 = operator_new(iVar7 << 5);
    pvVar6 = (void *)0x0;
    if ((pvVar2 != (void *)0x0) && (pvVar6 = pvVar2, -1 < iVar7 + -1)) {
      puVar4 = (undefined4 *)((int)pvVar2 + 0x1c);
      iVar5 = iVar7;
      do {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (0 < param_2) {
      puVar4 = (undefined4 *)((int)pvVar6 + 0x1c);
      iVar5 = param_2;
      do {
        puVar3 = (undefined4 *)((int)puVar4 + *(int *)(param_1 + 0xc) + (-0x1c - (int)pvVar6));
        puVar4[-7] = *puVar3;
        puVar4[-6] = puVar3[1];
        puVar4[-5] = puVar3[2];
        puVar4[-4] = puVar3[3];
        puVar4[-3] = puVar3[4];
        puVar4[-2] = puVar3[5];
        puVar4[-1] = puVar3[6];
        *puVar4 = puVar3[7];
        puVar4 = puVar4 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (param_2 < *(int *)(param_1 + 8)) {
      puVar4 = (undefined4 *)((int)pvVar6 + param_2 * 0x20 + 0x3c);
      iVar5 = param_2;
      do {
        iVar1 = (-0x3c - (int)pvVar6) + *(int *)(param_1 + 0xc);
        puVar4[-7] = *(undefined4 *)((int)puVar4 + (-0x3c - (int)pvVar6) + *(int *)(param_1 + 0xc));
        puVar4[-6] = *(undefined4 *)((int)puVar4 + iVar1 + 4);
        puVar4[-5] = *(undefined4 *)((int)puVar4 + iVar1 + 8);
        puVar4[-4] = *(undefined4 *)((int)puVar4 + iVar1 + 0xc);
        puVar4[-3] = *(undefined4 *)((int)puVar4 + iVar1 + 0x10);
        puVar4[-2] = *(undefined4 *)((int)puVar4 + iVar1 + 0x14);
        puVar4[-1] = *(undefined4 *)((int)puVar4 + iVar1 + 0x18);
        *puVar4 = *(undefined4 *)((int)puVar4 + iVar1 + 0x1c);
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 8;
      } while (iVar5 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar6;
    *(int *)(param_1 + 0x10) = iVar7;
  }
  else if (param_2 < iVar7) {
    iVar5 = iVar7 << 5;
    iVar7 = iVar7 - param_2;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar5);
      *puVar4 = puVar4[-8];
      puVar4[1] = puVar4[-7];
      puVar4[2] = puVar4[-6];
      puVar4[3] = puVar4[-5];
      puVar4[4] = puVar4[-4];
      puVar4[5] = puVar4[-3];
      puVar4[6] = puVar4[-2];
      iVar5 = iVar5 + -0x20;
      iVar7 = iVar7 + -1;
      puVar4[7] = puVar4[-1];
    } while (iVar7 != 0);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_2 * 0x20 + *(int *)(param_1 + 0xc);
}

