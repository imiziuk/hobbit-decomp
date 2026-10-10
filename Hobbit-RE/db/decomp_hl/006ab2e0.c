
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ab2e0(int param_1,float *param_2,float *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4c4;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined1 local_48c [1152];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e812b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00674e70();
  iVar5 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_0059ed70();
  }
  iVar3 = FUN_006abc80();
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    FUN_00671410();
    local_4 = 0;
    FUN_00671650(0x41200000);
    FUN_00671930(0x42c80000);
    local_4b0 = 0x44a98000;
    local_4ac = 0xc4f04000;
    local_4a8 = 0xc38e8000;
    FUN_00671670();
    local_4b0 = 0;
    local_4ac = 0;
    local_4a8 = 0;
    FUN_006723d0(&local_4b0);
    FUN_0065f910();
    FUN_0065f960(local_48c,0);
    FUN_0065fc10(0);
    FUN_006628c0();
    iVar4 = FUN_0065f190(s_movie_player_00756144);
    if (iVar4 != 0) {
      local_4b4 = param_2[2];
      piVar2 = *(int **)(param_1 + 0x54);
      if ((char)piVar2[7] == '\0') {
        sVar1 = (short)piVar2[5];
      }
      else {
        sVar1 = *(short *)(*piVar2 + 4);
      }
      local_49c = (float)**(int **)(param_1 + 0x1c) / (float)(int)sVar1;
      if ((char)piVar2[7] == '\0') {
        sVar1 = *(short *)((int)piVar2 + 0x16);
      }
      else {
        sVar1 = *(short *)(*piVar2 + 6);
      }
      local_4c4 = (int)sVar1;
      local_498 = (float)(*(int **)(param_1 + 0x1c))[1] / (float)local_4c4;
      local_494 = 0;
      local_490 = 0;
      local_4bc = *param_2 - _DAT_006e936c;
      local_4b8 = param_2[1] - _DAT_006e936c;
      local_4a0 = param_3[1];
      local_4a4 = *param_3;
      if (0 < iVar3) {
        do {
          FUN_0066c3a0(7);
          FUN_00674e70();
          FUN_0066db80(*(int *)(param_1 + 0x54) + iVar5,0);
          FUN_0066e6b0(&local_4bc,&local_4a4,&local_494,&local_49c);
          local_4bc = local_4bc + local_4a4;
          FUN_0066d9a0();
          iVar5 = iVar5 + 0x20;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_0065f430();
    }
    FUN_0059ed70();
    *(undefined4 *)(param_1 + 0x54) = 0;
    local_4 = 0xffffffff;
    FUN_00671570();
  }
  ExceptionList = local_c;
  return;
}

