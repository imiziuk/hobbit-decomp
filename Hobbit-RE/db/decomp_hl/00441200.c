
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441200(int *param_1)

{
  int extraout_ECX;
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [4];
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  undefined1 local_c [12];
  
  local_24 = param_1[0x119];
  local_20 = (float)param_1[0x11a];
  local_1c = param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_c,local_28);
  local_10 = local_1c;
  local_18 = local_24;
  local_14 = (float)param_1[0x232] * (float)param_1[0x248] * _DAT_006e99b0 + local_20;
  (**(code **)(*param_1 + 0x14))(&local_18,0);
  iVar1 = extraout_ECX;
  if (param_1[0x14d] < 1) {
    iVar1 = param_1[0x14b] + -2;
    if ((float)iVar1 < (float)param_1[0x14c] == ((float)iVar1 == (float)param_1[0x14c]))
    goto LAB_004412c7;
  }
  uVar2 = 0x3f800000;
  FUN_00406b70(0xff000000);
  FUN_004f8520(1,iVar1,uVar2);
LAB_004412c7:
  if ((NAN(_DAT_0075eba0) || NAN(DAT_006e92e8)) != (_DAT_0075eba0 == DAT_006e92e8)) {
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x1036);
  }
  return;
}

