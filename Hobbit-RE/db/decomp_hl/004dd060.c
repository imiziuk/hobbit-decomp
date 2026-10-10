
void __fastcall FUN_004dd060(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0064e870(3,s_UseItems_called_0072e418);
  if ((*(int *)(param_1 + 0x14c) != 1) || ((*(uint *)(param_1 + 0x120) & 0x800) == 0)) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x138)) {
      do {
        if ((*(uint *)(param_1 + 0x120) >> 10 & 1) == 0) {
          if (*(int *)(*(int *)(param_1 + 0x13c) + iVar1 * 4) !=
              *(int *)(*(int *)(param_1 + 0x164) + iVar1 * 4)) goto LAB_004dd0bc;
        }
        else {
          iVar2 = 0;
          if (*(int *)(param_1 + 0x160) < 1) goto LAB_004dd0bc;
          piVar3 = *(int **)(param_1 + 0x164);
          while (*piVar3 != *(int *)(*(int *)(param_1 + 0x13c) + iVar1 * 4)) {
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
            if (*(int *)(param_1 + 0x160) <= iVar2) goto LAB_004dd0bc;
          }
          if (iVar2 == -1) goto LAB_004dd0bc;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x138));
    }
LAB_004dd0e7:
    FUN_0064e870(3,s_UseItems___Match__Calling_OnActi_0072e3ac);
    FUN_004aaaf0(s_OnActivate_0071fa1c,&DAT_0071fa28,param_1);
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x160)) {
    piVar3 = *(int **)(param_1 + 0x164);
    do {
      if (*piVar3 == **(int **)(param_1 + 0x13c)) {
        if (iVar1 != -1) goto LAB_004dd0e7;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x160));
  }
LAB_004dd0bc:
  FUN_0064e870(3,s_UseItems___No_match__Calling_OnF_0072e3e8);
  FUN_004aaaf0(s_OnFailedActivate_0072e3d4,&DAT_0071fa28,param_1);
  return;
}

