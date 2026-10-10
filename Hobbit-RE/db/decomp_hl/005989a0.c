
undefined4 __thiscall FUN_005989a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd468;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__DoFall_007431e8);
  *param_2 = 0;
  local_4 = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
  FUN_00592920();
  FUN_004a1070();
  piVar2 = (int *)FUN_00592920();
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
  uStack_24 = *puVar3;
  fStack_20 = (float)puVar3[1];
  uStack_1c = puVar3[2];
  iVar4 = FUN_00592920();
  if (*(int *)(iVar4 + 0x1b0) != 0x24) {
    iVar4 = FUN_00592920();
    if (*(int *)(iVar4 + 0x1b0) != 0x25) {
      piVar2 = (int *)FUN_00592920();
      iVar4 = (**(code **)(*piVar2 + 0x140))(&uStack_24,0,&uStack_18,param_1 + 0x2d8);
      if (iVar4 != 0) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
      }
      *(float *)(param_1 + 0x2ec) = fStack_14;
      *(undefined4 *)(param_1 + 0x2e8) = uStack_18;
      *(undefined4 *)(param_1 + 0x2f0) = uStack_10;
      fVar1 = *(float *)(*(int *)(param_1 + 0x34) + 4);
      if (fStack_20 - fStack_14 < fVar1 == (fStack_20 - fStack_14 == fVar1)) {
        if (*(int *)(param_1 + 0x3c) != 6) {
          *(undefined4 *)(param_1 + 0x230) = 6;
        }
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = pvStack_c;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_00598b26;
    }
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_24;
  *(float *)(param_1 + 0x2ec) = fStack_20;
  *(undefined4 *)(param_1 + 0x2f0) = uStack_1c;
  if (*(int *)(param_1 + 0x38) != 2) {
    *(undefined4 *)(param_1 + 0x38) = 4;
    FUN_00595ad0();
  }
LAB_00598b26:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

