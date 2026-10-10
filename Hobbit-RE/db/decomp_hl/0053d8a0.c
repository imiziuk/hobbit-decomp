
undefined4 __thiscall FUN_0053d8a0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9194;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064f350(param_1,0x88,1,param_2);
  if (param_3 != 0) {
    FUN_00648a60(param_3,0,0,local_8c,0);
    FUN_00647d70(param_1,local_8c,0x3b);
  }
  if (*(int *)(param_1 + 0x40) == 0x7d1) {
    uVar3 = FUN_006747f0(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    uVar3 = FUN_006747f0(*(undefined4 *)(param_1 + 0x80));
    iVar9 = *(int *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    pvVar4 = operator_new(iVar9 * 0x15c);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else if (-1 < iVar9 + -1) {
      do {
        FUN_0053eba0();
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(void **)(param_1 + 0x6c) = pvVar4;
    local_4 = 0xffffffff;
    FUN_0064f350(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78),1,param_2);
    FUN_0064f350(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80),1,param_2);
    FUN_0064f350(*(undefined4 *)(param_1 + 0x6c),0x15c,*(undefined4 *)(param_1 + 100),param_2);
    FUN_0053dd20(0);
    iVar9 = *(int *)(param_1 + 100);
    piVar5 = (int *)operator_new(iVar9 * 0x18 + 4);
    local_4 = 1;
    if (piVar5 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = piVar5 + 1;
      *piVar5 = iVar9;
      FUN_006c043b(piVar6,0x18,iVar9,FUN_0053ed40,FUN_0053edb0);
    }
    iVar9 = 0;
    *(int **)(param_1 + 0x68) = piVar6;
    iVar11 = 0;
    local_4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 100)) {
      do {
        FUN_0053ee10(*(int *)(param_1 + 0x6c) + iVar9);
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x15c;
      } while (iVar11 < *(int *)(param_1 + 100));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      iVar9 = 0;
      iVar11 = 0;
      do {
        *(undefined4 *)(iVar9 + 8 + *(int *)(param_1 + 0x74)) = 0;
        *(undefined4 *)(iVar9 + *(int *)(param_1 + 0x74)) = 0;
        *(undefined4 *)(iVar9 + 4 + *(int *)(param_1 + 0x74)) = 0;
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x18;
      } while (iVar11 < *(int *)(param_1 + 0x70));
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar11 = 0;
      do {
        *(int *)(iVar11 + 0x20 + *(int *)(param_1 + 0x58)) = param_1;
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0x50;
      } while (iVar9 < *(int *)(param_1 + 0x54));
    }
    uVar10 = *(int *)(param_1 + 0x54) * 2;
    uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0x54) * 0x10,
                               s_C__projects_meridian_Support_Ani_00737970,0x24e);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    iVar9 = 0;
    if (0 < (int)uVar10) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar9 * 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4 + iVar9 * 8) = 0xffffffff;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar10);
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      local_90 = 0;
      do {
        pcVar8 = (char *)(*(int *)(param_1 + 0x58) + local_90);
        uVar12 = 0x1505;
        cVar1 = *(char *)(*(int *)(param_1 + 0x58) + local_90);
        while (uVar7 = (uint)cVar1, uVar7 != 0) {
          pcVar8 = pcVar8 + 1;
          if ((0x60 < (int)uVar7) && ((int)uVar7 < 0x7b)) {
            uVar7 = uVar7 - 0x20;
          }
          uVar12 = uVar12 * 0x21 ^ uVar7;
          cVar1 = *pcVar8;
        }
        uVar7 = uVar12 % uVar10;
        iVar11 = *(int *)(param_1 + 0x3c);
        iVar2 = *(int *)(iVar11 + uVar7 * 8);
        while (iVar2 != 0) {
          uVar7 = uVar7 + 1;
          if (uVar7 == uVar10) {
            uVar7 = 0;
          }
          iVar2 = *(int *)(iVar11 + uVar7 * 8);
        }
        *(uint *)(iVar11 + uVar7 * 8) = uVar12;
        *(int *)(*(int *)(param_1 + 0x3c) + 4 + uVar7 * 8) = iVar9;
        iVar9 = iVar9 + 1;
        local_90 = local_90 + 0x50;
      } while (iVar9 < *(int *)(param_1 + 0x54));
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}

