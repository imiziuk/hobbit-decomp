
undefined4 __fastcall FUN_00684b60(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if (((*(int *)(iVar1 + 0x1050) == *(int *)(iVar2 + 0x1050)) &&
      (*(int *)(iVar1 + 0x1054) == *(int *)(iVar2 + 0x1054))) &&
     (*(int *)(iVar1 + 0x1058) == *(int *)(iVar2 + 0x1058))) {
    pvVar3 = operator_new(*(int *)(iVar1 + 0x1050) << 4);
    uVar5 = 0;
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(param_1[1] + 0x1058) != 0) {
        uVar4 = *(uint *)(param_1[1] + 0x1054);
        do {
          uVar6 = 0;
          if (uVar4 != 0) {
            do {
              (**(code **)(*(int *)*param_1 + 4))(uVar6,uVar5,pvVar3);
              (**(code **)(*(int *)param_1[1] + 8))(uVar6,uVar5,pvVar3);
              uVar4 = *(uint *)(param_1[1] + 0x1054);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1[1] + 0x1058));
      }
      FUN_006bf840(pvVar3);
      return 0;
    }
  }
  return 0x80004005;
}

