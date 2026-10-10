
void FUN_0055a2f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_layer_mgr__CalcNavConnections_0073e2c0);
  local_4 = 0;
  iVar2 = DAT_0076f660;
  if (0 < DAT_0076f660) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      piVar1 = *(int **)(iVar3 + DAT_0076f648);
      if (((piVar1 != (int *)0x0) && ((char)piVar1[0x1f] == '#')) &&
         ((*(byte *)((int)piVar1 + 0x7f) & 0x10) == 0)) {
        (**(code **)(*piVar1 + 0xc4))();
        iVar2 = DAT_0076f660;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar4 < iVar2);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar4 + DAT_0076f648) != 0) &&
         (*(char *)(*(int *)(iVar4 + DAT_0076f648) + 0x7c) == '#')) {
        FUN_0049dd50();
        iVar2 = DAT_0076f660;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(iVar4 + DAT_0076f648);
      if (((piVar1 != (int *)0x0) && ((char)piVar1[0x1f] == '#')) &&
         ((*(byte *)(*(short *)(iVar4 + 10 + DAT_0076f648) * 0x44 + 0x42 + DAT_00771f64) & 1) == 0))
      {
        (**(code **)(*piVar1 + 200))();
        iVar2 = DAT_0076f660;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < iVar2);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

