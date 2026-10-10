
void FUN_00671150(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [7];
  int local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(&DAT_007f1748 + param_3 * 0x10);
  if (piVar1 != (int *)0x0) {
    local_3c = 0;
    param_3 = __ftol();
    local_40 = param_3;
    uVar2 = param_3;
    if (DAT_007f1608 == 1) {
      local_40 = 0;
      uVar2 = local_3c;
    }
    local_3c = uVar2;
    puVar4 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_38[0] = 0x38;
    local_38[1] = 0x12;
    local_1c = DAT_007f1608;
    local_38[2] = __ftol();
    local_14 = &local_40;
    local_8 = &param_3;
    local_10 = 0;
    local_c = 4;
    local_4 = 0;
    (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x20000141);
  }
  return;
}

