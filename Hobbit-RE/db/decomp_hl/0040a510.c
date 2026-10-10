
void __fastcall FUN_0040a510(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    FUN_004021c0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
    iVar1 = FUN_0041bcc0();
    pfVar2 = (float *)FUN_005c0150();
    if ((((*pfVar2 <= *(float *)(iVar1 + 0x50)) &&
         (pfVar2[3] < *(float *)(iVar1 + 0x44) == (NAN(pfVar2[3]) || NAN(*(float *)(iVar1 + 0x44))))
         ) && (pfVar2[2] <= *(float *)(iVar1 + 0x58))) &&
       (((pfVar2[5] < *(float *)(iVar1 + 0x4c) == (NAN(pfVar2[5]) || NAN(*(float *)(iVar1 + 0x4c)))
         && (pfVar2[1] <= *(float *)(iVar1 + 0x54))) &&
        (pfVar2[4] < *(float *)(iVar1 + 0x48) == (NAN(pfVar2[4]) || NAN(*(float *)(iVar1 + 0x48)))))
       )) {
      FUN_0065f940(0xff000000);
      FUN_0065f480();
      FUN_0065f940(0xff000000);
      FUN_0065f480();
      FUN_0055cc80();
      FUN_005596a0(1);
      FUN_00532030();
      FUN_00659b70();
      FUN_0054e6d0(s_PageTurns_SubTitles_bin_0071dda4);
      FUN_0054e910(s_Narrator_PT13_0071dd94,0,0);
      FUN_0052ae30(s_PageTurn_13_0071dd88,1,0x140);
      FUN_0054ec40();
      FUN_0054e6c0();
      FUN_0054e6d0(s_CH_09_Smaug_SubTitles_bin_0071dce4);
      FUN_005596a0(0);
      FUN_00659c10();
      FUN_00532130();
      uVar4 = 0x3f28f5c3;
      *(undefined4 *)(param_1 + 0x110) = 1;
      uVar3 = extraout_ECX;
      FUN_00406b70(0xff000000);
      FUN_004f8520(0,uVar3,uVar4);
      FUN_0065f480();
      FUN_0065f480();
    }
  }
  if (*(int *)(param_1 + 0x114) == 0) {
    iVar1 = FUN_0041bcc0();
    if (*(int *)(iVar1 + 0x5960) != 0) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      iVar1 = FUN_0054c120(s_Base_Bilbo_Steps_on_Gold_0071dd6c,1);
      if (iVar1 != 0) {
        FUN_0046a550();
      }
    }
  }
  return;
}

