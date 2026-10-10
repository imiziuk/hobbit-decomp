
void __thiscall FUN_004b42c0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004b49b0();
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xd4))();
  FUN_006414f0(s_Resource_0072bdfc,uVar1);
  FUN_00641560(&DAT_00726118,param_1 + 0x11);
  FUN_00641760(s_DoesNotCollide_0072bdec,*(byte *)((int)param_1 + 0x7a) & 4);
  FUN_004d0d70(param_2);
  FUN_006412c0();
  return;
}

