
void FUN_00594da0(void)

{
  int iVar1;
  int *piVar2;
  uint unaff_EDI;
  float *pfVar3;
  longlong lVar4;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd1a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__UpdateCinemaAnim_00742f24);
  local_4 = 0;
  iVar1 = FUN_00592190();
  *(undefined4 *)(iVar1 + 300) = 1;
  *(undefined4 *)(iVar1 + 0x13c) = 1;
  *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
  *(int *)(iVar1 + 0x148) = *(int *)(iVar1 + 0x148) + 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  FUN_005927e0(&local_18);
  iVar1 = FUN_00592190();
  if (*(int *)(iVar1 + 0x13c) != 0) {
    FUN_005423d0();
  }
  pfVar3 = *(float **)(iVar1 + 0x140);
  local_24 = *pfVar3;
  local_20 = pfVar3[1];
  local_1c = pfVar3[2];
  piVar2 = (int *)FUN_00592920();
  lVar4 = (ulonglong)unaff_EDI << 0x20;
  pfVar3 = &local_24;
  (**(code **)(*piVar2 + 0x14))();
  piVar2 = (int *)FUN_00592920();
  (**(code **)(*piVar2 + 0x4c))(s_Bilbo_the_NPC_00742f14,pfVar3,lVar4);
  iVar1 = FUN_00647ed0();
  if (iVar1 == 0) {
    FUN_0064f0d0(0x1e,0x20,s_ANIM_RUNNING___f__f__f_00742efc,(double)local_2c,(double)fStack_28,
                 (double)local_24);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

