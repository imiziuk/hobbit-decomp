
void __fastcall FUN_0046aa20(int param_1)

{
  if ((*(uint *)(param_1 + 0x194) & 0x10) != 0) {
    thunk_FUN_0056b6b0(*(uint *)(param_1 + 0x194) >> 3 & 1);
  }
  if ((*(uint *)(param_1 + 0x194) & 0x100) == 0) {
    FUN_0046ab10(1);
  }
  else {
    if ((*(byte *)(param_1 + 0x160) & 2) == 0) {
      (**(code **)(*(int *)(param_1 + 0x150) + 4))();
      FUN_0064e870(6,s_Executing_post_cinematic_transit_00726ea4);
      if ((*(uint *)(param_1 + 0x194) & 0x800) != 0) {
        FUN_0046ab10(1);
      }
    }
    if ((*(byte *)(param_1 + 0x160) & 4) != 0) {
      FUN_0046ab10(1);
      FUN_0064e870(6,s_Finished_post_cinematic_transiti_00726e74);
    }
  }
  if ((*(uint *)(param_1 + 0x194) & 0x800) != 0) {
    FUN_0041bcc0();
    FUN_00424cf0();
    FUN_0064e870(6,s______DEATH_CINEMA__Resetting_Bil_00726e48);
  }
  FUN_0041bcc0();
  FUN_004336e0();
  return;
}

