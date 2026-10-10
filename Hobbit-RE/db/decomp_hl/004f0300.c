
void __fastcall FUN_004f0300(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    if (DAT_00777238 == 1) {
      piVar1 = (int *)FUN_004021c0(DAT_00777270,DAT_00777274);
      if (piVar1 == (int *)0x0) {
        return;
      }
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
      uStack_18 = *puVar2;
      uStack_14 = puVar2[1];
      uStack_10 = puVar2[2];
      (**(code **)(*piVar1 + 0x30))();
      FUN_004f0080(&uStack_18,&uStack_18,&uStack_18);
    }
    FUN_004e4be0();
  }
  return;
}

