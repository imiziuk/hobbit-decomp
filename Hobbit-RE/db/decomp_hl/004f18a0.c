
void FUN_004f18a0(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5fe1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_web_wall__EnumerateProperties_0072f274);
  iVar6 = 0;
  local_4 = 0;
  if (DAT_0072f048 != 0) {
    DAT_0072f048 = 0;
    FUN_00649b20(s_Replace_0072f26c);
    local_4._0_1_ = 1;
    piVar4 = DAT_0075e304;
    iVar2 = DAT_0075e308;
    if (DAT_0075e308 < DAT_0075e300 + 1) {
      if (DAT_0075e310 == 0) {
        iVar2 = DAT_0075e308 / 2;
        iVar5 = 1;
        if (0 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar5 + DAT_0075e300 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + DAT_0075e300;
        }
      }
      else {
        iVar2 = DAT_0075e300 + DAT_0075e310;
      }
      piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 2;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar2;
        FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      local_4._0_1_ = 1;
      if (0 < DAT_0075e300) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_0075e304);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar6 < DAT_0075e300);
      }
      if (DAT_0075e304 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075e308 = iVar2;
    DAT_0075e304 = piVar4;
    FUN_0064a320(local_38);
    DAT_0075e300 = DAT_0075e300 + 1;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(s_Blend_0072f264);
    local_4._0_1_ = 3;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 3;
    piVar4 = DAT_0075e304;
    iVar6 = DAT_0075e308;
    if (DAT_0075e308 < DAT_0075e300 + 1) {
      if (DAT_0075e310 == 0) {
        iVar6 = DAT_0075e308 / 2;
        iVar2 = 1;
        if (0 < iVar6) {
          iVar2 = iVar6;
        }
        if (iVar2 + DAT_0075e300 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          iVar6 = iVar6 + DAT_0075e300;
        }
      }
      else {
        iVar6 = DAT_0075e300 + DAT_0075e310;
      }
      piVar3 = (int *)operator_new(iVar6 * 0x2c + 4);
      local_4._0_1_ = 4;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar6;
        FUN_006c043b(piVar4,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
      }
      iVar2 = 0;
      local_4._0_1_ = 3;
      if (0 < DAT_0075e300) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_0075e304);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar2 < DAT_0075e300);
      }
      uVar1 = (undefined1)local_4;
      if (DAT_0075e304 != (int *)0x0) {
        FUN_00407f70(3);
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    DAT_0075e308 = iVar6;
    DAT_0075e304 = piVar4;
    FUN_0064a320(local_38);
    DAT_0075e300 = DAT_0075e300 + 1;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(&PTR_LAB_00728ca0);
    local_4._0_1_ = 5;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 5;
    piVar4 = DAT_0075e304;
    iVar6 = DAT_0075e308;
    if (DAT_0075e308 < DAT_0075e300 + 1) {
      if (DAT_0075e310 == 0) {
        iVar6 = DAT_0075e308 / 2;
        iVar2 = 1;
        if (0 < iVar6) {
          iVar2 = iVar6;
        }
        if (iVar2 + DAT_0075e300 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          iVar6 = iVar6 + DAT_0075e300;
        }
      }
      else {
        iVar6 = DAT_0075e300 + DAT_0075e310;
      }
      piVar3 = (int *)operator_new(iVar6 * 0x2c + 4);
      local_4._0_1_ = 6;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar6;
        FUN_006c043b(piVar4,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
      }
      iVar2 = 0;
      local_4._0_1_ = 5;
      if (0 < DAT_0075e300) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_0075e304);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar2 < DAT_0075e300);
      }
      uVar1 = (undefined1)local_4;
      if (DAT_0075e304 != (int *)0x0) {
        FUN_00407f70(3);
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    DAT_0075e308 = iVar6;
    DAT_0075e304 = piVar4;
    FUN_0064a320(local_38);
    DAT_0075e300 = DAT_0075e300 + 1;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
  }
  FUN_004e4ed0(param_1);
  FUN_004f1e00(param_1,s_Texture_Resource_0072ee64,4,1,2);
  FUN_00496020(param_1,s_Blend_Mode_0072f1f4,&DAT_0075e2f8,2);
  FUN_0048b8e0(param_1,s_Minimum_Color_0072f254,2);
  FUN_005669e0(param_1,s_Breakable_by_Sting_0072f240,2);
  FUN_005669e0(param_1,s_Breakable_by_Stick_0072f22c,2);
  FUN_005669e0(param_1,s_Breakable_by_Stone_0072f218,2);
  FUN_005669e0(param_1,s_Breakable_by_any_pain_0072f200,2);
  FUN_00499e60(param_1,s___Cells_Wide_0072f1e4,2,0,0xffffffff);
  FUN_00499e60(param_1,s___Cells_High_0072f1d4,2,0,0xffffffff);
  FUN_00499e60(param_1,s_Init_Width_0072f1c8,4,0,0xffffffff);
  FUN_00499e60(param_1,s_Init_Height_0072f1bc,4,0,0xffffffff);
  FUN_00537ff0(param_1,s_Texture_U_Tile_Amt_0072f1a8,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Texture_V_Tile_Amt_0072f194,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Freeze_Distance__cm__0072f17c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Sleep_Time__sec__0072f168,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Collision_Response_Scale_0072f14c,2,0x800000,0x7f7fffff);
  FUN_005669e0(param_1,s_Broken_0072f144,0x38);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

