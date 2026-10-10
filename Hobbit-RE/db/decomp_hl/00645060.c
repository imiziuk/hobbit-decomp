
int __thiscall FUN_00645060(undefined4 *param_1,undefined4 param_2)

{
  void **ppvVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5fdb;
  local_c = ExceptionList;
  iVar6 = 0;
  iVar7 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < (int)param_1[0xd]) {
    do {
      ExceptionList = ppvVar1;
      uVar2 = FUN_00645c60(param_2);
      iVar3 = FUN_0064a7e0(uVar2);
      if (iVar3 != 0) {
        *param_1 = 0;
        FUN_00645700(param_1,param_2);
        ExceptionList = local_c;
        return *(int *)(param_1[0xe] + iVar7 * 4);
      }
      iVar7 = iVar7 + 1;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar7 < (int)param_1[0xd]);
  }
  pvVar4 = operator_new(0x68);
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    iVar6 = FUN_00645650();
  }
  local_4 = 0xffffffff;
  iVar7 = FUN_00645700(param_1,param_2);
  if (iVar7 == 0) {
    if (iVar6 != 0) {
      FUN_006456b0();
      FUN_006bf840(iVar6);
    }
    iVar6 = 0;
  }
  else {
    iVar7 = param_1[0xd];
    if ((int)param_1[0xf] < iVar7 + 1) {
      if (param_1[0x11] == 0) {
        iVar5 = (int)param_1[0xf] / 2;
        iVar3 = 1;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        if (iVar7 + iVar3 < 1) {
          iVar7 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar7 = iVar7 + iVar5;
        }
      }
      else {
        iVar7 = param_1[0x11] + iVar7;
      }
      pvVar4 = operator_new(iVar7 * 4);
      iVar3 = 0;
      if (0 < (int)param_1[0xd]) {
        do {
          *(undefined4 *)((int)pvVar4 + iVar3 * 4) = *(undefined4 *)(param_1[0xe] + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)param_1[0xd]);
      }
      FUN_006bf840(param_1[0xe]);
      param_1[0xe] = pvVar4;
      param_1[0xf] = iVar7;
    }
    iVar7 = param_1[0xd];
    param_1[0xd] = iVar7 + 1;
    *(int *)(param_1[0xe] + -4 + (iVar7 + 1) * 4) = iVar6;
  }
  ExceptionList = local_c;
  return iVar6;
}

