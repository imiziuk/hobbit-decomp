
void __thiscall FUN_005c0d80(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0064f350(param_1 + 4,4,1,param_2);
  FUN_0064f350(param_1,4,1,param_2);
  FUN_0064f350(param_1 + 8,4,1,param_2);
  FUN_0064f350(param_1 + 0xc,4,1,param_2);
  piVar1 = (int *)(param_1 + 0x10);
  FUN_0064f350(piVar1,4,1,param_2);
  if (0 < *piVar1) {
    uVar2 = thunk_FUN_0064ff70(*piVar1 * 2,s_C__projects_meridian_Support_Geo_00745c40,0x329);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    FUN_0064f350(uVar2,2,*piVar1,param_2);
  }
  piVar1 = (int *)(param_1 + 0x18);
  FUN_0064f350(piVar1,4,1,param_2);
  if (0 < *piVar1) {
    FUN_0064ff40(*(undefined4 *)(param_1 + 0x1c),s_C__projects_meridian_Support_Geo_00745c40,0x339);
    uVar2 = thunk_FUN_0064ff70(*piVar1,s_C__projects_meridian_Support_Geo_00745c40,0x33a);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    FUN_0064f350(uVar2,1,*piVar1,param_2);
  }
  FUN_0064f350(param_1 + 0x24,4,1,param_2);
  FUN_0064f350(param_1 + 0x28,4,1,param_2);
  return;
}

