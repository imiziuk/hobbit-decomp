
void __thiscall FUN_00631e90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e54a8;
  local_c = ExceptionList;
  if (*(short *)(param_1 + 0x42) == 7) {
    ExceptionList = &local_c;
    FUN_005af9f0(*(undefined4 *)(param_1 + 0x74));
  }
  else if (param_2 == 5) {
    ExceptionList = &local_c;
    if (0 < *(int *)(param_1 + 0x50)) {
      ExceptionList = &local_c;
      FUN_00649b20(&DAT_0075b6e0);
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
      iVar2 = *(int *)(iVar1 + 0x74);
      local_4 = 0;
      if (iVar2 == DAT_0074a450) {
        iVar2 = *(int *)(iVar1 + 0x34);
        if (iVar2 == 0) {
          iVar2 = FUN_00647b10(0,*(int *)(param_1 + 0x50) + -1);
        }
        else if (iVar2 == 1) {
          iVar2 = **(int **)(iVar1 + 0x38);
        }
        else {
          iVar1 = FUN_00647b10(0,iVar2 + -1);
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4)
                                   + 0x38) + iVar1 * 4);
        }
      }
      if ((*(int *)(param_1 + 0x50) <= iVar2) || (iVar2 < 0)) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 100) = iVar2;
      iVar2 = FUN_00567b20(1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x68);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x6c);
      FUN_005af9f0(iVar2);
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
  }
  else if (param_2 == 6) {
    ExceptionList = &local_c;
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 1;
    FUN_005af9f0(iVar1);
  }
  else {
    ExceptionList = &local_c;
    if (param_2 == 7) {
      ExceptionList = &local_c;
      iVar1 = FUN_00567b20(2);
      iVar2 = FUN_00647b10(0,99);
      if (iVar2 < 0x33) {
        *(undefined4 *)(iVar1 + 0xc) = 0xb;
        FUN_005af9f0(iVar1);
      }
      else if (iVar2 < 0x4c) {
        *(undefined4 *)(iVar1 + 0xc) = 4;
        FUN_005af9f0(iVar1);
      }
      else {
        if (iVar2 < 100) {
          *(undefined4 *)(iVar1 + 0xc) = 5;
        }
        FUN_005af9f0(iVar1);
      }
    }
  }
  FUN_005be710(param_2);
  ExceptionList = local_c;
  return;
}

