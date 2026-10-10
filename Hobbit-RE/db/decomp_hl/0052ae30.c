
int __thiscall FUN_0052ae30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  float local_4a8;
  int local_4a4;
  undefined1 local_4a0 [4];
  undefined1 local_49c [4];
  undefined1 local_498 [12];
  undefined1 local_48c [1152];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d814b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00671410();
  local_4a4 = *(int *)(param_1 + 0x78);
  local_4 = 0;
  uVar4 = 1;
  if (local_4a4 != 0x20) {
    uVar4 = param_3;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x11;
  FUN_00647ed0(param_2,s_DemoLoop_00735e38);
  DAT_00762644 = 0;
  DAT_00760360 = 0;
  thunk_FUN_006ab830();
  uVar5 = DAT_00760198;
  uVar1 = FUN_0052ac90(DAT_00760198);
  FUN_006ab560(uVar1,uVar5);
  do {
    do {
      FUN_0066f810();
      iVar2 = FUN_006710d0(0x5d,0);
    } while (iVar2 != 0);
    iVar2 = FUN_006710d0(0xb9,0);
  } while (iVar2 != 0);
  iVar2 = FUN_006ab250(param_2,0,0);
  if (iVar2 != 0) {
    DAT_00762644 = 0;
    FUN_006715c0(0x3f860a92);
    local_4b8 = 0x42c80000;
    local_4b4 = 0x42c80000;
    local_4b0 = 0x43480000;
    FUN_00671670(&local_4b8);
    local_4b8 = 0;
    local_4b4 = 0;
    local_4b0 = 0;
    FUN_006723d0(&local_4b8,0);
    FUN_00671650(0x3dcccccd,0x447a0000);
    FUN_0065f910(local_48c);
    FUN_0065f960(local_48c,0);
    FUN_0065fc10(0);
    FUN_0065f8a0(local_49c,local_4a0);
    local_4a8 = (float)param_4;
    local_4ac = 0x44200000;
    iVar3 = FUN_0052ade0(uVar4);
    while (iVar3 == 0) {
      FUN_0065f910(local_48c);
      FUN_0065f960(local_48c,0);
      FUN_0065fc10(0);
      FUN_006628c0();
      FUN_0066f810();
      FUN_0054eca0(0x3f800000);
      FUN_0054edf0();
      FUN_0052b560(0x3f800000);
      if (DAT_00813180 != 0) break;
      FUN_006ab6c0(&local_4ac,local_498);
      FUN_006ab2e0(local_498,&local_4ac);
      FUN_006a0490(0x3f800000);
      FUN_006a1050(0x3f800000);
      FUN_006a1120();
      FUN_0065f480();
      iVar3 = FUN_0052ade0(uVar4);
    }
    FUN_006ab2a0();
    thunk_FUN_006abb40();
    if (*(int *)(param_1 + 0x78) == 0x11) {
      *(int *)(param_1 + 0x78) = local_4a4;
    }
  }
  local_4 = 0xffffffff;
  FUN_00671570();
  ExceptionList = local_c;
  return iVar2;
}

