
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00534870(int param_1,float param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18 [3];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_18[2] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  iVar1 = FUN_00534520();
  FUN_005342f0(*(undefined4 *)(param_1 + 0x254),local_18 + 2,&local_20,&local_1c,local_18,local_4,
               local_18 + 1,local_8,local_c);
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00534f30(5);
    return;
  }
  if ((local_20 < 1) && (0 < local_1c)) {
    if (iVar1 == 0) {
      if (*(float *)(param_1 + 0x2f4) < *(float *)(param_1 + 0x300)) {
        FUN_00534f30(6);
        return;
      }
      goto LAB_00534945;
    }
  }
  else if (iVar1 == 0) goto LAB_00534945;
  if (*(float *)(param_1 + 0x2f4) < *(float *)(param_1 + 0x300)) {
    FUN_00534f30(3);
    return;
  }
LAB_00534945:
  if ((local_20 < 1) && (local_18[0] < 1)) {
    _DAT_007647a4 = _DAT_007647a4 + param_2;
    if (*(float *)(param_1 + 0x288) < _DAT_007647a4) {
      FUN_00534f30(*(undefined4 *)(param_1 + 0x298));
      return;
    }
  }
  else {
    _DAT_007647a4 = 0.0;
  }
  return;
}

