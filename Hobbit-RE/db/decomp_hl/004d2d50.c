
void __thiscall FUN_004d2d50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Switch__OnImport_0072d8c0);
  iVar4 = 0;
  local_4 = 0;
  local_20 = 0;
  FUN_006405b0(&DAT_0071fac4,&local_20);
  *(uint *)(param_1 + 0x160) =
       (local_20 * 2 ^ *(uint *)(param_1 + 0x160)) & 2 ^ *(uint *)(param_1 + 0x160);
  FUN_006405b0(s_TargetLoops_0072d8a4,&local_20);
  *(uint *)(param_1 + 0x160) =
       (local_20 << 4 ^ *(uint *)(param_1 + 0x160)) & 0x10 ^ *(uint *)(param_1 + 0x160);
  local_20 = 0;
  FUN_006405b0(s_ReverseAnimForOff_0072d890,&local_20);
  *(uint *)(param_1 + 0x160) =
       (local_20 * 8 ^ *(uint *)(param_1 + 0x160)) & 8 ^ *(uint *)(param_1 + 0x160);
  FUN_00640420(s_ToggleDelay_0072d884,param_1 + 0x164);
  local_20 = 0;
  FUN_006405b0(s_RockCanTrigger_0072d874,&local_20);
  *(uint *)(param_1 + 0x160) =
       (local_20 * 4 ^ *(uint *)(param_1 + 0x160)) & 4 ^ *(uint *)(param_1 + 0x160);
  local_20 = 0;
  FUN_006405b0(s_bHasTargetGuids_0072d8b0,&local_20);
  iVar1 = local_20;
  FUN_004c2430(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  else {
    FUN_0063ff20();
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_1 + 0x170) = iVar1;
    pvVar3 = operator_new(iVar1 * 8);
    *(void **)(param_1 + 0x174) = pvVar3;
    if (0 < iVar1) {
      do {
        FUN_0063ffc0();
        FUN_006405e0(&DAT_00724c04,&local_1c);
        iVar2 = *(int *)(param_1 + 0x174);
        *(undefined4 *)(iVar2 + iVar4 * 8) = local_1c;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = local_18;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

