
void __thiscall FUN_005c9290(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = param_1[5];
  if ((0 < iVar1) && (iVar1 <= param_2)) {
    param_2 = iVar1;
  }
  iVar1 = param_2 / (int)(short)param_1[7];
  if ((short)param_1[7] * iVar1 < param_2) {
    iVar1 = iVar1 + 1;
  }
  if (param_1[8] < iVar1) {
    if (param_1[0xb] == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = (param_1[0xb] - param_1[9]) / 0x18;
    }
    if (param_1[10] == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = (param_1[10] - param_1[9]) / 0x18;
    }
    iVar2 = thunk_FUN_0064ffa0(param_1[9],iVar1 * 0x18,s_C__projects_meridian_Support_Poo_00746434,
                               0x114);
    param_1[9] = iVar2;
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar2 + iVar4 * 0x18;
    }
    param_1[0xb] = iVar4;
    if (iVar5 == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + iVar5 * 0x18;
    }
    param_1[10] = iVar2;
    iVar4 = param_1[8];
    if (iVar4 < iVar1) {
      iVar5 = iVar4 * 0x18;
      iVar4 = iVar1 - iVar4;
      do {
        plVar6 = (longlong *)(param_1[9] + iVar5);
        if ((short)param_1[7] == 0x40) {
          *(undefined4 *)plVar6 = 0xffffffff;
          *(undefined4 *)((int)plVar6 + 4) = 0xffffffff;
        }
        else {
          lVar7 = __allshl();
          *plVar6 = lVar7 + -1;
        }
        uVar3 = (**(code **)(*param_1 + 4))();
        *(undefined4 *)(plVar6 + 1) = uVar3;
        *(undefined4 *)((int)plVar6 + 0xc) = 0;
        *(int *)(plVar6 + 2) = param_1[0xb];
        if (param_1[0xb] != 0) {
          *(longlong **)(param_1[0xb] + 0xc) = plVar6;
        }
        param_1[0xb] = (int)plVar6;
        if (param_1[10] == 0) {
          param_1[10] = (int)plVar6;
        }
        iVar5 = iVar5 + 0x18;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[0xe] = 1;
    param_1[8] = iVar1;
    param_1[4] = (short)param_1[7] * iVar1;
  }
  return;
}

