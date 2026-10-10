
void __thiscall FUN_00525730(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1d4) = *param_2;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x1d8) = uVar1;
  FUN_0064e7d0(s_Applying__dx_d__Last_Good__dx_d__0073578c,*(undefined4 *)(param_1 + 0x1d4),uVar1,
               *(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0),
               *(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8));
  uVar1 = FUN_00660a60();
  FUN_00660f20(*param_2,param_2[1],param_2[3],uVar1);
  return;
}

