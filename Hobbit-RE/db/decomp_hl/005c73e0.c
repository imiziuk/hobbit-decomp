
uint FUN_005c73e0(char *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int local_14 [5];
  
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = 0;
  iVar9 = 0;
  local_14[0] = 0;
  pcVar8 = param_1;
  if (*param_1 != '\0') {
    do {
      if (4 < iVar9) goto LAB_005c745a;
      cVar5 = *PTR_s_bcdfghjklmnprstw_007461e8;
      if (cVar5 != '\0') {
        puVar2 = PTR_s_bcdfghjklmnprstw_007461e8;
        do {
          if (*pcVar8 == cVar5) {
            local_14[iVar9] = (int)puVar2 - (int)PTR_s_bcdfghjklmnprstw_007461e8;
            iVar9 = iVar9 + 1;
            break;
          }
          cVar5 = puVar2[1];
          puVar2 = puVar2 + 1;
        } while (cVar5 != '\0');
      }
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    if (4 < iVar9) goto LAB_005c745a;
  }
  iVar3 = FUN_00647cf0(param_1);
  if (0x10 < iVar3) {
    iVar3 = 0x10;
  }
  local_14[iVar9] = iVar3;
LAB_005c745a:
  uVar4 = 0;
  piVar7 = local_14;
  iVar9 = 0x10;
  do {
    iVar3 = *piVar7;
    bVar6 = (byte)iVar9;
    iVar9 = iVar9 + -4;
    piVar7 = piVar7 + 1;
    uVar4 = uVar4 | iVar3 << (bVar6 & 0x1f);
  } while (-4 < iVar9);
  return uVar4;
}

