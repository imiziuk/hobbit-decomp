
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c8730(int param_1)

{
  float fVar1;
  float10 fVar2;
  float fStack_14;
  float afStack_10 [2];
  float fStack_8;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x16;
  *(undefined1 *)(param_1 + 0x20) = 0;
  afStack_10[0] = (float)FUN_00647b10(0xffffff9c,100);
  fStack_14 = (float)(int)afStack_10[0] + _DAT_006f4514;
  afStack_10[0] = (float)FUN_00647b10(0xffffff38,200);
  *(float *)(param_1 + 0x24) = (float)(int)afStack_10[0] + _DAT_006efe3c;
  *(float *)(param_1 + 0x28) = fStack_14;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  afStack_10[0] = (float)FUN_00647b10(0x140,0x208);
  fStack_8 = (float)(int)afStack_10[0];
  fVar2 = (float10)FUN_00647b30(0,0x40c90fdb);
  *(float *)(param_1 + 0x10) = (float)fVar2;
  FUN_0064c8e0((float)fVar2,afStack_10,&fStack_14);
  fVar1 = afStack_10[0] * DAT_006e92e4;
  *(float *)(param_1 + 4) =
       *(float *)(param_1 + 0x24) - (fStack_14 * DAT_006e92e4 - fStack_8 * afStack_10[0]);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0x28) - (fVar1 + fStack_8 * fStack_14);
  return;
}

