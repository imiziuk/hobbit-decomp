
void __thiscall FUN_00534f30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  switch(param_2) {
  case 1:
    FUN_0064a2e0(s_AMBIENTOUTDOOR_00737278);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x248),1);
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x304) = 0;
    FUN_0064a2e0(s_MUSIC_Silence_00724fb8);
    uVar1 = *(undefined4 *)(param_1 + 0x284);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x274) = 0x42700000;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    FUN_0064a2e0(s_COMBAT_00737288);
    *(undefined4 *)(param_1 + 0x304) = 0;
    FUN_005355f0(0);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x268),3);
    return;
  case 4:
    FUN_0064a2e0(s_MUSIC_Silence_00724fb8);
    uVar1 = *(undefined4 *)(param_1 + 0x284);
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x274) = 0x42700000;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    FUN_0064a2e0(s_BOSSCOMBAT_00737290);
    FUN_005355f0(0);
    FUN_005356a0(&DAT_00764560,1,3,0);
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x28c) = 0;
    FUN_0064a2e0(s_COMBATVICTORY_007372bc);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x26c),3);
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x28c) = 0;
    FUN_0064a2e0(s_BOSSCOMBATVICTORY_007372a8);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x26c),3);
    return;
  default:
    return;
  case 9:
    FUN_0064a2e0(s_COMBATLOSS_0073729c);
    FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x26c),3);
    return;
  case 10:
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x290) = 0;
    return;
  }
  FUN_005355f0(uVar1);
  FUN_00535740(&DAT_00764560,1,2,0);
  return;
}

