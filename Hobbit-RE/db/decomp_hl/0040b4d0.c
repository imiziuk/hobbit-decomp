
void __fastcall FUN_0040b4d0(uint *param_1)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  FUN_0063cdc0(&local_4,0x10);
  *param_1 = local_4 & 0xffff;
  FUN_0063cdc0(&local_4,2);
  param_1[1] = local_4 & 0xffff;
  FUN_0063cdc0(&local_4,2);
  param_1[2] = local_4 & 0xffff;
  uVar1 = FUN_0063d990();
  param_1[3] = uVar1;
  uVar1 = FUN_0063d990();
  param_1[4] = uVar1;
  uVar1 = FUN_0063d990();
  param_1[5] = uVar1;
  FUN_0040b050();
  return;
}

