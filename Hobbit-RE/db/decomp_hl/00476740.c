
void __fastcall FUN_00476740(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x100))();
  }
  iVar2 = FUN_00659e10(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 == 0) {
    iVar2 = FUN_00659e70(*(undefined4 *)(param_1 + 0x54));
    if (iVar2 == 0) goto LAB_00476797;
  }
  FUN_00659c80(*(undefined4 *)(param_1 + 0x54),0);
LAB_00476797:
  FUN_0054ec40();
  FUN_0064e870(6,s_CINEMA__Skipping_dialog_00727d78);
  FUN_004754d0();
  return;
}

