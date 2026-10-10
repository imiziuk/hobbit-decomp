
undefined4 * __thiscall FUN_005ac050(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_4a8 [584];
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_250 [592];
  
  iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_Do_Line_of_Sight_00744af0);
  if (iVar1 == 0) {
    FUN_00406a80();
    iStack_25c = (*(int *)(param_1 + 0x18) << 0x1d) >> 0x1f;
    puVar2 = auStack_4a8;
    *param_2 = 3;
    goto LAB_005ac243;
  }
  iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_Sight_Range_Purple_00744acc);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_260 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_Hearing_Range_Yell_00744aa8);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_260 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 2;
      puVar2 = auStack_4a8;
      goto LAB_005ac243;
    }
    iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_Loud_Hearing_Range_00744a80);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_260 = *(undefined4 *)(param_1 + 0x28);
      puVar2 = auStack_4a8;
      *param_2 = 2;
      goto LAB_005ac243;
    }
    iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_Smell_Range_Aqua__00744a60);
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40(param_3,s_Senses_Tweaks_ClearSenses_00744a44);
      if (iVar1 == 0) {
        FUN_00406a80();
        puVar2 = auStack_4a8;
        iStack_25c = 1;
        *param_2 = 3;
      }
      else {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        uStack_258 = 0;
        *param_2 = 0;
        puVar2 = auStack_250;
      }
      goto LAB_005ac243;
    }
    FUN_00406a80();
    uStack_260 = *(undefined4 *)(param_1 + 0x30);
  }
  puVar2 = auStack_4a8;
  *param_2 = 2;
LAB_005ac243:
  FUN_00424770(puVar2);
  return param_2;
}

