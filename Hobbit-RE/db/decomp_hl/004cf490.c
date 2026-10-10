
void __thiscall FUN_004cf490(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  param_2[0xc] = 0.0;
  param_2[8] = 0.0;
  param_2[4] = 0.0;
  param_2[0xd] = 0.0;
  param_2[9] = 0.0;
  param_2[1] = 0.0;
  param_2[0xe] = 0.0;
  param_2[6] = 0.0;
  param_2[2] = 0.0;
  param_2[0xb] = 0.0;
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[10] = 1.0;
  param_2[0xf] = 1.0;
  *param_2 = *(float *)(param_1 + 0x130);
  pfVar3 = param_2 + 2;
  param_2[1] = *(float *)(param_1 + 0x134) * DAT_006e92e4;
  *pfVar3 = *(float *)(param_1 + 0x138) * DAT_006e92e4;
  param_2[4] = *(float *)(param_1 + 0x130) * DAT_006e92e4;
  param_2[5] = *(float *)(param_1 + 0x134);
  param_2[6] = *(float *)(param_1 + 0x138) * DAT_006e92e4;
  param_2[8] = *(float *)(param_1 + 0x130) * DAT_006e92e4;
  param_2[9] = *(float *)(param_1 + 0x134) * DAT_006e92e4;
  param_2[10] = *(float *)(param_1 + 0x138);
  param_2[0xc] = *(float *)(param_1 + 0x130) * DAT_006e92e4;
  param_2[0xd] = *(float *)(param_1 + 0x134) * DAT_006e92e4;
  param_2[0xe] = *(float *)(param_1 + 0x138) * DAT_006e92e4;
  uStack_84 = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x194) == *(int *)(param_1 + 0x198)) {
    if (*(int *)(param_1 + 0x194) == 0) {
      uStack_98 = *(undefined4 *)(param_1 + 0x160);
      uStack_94 = *(undefined4 *)(param_1 + 0x164);
      uStack_90 = *(undefined4 *)(param_1 + 0x168);
      uStack_88 = *(undefined4 *)(param_1 + 0x16c);
      uStack_8c = *(undefined4 *)(param_1 + 0x170);
    }
    else {
      uStack_98 = *(undefined4 *)(param_1 + 0x174);
      uStack_94 = *(undefined4 *)(param_1 + 0x178);
      uStack_90 = *(undefined4 *)(param_1 + 0x17c);
      uStack_88 = *(undefined4 *)(param_1 + 0x180);
      uStack_8c = *(undefined4 *)(param_1 + 0x184);
    }
  }
  else {
    uStack_98 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_94 = *(undefined4 *)(param_1 + 0x1a4);
    uStack_90 = *(undefined4 *)(param_1 + 0x1a8);
    uStack_88 = *(undefined4 *)(param_1 + 0x1ac);
    uStack_8c = *(undefined4 *)(param_1 + 0x1b0);
  }
  FUN_00463c20(&uStack_8c);
  pfVar2 = (float *)FUN_0064e040(auStack_40,auStack_80,param_2);
  if ((param_2 != pfVar2) && (pfVar1 = pfVar2 + 0x10, pfVar2 != pfVar1)) {
    iVar4 = (int)pfVar2 - (int)param_2;
    do {
      pfVar3[-2] = *pfVar2;
      pfVar3[-1] = pfVar2[1];
      *pfVar3 = *(float *)(iVar4 + (int)pfVar3);
      pfVar3[1] = pfVar2[3];
      pfVar2 = pfVar2 + 4;
      pfVar3 = pfVar3 + 4;
    } while (pfVar2 != pfVar1);
  }
  FUN_00420470(&uStack_98);
  return;
}

