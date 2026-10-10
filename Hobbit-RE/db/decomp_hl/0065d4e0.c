
undefined4 FUN_0065d4e0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_68 [4];
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6775;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 1;
  cVar2 = FUN_0065c220();
  if (cVar2 == '\0') {
    FUN_0064a750(s_MMX_Is_not_present__The_Hobbit_w_0074e788);
  }
  cVar2 = FUN_0065c340();
  if (cVar2 == '\0') {
    pcVar6 = s_SSE_IS_NOT_PRESENT__THE_HOBBIT_M_0074e7ec;
  }
  else {
    pcVar6 = s_SSE_Instructions_detected__0074e7d0;
  }
  FUN_0064a750(pcVar6);
  if (DAT_007f0310 == 0) {
    FUN_0064a750(s_Direct3D_8_is_not_installed_or_i_0074e820);
    FUN_00649b60(local_64);
  }
  else {
    if (DAT_007f0ca8 != '\0') {
      FUN_00649920(local_68,&DAT_0074e850,&DAT_007f0ca8);
      local_4._0_1_ = 2;
      uVar3 = FUN_00649940();
      FUN_0064a750(uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      FUN_00649920(local_68,s_Driver_Filename__s_0074e854,&DAT_007f0aa8);
      local_4._0_1_ = 3;
      uVar3 = FUN_00649940();
      FUN_0064a750(uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      FUN_00649920(local_68,s_Vendor_0x_04X_0074e868,DAT_007f0eb0);
      local_4._0_1_ = 4;
      uVar3 = FUN_00649940();
      FUN_0064a750(uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      FUN_00649920(local_68,s_Device_0x_08X_0074e878,DAT_007f0eb4);
      local_4._0_1_ = 5;
      uVar3 = FUN_00649940();
      FUN_0064a750(uVar3);
      local_4._0_1_ = 1;
      FUN_00649950();
      FUN_00649920(local_68,s_Driver_0x_08X__08X_0074e888,DAT_007f0eac,DAT_007f0ea8);
      local_4._0_1_ = 6;
      uVar3 = FUN_00649940();
      FUN_0064a750(uVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00649950();
    }
    if (DAT_007f0434 != 0) {
      FUN_0064a750(s_Performance_Flags_detected__0074e8a0);
      piVar5 = (int *)*DAT_007f042c;
      if (piVar5 != DAT_007f042c) {
        do {
          uVar3 = FUN_0064a3a0(local_38,piVar5 + 3,10);
          local_4._0_1_ = 7;
          FUN_0064a7a0(uVar3);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00649ba0();
          piVar4 = (int *)piVar5[2];
          if (piVar4 == DAT_007f1434) {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              do {
                piVar5 = piVar4;
                piVar4 = (int *)piVar5[1];
              } while (piVar5 == (int *)piVar4[2]);
            }
            if ((int *)piVar5[2] != piVar4) {
              piVar5 = piVar4;
            }
          }
          else {
            for (piVar1 = (int *)*piVar4; piVar5 = piVar4, piVar1 != DAT_007f1434;
                piVar1 = (int *)*piVar1) {
              piVar4 = piVar1;
            }
          }
        } while (piVar5 != DAT_007f042c);
      }
      FUN_0064a720(10);
    }
    if (DAT_007f1000 == 0) {
      FUN_0064a750(s_Direct3D_Device_not_initialized__0074e8c0);
    }
    if (DAT_007edb08 != 0) {
      if (DAT_007edb08 == 3) {
        FUN_0064a750(s_SOFTWARE_VERTEX_PROCESSING_0074e8e4);
        pcVar6 = s_THIS_CARD_IS_BELOW_MINIMUM_SPEC__0074e900;
      }
      else if (DAT_007edb08 == 1) {
        pcVar6 = s_Hardware_Vertex_Processing_0074e924;
      }
      else {
        pcVar6 = s_Mixed_Vertex_Processing_0074e940;
      }
      FUN_0064a750(pcVar6);
      if (((byte)DAT_007edaec & 2) != 0) {
        FUN_0064a750(s_USING_REFERENCE_RASTERIZER_0074e95c);
      }
      if (DAT_007edb19 == '\0') {
        pcVar6 = s_REQUIRES_SOFTWARE_T_L_0074e990;
      }
      else {
        pcVar6 = s_Supports_Hardware_T_L_0074e978;
      }
      FUN_0064a750(pcVar6);
      if (DAT_007edb1a == '\0') {
        pcVar6 = s_REQUIRES_SOFTWARE_LIGHTING_0074e9c4;
      }
      else {
        pcVar6 = s_Supports_Hardware_Lighting_0074e9a8;
      }
      FUN_0064a750(pcVar6);
      if (DAT_007edb1b == '\0') {
        pcVar6 = s_REQUIRES_SOFTWARE_DYNAMIC_STATIC_0074ea0c;
      }
      else {
        pcVar6 = s_Supports_Hardware_Dynamic_Static_0074e9e0;
      }
      FUN_0064a750(pcVar6);
    }
    FUN_00649b60(local_64);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

