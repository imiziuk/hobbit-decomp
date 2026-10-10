
undefined4 FUN_0065c730(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_007f0310 + 0x24))
                    (DAT_007f0310,DAT_007edafc,1,param_2,param_3,*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_3;
    FUN_0064e7d0(s_Setting_back_buffer_format_to__0_0074e414,param_3);
    return 1;
  }
  return 0;
}

