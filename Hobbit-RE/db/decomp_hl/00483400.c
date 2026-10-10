
void FUN_00483400(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2a8f;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_007288ec != 0) {
    DAT_007288ec = 0;
    ExceptionList = &local_c;
    FUN_00649b20(&PTR_LAB_00728ca0);
    local_4 = 0;
    piVar2 = DAT_0075cde0;
    iVar1 = DAT_0075cde4;
    if (DAT_0075cde4 < DAT_0075cddc + 1) {
      if (DAT_0075cdec == 0) {
        iVar1 = DAT_0075cde4 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cddc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cddc;
        }
      }
      else {
        iVar1 = DAT_0075cddc + DAT_0075cdec;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar5 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075cddc) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cde0);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cddc);
      }
      piVar2 = piVar3;
      if (DAT_0075cde0 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cde4 = iVar1;
    DAT_0075cde0 = piVar2;
    FUN_0064a320(local_64);
    DAT_0075cddc = DAT_0075cddc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Multiply_00728c94);
    local_4 = 2;
    piVar3 = DAT_0075cde0;
    iVar1 = DAT_0075cde4;
    if (DAT_0075cde4 < DAT_0075cddc + 1) {
      if (DAT_0075cdec == 0) {
        iVar1 = DAT_0075cde4 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cddc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cddc;
        }
      }
      else {
        iVar1 = DAT_0075cddc + DAT_0075cdec;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cddc) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cde0);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cddc);
      }
      if (DAT_0075cde0 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cde4 = iVar1;
    DAT_0075cde0 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cddc = DAT_0075cddc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&PTR_LAB_00728ca0);
    local_4 = 4;
    piVar3 = DAT_0075cd70;
    iVar1 = DAT_0075cd74;
    if (DAT_0075cd74 < DAT_0075cd6c + 1) {
      if (DAT_0075cd7c == 0) {
        iVar1 = DAT_0075cd74 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd6c < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd6c;
        }
      }
      else {
        iVar1 = DAT_0075cd6c + DAT_0075cd7c;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075cd6c) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cd70);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cd6c);
      }
      if (DAT_0075cd70 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cd74 = iVar1;
    DAT_0075cd70 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cd6c = DAT_0075cd6c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Multiply_00728c94);
    local_4 = 6;
    piVar3 = DAT_0075cd70;
    iVar1 = DAT_0075cd74;
    if (DAT_0075cd74 < DAT_0075cd6c + 1) {
      if (DAT_0075cd7c == 0) {
        iVar1 = DAT_0075cd74 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd6c < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd6c;
        }
      }
      else {
        iVar1 = DAT_0075cd6c + DAT_0075cd7c;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 7;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      if (0 < DAT_0075cd6c) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cd70);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cd6c);
      }
      if (DAT_0075cd70 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cd74 = iVar1;
    DAT_0075cd70 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cd6c = DAT_0075cd6c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Transparent_00728c88);
    local_4 = 8;
    piVar3 = DAT_0075cd70;
    iVar1 = DAT_0075cd74;
    if (DAT_0075cd74 < DAT_0075cd6c + 1) {
      if (DAT_0075cd7c == 0) {
        iVar1 = DAT_0075cd74 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd6c < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd6c;
        }
      }
      else {
        iVar1 = DAT_0075cd6c + DAT_0075cd7c;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 9;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0 < DAT_0075cd6c) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075cd70);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075cd6c);
      }
      if (DAT_0075cd70 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075cd74 = iVar1;
    DAT_0075cd70 = piVar3;
    FUN_0064a320(local_64);
    DAT_0075cd6c = DAT_0075cd6c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Linear_00728c80);
    local_4 = 10;
    FUN_00469980(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00728c78);
    local_4 = 0xb;
    FUN_00469980(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Linear_00728c80);
    local_4 = 0xc;
    FUN_00469980(local_64);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(&DAT_00728c78);
    local_4 = 0xd;
    FUN_00469980(local_38);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_004e4ed0(param_1);
  FUN_004f1e00(param_1,s_Mask_Texture_00728bd8,4,1,2);
  FUN_004f1e00(param_1,s_Fog_Texture_1_00728bc8,4,1,2);
  FUN_004f1e00(param_1,s_Fog_Texture_2_00728bb8,4,1,2);
  FUN_005669e0(param_1,s_Double_Sided_00728ba8,2);
  FUN_00496020(param_1,s_Layer_Blend_Mode_00728b94,&DAT_0075cdd4,2);
  FUN_00496020(param_1,s_Final_Blend_Mode_00728b80,&DAT_0075cd64,2);
  FUN_00474220(param_1,s_Layer_1_00728c70,2,0);
  FUN_00496020(param_1,s_Layer_1_Anim_Mode_00728b6c,&DAT_0075cd80,2);
  FUN_00537ff0(param_1,s_Layer_1_U_Tile_00728b5c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_V_Tile_00728b4c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Linear_U_Speed_00728b34,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Linear_V_Speed_00728b1c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Wave_U_Amp_00728b08,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Wave_U_Freq_00728ae0,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Wave_V_Amp_00728af4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_1_Wave_V_Freq_00728acc,2,0x800000,0x7f7fffff);
  FUN_00474220(param_1,s_Layer_2_00728c68,2,0);
  FUN_00496020(param_1,s_Layer_2_Anim_Mode_00728ab8,&DAT_0075cdb8,2);
  FUN_00537ff0(param_1,s_Layer_2_U_Tile_00728aa8,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_V_Tile_00728a98,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Linear_U_Speed_00728a80,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Linear_V_Speed_00728a68,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Wave_U_Amp_00728a54,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Wave_U_Freq_00728a2c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Wave_V_Amp_00728a40,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Layer_2_Wave_V_Freq_00728a18,2,0x800000,0x7f7fffff);
  ExceptionList = local_c;
  return;
}

