
int FUN_00655ea0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  iVar2 = DAT_007e87d0;
  iVar7 = DAT_007e87d0 * 2;
  iVar5 = 0;
  if (param_1 != 0) {
    DAT_007e87e0 = DAT_007e8834;
    DAT_007e87e8 = DAT_007e881c + -1;
    DAT_007e87ac = 0;
    DAT_007e8810 = DAT_007e87d4;
    DAT_007e879c = 0;
    DAT_007e87ec = DAT_007e881c;
  }
  local_4 = DAT_007e87e8;
  param_1 = DAT_007e87ac;
  DAT_007e87d8 = DAT_007e8810;
  DAT_007e8830 = DAT_007e8820;
  DAT_007e87fc = DAT_007e8820;
  DAT_007e87c8 = DAT_007e87b4;
  DAT_007e8814 = DAT_007e87b4;
  DAT_007e87c4 = DAT_007e87dc;
  DAT_007e87f8 = DAT_007e87dc;
  uVar4 = 1;
  iVar6 = DAT_007e87e0;
  if (DAT_007e87e0 <= DAT_007e87e8) {
    do {
      iVar3 = FUN_006561d0(uVar4);
      if (iVar3 == 0) {
        if (iVar5 != 0) {
          local_4 = iVar6 + -1;
          break;
        }
      }
      else if (iVar5 == 0) {
        if (DAT_007e87e0 < iVar6) {
          DAT_007e87dc = DAT_007e87f8;
          DAT_007e8820 = DAT_007e87fc;
          DAT_007e87b4 = DAT_007e8814;
          DAT_007e8810 = DAT_007e87d8;
          DAT_007e87e0 = iVar6;
          param_1 = iVar6;
        }
        iVar5 = 1;
      }
      DAT_007e87c4 = DAT_007e87c4 + DAT_007e87e4 * 4;
      DAT_007e87f8 = DAT_007e87f8 + DAT_007e87e4 * 4;
      DAT_007e87fc = DAT_007e87fc + DAT_007e87e4;
      DAT_007e8830 = DAT_007e8830 + DAT_007e87e4;
      DAT_007e8814 = DAT_007e8814 + DAT_007e87d8;
      DAT_007e87c8 = DAT_007e87c8 + DAT_007e87d8;
      DAT_007e87d8 = DAT_007e87d8 + iVar7;
      iVar6 = iVar6 + 1;
      uVar4 = 0;
    } while (iVar6 <= DAT_007e87e8);
  }
  iVar7 = DAT_007e87e0 + -1;
  DAT_007e87d8 = DAT_007e8810 + iVar2 * -2;
  DAT_007e87c8 = DAT_007e87b4 - DAT_007e87d8;
  DAT_007e87c4 = DAT_007e87dc + DAT_007e87e4 * -4;
  DAT_007e87fc = DAT_007e8820 - DAT_007e87e4;
  uVar4 = 1;
  DAT_007e87f8 = DAT_007e87c4;
  DAT_007e8814 = DAT_007e87c8;
  DAT_007e8830 = DAT_007e87fc;
  if (DAT_007e87ac <= iVar7) {
    do {
      iVar6 = FUN_006561d0(uVar4);
      if (iVar6 == 0) {
        if (iVar5 != 0) {
          param_1 = iVar7 + 1;
          break;
        }
      }
      else if (iVar5 == 0) {
        DAT_007e87dc = DAT_007e87f8;
        DAT_007e8820 = DAT_007e87fc;
        DAT_007e87b4 = DAT_007e8814;
        DAT_007e8810 = DAT_007e87d8;
        iVar5 = 1;
        DAT_007e87e0 = iVar7;
        local_4 = iVar7;
      }
      DAT_007e87c4 = DAT_007e87c4 + DAT_007e87e4 * -4;
      DAT_007e87f8 = DAT_007e87f8 + DAT_007e87e4 * -4;
      DAT_007e8830 = DAT_007e8830 - DAT_007e87e4;
      DAT_007e87fc = DAT_007e87fc - DAT_007e87e4;
      DAT_007e87d8 = DAT_007e87d8 + iVar2 * -2;
      DAT_007e87c8 = DAT_007e87c8 - DAT_007e87d8;
      DAT_007e8814 = DAT_007e8814 - DAT_007e87d8;
      iVar7 = iVar7 + -1;
      uVar4 = 0;
    } while (DAT_007e87ac <= iVar7);
  }
  if (iVar5 != 0) {
    if (local_4 < DAT_007e879c) {
      DAT_007e87e8 = local_4;
    }
    DAT_007e879c = local_4;
    bVar1 = DAT_007e87ec < param_1;
    DAT_007e87ec = param_1;
    if (bVar1) {
      DAT_007e87ac = param_1;
    }
  }
  return iVar5;
}

