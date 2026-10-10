
void FUN_00559a00(int param_1)

{
  ushort *puVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_layer_mgr__ActivateObjects_0073e1bc);
  param_1 = param_1 * 0x44;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x42 + DAT_00771f64) & 1) == 0) {
    puVar1 = (ushort *)(param_1 + 0x42 + DAT_00771f64);
    *puVar1 = *puVar1 | 1;
    sVar2 = *(short *)(param_1 + 0x40 + DAT_00771f64);
    iVar4 = DAT_0076f648;
    while (sVar2 != -1) {
      iVar5 = sVar2 * 0x14;
      piVar3 = *(int **)(iVar5 + iVar4);
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x7f) & 0x10) == 0)) {
        (**(code **)(*piVar3 + 0xc4))();
        iVar4 = DAT_0076f648;
      }
      sVar2 = *(short *)(iVar5 + 8 + iVar4);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

