
/* WARNING: Removing unreachable block (ram,0x006641df) */
/* WARNING: Removing unreachable block (ram,0x006641e1) */

void __fastcall FUN_006641a0(int param_1)

{
  undefined4 *puVar1;
  
  while ((*(int *)(param_1 + 0x364) != 0 &&
         (*(int *)(param_1 + 0x368) - *(int *)(param_1 + 0x364) >> 2 != 0))) {
    FUN_006638f0(*(undefined4 *)(*(int *)(param_1 + 0x368) + -4));
    *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + -4;
  }
  while ((puVar1 = *(undefined4 **)(param_1 + 0x354), puVar1 != (undefined4 *)0x0 &&
         (*(int *)(param_1 + 0x358) - (int)puVar1 >> 2 != 0))) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  return;
}

