
void __fastcall FUN_005c2b70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_task_mgr__BeginFrame_00745ec0);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar2 = FUN_00553860();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0x30));
    FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
    FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
  }
  pvVar3 = operator_new(*(int *)(param_1 + 0x2c) * 0x24);
  *(void **)(param_1 + 0x30) = pvVar3;
  pvVar3 = operator_new(*(int *)(param_1 + 0x2c) << 2);
  *(void **)(param_1 + 0x4c) = pvVar3;
  pvVar3 = operator_new(*(uint *)(param_1 + 0x2c));
  *(void **)(param_1 + 0x50) = pvVar3;
  pvVar3 = operator_new(*(int *)(param_1 + 0x2c) << 2);
  *(void **)(param_1 + 0x54) = pvVar3;
  FUN_00553a40(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,param_1 + 0x5c);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      *(int *)(*(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) * 4) =
           iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_00648600(*(undefined4 *)(param_1 + 0x30),0,*(int *)(param_1 + 0x2c) * 0x24);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x7c);
  piVar6 = (int *)*piVar1;
  if (*(int *)(param_1 + 0x84) == 0) {
    while (piVar6 != piVar1) {
      FUN_005c4f90();
      FUN_005c4510(local_18,piVar6);
    }
  }
  else {
    piVar6 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_007ba9f4) {
      do {
        FUN_005c4b90(piVar6[2]);
        piVar1 = (int *)*piVar6;
        FUN_004acdf0();
        FUN_006bf840(piVar6);
        piVar6 = piVar1;
      } while (piVar1 != DAT_007ba9f4);
    }
    *(int **)(*(int *)(param_1 + 0x7c) + 4) = DAT_007ba9f4;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(int *)(*(int *)(param_1 + 0x7c) + 8) = *(int *)(param_1 + 0x7c);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar5 + 0x20 + *(int *)(param_1 + 0x30)) = 1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_00648600(*(undefined4 *)(param_1 + 0x50),0,*(undefined4 *)(param_1 + 0x2c));
  FUN_00648600((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x5c)) + *(int *)(param_1 + 0x2c),1,
               *(int *)(param_1 + 0x5c));
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

