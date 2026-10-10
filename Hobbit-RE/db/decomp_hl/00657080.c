
void FUN_00657080(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_20 = (int *)(DAT_007eb848 + (((int)param_1 * 0x40 + param_2) * 0x40 + param_3) * 4);
  local_8 = (int)param_1;
  if ((int)param_1 <= param_4) {
    do {
      param_1 = local_20;
      iVar3 = param_2;
      if (param_2 <= param_5) {
        do {
          iVar2 = param_3;
          piVar4 = param_1;
          if (param_3 <= param_6) {
            do {
              if (*piVar4 != 0) {
                iVar1 = *piVar4;
                local_1c = local_1c + iVar1;
                local_14 = local_14 + iVar1 * local_8;
                local_10 = local_10 + iVar1 * iVar3;
                local_c = local_c + iVar1 * iVar2;
                local_18 = local_18 + (iVar2 * iVar2 + iVar3 * iVar3 + local_8 * local_8) * iVar1;
              }
              iVar2 = iVar2 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar2 <= param_6);
          }
          param_1 = param_1 + 0x40;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= param_5);
      }
      local_20 = local_20 + 0x1000;
      local_8 = local_8 + 1;
    } while (local_8 <= param_4);
  }
  *param_7 = local_1c;
  *param_8 = local_18;
  *param_9 = local_14;
  *param_10 = local_10;
  *param_11 = local_c;
  return;
}

