
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00494f30(int *param_1,float param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_18 = param_1[0x11];
  iStack_14 = param_1[0x12];
  iStack_10 = param_1[0x13];
  iStack_c = param_1[0x14];
  iStack_8 = param_1[0x15];
  iStack_4 = param_1[0x16];
  iVar3 = FUN_00647cf0(s_Color_00728924);
  iVar4 = FUN_00647e80(param_2,s_Color_00728924,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar3 == iVar4) {
      if (*param_3 == 0x11) {
        *(undefined1 *)((int)param_1 + 0xcf) = *(undefined1 *)((int)param_3 + 0x223);
        *(undefined1 *)((int)param_1 + 0xce) = *(undefined1 *)((int)param_3 + 0x222);
        *(undefined1 *)((int)param_1 + 0xcd) = *(undefined1 *)((int)param_3 + 0x221);
        *(char *)(param_1 + 0x33) = (char)param_3[0x88];
        return 1;
      }
    }
    else {
      iVar3 = iVar3 + (int)param_2;
      iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
      if (iVar4 == 0) {
        if (*param_3 == 1) {
          *(char *)((int)param_1 + 0xce) = (char)param_3[0x93];
          return 1;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
        if (iVar4 == 0) {
          if (*param_3 == 1) {
            *(char *)((int)param_1 + 0xcd) = (char)param_3[0x93];
            return 1;
          }
        }
        else {
          iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
          if (iVar4 == 0) {
            if (*param_3 == 1) {
              *(char *)(param_1 + 0x33) = (char)param_3[0x93];
              return 1;
            }
          }
          else {
            iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
            if ((iVar3 == 0) && (*param_3 == 1)) {
              *(char *)((int)param_1 + 0xcf) = (char)param_3[0x93];
              return 1;
            }
          }
        }
      }
    }
  }
  iVar3 = FUN_00647e40(param_2,s_Light_Type_00729bc4);
  if (iVar3 == 0) {
    uVar5 = 1;
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      return 0;
    }
    iVar3 = param_3[0x93];
    param_1[0x43] = iVar3;
    if (iVar3 != 1) {
      param_1[0x43] = 1;
    }
    if (param_1[0x43] == 0) {
      param_1[0x43] = 1;
      return uVar5;
    }
  }
  else {
    iVar3 = FUN_00647e40(param_2,s_Intensity_0072550c);
    if (iVar3 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      param_2 = (float)param_3[0x94];
      if (DAT_006e92e4 < param_2) {
        if (param_2 < _DAT_006e958c == (NAN(param_2) || NAN(_DAT_006e958c))) {
          param_2 = 3.0;
        }
      }
      else {
        param_2 = 0.0;
      }
      FUN_00494620(param_2);
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Attenuation_Start_00729ba0);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Attenuation_End_00729b90);
    if (iVar3 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      param_2 = (float)param_3[0x94];
      if (DAT_006e92e4 < param_2) {
        if (param_2 < _DAT_006ec00c == (NAN(param_2) || NAN(_DAT_006ec00c))) {
          param_2 = 3.4028235e+38;
        }
      }
      else {
        param_2 = 0.0;
      }
      FUN_004947c0(param_2);
      if ((float)param_1[0x38] < param_2 != (NAN((float)param_1[0x38]) || NAN(param_2))) {
        param_2 = (float)param_1[0x38];
      }
      param_1[0x38] = (int)param_2;
      fVar1 = (float)param_1[0x39];
      fVar2 = -fVar1;
      param_1[0xc] = (int)fVar2;
      param_1[0xd] = (int)fVar2;
      param_1[0xb] = (int)fVar2;
      param_1[0xf] = (int)fVar1;
      param_1[0x10] = (int)fVar1;
      param_1[0xe] = (int)fVar1;
      (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Flicker_Amp_00729b84);
    if (iVar3 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      if ((float)param_3[0x94] < DAT_006e92e4 != (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
        param_1[0x3b] = (int)DAT_006e92e4;
        return 1;
      }
      param_1[0x3b] = param_3[0x94];
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Flicker_Jitter_00729b74);
    if (iVar3 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      if ((float)param_3[0x94] < DAT_006e92e4 != (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
        param_1[0x3c] = (int)DAT_006e92e4;
        return 1;
      }
      param_1[0x3c] = param_3[0x94];
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Flicker_Speed_00729b64);
    if (iVar3 == 0) {
      if (*param_3 != 2) {
        return 0;
      }
      if ((float)param_3[0x94] < DAT_006e92e4 != (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
        param_1[0x3a] = (int)DAT_006e92e4;
        return 1;
      }
      param_1[0x3a] = param_3[0x94];
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Dynamic_00729a88);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      FUN_004946a0(param_3[0x95]);
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Ambient_00729b04);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      FUN_00494900(param_3[0x95]);
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Flicker_00729a80);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      FUN_004946d0(param_3[0x95]);
      FUN_00493b80();
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_Player_00729b54);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      if (param_3[0x95] != 0) {
        param_1[0x42] = param_1[0x42] | 0x40;
        return 1;
      }
      param_1[0x42] = param_1[0x42] & 0xffffffbf;
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_NPC_00729b48);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      if (param_3[0x95] != 0) {
        param_1[0x42] = param_1[0x42] | 0x10;
        return 1;
      }
      param_1[0x42] = param_1[0x42] & 0xffffffef;
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_Internal_00729b38);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      if (param_3[0x95] != 0) {
        param_1[0x42] = param_1[0x42] | 0x400;
        return 1;
      }
      param_1[0x42] = param_1[0x42] & 0xfffffbff;
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_Playsurfaces_00729b24);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      if (param_3[0x95] != 0) {
        param_1[0x42] = param_1[0x42] | 0x800;
        return 1;
      }
      param_1[0x42] = param_1[0x42] & 0xfffff7ff;
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_Rigid_Instances_00729b0c);
    if (iVar3 == 0) {
      if (*param_3 != 3) {
        return 0;
      }
      if (param_3[0x95] != 0) {
        param_1[0x42] = param_1[0x42] | 0x1000;
        return 1;
      }
      param_1[0x42] = param_1[0x42] & 0xffffefff;
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Light_Channel_00729bb4);
    if (iVar3 == 0) {
      if (*param_3 != 1) {
        return 0;
      }
      iVar3 = param_3[0x93];
      if (iVar3 < 7) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 7;
      }
      *(char *)(param_1 + 0x44) = '\x01' << ((byte)iVar3 & 0x1f);
      return 1;
    }
    iVar3 = FUN_00647e40(param_2,s_Position_00724d1c);
    uVar5 = FUN_004ab750(param_2,param_3);
    if (iVar3 == 0) {
      FUN_005832c0(&iStack_18);
      FUN_005832c0(param_1 + 0x11);
    }
  }
  return uVar5;
}

