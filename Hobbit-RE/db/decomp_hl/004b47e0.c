
undefined4 * __thiscall FUN_004b47e0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_250 [127];
  undefined1 uStack_51;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Resource_Name_0072be30);
  if (iVar1 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0xbc);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0075b6e0;
    }
    FUN_00647d70(auStack_250,puVar2,0x200);
    *param_2 = 7;
    uStack_51 = 0;
    puVar3 = auStack_250;
    puVar4 = param_2 + 2;
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004357e0(auStack_50);
    FUN_004357e0(auStack_44);
    *(undefined1 *)((int)param_2 + 0x223) = uStack_35;
    *(undefined1 *)((int)param_2 + 0x222) = uStack_36;
    *(undefined1 *)(param_2 + 0x88) = uStack_38;
    *(undefined1 *)((int)param_2 + 0x221) = uStack_37;
    param_2[0x89] = uStack_34;
    param_2[0x8b] = uStack_2c;
    param_2[0x8a] = uStack_30;
    FUN_004357e0(auStack_28);
    param_2[0x90] = uStack_18;
    param_2[0x91] = uStack_14;
    param_2[0x92] = uStack_10;
    param_2[0x93] = uStack_c;
    param_2[0x94] = uStack_8;
    param_2[0x95] = uStack_4;
    return param_2;
  }
  FUN_004d1720(param_2,param_3);
  return param_2;
}

