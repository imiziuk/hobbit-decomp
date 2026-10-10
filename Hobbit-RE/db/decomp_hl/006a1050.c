
void __thiscall FUN_006a1050(float *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7688;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_manager__Update_00755bbc);
  fVar1 = *param_1;
  iVar4 = 0;
  local_4 = 0;
  *param_1 = param_2 + fVar1;
  fVar6 = (float10)FUN_0064c6b0(param_2 + fVar1,0x3f800000);
  *param_1 = (float)fVar6;
  if (0 < (int)param_1[4]) {
    do {
      piVar2 = *(int **)((int)param_1[5] + iVar4 * 4);
      if ((*piVar2 != 0) && (iVar5 = 0, 0 < piVar2[0x172])) {
        do {
          piVar3 = *(int **)(piVar2[0x173] + iVar5 * 4);
          (**(code **)(*piVar3 + 0x38))(piVar3,param_2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar2[0x172]);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[4]);
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

