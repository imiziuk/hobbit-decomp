
undefined4 __thiscall
FUN_0054e3f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  void **ppvVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9928;
  pvStack_c = ExceptionList;
  uVar6 = 0;
  iVar7 = 0;
  local_4 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (0 < param_4) {
    do {
      uVar4 = FUN_0054c5c0(*(undefined4 *)(param_5 + iVar7 * 4),
                           s__tHC__projects_meridian_Support__0073ccc1 + 3,0xad6);
      sVar3 = FUN_0054c7c0();
      uVar6 = local_10;
      while (local_10 = uVar6, -1 < sVar3) {
        if ((((sVar3 != -1) &&
             (piVar1 = *(int **)(*(int *)(param_1 + 0x28c0) + sVar3 * 0x14), piVar1 != (int *)0x0))
            && ((*(byte *)((int)piVar1 + 0x7f) & 0x10) != 0)) &&
           ((piVar1 != (int *)0x0 && (iVar5 = (**(code **)(*piVar1 + 0xa8))(param_9), iVar5 != 0))))
        {
          local_10 = 1;
        }
        sVar3 = FUN_0054c7c0();
        uVar6 = local_10;
      }
      FUN_0054c880(uVar4);
      iVar7 = iVar7 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar7 < param_4);
  }
  ExceptionList = ppvVar2;
  if (param_7 != 2) {
    FUN_006bf840(param_5);
  }
  ExceptionList = pvStack_c;
  return uVar6;
}

