
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068aa21(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pbVar2 = pbVar1 + *(int *)(param_1 + 0x1050);
  for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
    *param_4 = 0x3f800000;
    param_4[1] = 0x3f800000;
    param_4[2] = 0x3f800000;
    param_4[3] = (float)*pbVar1 * _DAT_006ed3a4;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

