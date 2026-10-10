
void __fastcall thunk_FUN_00595730(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006dd258;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__ProcessGoal_00742ffc);
  uStack_4 = 0;
  if (*(int *)(param_1 + 400) == 0) goto LAB_0059582c;
  uVar1 = FUN_00566dd0();
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    uVar1 = 4;
    goto LAB_005957e3;
  case 1:
    if (*(int *)(param_1 + 0x38) != 6) {
      uVar1 = 1;
      goto LAB_005957e3;
    }
    break;
  case 2:
    if (((*(int *)(*(int *)(param_1 + 400) + 0x34) == 0) ||
        (iVar2 = FUN_00594390(*(undefined4 *)(*(int *)(param_1 + 400) + 0x10)), iVar2 == 0)) &&
       (iVar2 = FUN_00593dd0(*(undefined4 *)(*(int *)(param_1 + 400) + 0xc),1,0xfffffffe),
       iVar2 == 0)) {
      uVar1 = 7;
      goto LAB_005957e3;
    }
    iVar3 = FUN_00592660(2);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x48) = iVar2;
    }
    break;
  case 3:
    uVar1 = 10;
LAB_005957e3:
    FUN_00592660(uVar1);
  }
  if (*(int *)(param_1 + 0x1a8) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffdf | 0x40;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
LAB_0059582c:
  uStack_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

