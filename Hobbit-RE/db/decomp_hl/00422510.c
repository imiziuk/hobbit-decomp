
undefined4 __fastcall FUN_00422510(int *param_1)

{
  int iVar1;
  float local_1c [3];
  undefined1 local_10 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_1c,local_10);
  if (iVar1 != 0) {
    if ((local_1c[0] < *(float *)(param_1[0x114] + 0x58) !=
         (NAN(local_1c[0]) || NAN(*(float *)(param_1[0x114] + 0x58)))) &&
       ((*(byte *)((int)param_1 + 0xb1) & 0x20) == 0)) {
      return 0;
    }
    if (param_1[0x1da] == 0) {
      iVar1 = FUN_00467eb0();
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

