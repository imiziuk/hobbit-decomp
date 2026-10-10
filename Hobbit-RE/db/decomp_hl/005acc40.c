
void __thiscall FUN_005acc40(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_StateController__OnAdvanceLogic_00744b20);
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x130) & 0x200) == 0) {
    *(float *)(param_1 + 0x19c) = param_2;
    *(float *)(param_1 + 0x204) = param_2 + *(float *)(param_1 + 0x204);
    uVar1 = FUN_005af120();
    *(undefined4 *)(param_1 + 0x178) = uVar1;
    FUN_005ad340();
    FUN_005acdf0();
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffffdf;
    FUN_005af120();
    iVar2 = FUN_00595200();
    uVar3 = *(uint *)(param_1 + 0x130);
    if (iVar2 == 0) {
      uVar3 = uVar3 & 0xffffffef;
    }
    else {
      if ((uVar3 & 0x10) == 0) {
        *(uint *)(param_1 + 0x130) = uVar3 | 0x20;
      }
      uVar3 = *(uint *)(param_1 + 0x130) | 0x10;
    }
    *(uint *)(param_1 + 0x130) = uVar3;
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_005ad140();
    }
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffbff;
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_005ad090();
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_005acd70();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

