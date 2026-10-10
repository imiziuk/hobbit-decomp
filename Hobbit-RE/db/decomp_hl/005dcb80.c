
void FUN_005dcb80(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_258 [2];
  undefined4 auStack_250 [128];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  
  FUN_005ccdb0(auStack_258,param_2);
  *param_1 = auStack_258[0];
  puVar2 = auStack_250;
  puVar3 = param_1 + 2;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x82] = uStack_50;
  param_1[0x83] = uStack_4c;
  param_1[0x84] = uStack_48;
  param_1[0x85] = uStack_44;
  param_1[0x86] = uStack_40;
  param_1[0x87] = uStack_3c;
  *(undefined1 *)((int)param_1 + 0x223) = uStack_35;
  *(undefined1 *)((int)param_1 + 0x222) = uStack_36;
  *(undefined1 *)((int)param_1 + 0x221) = uStack_37;
  *(undefined1 *)(param_1 + 0x88) = uStack_38;
  param_1[0x89] = uStack_34;
  param_1[0x8a] = uStack_30;
  param_1[0x8b] = uStack_2c;
  param_1[0x8c] = uStack_28;
  param_1[0x8d] = uStack_24;
  param_1[0x8e] = uStack_20;
  param_1[0x90] = uStack_18;
  param_1[0x91] = uStack_14;
  param_1[0x92] = uStack_10;
  param_1[0x93] = uStack_c;
  param_1[0x94] = uStack_8;
  param_1[0x95] = uStack_4;
  return;
}

