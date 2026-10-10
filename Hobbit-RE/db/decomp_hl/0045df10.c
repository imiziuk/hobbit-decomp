
undefined4 * __thiscall FUN_0045df10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_250 [568];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Camera_Path_00725d5c);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_18 = *(undefined4 *)(param_1 + 0xb8);
    uStack_14 = *(undefined4 *)(param_1 + 0xbc);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Target_Volume_00725d4c);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_18 = *(undefined4 *)(param_1 + 200);
      uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_Snap_to_Position_00725d38);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(undefined4 *)(param_1 + 0xa8);
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Teleport_Only_00725d28);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(undefined4 *)(param_1 + 0xb0);
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_One_Shot_Only_00725d18);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_4 = *(undefined4 *)(param_1 + 0xb4);
        *param_2 = 3;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Trigger_Delay_00725d08);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xd0);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Min_Distance_00725cf8);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xc0);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Max_Distance_00725ce8);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_8 = *(undefined4 *)(param_1 + 0xc4);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Override_Lookat_00725cd8);
      if (iVar1 != 0) {
        FUN_004abdf0(param_2,param_3);
        return param_2;
      }
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      uStack_18 = *(undefined4 *)(param_1 + 0xf0);
      uStack_14 = *(undefined4 *)(param_1 + 0xf4);
    }
  }
  *param_2 = 0xf;
  FUN_00424770(auStack_250);
  return param_2;
}

