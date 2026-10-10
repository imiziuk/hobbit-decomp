
undefined4 FUN_006cb968(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_00816034 == (code *)0x0) {
    pHVar2 = LoadLibraryA("user32.dll");
    puVar1 = PTR_FUN_0075b2d8;
    if (pHVar2 != (HMODULE)0x0) {
      DAT_00816034 = (code *)(*(code *)PTR_FUN_0075b2d8)(pHVar2,"MessageBoxA");
      if (DAT_00816034 != (code *)0x0) {
        DAT_00816038 = (code *)(*(code *)puVar1)(pHVar2,"GetActiveWindow");
        DAT_0081603c = (code *)(*(code *)puVar1)(pHVar2,"GetLastActivePopup");
        goto LAB_006cb9b7;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_006cb9b7:
    if (DAT_00816038 != (code *)0x0) {
      iVar4 = (*DAT_00816038)();
      if ((iVar4 != 0) && (DAT_0081603c != (code *)0x0)) {
        iVar4 = (*DAT_0081603c)(iVar4);
      }
    }
    uVar3 = (*DAT_00816034)(iVar4,param_1,param_2,param_3);
  }
  return uVar3;
}

