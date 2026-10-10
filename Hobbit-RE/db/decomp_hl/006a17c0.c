
void __thiscall FUN_006a17c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined1 local_48c [1152];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e76fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0065fce0(0);
  FUN_006714b0(uVar2);
  iVar7 = *(int *)(param_1 + 0xb8);
  local_4 = 0;
  if (*(int *)(param_1 + 0xc0) < iVar7 + 1) {
    if (*(int *)(param_1 + 200) == 0) {
      iVar3 = *(int *)(param_1 + 0xc0) / 2;
      iVar5 = 1;
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
      if (iVar7 + iVar5 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar7 = iVar7 + iVar3;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 200) + iVar7;
    }
    pvVar4 = operator_new(iVar7 << 4);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0xbc) + iVar3);
        puVar1 = (undefined4 *)(iVar3 + (int)pvVar4);
        *puVar1 = *puVar6;
        puVar1[1] = puVar6[1];
        puVar1[2] = puVar6[2];
        puVar1[3] = puVar6[3];
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar5 < *(int *)(param_1 + 0xb8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xbc));
    *(int *)(param_1 + 0xc0) = iVar7;
    *(void **)(param_1 + 0xbc) = pvVar4;
  }
  iVar7 = *(int *)(param_1 + 0xb8) + 1;
  *(int *)(param_1 + 0xb8) = iVar7;
  puVar1 = (undefined4 *)(iVar7 * 0x10 + -0x10 + *(int *)(param_1 + 0xbc));
  FUN_006720e0(&local_490,&local_49c,&local_498,&local_494);
  puVar1[3] = local_494;
  puVar1[2] = local_498;
  *puVar1 = local_490;
  puVar1[1] = local_49c;
  local_490 = *param_2;
  local_49c = param_2[1];
  local_498 = param_2[2];
  local_494 = param_2[3];
  FUN_00671580(local_490,local_49c,local_498,local_494);
  FUN_0065f960(local_48c,0);
  FUN_0065fc10(0);
  local_4 = 0xffffffff;
  FUN_00671570();
  ExceptionList = local_c;
  return;
}

