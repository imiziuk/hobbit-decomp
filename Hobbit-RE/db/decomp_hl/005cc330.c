
void __thiscall FUN_005cc330(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df9b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_AIAction__OnAdvanceLogic_007465a4);
  fVar1 = (float)param_1[3];
  local_4 = 0;
  param_1[3] = (int)(param_2 + fVar1);
  if (((*(byte *)(param_1 + 5) & 2) != 0) && ((float)param_1[4] <= param_2 + fVar1)) {
    iVar2 = 0;
    if (0 < param_1[2]) {
      do {
        (**(code **)(*param_1 + 4))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[2]);
    }
    param_1[2] = 0;
    param_1[5] = param_1[5] & 0xfffffffd;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

