
void __thiscall FUN_00644fb0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 8),s_C__projects_meridian_Support_Scr_0074b8bc,0x70);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar1 = thunk_FUN_0064ff70(param_2,s_C__projects_meridian_Support_Scr_0074b8bc,0x73);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (param_3 != *(int *)(param_1 + 0x1c)) {
    pvVar2 = operator_new(param_3 << 5);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3);
        puVar7 = (undefined4 *)(iVar3 + (int)pvVar2);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar5 < *(int *)(param_1 + 0x14));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(void **)(param_1 + 0x18) = pvVar2;
    *(int *)(param_1 + 0x1c) = param_3;
  }
  FUN_00645e60();
  FUN_00644c90();
  return;
}

