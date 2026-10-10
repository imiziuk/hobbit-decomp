
void __thiscall FUN_00618b50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x90) == 0 && *(int *)(param_1 + 0x94) == 0) {
    FUN_005af120();
    uVar2 = FUN_00592190();
    FUN_00549470(uVar2);
    FUN_00549580(uVar2);
    iVar3 = FUN_0053cb40(s_BoneJaw_007498fc,0);
    if (iVar3 != -1) {
      FUN_005af120();
      iVar4 = FUN_00592190();
      if (*(int *)(iVar4 + 0x13c) != 0) {
        FUN_005423d0();
      }
      param_2 = (undefined4 *)(*(int *)(iVar4 + 0x140) + iVar3 * 0xc);
    }
  }
  else {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0x90),*(int *)(param_1 + 0x94));
    if (piVar1 != (int *)0x0) {
      param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = *param_2;
  *(undefined4 *)(param_1 + 0xbc) = param_2[1];
  *(undefined4 *)(param_1 + 0xc0) = param_2[2];
  return;
}

