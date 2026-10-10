
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551460(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0065fce0(0);
  uVar1 = param_1;
  fVar2 = (float10)FUN_00673b40(param_1,0x42c80000,0);
  local_c = 0x3f000000;
  local_10 = 0xbd088889;
  if (param_4 != 0) {
    local_c = 0x3f800000;
    local_10 = 0;
  }
  param_1 = 0xffb4e6ff;
  FUN_00551520(uVar1,param_2,(float)((float10)_DAT_006e99c0 / fVar2),
               (float)(((float10)_DAT_006e99c0 / fVar2) * (float10)_DAT_006e936c *
                       (float10)_DAT_006ed17c * (float10)_DAT_006e9370),local_c,local_10,10,param_3,
               &param_1,param_5);
  return;
}

