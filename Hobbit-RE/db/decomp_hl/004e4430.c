
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e4430(int *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_4;
  
  FUN_0066c3a0(3,0x24);
  FUN_0066ddd0(0x40008000);
  FUN_0066e180(param_1 + 0x38,8,0xc);
  FUN_0066e550(&DAT_0072e920,0x24);
  FUN_0066d9a0();
  FUN_0066c3a0(1,0);
  FUN_0066ddd0(0xff00ff00);
  FUN_0066e180(param_1 + 0x38,8,0xc);
  FUN_0066e550(&DAT_0072e968,0x18);
  FUN_0066d9a0();
  pfVar1 = (float *)(**(code **)(*param_1 + 0x28))();
  fVar2 = *pfVar1;
  fStack_20 = pfVar1[1];
  fStack_4 = (float)param_1[0x2c] * _DAT_006e9994;
  fStack_1c = pfVar1[2];
  uVar3 = 0;
  fStack_18 = (float)param_1[0x2a] * _DAT_006e9994 + fVar2;
  fStack_14 = fStack_20 + (float)param_1[0x2b] * _DAT_006e9994;
  fStack_10 = fStack_1c + fStack_4;
  fStack_24 = fVar2;
  FUN_00406b70(0xffffff00);
  FUN_00669ca0(&fStack_24,&fStack_18,fVar2,uVar3);
  return;
}

