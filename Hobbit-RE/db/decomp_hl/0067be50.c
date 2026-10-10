
void FUN_0067be50(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar4 = DAT_00806b14;
  if (DAT_00806ba0 != 0) {
    bVar5 = false;
    DAT_00806b14 = 0;
    puVar9 = DAT_008069d0;
    if ((undefined4 **)DAT_008069d0 != &DAT_008069d0) {
      do {
        uVar8 = puVar9[0x13];
        puVar1 = (undefined4 *)*puVar9;
        piVar2 = (int *)puVar9[0x1e];
        if ((uVar8 != 0) && (piVar2 != (int *)0x0)) {
          uVar7 = 0xffffd8f0;
          if ((uVar8 & 1) != 0) {
            if ((NAN((float)puVar9[0xb]) || NAN(DAT_006e92e4)) ==
                ((float)puVar9[0xb] == DAT_006e92e4)) {
              uVar7 = __ftol();
            }
            (**(code **)(*piVar2 + 0x3c))(piVar2,uVar7);
            uVar8 = uVar8 & 0xfffffffe;
          }
          if ((uVar8 & 2) != 0) {
            uVar8 = uVar8 & 0xfffffffd;
          }
          if ((uVar8 & 4) != 0) {
            if (puVar9[0x15] == 2) {
              iVar6 = __ftol();
              if (iVar6 < 100) {
                iVar6 = 100;
              }
              else if (200000 < iVar6) {
                iVar6 = 200000;
              }
              (**(code **)(*piVar2 + 0x44))(piVar2,iVar6);
            }
            uVar8 = uVar8 & 0xfffffffb;
          }
          if ((uVar8 & 8) != 0) {
            uVar8 = uVar8 & 0xfffffff7;
          }
          puVar9[0x13] = uVar8;
        }
        switch(puVar9[0x15]) {
        case 1:
          iVar6 = iVar4;
          if (((puVar9[4] != 0) && (iVar3 = *(int *)(puVar9[4] + 8), iVar3 != 0)) &&
             (*(int *)(iVar3 + 0x84) == 2)) {
            iVar6 = 1;
            bVar5 = true;
          }
          if (puVar9[0x16] != 0) {
            iVar6 = *(int *)(puVar9[0x16] + 0xd4);
            bVar5 = false;
          }
          if (iVar6 != 0) {
            FUN_0067b7b0(puVar9);
LAB_0067bfde:
            puVar9[0x15] = 2;
          }
          break;
        case 2:
          iVar6 = FUN_0067c050(puVar9);
          if (iVar6 == 0) {
            FUN_0067b700(puVar9);
            puVar9[0x15] = 6;
          }
          break;
        case 3:
          if (iVar4 != 0) {
            FUN_0067b820(puVar9);
            puVar9[0x15] = 4;
          }
          break;
        case 5:
          if (iVar4 != 0) {
            FUN_0067b840(puVar9);
            goto LAB_0067bfde;
          }
        }
        puVar9 = puVar1;
      } while ((undefined4 **)puVar1 != &DAT_008069d0);
      puVar9 = DAT_008069d0;
      if (bVar5) {
        for (; (undefined4 **)puVar9 != &DAT_008069d0; puVar9 = (undefined4 *)*puVar9) {
          if (((puVar9[4] != 0) && (iVar4 = *(int *)(puVar9[4] + 8), iVar4 != 0)) &&
             (*(int *)(iVar4 + 0x84) == 2)) {
            *(undefined4 *)(iVar4 + 0x84) = 0;
          }
        }
      }
    }
  }
  return;
}

