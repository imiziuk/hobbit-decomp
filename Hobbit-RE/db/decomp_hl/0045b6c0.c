
void __fastcall FUN_0045b6c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  uStack_7c = *(undefined4 *)(param_1 + 0x4c);
  uStack_80 = *(undefined4 *)(param_1 + 0x48);
  uStack_84 = *(undefined4 *)(param_1 + 0x44);
  uStack_70 = *(undefined4 *)(param_1 + 0x58);
  uStack_64 = *(undefined4 *)(param_1 + 0x4c);
  uStack_58 = *(undefined4 *)(param_1 + 0x58);
  uStack_4c = *(undefined4 *)(param_1 + 0x4c);
  uStack_68 = *(undefined4 *)(param_1 + 0x54);
  uStack_40 = *(undefined4 *)(param_1 + 0x58);
  uStack_50 = *(undefined4 *)(param_1 + 0x48);
  uStack_34 = *(undefined4 *)(param_1 + 0x4c);
  uStack_54 = *(undefined4 *)(param_1 + 0x50);
  uStack_38 = *(undefined4 *)(param_1 + 0x54);
  uStack_28 = *(undefined4 *)(param_1 + 0x58);
  uStack_78 = uStack_84;
  uStack_74 = uStack_80;
  uStack_6c = uStack_84;
  uStack_60 = uStack_84;
  uStack_5c = uStack_68;
  uStack_48 = uStack_54;
  uStack_44 = uStack_50;
  uStack_3c = uStack_54;
  uStack_30 = uStack_54;
  uStack_2c = uStack_38;
  FUN_0066c3a0(1,0);
  FUN_0066ddd0(0xffffffff);
  FUN_0066e180(&uStack_84,8,0xc);
  FUN_0066e550(&DAT_00725b2c,0x18);
  FUN_0066d9a0();
  uVar3 = extraout_ECX;
  if ((*(byte *)(param_1 + 0x126) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x15b) & 0x40) == 0) {
      pcVar5 = s_BREAKAWAY_00725b84;
      FUN_00406b70(0xffffffff);
      uVar1 = FUN_00401f00(0,0x42480000,0);
      uVar2 = FUN_0045bbd0(auStack_24);
      puVar4 = auStack_c;
    }
    else {
      pcVar5 = s_ANIMATING_00725b90;
      FUN_00406b70(0xffffffff);
      uVar1 = FUN_00401f00(0,0x42480000,0);
      uVar2 = FUN_0045bbd0(auStack_24);
      puVar4 = auStack_c;
    }
  }
  else {
    pcVar5 = s_HIDDEN_00725b9c;
    FUN_00406b70(0xffffffff);
    uVar1 = FUN_00401f00(0,0x42480000,0);
    uVar2 = FUN_0045bbd0(auStack_24);
    puVar4 = auStack_18;
  }
  uVar3 = FUN_00402130(puVar4,uVar2,uVar1,uVar3,pcVar5);
  FUN_0066ae20(uVar3);
  return;
}

