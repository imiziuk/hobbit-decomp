
void __fastcall FUN_00681030(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x30);
      iVar5 = *(int *)(iVar4 + 8 + iVar6);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar4 + 8 + iVar6) = 0xffffffff;
      }
      else {
        *(int *)(iVar4 + 8 + iVar6) = iVar5 - iVar6;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar7 < *(int *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x20) = iVar7;
  iVar7 = *(int *)(param_1 + 0x68) + 0x400;
  *(int *)(param_1 + 0x68) = iVar7;
  uVar3 = thunk_FUN_0064ffa0(*(undefined4 *)(param_1 + 0x30),iVar7 * 0x18,
                             s_C__projects_meridian_xCore_entro_00753bd0,0x94);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x30);
      iVar5 = *(int *)(iVar4 + 8 + iVar6);
      if (iVar5 == -1) {
        *(undefined4 *)(iVar4 + 8 + iVar6) = 0;
      }
      else {
        *(int *)(iVar4 + 8 + iVar6) = iVar5 + iVar6;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar7 < *(int *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x20);
  }
  iVar4 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x20) = iVar7;
  if (iVar4 < *(int *)(param_1 + 0x68)) {
    iVar7 = iVar4 * 0x18;
    do {
      *(undefined4 *)(iVar7 + 0xc + *(int *)(param_1 + 0x30)) = 0;
      *(undefined4 *)(iVar7 + 8 + *(int *)(param_1 + 0x30)) = 0;
      *(undefined4 *)(iVar7 + 0x10 + *(int *)(param_1 + 0x30)) = 0;
      *(undefined4 *)(iVar7 + 0x14 + *(int *)(param_1 + 0x30)) = 0;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x68));
  }
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  iVar7 = param_1 + 0x34;
  iVar4 = param_1 + 0x4c;
  piVar2 = (int *)(param_1 + 0x18);
  *(int *)iVar7 = iVar7;
  *(int *)(param_1 + 0x38) = iVar7;
  *(int *)iVar4 = iVar4;
  *(int *)(param_1 + 0x50) = iVar4;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x50);
    *piVar2 = iVar4;
    *(int **)(param_1 + 0x50) = piVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_00680fde;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x38);
    *piVar2 = iVar7;
    *(int **)(param_1 + 0x38) = piVar2;
  }
  **(undefined4 **)(param_1 + 0x1c) = piVar2;
LAB_00680fde:
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0xc + iVar5);
      piVar2 = (int *)(*(int *)(param_1 + 0x30) + iVar5);
      if (iVar1 == 0) {
        piVar2[1] = *(int *)(param_1 + 0x50);
        *piVar2 = iVar4;
        *(int **)(param_1 + 0x50) = piVar2;
LAB_0068101a:
        *(int **)piVar2[1] = piVar2;
      }
      else if (iVar1 == 1) {
        piVar2[1] = *(int *)(param_1 + 0x38);
        *piVar2 = iVar7;
        *(int **)(param_1 + 0x38) = piVar2;
        goto LAB_0068101a;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar6 < *(int *)(param_1 + 100));
  }
  return;
}

