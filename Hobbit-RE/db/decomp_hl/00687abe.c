
undefined4 __thiscall
FUN_00687abe(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  iVar2 = param_3;
  do {
    if (local_8 == 0) {
      iVar2 = FUN_00687a8e(param_2,param_3);
    }
    else if (local_8 == 1) {
      iVar2 = FUN_00686f95(param_2,param_3);
    }
    else if (local_8 == 2) {
      iVar2 = FUN_0068777b(param_2,param_3);
    }
    else if (local_8 == 3) {
      iVar2 = FUN_006868c8(param_2,param_3);
    }
    else if (local_8 == 4) {
      iVar2 = FUN_00687265(param_2,param_3);
    }
    else if (local_8 == 5) {
      iVar2 = FUN_00686b1d(param_2,param_3);
    }
    else if (local_8 == 6) {
      iVar2 = FUN_0068622e(param_2,param_3);
    }
    if (-1 < iVar2) break;
    if ((param_1[1] != 0) && (param_1[8] != 0)) {
      FUN_006bf840(param_1[1]);
    }
    if ((param_1[7] != 0) && (param_1[9] != 0)) {
      FUN_006bf840(param_1[7]);
    }
    iVar1 = param_1[10];
    if (iVar1 != 0) {
      FUN_006861d5();
      FUN_006bf840(iVar1);
    }
    iVar1 = param_1[0xb];
    if (iVar1 != 0) {
      FUN_006861d5();
      FUN_006bf840(iVar1);
    }
    local_8 = local_8 + 1;
    param_1[1] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  } while (local_8 < 7);
  if (local_8 == 7) {
    uVar3 = 0x88760b59;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      *param_4 = param_1[5];
      param_4[1] = param_1[6];
      param_4[2] = 1;
      param_4[3] = 1;
      param_4[4] = *param_1;
      for (piVar4 = param_1 + 10; *piVar4 != 0; piVar4 = (int *)(*piVar4 + 0x28)) {
        param_4[3] = param_4[3] + 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

