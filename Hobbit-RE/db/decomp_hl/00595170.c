
void __fastcall FUN_00595170(int param_1)

{
  undefined4 uVar1;
  undefined1 local_40 [64];
  
  FUN_00640420(s_MinGroundDist_00742f94,*(int *)(param_1 + 0x34) + 4);
  FUN_00640420(s_MaxGroundDist_00742f84,*(undefined4 *)(param_1 + 0x34));
  FUN_00640480(s_IdleAnim_00742f78,local_40);
  FUN_0064a2e0(local_40);
  FUN_00647d10(local_40,&DAT_0075b6e0);
  FUN_00640480(s_BodyMaskAnim_00742f68,local_40);
  uVar1 = FUN_00594390(local_40);
  FUN_00592730(uVar1);
  return;
}

