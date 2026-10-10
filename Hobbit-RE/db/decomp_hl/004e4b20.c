
void __fastcall FUN_004e4b20(int param_1)

{
  short *psVar1;
  
  FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  psVar1 = &DAT_0072e922;
  do {
    FUN_00579b90(param_1 + 0xe0 + psVar1[-1] * 0xc,param_1 + 0xe0 + *psVar1 * 0xc,
                 param_1 + 0xe0 + psVar1[1] * 0xc,0,0,0);
    psVar1 = psVar1 + 3;
  } while ((int)psVar1 < 0x72e96a);
  FUN_005785b0();
  return;
}

