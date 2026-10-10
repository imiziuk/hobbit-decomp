
void __fastcall FUN_005f11d0(int param_1)

{
  uint uVar1;
  
  FUN_00649600(s_AITrigger__OnAdvanceLogic_0074805c);
  uVar1 = *(uint *)(param_1 + 8);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    *(uint *)(param_1 + 8) = uVar1 & 0xfffffffe;
  }
  FUN_00649720();
  return;
}

