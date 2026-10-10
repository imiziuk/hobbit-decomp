
void __fastcall FUN_0064cc00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = FUN_0064cb70();
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 2) = 1;
    *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
  }
  return;
}

