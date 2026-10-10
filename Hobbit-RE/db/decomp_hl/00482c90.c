
uint __thiscall FUN_00482c90(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  iVar2 = FUN_00647ed0(param_2,s_Rotation_X_00728c5c);
  if (iVar2 != 0) {
    iVar2 = FUN_00647ed0(param_2,s_Rotation_Z_00728c50);
    if (iVar2 != 0) {
      iVar2 = FUN_00647ed0(param_2,s_Rotation_Y_00728c44);
      if (iVar2 != 0) {
        iVar2 = FUN_00647ed0(param_2,s_Rotation_007207f0);
        if (iVar2 != 0) {
          iVar2 = FUN_00647ed0(param_2,s_Vert_0_00728c3c);
          if (iVar2 != 0) {
            iVar2 = FUN_00647ed0(param_2,s_Vert_1_00728c34);
            if (iVar2 != 0) {
              iVar2 = FUN_00647ed0(param_2,s_Vert_2_00728c2c);
              if (iVar2 != 0) {
                iVar2 = FUN_00647ed0(param_2,s_Vert_3_00728c24);
                if (iVar2 != 0) {
                  iVar2 = FUN_00647ed0(param_2,s_Scale_00725a04);
                  if (iVar2 != 0) {
                    iVar2 = FUN_00647ed0(param_2,s_Scale_X_00728c1c);
                    if (iVar2 != 0) {
                      iVar2 = FUN_00647ed0(param_2,s_Scale_Y_00728c14);
                      if (iVar2 != 0) {
                        iVar2 = FUN_00647ed0(param_2,s_Scale_Z_00728c0c);
                        if (iVar2 != 0) {
                          iVar2 = FUN_00647ed0(param_2,s_WorldBBox_00724d10);
                          if (iVar2 != 0) {
                            iVar2 = FUN_00647ed0(param_2,s_Position_X_00728c00);
                            if (iVar2 != 0) {
                              iVar2 = FUN_00647ed0(param_2,s_Position_Y_00728bf4);
                              if (iVar2 != 0) {
                                iVar2 = FUN_00647ed0(param_2,s_Position_Z_00728be8);
                                if (iVar2 != 0) {
                                  iVar2 = FUN_00647ed0(param_2,s_Layer_1_U_Tile_00728b5c);
                                  if (iVar2 != 0) {
                                    iVar2 = FUN_00647ed0(param_2,s_Layer_1_V_Tile_00728b4c);
                                    if (iVar2 != 0) {
                                      iVar2 = FUN_00647ed0(param_2,s_Layer_2_U_Tile_00728aa8);
                                      if (iVar2 != 0) {
                                        iVar2 = FUN_00647ed0(param_2,s_Layer_2_V_Tile_00728a98);
                                        if (iVar2 != 0) {
                                          iVar2 = FUN_00647ed0(param_2,s_Position_00724d1c);
                                          if (iVar2 != 0) goto LAB_00482e57;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_00482e57:
  iVar2 = FUN_00647e40(param_2,s_Mask_Texture_00728bd8);
  if (iVar2 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    param_1 = param_1 + 0x160;
  }
  else {
    iVar2 = FUN_00647e40(param_2,s_Fog_Texture_1_00728bc8);
    if (iVar2 == 0) {
      if ((*param_3 != 4) && (*param_3 != 7)) {
        return 0;
      }
      param_1 = param_1 + 0x158;
    }
    else {
      iVar2 = FUN_00647e40(param_2,s_Fog_Texture_2_00728bb8);
      if (iVar2 != 0) {
        iVar2 = FUN_00647e40(param_2,s_Double_Sided_00728ba8);
        if (iVar2 == 0) {
          *(byte *)(param_1 + 0x288) =
               (param_3[0x95] != 0 ^ *(byte *)(param_1 + 0x288)) & 1 ^ *(byte *)(param_1 + 0x288);
        }
        uVar3 = (uint)(iVar2 == 0);
        iVar2 = FUN_00647e40(param_2,s_Layer_Blend_Mode_00728b94);
        if (iVar2 == 0) {
          if ((*param_3 != 0xc) && (*param_3 != 1)) {
            return 0;
          }
          iVar2 = param_3[0x93];
          uVar3 = 1;
          *(int *)(param_1 + 0x238) = iVar2;
          if (1 < iVar2) {
            *(undefined4 *)(param_1 + 0x238) = 1;
          }
        }
        iVar2 = FUN_00647e40(param_2,s_Final_Blend_Mode_00728b80);
        if (iVar2 == 0) {
          if ((*param_3 != 0xc) && (*param_3 != 1)) {
            return 0;
          }
          iVar2 = param_3[0x93];
          *(int *)(param_1 + 0x23c) = iVar2;
          if (2 < iVar2) {
            *(undefined4 *)(param_1 + 0x23c) = 2;
          }
          uVar3 = 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Anim_Mode_00728b6c);
        if (iVar2 == 0) {
          if ((*param_3 != 0xc) && (*param_3 != 1)) {
            return 0;
          }
          *(int *)(param_1 + 0x280) = param_3[0x93];
          uVar3 = 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Anim_Mode_00728ab8);
        if (iVar2 == 0) {
          if ((*param_3 != 0xc) && (*param_3 != 1)) {
            return 0;
          }
          *(int *)(param_1 + 0x284) = param_3[0x93];
          uVar3 = 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Linear_U_Speed_00728b34);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x250) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Linear_V_Speed_00728b1c);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 600) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Wave_U_Amp_00728b08);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x260) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Wave_V_Amp_00728af4);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x270) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Wave_U_Freq_00728ae0);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x268) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_1_Wave_V_Freq_00728acc);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x278) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647ed0(param_2,s_Layer_1_U_Tile_00728b5c);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x240) = param_3[0x94];
          uVar3 = 1;
        }
        iVar2 = FUN_00647ed0(param_2,s_Layer_1_V_Tile_00728b4c);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x248) = param_3[0x94];
          uVar3 = 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Linear_U_Speed_00728a80);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x254) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Linear_V_Speed_00728a68);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x25c) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Wave_U_Amp_00728a54);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x264) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Wave_V_Amp_00728a40);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x274) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Wave_U_Freq_00728a2c);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x26c) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Layer_2_Wave_V_Freq_00728a18);
        if (iVar2 == 0) {
          if (*param_3 != 2) {
            return 0;
          }
          *(int *)(param_1 + 0x27c) = param_3[0x94];
          return 1;
        }
        iVar2 = FUN_00647ed0(param_2,s_Layer_2_U_Tile_00728aa8);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x244) = param_3[0x94];
          uVar3 = 1;
        }
        iVar2 = FUN_00647ed0(param_2,s_Layer_2_V_Tile_00728a98);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x24c) = param_3[0x94];
          uVar3 = 1;
        }
        iVar2 = FUN_00647e40(param_2,s_Double_Sided_00728ba8);
        if (iVar2 == 0) {
          if (*param_3 != 3) {
            return 0;
          }
          *(byte *)(param_1 + 0x288) =
               (*(byte *)(param_3 + 0x95) ^ *(byte *)(param_1 + 0x288)) & 1 ^
               *(byte *)(param_1 + 0x288);
          return 1;
        }
        if (uVar3 == 0) {
          uVar3 = FUN_004e52c0(param_2,param_3);
        }
        if (bVar1) {
          FUN_00482380();
        }
        return uVar3;
      }
      if ((*param_3 != 4) && (*param_3 != 7)) {
        return 0;
      }
      param_1 = param_1 + 0x15c;
    }
  }
  FUN_00549430(param_1,param_3 + 2);
  return 1;
}

