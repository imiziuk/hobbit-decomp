
int FUN_006561d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  int local_c;
  int local_8;
  undefined1 local_4;
  
  iVar1 = DAT_007e87d0;
  iVar3 = DAT_007e87d0 * 2;
  if (param_1 != 0) {
    DAT_007e8818 = DAT_007e87f0;
    DAT_007e87cc = DAT_007e881c + -1;
    DAT_007e880c = 0;
    DAT_007e87a4 = DAT_007e882c;
    DAT_007e8808 = DAT_007e881c;
    DAT_007e8828 = 0;
  }
  local_8 = DAT_007e87cc;
  param_1 = 0;
  local_c = DAT_007e880c;
  local_4 = (undefined1)DAT_007e87c0;
  iVar4 = DAT_007e87a4;
  uVar7 = DAT_007e87c8;
  puVar6 = DAT_007e87c4;
  puVar5 = DAT_007e8830;
  for (iVar2 = DAT_007e8818; iVar2 <= DAT_007e87cc; iVar2 = iVar2 + 1) {
    if (uVar7 < *puVar6) {
      if (DAT_007e8818 < iVar2) {
        DAT_007e87a4 = iVar4;
        DAT_007e87c4 = puVar6;
        DAT_007e87c8 = uVar7;
        DAT_007e8818 = iVar2;
        DAT_007e8830 = puVar5;
        local_c = iVar2;
      }
      param_1 = 1;
      if (iVar2 <= DAT_007e87cc) goto LAB_006562c0;
      break;
    }
    puVar6 = puVar6 + 1;
    uVar7 = uVar7 + iVar4;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + iVar3;
  }
  goto LAB_006562e5;
  while( true ) {
    *puVar6 = uVar7;
    *puVar5 = local_4;
    iVar2 = iVar2 + 1;
    puVar6 = puVar6 + 1;
    uVar7 = uVar7 + iVar4;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + iVar3;
    if (local_8 < iVar2) break;
LAB_006562c0:
    if (*puVar6 <= uVar7) {
      local_8 = iVar2 + -1;
      break;
    }
  }
LAB_006562e5:
  iVar2 = DAT_007e880c;
  iVar3 = DAT_007e8818 + -1;
  iVar4 = DAT_007e87a4 + iVar1 * -2;
  puVar5 = DAT_007e8830 + -1;
  uVar7 = DAT_007e87c8 - iVar4;
  puVar6 = DAT_007e87c4 + -1;
  if (param_1 == 0) {
    if (iVar3 < DAT_007e880c) {
      return 0;
    }
    while (*puVar6 <= uVar7) {
      iVar4 = iVar4 + iVar1 * -2;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + -1;
      puVar5 = puVar5 + -1;
      uVar7 = uVar7 - iVar4;
      if (iVar3 < DAT_007e880c) {
        return 0;
      }
    }
    param_1 = 1;
    DAT_007e87a4 = iVar4;
    DAT_007e87c4 = puVar6;
    DAT_007e87c8 = uVar7;
    DAT_007e8818 = iVar3;
    DAT_007e8830 = puVar5;
    local_8 = iVar3;
  }
  do {
    if (iVar3 < iVar2) {
LAB_006563ab:
      if (param_1 != 0) {
        if (local_8 < DAT_007e8828) {
          DAT_007e87cc = local_8;
        }
        if (DAT_007e8808 < local_c) {
          DAT_007e880c = local_c;
        }
        DAT_007e8828 = local_8;
        DAT_007e8808 = local_c;
      }
      return param_1;
    }
    if (*puVar6 <= uVar7) {
      local_c = iVar3 + 1;
      goto LAB_006563ab;
    }
    *puVar6 = uVar7;
    *puVar5 = local_4;
    iVar4 = iVar4 + iVar1 * -2;
    iVar3 = iVar3 + -1;
    puVar6 = puVar6 + -1;
    puVar5 = puVar5 + -1;
    uVar7 = uVar7 - iVar4;
  } while( true );
}

