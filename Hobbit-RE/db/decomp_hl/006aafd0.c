
void __thiscall FUN_006aafd0(int param_1,undefined4 param_2)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e810e;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar2;
      iVar3 = FUN_00647e40(**(undefined4 **)(*(int *)(param_1 + 0xc) + iVar6 * 4),uVar4);
      if (iVar3 == 0) {
        if (iVar6 != -1) {
          FUN_00649920(&param_2,s____________s_UnLoaded_0075612c,uVar4);
          local_4 = 0;
          uVar4 = FUN_00649940();
          FUN_0064e870(7,uVar4);
          local_4 = 0xffffffff;
          FUN_00649950();
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4);
          iVar3 = iVar6 * 4;
          if (iVar1 != 0) {
            FUN_006aa8d0();
            FUN_006bf840(iVar1);
          }
          iVar6 = (*(int *)(param_1 + 8) - iVar6) + -1;
          if (0 < iVar6) {
            do {
              *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc)) =
                   *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0xc));
              iVar3 = iVar3 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x10)) {
    pvVar5 = operator_new(*(int *)(param_1 + 8) * 4);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar5;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  }
  ExceptionList = local_c;
  return;
}

