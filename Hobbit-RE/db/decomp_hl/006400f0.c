
undefined4 __thiscall FUN_006400f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5cf4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__FindField_0074b348);
  piVar1 = (int *)param_1[10];
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
LAB_00640194:
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar6 = 0;
  }
  else {
    iVar5 = param_1[8];
    iVar2 = param_1[6];
    iVar3 = *param_1;
    piVar7 = (int *)param_1[0xb];
    piVar8 = piVar1;
    do {
      piVar8 = (int *)(piVar8[1] + (int)piVar7);
      if ((int *)(iVar2 + iVar5) <= piVar8) {
        piVar8 = (int *)param_1[8];
      }
      piVar7 = piVar8 + 2;
      iVar4 = FUN_006400a0(*(undefined4 *)(iVar3 + *piVar8 * 4),param_2);
    } while ((iVar4 != 0) && (piVar8 != piVar1));
    if (piVar8 == piVar1) {
      iVar5 = FUN_006400a0(*(undefined4 *)(iVar3 + *piVar1 * 4),param_2);
      if (iVar5 != 0) goto LAB_00640194;
    }
    else {
      param_1[10] = (int)piVar8;
      param_1[0xb] = (int)piVar7;
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar6 = 1;
  }
  ExceptionList = local_c;
  return uVar6;
}

