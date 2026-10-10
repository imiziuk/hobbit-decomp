
undefined4 * __thiscall FUN_0045ba20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_250 [134];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_CollapseDelay_00725ba4);
  if (iVar1 == 0) {
    uStack_8 = *(undefined4 *)(param_1 + 0x160);
    *param_2 = 2;
    puVar2 = auStack_250;
    puVar3 = param_2 + 2;
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2[0x82] = 0x7f7fffff;
    param_2[0x83] = 0x7f7fffff;
    param_2[0x84] = 0x7f7fffff;
    param_2[0x85] = 0xff7fffff;
    param_2[0x86] = 0xff7fffff;
    param_2[0x87] = 0xff7fffff;
    *(undefined1 *)((int)param_2 + 0x223) = uStack_35;
    *(undefined1 *)((int)param_2 + 0x222) = uStack_36;
    *(undefined1 *)((int)param_2 + 0x221) = uStack_37;
    *(undefined1 *)(param_2 + 0x88) = uStack_38;
    param_2[0x89] = uStack_34;
    param_2[0x8a] = uStack_30;
    param_2[0x8b] = uStack_2c;
    param_2[0x8c] = uStack_28;
    param_2[0x8d] = uStack_24;
    param_2[0x8e] = uStack_20;
    param_2[0x90] = uStack_18;
    param_2[0x94] = uStack_8;
    param_2[0x91] = uStack_14;
    param_2[0x92] = uStack_10;
    param_2[0x93] = uStack_c;
    param_2[0x95] = uStack_4;
    return param_2;
  }
  FUN_004c5ba0(param_2,param_3);
  return param_2;
}

