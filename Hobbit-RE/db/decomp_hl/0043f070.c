
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043f070(int *param_1)

{
  int iVar1;
  int local_10;
  undefined1 local_c [12];
  
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0xba6);
    return;
  }
  if (*(float *)(param_1[0x114] + 0x84) < (float)param_1[0x247]) {
    FUN_0043a3f0(4,s_C__projects_meridian_Support_Obj_00724060,0xbad);
    return;
  }
  local_10 = param_1[0x11d];
  iVar1 = FUN_00442790(param_1 + 5,local_10,local_c,&local_10,0);
  if (iVar1 != 0) {
    iVar1 = 0;
    (**(code **)(*param_1 + 0x14))(local_c);
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x11d] = iVar1;
    param_1[0x167] = param_1[0x167] + 1;
    FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0xbb9);
    return;
  }
  if (param_1[0x1d8] == 0) {
    param_1[0x270] = (int)((float)param_1[0x248] + (float)param_1[0x270]);
  }
  else {
    FUN_0044c120(0x10,0x3f800000);
    param_1[0x270] = 0;
  }
  if ((param_1[0x1d8] == 0) && (_DAT_006e95a8 < (float)param_1[0x270])) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xbcc);
  }
  return;
}

