
void __fastcall FUN_0052aca0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0052a650();
  if (iVar1 == 0) {
    FUN_00433c80();
  }
  iVar1 = FUN_0052a620();
  if (iVar1 != 0) {
    FUN_00433c80();
    *(undefined4 *)(param_1 + 0x78) = 0x1b;
    return;
  }
  if (*(int *)(param_1 + 0x710) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    *(undefined4 *)(param_1 + 0x704) = 0;
    FUN_0052a670(param_1 + 0x604);
    *(undefined4 *)(param_1 + 0x78) = 10;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x78) = 0x14;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0xb;
  }
  if (iVar1 != 0xd) {
    if (DAT_00760104 == 0) {
      *(int *)(param_1 + 0x7c) = iVar1 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = DAT_00760108;
      DAT_0076010c = 1;
    }
    if (0xb < *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x78) = 0x14;
      *(undefined4 *)(param_1 + 0x7c) = 0xc;
    }
    FUN_0052a670(param_1 + 0x604);
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 5;
  return;
}

