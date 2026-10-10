
void __thiscall FUN_006aa720(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e80a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_control__Render_00755f80);
  iVar2 = param_3;
  uVar1 = *(uint *)(param_1 + 0x2c);
  local_4 = 0;
  if ((uVar1 & 1) == 0) goto LAB_006aa7e6;
  local_1c = *(int *)(param_1 + 0x44) + param_2;
  local_14 = *(int *)(param_1 + 0x4c) + param_2;
  local_10 = *(int *)(param_1 + 0x50) + param_3;
  local_18 = *(int *)(param_1 + 0x48) + param_3;
  if ((uVar1 & 0x100) == 0) {
    uVar3 = 0xff;
    if ((uVar1 & 0x600) == 0) goto LAB_006aa79a;
    param_3._2_2_ = 0xffff;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80;
LAB_006aa79a:
    param_3._2_2_ = CONCAT11(0xff,uVar3);
  }
  param_3 = CONCAT31(CONCAT21(param_3._2_2_,uVar3),uVar3);
  FUN_0069fcd0(&local_1c,&param_3,1);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 8))
                (*(int *)(param_1 + 0x44) + param_2,*(int *)(param_1 + 0x48) + iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
LAB_006aa7e6:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

