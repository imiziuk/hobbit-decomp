
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00534dd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
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
  FUN_005342f0(*(undefined4 *)(param_1 + 600),local_18 + 2,&local_20,&local_1c,local_18,local_4,
               local_18 + 1,local_8,local_c);
  if (local_20 < 1) {
    if (0 < local_1c) {
      iVar1 = FUN_00534520();
      if (iVar1 == 0) {
        FUN_00534f30(7);
        goto LAB_00534eec;
      }
    }
    if (_DAT_006ec08c < *(float *)(param_1 + 0x270)) {
      iVar1 = FUN_00534520();
      if (iVar1 == 0) {
        FUN_00534f30(4);
        goto LAB_00534eec;
      }
    }
  }
  if ((local_18[0] < 1) && (_DAT_006ec08c < *(float *)(param_1 + 0x270))) {
    iVar1 = FUN_00534520();
    if (iVar1 == 0) {
      FUN_00534f30(2);
      goto LAB_00534eec;
    }
  }
  uVar2 = FUN_005349a0();
  if (_DAT_006ec0e8 < *(float *)(param_1 + 0x274)) {
    *(undefined4 *)(param_1 + 0x268) = uVar2;
    *(undefined4 *)(param_1 + 0x274) = 0;
    FUN_0064a2e0(s_BOSSCOMBAT_00737290);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x268),1);
  }
LAB_00534eec:
  if (*(int *)(param_1 + 0x26c) < *(int *)(param_1 + 0x268)) {
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x268);
  }
  return;
}

