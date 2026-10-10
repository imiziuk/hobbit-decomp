
void __fastcall FUN_00640710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00641860(0,*(int *)(param_1 + 0x38));
    FUN_0064f2b0(*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00641860(1,*(int *)(param_1 + 0x3c));
    FUN_0064f2b0(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = *(int *)(param_1 + 0x28);
    local_c = 0;
    do {
      local_8 = 0;
      if (0 < *(int *)(local_c + 0x18 + iVar4)) {
        iVar1 = *(int *)(local_c + 0x1c + iVar4);
        iVar3 = 0;
        do {
          iVar4 = 0;
          if (0 < *(int *)(iVar3 + 0x10 + iVar1)) {
            iVar2 = 0;
            do {
              FUN_006bf840(*(undefined4 *)(*(int *)(iVar3 + 0x14 + iVar1) + 8 + iVar2));
              iVar1 = *(int *)(local_c + 0x1c + *(int *)(param_1 + 0x28));
              iVar4 = iVar4 + 1;
              iVar2 = iVar2 + 0xc;
            } while (iVar4 < *(int *)(iVar3 + 0x10 + iVar1));
          }
          iVar4 = *(int *)(param_1 + 0x28);
          local_8 = local_8 + 1;
          iVar3 = iVar3 + 0x24;
        } while (local_8 < *(int *)(local_c + 0x18 + iVar4));
      }
      local_4 = local_4 + 1;
      local_c = local_c + 0x2c;
    } while (local_4 < *(int *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != 0) {
      FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
      FUN_006bf840(iVar4 + -4);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00642240);
      FUN_006bf840(iVar4 + -4);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

