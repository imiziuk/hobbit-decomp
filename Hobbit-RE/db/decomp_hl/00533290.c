
void __fastcall FUN_00533290(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  double dVar6;
  char *pcVar7;
  
  if (DAT_007644d0 != 0) {
    uVar1 = FUN_005327d0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x60));
    uVar2 = FUN_00531430((double)*(float *)(param_1 + 0x1c4));
    FUN_0064f0d0(0,0xe,s_CurrentQueueItemIndex__02d_NextQ_00737050,*(undefined4 *)(param_1 + 0x1ac),
                 uVar2);
    dVar6 = (double)*(float *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x164 + param_1);
    fVar4 = (float10)FUN_0065a5b0();
    FUN_0064f0d0(0,0xf,s_Current_Suite___02d__Time__02_3f_00737020,*(undefined4 *)(param_1 + 0x2c),
                 (double)fVar4,dVar6,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x134);
    uVar2 = FUN_005327d0(uVar1,*(undefined4 *)(param_1 + 0x13c));
    FUN_0064f0d0(0,0x10,s_Next_Suite___02d______s__00737004,uVar1,uVar2);
    FUN_0064f0d0(0,0x11,s_m_QueueItems_m_CurrentQueueItemI_00736fcc,
                 *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x178 + param_1));
    iVar3 = FUN_00531430();
    uVar1 = *(undefined4 *)(iVar3 * 0x30 + 0x178 + param_1);
    pcVar7 = s_m_QueueItems_GetNextQueueIndex___00736f98;
    uVar5 = 0x12;
    uVar2 = 0;
    FUN_0064f0d0();
    FUN_0064f0d0(0,0x13,s_m_TrackLoopCounter____d_00736f80,*(undefined4 *)(param_1 + 0x1dc),uVar2,
                 uVar5,pcVar7,uVar1);
  }
  FUN_00677cf0();
  return;
}

