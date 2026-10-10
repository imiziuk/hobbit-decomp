
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0069f570(int param_1,int param_2,int *param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_38;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e73d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0x3f000000;
  iVar3 = *(int *)(*(int *)(param_1 + 0x84) + param_2 * 4);
  local_4 = 0;
  FUN_0066c3a0(7);
  piVar1 = (int *)(iVar3 + 0x2c);
  FUN_0066dc10(piVar1,1,1);
  if (param_6 != 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
  }
  param_4 = *(int *)(iVar3 + 0x50) * *(int *)(iVar3 + 0x54) * param_4;
  local_14 = (float)param_3[1];
  local_38 = 0;
  param_2 = param_4;
  if (0 < *(int *)(iVar3 + 0x54)) {
    do {
      local_18 = (float)*param_3;
      if ((*(int *)(iVar3 + 0x54) == 3) && (local_38 == 1)) {
        iVar6 = *(int *)(iVar3 + 100);
        iVar5 = *(int *)(iVar3 + 0x50) * 0x20 + iVar6;
        local_2c = (float)(param_3[3] - param_3[1]) -
                   ((float)(*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 4)) +
                   (float)(*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 4)));
        param_4 = param_2;
      }
      else {
        iVar6 = param_4 * 0x10 + *(int *)(iVar3 + 100);
        local_2c = (float)(*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 4));
      }
      param_6 = 0;
      if (0 < *(int *)(iVar3 + 0x50)) {
        iVar6 = param_4 << 4;
        do {
          if (*(char *)(iVar3 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar3 + 0x40);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 4);
          }
          local_20 = ((float)*(int *)(iVar6 + *(int *)(iVar3 + 100)) + _DAT_006e936c) /
                     (float)(int)sVar2;
          if (*(char *)(iVar3 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar3 + 0x42);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 6);
          }
          local_1c = ((float)*(int *)(iVar6 + 4 + *(int *)(iVar3 + 100)) + _DAT_006e936c) /
                     (float)(int)sVar2;
          if (*(char *)(iVar3 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar3 + 0x40);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 4);
          }
          local_28 = (float)*(int *)(iVar6 + 8 + *(int *)(iVar3 + 100)) / (float)(int)sVar2;
          if (*(char *)(iVar3 + 0x48) == '\0') {
            sVar2 = *(short *)(iVar3 + 0x42);
          }
          else {
            sVar2 = *(short *)(*piVar1 + 6);
          }
          local_24 = (float)*(int *)(iVar6 + 0xc + *(int *)(iVar3 + 100)) / (float)(int)sVar2;
          if ((*(int *)(iVar3 + 0x50) == 3) && (param_6 == 1)) {
            piVar4 = *(int **)(iVar3 + 100);
            local_30 = (float)(param_3[2] - *param_3) -
                       ((float)(piVar4[2] - *piVar4) + (float)(piVar4[10] - piVar4[8]));
          }
          else {
            local_30 = (float)(*(int *)(*(int *)(iVar3 + 100) + 8 + iVar6) -
                              *(int *)(*(int *)(iVar3 + 100) + iVar6));
          }
          FUN_0066e6b0(&local_18,&local_30,&local_20,&local_28);
          local_18 = local_30 + local_18;
          param_4 = param_2 + 1;
          iVar6 = iVar6 + 0x10;
          param_6 = param_6 + 1;
          param_2 = param_4;
        } while (param_6 < *(int *)(iVar3 + 0x50));
      }
      local_14 = local_2c + local_14;
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(iVar3 + 0x54));
  }
  FUN_0066d9a0();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

