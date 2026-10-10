
void __thiscall FUN_005c16a0(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined3 uVar14;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined1 auStack_c [12];
  
  if (param_1[4] == 0) {
    param_1[4] = (int)param_2;
  }
  if (((param_2 == (int *)0x0) || ((param_2[4] & 0xc0000000U) == 0)) ||
     (piVar5 = (int *)(**(code **)(*param_2 + 0x28))(),
     DAT_007441d4 <= (int)(piVar5[2] * 0xd + piVar5[1] * 7 + *piVar5 * 3 & 0xffU))) {
    if (param_1[0xe] == 0) {
      (**(code **)(*param_1 + 8))(param_2);
      return;
    }
    if (param_2 != (int *)0x0) {
      bVar3 = *(byte *)(param_2 + 0x20);
      iVar8 = *param_2;
      puVar12 = &uStack_18;
      FUN_0065fce0(0,puVar12);
      uVar6 = FUN_00672260(puVar12);
      bVar1 = (**(code **)(iVar8 + 0xcc))(uVar6);
      if (bVar3 < bVar1) {
        cVar2 = (char)param_2[0x20];
      }
      else {
        iVar8 = *param_2;
        puVar13 = auStack_c;
        FUN_0065fce0(0,puVar13);
        uVar6 = FUN_00672260(puVar13);
        cVar2 = (**(code **)(iVar8 + 0xcc))(uVar6);
      }
      *(char *)((int)param_1 + 9) = cVar2;
      if (cVar2 == '\0') {
        return;
      }
    }
    if ((((*(byte *)(param_1 + 0xf) & 0x20) == 0) && ((*(byte *)(param_1 + 0x10) & 4) == 0)) &&
       (*(char *)((int)param_1 + 9) == -1)) {
      bVar3 = *(byte *)(param_1 + 2) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 2) | 1;
    }
    *(byte *)(param_1 + 2) = bVar3;
    if (((int *)param_1[9])[1] + *(int *)param_1[9] < 1) {
      param_1[1] = 1;
    }
    else {
      param_1[1] = 3;
    }
    if ((DAT_00777a94 != 0) && (param_1[7] != 0)) {
      FUN_00669cf0(param_1[7],0xffffff00);
    }
    if (param_2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iStack_20 = (int)*(char *)(param_1[0xe] + 0x28);
      puVar13 = auStack_c;
      FUN_0065fce0(0,puVar13);
      uVar6 = FUN_00672260(puVar13);
      uVar7 = (**(code **)(*param_2 + 0x28))(uVar6);
      iVar8 = FUN_005a32d0(&iStack_20,uVar7,uVar6);
    }
    if (param_1[0x11] != 0) {
      FUN_0065fce0(0);
      iVar9 = *DAT_007f1000;
      uVar6 = FUN_00672280();
      (**(code **)(iVar9 + 0x94))(DAT_007f1000,2,uVar6);
      iVar9 = *DAT_007f1000;
      uVar6 = FUN_006722a0();
      (**(code **)(iVar9 + 0x94))(DAT_007f1000,3,uVar6);
    }
    DAT_007ba8fc = DAT_007ba8fc + 1;
    if (param_2 != (int *)0x0) {
      iVar9 = param_1[9];
      if ((*(byte *)(param_1 + 2) & 4) == 0) {
        if (*(int *)(iVar9 + 0x5c) == 1) {
          uVar14 = *(undefined3 *)(iVar9 + 0x59);
          uVar4 = *(undefined1 *)(iVar9 + 0x58);
        }
        else {
          uVar14 = *(undefined3 *)(iVar9 + 0x55);
          uVar4 = *(undefined1 *)(iVar9 + 0x54);
        }
        uVar6 = CONCAT31(uVar14,uVar4);
        iVar11 = param_1[5];
        iVar9 = param_1[0xe];
      }
      else if (*(int *)(iVar9 + 0x5c) == 1) {
        uVar6 = *(undefined4 *)(iVar9 + 0x58);
        iVar9 = param_1[0xe];
        iVar11 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar9 + 0x54);
        iVar9 = param_1[0xe];
        iVar11 = 0;
      }
      FUN_004ac600(iVar9,iVar11,uVar6);
    }
    puVar12 = (uint *)param_1[8];
    if (puVar12 == (uint *)0x0) {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffffffff;
    }
    else {
      uStack_18 = *puVar12;
      uStack_14 = puVar12[1];
    }
    iVar9 = param_1[0xe];
    uStack_18 = uStack_18 & *(uint *)(iVar9 + 8 + iVar8 * 8);
    uStack_14 = uStack_14 & *(uint *)(iVar9 + 0xc + iVar8 * 8);
    iStack_20 = 0;
    if (0 < *(int *)(iVar9 + 0x5c)) {
      iStack_24 = 0;
      param_2 = (int *)0x0;
      do {
        iVar8 = iStack_20;
        uVar10 = __allshl();
        if ((((uint)uVar10 & uStack_18) != 0 || ((uint)((ulonglong)uVar10 >> 0x20) & uStack_14) != 0
            ) || (0x5ff < (int)param_2)) {
          iVar11 = *(int *)(iVar9 + 0x60) + (int)param_2;
          iStack_28 = 0;
          iStack_1c = iVar11;
          if (0 < *(int *)(*(int *)(iVar9 + 0x60) + 0x10 + (int)param_2)) {
            do {
              iVar9 = (*(int *)(iVar11 + 0x14) + iStack_28) * 0x2c;
              piVar5 = (int *)(iVar9 + *(int *)(param_1[0xe] + 0x68));
              iVar8 = 0;
              if (0 < *(int *)(iVar9 + 8 + *(int *)(param_1[0xe] + 0x68))) {
                do {
                  uVar6 = *(undefined4 *)(*(int *)(param_1[0xe] + 0x84) + *piVar5 * 4);
                  FUN_005537c0(uVar6);
                  FUN_005c2da0(uVar6,param_1,piVar5[3] + iVar8);
                  iVar8 = iVar8 + 1;
                  iVar11 = iStack_1c;
                } while (iVar8 < piVar5[2]);
              }
              FUN_00583ff0(*(undefined4 *)(*(int *)(param_1[0xe] + 0x68) + 4 + iStack_24));
              iStack_28 = iStack_28 + 1;
              iVar8 = iStack_20;
            } while (iStack_28 < *(int *)(iVar11 + 0x10));
          }
        }
        iVar9 = param_1[0xe];
        iStack_20 = iVar8 + 1;
        param_2 = (int *)((int)param_2 + 0x18);
        iStack_24 = iStack_24 + 0x2c;
      } while (iStack_20 < *(int *)(iVar9 + 0x5c));
    }
  }
  return;
}

