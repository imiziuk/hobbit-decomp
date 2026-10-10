
void __fastcall FUN_006469e0(int param_1)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0x80);
  *(byte **)(param_1 + 0x80) = *(byte **)(param_1 + 0x80) + 1;
                    /* WARNING: Could not recover jumptable at 0x006469f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0074ba6c + (uint)bVar1 * 8))();
  return;
}

