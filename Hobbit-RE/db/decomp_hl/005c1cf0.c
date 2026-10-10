
int __thiscall FUN_005c1cf0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df4ab;
  local_c = ExceptionList;
  iVar1 = 0;
  iVar6 = -1;
  if (0 < param_1[4]) {
    piVar4 = (int *)param_1[5];
    do {
      iVar6 = iVar1;
      if (*piVar4 == 0) break;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
      iVar6 = -1;
    } while (iVar1 < param_1[4]);
  }
  iVar1 = param_1[0xb];
  if (iVar1 < 1) {
    ExceptionList = &local_c;
    pvVar3 = operator_new(0x2c);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0063aed0();
    }
    *param_1 = *param_1 + 1;
  }
  else {
    iVar2 = *(int *)(param_1[0xc] + -4 + iVar1 * 4);
    iVar5 = (param_1[0xb] - (iVar1 + -1)) + -1;
    ExceptionList = &local_c;
    if (0 < iVar5) {
      iVar1 = (iVar1 + -1) * 4;
      ExceptionList = &local_c;
      do {
        *(undefined4 *)(iVar1 + param_1[0xc]) = *(undefined4 *)(iVar1 + 4 + param_1[0xc]);
        iVar1 = iVar1 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    param_1[0xb] = param_1[0xb] + -1;
  }
  local_4 = 0xffffffff;
  FUN_0063b140();
  FUN_0063b0a0(in_stack_00000010);
  FUN_0063b080();
  FUN_0063b0d0(in_stack_00000014,in_stack_00000018);
  *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0xfe ^ 1;
  FUN_0063b100();
  if (iVar6 < 0) {
    iVar6 = param_1[4];
    if (param_1[6] < iVar6 + 1) {
      if (param_1[8] == 0) {
        iVar5 = param_1[6] / 2;
        iVar1 = 1;
        if (0 < iVar5) {
          iVar1 = iVar5;
        }
        if (iVar1 + iVar6 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar6 = iVar6 + iVar5;
        }
      }
      else {
        iVar6 = param_1[8] + iVar6;
      }
      pvVar3 = operator_new(iVar6 * 4);
      iVar1 = 0;
      if (0 < param_1[4]) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar1 * 4) = *(undefined4 *)(param_1[5] + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[4]);
      }
      FUN_006bf840();
      param_1[5] = (int)pvVar3;
      param_1[6] = iVar6;
    }
    *(int *)(param_1[5] + param_1[4] * 4) = iVar2;
    iVar6 = param_1[4];
    param_1[4] = iVar6 + 1;
  }
  else {
    *(int *)(param_1[5] + iVar6 * 4) = iVar2;
  }
  ExceptionList = local_c;
  return iVar6;
}

