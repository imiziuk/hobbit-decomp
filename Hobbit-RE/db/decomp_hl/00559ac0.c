
void FUN_00559ac0(int param_1)

{
  byte *pbVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9f98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_layer_mgr__DeactivateObjects_0073e1d8);
  param_1 = param_1 * 0x44;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x42 + DAT_00771f64) & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x40 + DAT_00771f64);
    iVar4 = DAT_0076f648;
    iVar5 = DAT_00771f64;
    while (sVar2 != -1) {
      iVar6 = sVar2 * 0x14;
      piVar3 = *(int **)(iVar6 + iVar4);
      if ((piVar3 != (int *)0x0) && ((*(byte *)((int)piVar3 + 0x7f) & 0x10) != 0)) {
        (**(code **)(*piVar3 + 200))();
        iVar4 = DAT_0076f648;
        iVar5 = DAT_00771f64;
      }
      sVar2 = *(short *)(iVar6 + 8 + iVar4);
    }
    pbVar1 = (byte *)(param_1 + 0x42 + iVar5);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

