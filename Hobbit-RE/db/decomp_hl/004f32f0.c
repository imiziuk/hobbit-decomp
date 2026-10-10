
void __fastcall FUN_004f32f0(int param_1)

{
  int iVar1;
  
  FUN_004f5340();
  if (*(int *)(param_1 + 0x7f4) == 0) {
    return;
  }
  iVar1 = FUN_0052a650();
  if (iVar1 == 0) {
    iVar1 = FUN_0065f190(&DAT_0072f7f8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x884) != 0) {
      FUN_004f8ad0();
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_004f8c10();
    }
    if (*(float *)(param_1 + 0x814) <= DAT_006e92e4) {
      iVar1 = FUN_0052d730();
      if (iVar1 == 0) {
        FUN_004f3f90();
      }
    }
    else {
      FUN_004f83a0();
    }
  }
  else {
    if (DAT_006e92e4 < *(float *)(param_1 + 0x13a0)) {
      FUN_004f2e00();
    }
    FUN_0058e9a0();
    iVar1 = FUN_0065f190(&DAT_0072f7f8);
    if (iVar1 == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x814) <= DAT_006e92e4) {
      iVar1 = FUN_0052d730();
      if (iVar1 == 0) {
        FUN_004f58f0(0);
        iVar1 = FUN_005268d0();
        if (iVar1 == 0) {
          FUN_004f6c60();
          FUN_004f3f90();
        }
        if (*(int *)(param_1 + 0x884) != 0) {
          FUN_004f8ad0();
        }
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_004f8c10();
        }
        FUN_004f42c0();
        FUN_004f4990();
        FUN_004f4e90();
        FUN_004f34e0();
        FUN_004f3ac0();
        FUN_004f3ca0();
        if (*(int *)(param_1 + 0x868) != 0) {
          FUN_004f88c0();
        }
      }
    }
    else {
      FUN_004f83a0();
    }
  }
  iVar1 = FUN_00472f60();
  if (iVar1 != 0) {
    FUN_004f9070();
  }
  if (DAT_006e92e4 < *(float *)(param_1 + 0x818)) {
    FUN_004f85c0();
  }
  if (DAT_006e92e4 < *(float *)(param_1 + 0x828)) {
    FUN_004f86e0();
  }
  FUN_0065f430();
  return;
}

