
void __fastcall FUN_005c9580(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[8] != 0) {
    iVar5 = param_1[8] + -1;
    iVar6 = -1;
    if (-1 < iVar5) {
      puVar3 = (uint *)(param_1[9] + iVar5 * 0x18);
      iVar2 = iVar5;
      do {
        iVar6 = iVar2;
        if ((*puVar3 & puVar3[1]) != 0xffffffff) break;
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + -6;
        iVar6 = -1;
      } while (-1 < iVar2);
    }
    if (iVar6 != iVar5) {
      iVar6 = iVar6 + 1;
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      iVar4 = iVar6 * 0x18;
      iVar2 = thunk_FUN_0064ff70(iVar4,s_C__projects_meridian_Support_Poo_00746434,0x1bd);
      FUN_00648480(iVar2,param_1[9],iVar4);
      iVar5 = iVar6;
      if (iVar6 < param_1[8]) {
        do {
          (**(code **)(*param_1 + 8))(*(undefined4 *)(param_1[9] + 8 + iVar4));
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x18;
        } while (iVar5 < param_1[8]);
      }
      FUN_0064ff40(param_1[9],s_C__projects_meridian_Support_Poo_00746434,0x1c6);
      iVar5 = 0;
      param_1[9] = iVar2;
      param_1[8] = iVar6;
      param_1[10] = 0;
      param_1[0xb] = 0;
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          iVar2 = param_1[9];
          iVar4 = *(int *)(iVar2 + iVar6);
          iVar1 = *(int *)(iVar2 + 4 + iVar6);
          iVar2 = iVar2 + iVar6;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          if (iVar4 != 0 || iVar1 != 0) {
            *(undefined4 *)(iVar2 + 0xc) = 0;
            *(int *)(iVar2 + 0x10) = param_1[0xb];
            if (param_1[0xb] != 0) {
              *(int *)(param_1[0xb] + 0xc) = iVar2;
            }
            param_1[0xb] = iVar2;
            if (param_1[10] == 0) {
              param_1[10] = iVar2;
            }
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x18;
        } while (iVar5 < param_1[8]);
      }
      param_1[4] = (int)(short)param_1[7] * param_1[8];
      param_1[0xe] = 1;
    }
  }
  return;
}

