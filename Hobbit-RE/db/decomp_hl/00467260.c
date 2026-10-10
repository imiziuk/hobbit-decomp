
void __thiscall FUN_00467260(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int in_stack_00000058;
  uint in_stack_00000060;
  int in_stack_00000064;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d0cdb;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (param_1[0x4a] != 0) {
    ExceptionList = &pvStack_c;
    FUN_00549470();
    FUN_00549580();
    uVar1 = FUN_0053ca60();
    iVar2 = FUN_00647ed0(uVar1);
    if (iVar2 != 0) {
      if (param_1[0x4a] != 0) {
        FUN_005405d0();
        FUN_006bf840();
      }
      param_1[0x4a] = 0;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x154))();
  uStack_14 = *(undefined4 *)(iVar2 + 0x28);
  if ((param_1[0x4a] == 0) && (0 < in_stack_00000058)) {
    puStack_10 = (undefined1 *)operator_new(0x14c);
    local_4._0_1_ = 2;
    if (puStack_10 == (undefined1 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00540450();
    }
    param_1[0x4a] = iVar2;
    uStack_18 = 0x7fffffff;
    local_4._0_1_ = 3;
    FUN_00549430(&uStack_18);
    puStack_10 = &stack0xffffffd4;
    FUN_00469af0(&uStack_18);
    local_4._0_1_ = 3;
    (**(code **)(*param_1 + 0x154))();
    FUN_00540670();
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    iVar2 = (**(code **)(*param_1 + 0x154))();
    *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
    *(undefined4 *)(iVar2 + 300) = 1;
    *(undefined4 *)(iVar2 + 0x13c) = 1;
    *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
    *(undefined4 *)(iVar2 + 0x10) = *puVar3;
    *(undefined4 *)(iVar2 + 0x14) = puVar3[1];
    *(undefined4 *)(iVar2 + 0x18) = puVar3[2];
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00549580();
    FUN_00549350();
    uStack_18 = 0x7fffffff;
  }
  if (in_stack_00000060 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x30))();
    uVar1 = *(undefined4 *)(iVar2 + 4);
    iVar2 = (**(code **)(*param_1 + 0x154))();
    *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
    *(undefined4 *)(iVar2 + 300) = 1;
    *(undefined4 *)(iVar2 + 0x13c) = 1;
    *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
    iVar4 = (**(code **)(*param_1 + 0x154))();
    iVar2 = *(int *)(iVar4 + 0x138);
    *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
    *(undefined4 *)(iVar4 + 0x28) = uStack_14;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x154))();
    *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
    *(undefined4 *)(iVar2 + 300) = 1;
    *(undefined4 *)(iVar2 + 0x13c) = 1;
    *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    iVar4 = (**(code **)(*param_1 + 0x154))();
    iVar2 = *(int *)(iVar4 + 0x138);
    *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
    *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
  }
  *(undefined4 *)(iVar4 + 300) = 1;
  *(int *)(iVar4 + 0x138) = iVar2 + 1;
  *(undefined4 *)(iVar4 + 0x13c) = 1;
  uVar5 = (param_1[0x4b] ^ in_stack_00000060) & 1 ^ param_1[0x4b];
  param_1[0x4b] = (in_stack_00000064 * 2 ^ uVar5) & 2 ^ uVar5;
  (**(code **)(*param_1 + 0x154))();
  FUN_00549470();
  FUN_00549580();
  uVar7 = 0;
  uVar6 = 0;
  uVar1 = FUN_0053cc70(param_2);
  FUN_00540840(uVar1,uVar6,uVar7);
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

