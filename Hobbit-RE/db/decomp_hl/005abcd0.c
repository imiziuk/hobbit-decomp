
void __fastcall FUN_005abcd0(int param_1)

{
  int local_4;
  
  local_4 = 1;
  FUN_006405b0(s_DoLOS_00744a3c,&local_4);
  *(uint *)(param_1 + 0x18) =
       (local_4 * 4 ^ *(uint *)(param_1 + 0x18)) & 4 ^ *(uint *)(param_1 + 0x18);
  FUN_00640420(s_SightRange_00744a30,param_1 + 0x1c);
  FUN_00640420(s_HearingRange_00744a20,param_1 + 0x24);
  FUN_00640420(s_LoudHearingRange_00744a0c,param_1 + 0x28);
  FUN_00640420(s_SmellRange_00744a00,param_1 + 0x30);
  return;
}

