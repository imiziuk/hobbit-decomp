
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00534b80(int param_1,float param_2)

{
  int iVar1;
  int local_20;
  int local_1c [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_1c[3] = 0;
  local_20 = 0;
  local_1c[0] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  iVar1 = FUN_00534520();
  *(float *)(param_1 + 0x274) = param_2 + *(float *)(param_1 + 0x274);
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00534f30(5);
    return;
  }
  FUN_005342f0(*(undefined4 *)(param_1 + 600),local_1c + 3,&local_20,local_1c,local_1c + 2,local_4,
               local_1c + 1,local_8,local_c);
  if (local_20 < 1) {
    if (local_1c[0] < 1) {
      if (iVar1 != 0) goto LAB_00534c71;
    }
    else {
      if (iVar1 != 0) goto LAB_00534c71;
      if (*(float *)(param_1 + 0x2fc) < *(float *)(param_1 + 0x270)) {
        FUN_00534f30(6);
        return;
      }
    }
    _DAT_007647b0 = _DAT_007647b0 + param_2;
    if (*(float *)(param_1 + 0x288) < _DAT_007647b0) {
      FUN_00534f30(4);
      return;
    }
  }
  else {
LAB_00534c71:
    if (_DAT_006ec0e8 < *(float *)(param_1 + 0x274)) {
      _DAT_007647b0 = 0.0;
      *(undefined4 *)(param_1 + 0x274) = 0;
      iVar1 = FUN_005349a0();
      if (iVar1 != *(int *)(param_1 + 0x268)) {
        *(int *)(param_1 + 0x268) = iVar1;
        FUN_0064a2e0(s_COMBAT_00737288);
        FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x268),1);
      }
      if (*(int *)(param_1 + 0x26c) < *(int *)(param_1 + 0x268)) {
        *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x268);
      }
    }
  }
  return;
}

