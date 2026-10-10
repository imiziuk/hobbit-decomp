
void __fastcall FUN_00542580(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 300) = 1;
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x130),s_C__projects_meridian_Support_Ani_00737e20,0x26c);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 1;
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x140),s_C__projects_meridian_Support_Ani_00737e5c,0x270);
  *(undefined4 *)(param_1 + 0x140) = 0;
  piVar1 = (int *)(param_1 + 0x10c);
  iVar2 = 8;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x28))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

