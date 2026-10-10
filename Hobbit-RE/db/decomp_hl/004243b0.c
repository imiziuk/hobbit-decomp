
int * __thiscall FUN_004243b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int aiStack_4b0 [2];
  undefined1 auStack_4a8 [584];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined1 auStack_250 [588];
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_IsRingEquipped_007207c8);
  if (iVar1 == 0) {
    FUN_00406a80();
    aiStack_4b0[0] = 3;
    uStack_25c = FUN_00423c80();
    *param_2 = 3;
    puVar4 = auStack_4a8;
    goto LAB_00424750;
  }
  FUN_00406a80();
  piVar2 = (int *)FUN_004abdf0(aiStack_4b0,param_3);
  iStack_258 = *piVar2;
  FUN_00424890(piVar2 + 2);
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar3 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_3);
    if (iVar1 == iVar3) {
      aiStack_4b0[0] = 0xb;
      FUN_004357e0(param_1 + 0x5a0);
      puVar4 = auStack_4a8;
      *param_2 = aiStack_4b0[0];
      goto LAB_00424750;
    }
    iVar1 = iVar1 + param_3;
    iVar3 = FUN_004ad2b0(iVar1,aiStack_4b0,s__Pitch_007207e8,param_1 + 0x5a0);
    if (((iVar3 != 0) ||
        (iVar3 = FUN_004ad2b0(iVar1,aiStack_4b0,&DAT_007207e0,param_1 + 0x5a4), iVar3 != 0)) ||
       (iVar1 = FUN_004ad2b0(iVar1,aiStack_4b0,s__Roll_007207d8,param_1 + 0x5a8), iVar1 != 0)) {
      puVar4 = auStack_4a8;
      *param_2 = aiStack_4b0[0];
      goto LAB_00424750;
    }
  }
  if (iStack_258 == 0) {
    piVar2 = (int *)FUN_004354a0(aiStack_4b0,param_3);
    iStack_258 = *piVar2;
    FUN_00424890(piVar2 + 2);
    if ((iStack_258 == 0) && (iVar1 = FUN_00647ed0(param_3,s_ForcedVisibility_007207b4), iVar1 == 0)
       ) {
      iStack_258 = 3;
      uStack_4 = 0;
    }
  }
  iVar1 = FUN_00647e40(param_3,s_LevelReset_0072073c);
  if (iVar1 == 0) {
    puVar4 = auStack_250;
    iStack_258 = 3;
    uStack_4 = 0;
    *param_2 = 3;
    goto LAB_00424750;
  }
  iVar1 = FUN_00647e40(param_3,s_m_bUsingSting_007207a4);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_25c = *(undefined4 *)(param_1 + 0x3c0);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_m_bUsingStaff_00720794);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_25c = *(undefined4 *)(param_1 + 0x3d0);
      aiStack_4b0[0] = 3;
      *param_2 = 3;
      puVar4 = auStack_4a8;
      goto LAB_00424750;
    }
    iVar1 = FUN_00647e40(param_3,s_m_bUsingStone_00720784);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_25c = *(undefined4 *)(param_1 + 0x3b0);
      puVar4 = auStack_4a8;
      aiStack_4b0[0] = 3;
      *param_2 = 3;
      goto LAB_00424750;
    }
    iVar1 = FUN_00647e40(param_3,s_IsPoisoned_00720778);
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40(param_3,s_PoisonTime_0072076c);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_260 = *(undefined4 *)(param_1 + 0x5f38);
        aiStack_4b0[0] = 2;
        *param_2 = 2;
        puVar4 = auStack_4a8;
        goto LAB_00424750;
      }
      iVar1 = FUN_00647e40(param_3,s_PoisonDelay_00720760);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_260 = *(undefined4 *)(param_1 + 0x5f3c);
        puVar4 = auStack_4a8;
        aiStack_4b0[0] = 2;
        *param_2 = 2;
        goto LAB_00424750;
      }
      iVar1 = FUN_00647e40(param_3,s_m_bAttachedToPlatform_00720748);
      if (iVar1 != 0) {
        *param_2 = iStack_258;
        puVar4 = auStack_250;
        goto LAB_00424750;
      }
    }
    FUN_00406a80();
    uStack_25c = *(undefined4 *)(param_1 + 0x5f34);
  }
  puVar4 = auStack_4a8;
  aiStack_4b0[0] = 3;
  *param_2 = 3;
LAB_00424750:
  FUN_00424770(puVar4);
  return param_2;
}

