
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441160(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00549470(param_1 + 0x115);
  FUN_00549580(param_1 + 0x115);
  uVar6 = 0x3f000000;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_0053cc70(s_death_water_0072430c);
  FUN_00540840(uVar2,uVar4,uVar5,uVar6);
  FUN_004430e0(0);
  FUN_00659600(s_BilboDeathWater_007242fc,1);
  iVar1 = *param_1;
  param_1[0x17b0] = 0;
  FUN_00422420();
  iVar3 = __ftol();
  (**(code **)(iVar1 + 0x128))(-iVar3);
  _DAT_00763ed4 = 1;
  FUN_0041c2b0(0);
  return;
}

