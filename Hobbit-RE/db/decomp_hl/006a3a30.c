
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a3a30(int param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_44;
  int local_40;
  int local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  iVar7 = 0;
  local_4 = 0;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0x3f000000;
  iVar5 = FUN_0069f880();
  FUN_0066c3a0(7);
  piVar1 = (int *)(iVar5 + 0x2c);
  FUN_0066db80(piVar1,0);
  local_14 = (float)param_2[1];
  local_44 = 0;
  local_40 = 0;
  if (0 < *(int *)(iVar5 + 0x54)) {
    do {
      local_18 = (float)*piVar4;
      if ((*(int *)(iVar5 + 0x54) == 3) && (local_40 == 1)) {
        iVar8 = *(int *)(iVar5 + 100);
        iVar6 = *(int *)(iVar5 + 0x50) * 0x20 + iVar8;
        local_2c = (float)(piVar4[3] - piVar4[1]) -
                   ((float)(*(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 4)) +
                   (float)(*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 4)));
      }
      else {
        local_2c = (float)(*(int *)(iVar7 * 0x10 + *(int *)(iVar5 + 100) + 0xc) -
                          *(int *)(iVar7 * 0x10 + 4 + *(int *)(iVar5 + 100)));
      }
      param_2 = (int *)0x0;
      if (0 < *(int *)(iVar5 + 0x50)) {
        iVar8 = iVar7 << 4;
        do {
          if (*(char *)(iVar5 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar5 + 0x40);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 4);
          }
          local_20 = ((float)*(int *)(*(int *)(iVar5 + 100) + iVar8) + _DAT_006e936c) /
                     (float)(int)sVar2;
          if (*(char *)(iVar5 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar5 + 0x42);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 6);
          }
          local_1c = ((float)*(int *)(*(int *)(iVar5 + 100) + 4 + iVar8) + _DAT_006e936c) /
                     (float)(int)sVar2;
          if (*(char *)(iVar5 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar5 + 0x40);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 4);
          }
          local_28 = (float)*(int *)(*(int *)(iVar5 + 100) + 8 + iVar8) / (float)(int)sVar2;
          if (*(char *)(iVar5 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar5 + 0x42);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 6);
          }
          local_24 = (float)*(int *)(*(int *)(iVar5 + 100) + 0xc + iVar8) / (float)(int)sVar2;
          if ((*(int *)(iVar5 + 0x50) == 3) && (param_2 == (int *)0x1)) {
            piVar3 = *(int **)(iVar5 + 100);
            local_30 = (float)(piVar4[2] - *piVar4) -
                       ((float)(piVar3[10] - piVar3[8]) + (float)(piVar3[2] - *piVar3));
          }
          else {
            local_30 = (float)(*(int *)(*(int *)(iVar5 + 100) + 8 + iVar8) -
                              *(int *)(*(int *)(iVar5 + 100) + iVar8));
          }
          if ((local_40 == 0) && (param_2 == (int *)0x1)) {
            if (*(char *)(iVar5 + 0x48) == '\0') {
              sVar2 = *(short *)(iVar5 + 0x40);
            }
            else {
              sVar2 = *(short *)(*piVar1 + 4);
            }
            local_3c = (int)sVar2;
            local_20 = ((float)*(int *)(*(int *)(iVar5 + 100) + iVar8) + _DAT_006e936c) /
                       (float)local_3c;
            if (*(char *)(iVar5 + 0x48) == '\0') {
              sVar2 = *(short *)(iVar5 + 0x42);
            }
            else {
              sVar2 = *(short *)(*piVar1 + 6);
            }
            local_3c = (int)sVar2;
            local_1c = ((float)*(int *)(*(int *)(iVar5 + 100) + 4 + iVar8) + _DAT_006e936c) /
                       (float)local_3c;
            if (*(char *)(iVar5 + 0x48) == '\0') {
              sVar2 = *(short *)(iVar5 + 0x40);
            }
            else {
              sVar2 = *(short *)(*piVar1 + 4);
            }
            local_3c = (int)sVar2;
            local_28 = (float)*(int *)(*(int *)(iVar5 + 100) + 8 + iVar8) / (float)local_3c;
            if (*(char *)(iVar5 + 0x48) == '\0') {
              sVar2 = *(short *)(iVar5 + 0x42);
            }
            else {
              sVar2 = *(short *)(*piVar1 + 6);
            }
            local_3c = (int)sVar2;
            local_24 = (float)*(int *)(*(int *)(iVar5 + 100) + 0xc + iVar8) / (float)local_3c;
            piVar3 = *(int **)(iVar5 + 100);
            local_30 = (((float)(piVar4[2] - *piVar4) -
                        ((float)(piVar3[2] - *piVar3) + (float)(piVar3[10] - piVar3[8]))) -
                       (float)(*(int *)(param_1 + 0x140) + 8)) * _DAT_006e936c;
            FUN_0066e6b0(&local_18,&local_30,&local_20,&local_28);
            local_18 = (float)*(int *)(param_1 + 0x140) + local_30 + local_18 + _DAT_006ec08c;
          }
          FUN_0066e6b0(&local_18,&local_30,&local_20,&local_28);
          local_18 = local_30 + local_18;
          iVar7 = local_44 + 1;
          iVar8 = iVar8 + 0x10;
          param_2 = (int *)((int)param_2 + 1);
          local_44 = iVar7;
        } while ((int)param_2 < *(int *)(iVar5 + 0x50));
      }
      local_14 = local_2c + local_14;
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)(iVar5 + 0x54));
  }
  FUN_0066d9a0();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

