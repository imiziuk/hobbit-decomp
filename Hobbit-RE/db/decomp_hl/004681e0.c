
void __thiscall FUN_004681e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_ESI;
  undefined4 uVar1;
  int local_c;
  int local_8;
  undefined4 *local_4;
  
  local_c = param_1[5];
  local_8 = param_1[6];
  local_4 = (undefined4 *)param_1[7];
  FUN_00469060(&local_c,param_3,0,0xbf800000,0,0,1);
  uVar1 = 0;
  (**(code **)(*param_1 + 0x14))(&local_c);
  *local_4 = uVar1;
  local_4[1] = unaff_ESI;
  local_4[2] = local_c;
  return;
}

