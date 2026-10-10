
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005967a0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__DoNavigate_007430dc);
  local_4 = 0;
  iVar3 = FUN_00592920();
  if (*(int *)(iVar3 + 0x1e4) != 0) {
    if (*(int *)(param_1 + 0x40) == 2) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
    }
    iVar3 = FUN_00592920();
    if ((*(int *)(iVar3 + 0x1e4) != 0) && (*(int *)(param_1 + 0x3c) != 7)) {
      FUN_00595390();
    }
    if (0 < *(int *)(param_1 + 0x19c)) {
      if ((*(int *)(param_1 + 0x40) == 1) ||
         ((*(int *)(param_1 + 0x40) == 3 && (0 < *(int *)(param_1 + 0x19c))))) {
        piVar4 = (int *)FUN_00592920();
        iVar3 = *(int *)(param_1 + 0x1a0);
        iVar5 = (**(code **)(*piVar4 + 0x28))();
        fVar1 = *(float *)(iVar3 + 4) - *(float *)(iVar5 + 4);
        fVar2 = fVar1;
        if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
          fVar2 = -fVar1;
        }
        if (_DAT_006f40b0 < fVar2) {
          fVar2 = _DAT_006f40b4 * *(float *)(param_1 + 0x294);
          if (fVar1 <= DAT_006e92e4) {
            *(float *)(param_1 + 0x220) = -fVar2 + *(float *)(param_1 + 0x220);
          }
          else {
            *(float *)(param_1 + 0x220) = fVar2 + *(float *)(param_1 + 0x220);
          }
        }
      }
      uVar6 = FUN_00596900(param_2);
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return uVar6;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

