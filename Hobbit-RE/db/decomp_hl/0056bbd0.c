
void FUN_0056bbd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar4 = (int *)FUN_00571230();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x30))();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  FUN_00429100();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

