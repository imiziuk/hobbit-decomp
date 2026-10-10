
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0042a6a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf5c8;
  local_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_c;
  if (((DAT_00813038 != 0) &&
      (ExceptionList = &local_c, iVar1 = FUN_006a0390(DAT_00813038), iVar1 != 0)) &&
     (iVar1 = FUN_006a17a0(DAT_00813038), iVar1 != 0)) {
    ExceptionList = local_c;
    return 0;
  }
  local_2c[4] = 0;
  local_2c[3] = 0;
  local_2c[5] = 0;
  local_2c[7] = 0;
  local_2c[6] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_4 = 0;
  FUN_0042b9b0(param_1,local_2c + 1);
  iVar1 = 0;
  if (0 < local_2c[3]) {
    do {
      piVar5 = local_2c;
      uVar2 = FUN_0042b100(*(undefined4 *)(local_2c[4] + iVar1 * 4));
      FUN_0042b820(uVar2,piVar5);
      if (((local_2c[0] == 0) || (local_2c[0] == 1)) || (local_2c[0] == 3)) {
        uVar6 = 0;
        uVar2 = FUN_0042b100(*(undefined4 *)(local_2c[4] + iVar1 * 4));
        iVar3 = FUN_006710d0(uVar2,uVar6);
        if (iVar3 != 0) {
          uVar4 = 1;
          break;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_2c[3]);
  }
  if (local_2c[6] != 2) {
    FUN_006bf840(local_2c[4]);
  }
  ExceptionList = local_c;
  return uVar4;
}

