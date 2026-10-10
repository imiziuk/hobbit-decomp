
void __thiscall FUN_0053dba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d91a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dd20(1);
  FUN_00648480(param_1,param_2,0x88);
  iVar1 = *(int *)(param_1 + 100);
  piVar3 = (int *)operator_new(iVar1 * 0x18 + 4);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (piVar3 != (int *)0x0) {
    piVar6 = piVar3 + 1;
    *piVar3 = iVar1;
    FUN_006c043b(piVar6,0x18,iVar1,FUN_0053ed40,FUN_0053edb0);
  }
  local_4 = 0xffffffff;
  *(int **)(param_1 + 0x68) = piVar6;
  FUN_0053dd20(0);
  uVar4 = thunk_FUN_0064ff70(*(undefined4 *)(param_1 + 0x78),
                             s_C__projects_meridian_Support_Ani_007379a8,0x282);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar4 = thunk_FUN_0064ff70(*(undefined4 *)(param_1 + 0x80),
                             s_C__projects_meridian_Support_Ani_007379e0,0x283);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  FUN_00648480(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_2 + 0x7c),
               *(undefined4 *)(param_1 + 0x78));
  FUN_00648480(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_2 + 0x84),
               *(undefined4 *)(param_1 + 0x80));
  local_10 = 0;
  if (0 < *(int *)(param_2 + 100)) {
    param_2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x68);
      iVar5 = iVar1 + param_2;
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x68) + param_2);
      *puVar7 = *(undefined4 *)(iVar1 + param_2);
      puVar7[1] = *(undefined4 *)(iVar5 + 4);
      puVar7[2] = *(undefined4 *)(iVar5 + 8);
      puVar7[3] = *(undefined4 *)(iVar5 + 0xc);
      FUN_00652260(iVar5 + 0x10);
      FUN_00652260(iVar5 + 0x14);
      local_10 = local_10 + 1;
      param_2 = param_2 + 0x18;
    } while (local_10 < *(int *)(iVar2 + 100));
  }
  FUN_0053dd20(0);
  ExceptionList = local_c;
  return;
}

