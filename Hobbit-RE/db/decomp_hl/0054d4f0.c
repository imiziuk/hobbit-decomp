
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0054d4f0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58 [3];
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [12];
  undefined4 local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__SelectBBox_0073d07c);
  iVar3 = 0;
  local_4 = 0;
  FUN_00588a30(local_58);
  FUN_00401f00(param_5[3] - *param_5,param_5[4] - param_5[1],param_5[5] - param_5[2]);
  FUN_00402160(&local_4c,local_40,0x3f000000);
  if (local_4c * local_4c + local_48 * local_48 + local_44 * local_44 <= _DAT_006e933c) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_28 = param_5[1];
    local_2c = *param_5;
    local_1c = param_5[4];
    local_30 = param_4;
    local_24 = param_5[2];
    local_20 = param_5[3];
    local_18 = param_5[5];
    local_34 = 0xffffffff;
    local_14 = &LAB_0054d4c0;
    local_10 = local_58[0];
    FUN_0058a630(param_5,FUN_0054cdd0,&local_34);
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x28d8)) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x28c0) + iVar3);
        if ((((((iVar1 != 0) && ((*(byte *)(iVar1 + 0x7f) & 0x10) != 0)) &&
              ((*(uint *)(iVar1 + 0x10) & param_4) != 0)) &&
             ((*(float *)(iVar1 + 0x44) <= param_5[3] &&
              (*(float *)(iVar1 + 0x50) < *param_5 ==
               (NAN(*(float *)(iVar1 + 0x50)) || NAN(*param_5)))))) &&
            ((*(float *)(iVar1 + 0x4c) <= param_5[5] &&
             ((*(float *)(iVar1 + 0x58) < param_5[2] ==
               (NAN(*(float *)(iVar1 + 0x58)) || NAN(param_5[2])) &&
              (*(float *)(iVar1 + 0x48) <= param_5[4])))))) &&
           (*(float *)(iVar1 + 0x54) < param_5[1] ==
            (NAN(*(float *)(iVar1 + 0x54)) || NAN(param_5[1])))) {
          FUN_00588c70(local_58[0],*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(param_1 + 0x28d8));
    }
  }
  iVar3 = FUN_00588bd0(local_58[0]);
  if (iVar3 == 0) {
    FUN_00588b20(local_58[0]);
    *param_2 = 0xffffffff;
  }
  else {
    *param_2 = local_58[0];
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_2;
}

