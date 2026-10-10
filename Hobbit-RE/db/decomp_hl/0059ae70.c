
undefined4 * __thiscall FUN_0059ae70(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_4a8 [511];
  undefined1 local_2a9;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250 [128];
  undefined1 local_50 [24];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00647e40(param_3,s_PhysicalControl_MinGroundDistanc_00743340);
  if (iVar1 == 0) {
    FUN_00425440();
    local_260 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 4);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_PhysicalControl_MaxGroundDistanc_0074331c);
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40(param_3,s_PhysicalControl_Initial_Idle_Ani_007432e8);
      if (iVar1 == 0) {
        FUN_00406a80();
        FUN_00647d70(local_4a8,*(undefined4 *)(param_1 + 0x110),0x200);
LAB_0059b09d:
        local_2a9 = 0;
        *param_2 = 0xd;
        FUN_00424770(local_4a8);
        return param_2;
      }
      iVar1 = FUN_00549470(param_1 + 0x9c);
      FUN_00549580(param_1 + 0x9c);
      if ((iVar1 == 0) || (*(int *)(param_1 + 0xa0) == -1)) {
        iVar1 = FUN_00647e40(param_3,s_PhysicalControl_BodyMaskedAnim_007432c8);
        if (iVar1 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          FUN_00647d70(local_4a8,"NONE",0x200);
          goto LAB_0059b09d;
        }
      }
      else {
        iVar1 = FUN_00647e40(param_3,s_PhysicalControl_BodyMaskedAnim_007432c8);
        if (iVar1 == 0) {
          FUN_00406a80();
          iVar1 = FUN_00549470(param_1 + 0x9c);
          FUN_00549580(param_1 + 0x9c);
          FUN_00647d70(local_4a8,*(int *)(param_1 + 0xa0) * 0x50 + *(int *)(iVar1 + 0x58),0x200);
          *param_2 = 0xd;
          local_2a9 = 0;
          FUN_00424770(local_4a8);
          return param_2;
        }
      }
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_258 = 0;
      *param_2 = 0;
      puVar2 = local_250;
      puVar3 = param_2 + 2;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_00480f60(local_50);
      FUN_00425250(local_38);
      FUN_004357e0(local_34);
      FUN_004357e0(local_28);
      param_2[0x91] = local_14;
      param_2[0x90] = local_18;
      param_2[0x92] = local_10;
      param_2[0x94] = local_8;
      param_2[0x93] = local_c;
      param_2[0x95] = local_4;
      return param_2;
    }
    FUN_00425440();
    local_260 = **(undefined4 **)(param_1 + 0x34);
  }
  *param_2 = 2;
  FUN_00424770(local_4a8);
  return param_2;
}

