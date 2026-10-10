
undefined4 __thiscall FUN_006b70a0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e83c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_mgr__InitEffect_00757bd8);
  iVar5 = 0;
  local_4 = 0;
  piVar4 = (int *)(param_1 + 0x1000);
  *param_2 = -1;
  do {
    if ((*piVar4 != 0) &&
       (iVar2 = FUN_00647ed0(*(undefined4 *)(*piVar4 + 0x20),param_3), iVar2 == 0)) {
      iVar5 = *(int *)(param_1 + 0x1000 + iVar5 * 4);
      if (iVar5 != 0) {
        *param_2 = 0;
        goto LAB_006b7123;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 0x400);
LAB_006b71d5:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
  while (iVar2 = *param_2 + 1, *param_2 = iVar2, iVar2 < 0x400) {
LAB_006b7123:
    if (*(int *)(param_1 + *param_2 * 4) == 0) break;
  }
  if (*param_2 == 0x400) goto LAB_006b71d5;
  if (((*(byte *)(iVar5 + 4) & 1) == 0) || (*(int *)(iVar5 + 0x1c) == 0)) {
    FUN_006b7010(*param_2,iVar5);
    if ((*(byte *)(iVar5 + 4) & 1) == 0) goto LAB_006b7222;
    if (*(int *)(iVar5 + 0x1c) == 1) {
      *(int *)(iVar5 + 0x18) = *param_2;
      iVar2 = *(int *)(param_1 + *param_2 * 4);
      *(uint *)(iVar2 + 0x94) = *(uint *)(iVar2 + 0x94) & 0xfffffffe;
      iVar2 = *(int *)(param_1 + *param_2 * 4);
      *(uint *)(iVar2 + 0x94) = *(uint *)(iVar2 + 0x94) | 0x80000000;
      *param_2 = -1;
    }
  }
  if ((*(byte *)(iVar5 + 4) & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + *(int *)(iVar5 + 0x18) * 4);
    if (*param_2 == -1) {
      *param_2 = 0;
      do {
        if (*(int *)(param_1 + *param_2 * 4) == 0) break;
        iVar2 = *param_2 + 1;
        *param_2 = iVar2;
      } while (iVar2 < 0x400);
      if (*param_2 == 0x400) goto LAB_006b71d5;
    }
    uVar3 = thunk_FUN_0064ff70(0xa8,s_C__projects_meridian_xCore_Auxil_00757b78,0x2f4);
    FUN_006bace0(uVar3);
    FUN_006ba720(uVar1,iVar5);
    *(undefined4 *)(param_1 + *param_2 * 4) = uVar3;
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
  }
LAB_006b7222:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

