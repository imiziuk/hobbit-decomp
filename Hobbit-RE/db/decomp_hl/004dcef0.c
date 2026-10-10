
void __thiscall FUN_004dcef0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_4;
  
  iVar2 = (int)param_2;
  iVar3 = FUN_004de6a0();
  if ((iVar3 != 0) && (param_2 != (int *)0xffffffff)) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x138)) {
      param_2 = *(int **)(param_1 + 0x13c);
      iVar6 = 0;
      do {
        if (*param_2 == -1) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 8 + iVar6);
          if (iVar1 == 0) break;
          iVar4 = 0;
          if (0 < iVar1) {
            piVar5 = *(int **)(*(int *)(param_1 + 0x19c) + iVar6 + 0xc);
            do {
              if (*piVar5 == iVar2) break;
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar4 < iVar1);
          }
          if (iVar4 < iVar1) break;
        }
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + 0x1c;
      } while (iVar3 < *(int *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x138) <= iVar3) {
      FUN_00659600(s_QuestItemFailure_0071e668,1);
      return;
    }
    *(int *)(*(int *)(param_1 + 0x13c) + iVar3 * 4) = iVar2;
    local_40 = FUN_00434e80(iVar2);
    local_4 = 3;
    local_44 = param_1;
    local_3c = iVar3;
    FUN_004aab50(s_OnUse_0072e3a4,&PTR_LAB_0072a340,&local_44);
    if ((*(int *)(param_1 + 0x14c) == 1) && ((*(uint *)(param_1 + 0x120) & 0x800) != 0)) {
      if ((*(int *)(param_1 + 0x138) == 1) && (**(int **)(param_1 + 0x13c) != -1)) {
        FUN_004dd060();
        return;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x138);
      iVar3 = 0;
      if (0 < iVar2) {
        piVar5 = *(int **)(param_1 + 0x13c);
        do {
          if (*piVar5 == -1) break;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar3 < iVar2);
      }
      if (iVar2 <= iVar3) {
        FUN_004dd060();
      }
    }
  }
  return;
}

