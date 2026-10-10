
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0058e740(int param_1,float param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 *local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (param_2 != 0.0) {
    if ((*(uint *)(param_1 + 0x380) & 1 << (SUB41(param_2,0) & 0x1f)) == 0) {
      return 0;
    }
    param_1 = (int)param_2 * 0x1c + param_1;
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar2 = param_3[1];
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    FUN_00673930(&local_30,&local_24,uVar1,uVar2,0);
    local_4 = _DAT_006f407c * local_28;
    local_18 = (undefined4 *)(local_24 + _DAT_006f407c * local_30);
    local_14 = local_20 + local_2c * _DAT_006f407c;
    local_10 = local_1c + local_4;
    FUN_006b76e0(&local_18);
    FUN_006721e0(&param_3,&param_2);
    param_2 = param_2 + _DAT_006e9368;
    local_10 = 0.0;
    local_18 = param_3;
    local_14 = param_2;
    FUN_006b76c0(&local_18);
  }
  return 1;
}

