
void FUN_0067d640(void)

{
  short sVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int extraout_ECX;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if (((DAT_00808edc == 0) && (DAT_00808ed0 == 0)) && (DAT_00808ed8 != 0)) {
    pcVar3 = (char *)((DAT_00808ec0 - DAT_00808f20) * DAT_00808ef0 + DAT_00808ebc);
    pcVar4 = DAT_00808ed4;
    iVar6 = DAT_00808ee0;
    if (DAT_00808ee0 != 0) {
      do {
        if (*pcVar4 != '\0') {
          *pcVar3 = *pcVar4;
        }
        pcVar3 = pcVar3 + 1;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar4 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = DAT_00808ec0 - DAT_00808f20;
    if (iVar6 < DAT_00808ec0) {
      do {
        *(short *)(DAT_00808eb8 + iVar6 * 2) = (short)DAT_00808ef0 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_00808ec0);
    }
    FUN_0065c8b0();
    FUN_0067d8a0(local_4);
    local_c = 0;
    iVar6 = 0;
    puVar2 = DAT_00808ecc;
    if (0 < DAT_00808ec0) {
      do {
        sVar1 = *(short *)(DAT_00808eb8 + local_c * 2);
        if (-1 < sVar1) {
          iVar5 = DAT_00808ef0 * local_c + DAT_00808ebc;
          iVar6 = -1;
          iVar7 = 0;
          local_8 = 0;
          local_10 = 0;
          if (-1 < sVar1) {
            iVar8 = 0;
            do {
              if (*(char *)(local_8 + iVar5) == '\0') {
                if (iVar6 != -1) {
                  iVar9 = local_c;
                  iVar10 = iVar7;
                  iVar12 = iVar8;
                  FUN_00425250(local_4);
                  FUN_0065c8d0(iVar6 + iVar5,local_10,iVar9,iVar10,iVar12);
                  iVar6 = -1;
                }
              }
              else if (iVar6 == -1) {
                iVar7 = DAT_00808f18 * local_8 + DAT_00808ee4;
                iVar8 = DAT_00808eec * local_c + DAT_00808f1c;
                local_10 = 1;
                iVar6 = local_8;
              }
              else {
                local_10 = local_10 + 1;
              }
              local_8 = local_8 + 1;
            } while (local_8 <= *(short *)(DAT_00808eb8 + local_c * 2));
            if (iVar6 != -1) {
              iVar9 = local_c;
              FUN_00425250(local_4);
              FUN_0065c8d0(iVar5 + iVar6,local_10,iVar9,iVar7,iVar8);
            }
          }
        }
        local_c = local_c + 1;
        iVar6 = local_c;
        puVar2 = DAT_00808ecc;
      } while (local_c < DAT_00808ec0);
    }
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[4]) {
      uVar13 = puVar2[1];
      uVar11 = *puVar2;
      FUN_00425250(puVar2 + 3);
      FUN_0065c8d0(puVar2 + 5,puVar2[2],iVar6,uVar11,uVar13);
      iVar6 = extraout_ECX;
    }
    return;
  }
  return;
}

