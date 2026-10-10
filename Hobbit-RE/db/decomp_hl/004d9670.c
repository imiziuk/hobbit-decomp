
void __fastcall FUN_004d9670(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  float fStack_48;
  float fStack_38;
  float fStack_28;
  float fStack_18;
  float fStack_8;
  
  iStack_a4 = param_1[0x13];
  iStack_a8 = param_1[0x12];
  iStack_ac = param_1[0x11];
  iStack_98 = param_1[0x16];
  iStack_8c = param_1[0x13];
  iStack_80 = param_1[0x16];
  iStack_74 = param_1[0x13];
  iStack_90 = param_1[0x15];
  iStack_68 = param_1[0x16];
  iStack_78 = param_1[0x12];
  iStack_5c = param_1[0x13];
  iStack_7c = param_1[0x14];
  iStack_60 = param_1[0x15];
  iStack_50 = param_1[0x16];
  iStack_a0 = iStack_ac;
  iStack_9c = iStack_a8;
  iStack_94 = iStack_ac;
  iStack_88 = iStack_ac;
  iStack_84 = iStack_90;
  iStack_70 = iStack_7c;
  iStack_6c = iStack_78;
  iStack_64 = iStack_7c;
  iStack_58 = iStack_7c;
  iStack_54 = iStack_60;
  FUN_0066c3a0(1,0);
  FUN_0066ddd0(0xffffffff);
  FUN_0066e180(&iStack_ac,8,0xc);
  FUN_0066e550(&DAT_0072dd10,0x18);
  FUN_0066d9a0();
  piVar2 = (int *)FUN_00549470(param_1 + 0x2a);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*param_1 + 0x34))(auStack_4c);
    FUN_0066dac0();
    iVar5 = 0;
    piVar4 = param_1 + 0x2a;
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        iVar1 = piVar2[1];
        fStack_8 = fStack_38 * *(float *)(iVar1 + 4 + iVar3) +
                   fStack_48 * *(float *)(iVar1 + iVar3) + fStack_28 * *(float *)(iVar1 + iVar3 + 8)
                   + fStack_18;
        FUN_0066a810(&stack0xffffff40,0xff3264c8);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0xc;
        piVar4 = piStack_b4;
      } while (iVar5 < *piVar2);
    }
    FUN_00549580(piVar4);
  }
  return;
}

