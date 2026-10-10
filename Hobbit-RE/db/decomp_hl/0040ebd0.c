
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040ebd0(int param_1,short param_2)

{
  short sVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c [3];
  undefined1 local_20 [32];
  
  FUN_0064f190(local_20,s_PS_erebor_pzl_tile_static_02d_0071e79c,(int)param_2);
  iVar2 = FUN_0054c120(local_20,1);
  if ((*(byte *)(iVar2 + 0x126) & 1) == 0) {
    FUN_004d22c0(1);
    FUN_00647e00(param_1 + 2,PTR_s_U_x_T_DxxKE_F_ExExx_xR_E_R_S_x_x_0071e6c4 + param_2,1);
    FUN_00659600(s_RuneActivate_0071e78c,1);
    sVar1 = *(short *)(param_1 + 0x5c);
    local_2c[1] = 1020.0;
    local_44 = 0x3f800000;
    local_40 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c[0] = (((float)(int)(short)((*(short *)(param_1 + 0x5e) - param_2 / sVar1) + -1) +
                   _DAT_006e936c) * (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44))) /
                  (float)(int)*(short *)(param_1 + 0x5e) + *(float *)(param_1 + 0x44);
    local_2c[2] = (((float)(int)(short)((sVar1 - param_2 % sVar1) + -1) + _DAT_006e936c) *
                  (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c))) / (float)(int)sVar1 +
                  *(float *)(param_1 + 0x4c);
    FUN_00488d30(s_Letter_0071e784,local_2c,&local_38,&local_44);
  }
  return;
}

