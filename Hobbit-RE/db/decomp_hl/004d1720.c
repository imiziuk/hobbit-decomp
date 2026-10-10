
undefined4 * __thiscall FUN_004d1720(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined1 local_4b4 [511];
  undefined1 local_2b5;
  uint local_268;
  undefined4 local_264;
  undefined4 local_25c [128];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4e06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_special_surfaces__GetProperty_0072d784);
  iVar4 = 0;
  local_4 = 0;
  iVar2 = FUN_00647e40(param_3,s_Is_Gold_Pile_0072d774);
  if (iVar2 == 0) {
    FUN_00406a80();
    local_4bc = 3;
    iVar2 = FUN_004ac4d0();
    local_268 = (uint)(iVar2 != 0);
  }
  else {
    iVar2 = FUN_00647e40(param_3,s_Is_Hidden_0072d768);
    if (iVar2 == 0) {
      FUN_00406a80();
      bVar1 = *(byte *)(param_1 + 0x126);
      local_4bc = 3;
      *param_2 = 3;
      local_268 = bVar1 & 1;
      FUN_00424770(local_4b4);
      goto LAB_004d1a7f;
    }
    iVar2 = FUN_00647e40(param_3,s_Surface_Type_0072d6a0);
    if (iVar2 != 0) {
      iVar2 = FUN_00647e40(param_3,s_Accepts_Decals_0072d748);
      if (iVar2 == 0) {
        FUN_00406a80();
        bVar1 = *(byte *)(param_1 + 0x127);
        local_4bc = 3;
        *param_2 = 3;
        local_268 = bVar1 & 1;
        FUN_00424770(local_4b4);
      }
      else {
        iVar2 = FUN_00647e40(param_3,s_IsSqueakyChickenBoard_0072d6b0);
        if (iVar2 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x127);
          local_4bc = 3;
          *param_2 = 3;
          local_268 = (bVar1 & 8) >> 3;
          FUN_00424770(local_4b4);
        }
        else {
          iVar2 = FUN_00647e40(param_3,s_Self_Illuminated_0072d734);
          if (iVar2 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            bVar1 = *(byte *)(param_1 + 0x127);
            local_4bc = 3;
            *param_2 = 3;
            local_268 = bVar1 >> 1 & 1;
            FUN_00424770(local_4b4);
          }
          else {
            iVar2 = FUN_00647e40(param_3,s_Technical_Copy_R_to_A_in_lightin_0072d704);
            if (iVar2 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              bVar1 = *(byte *)(param_1 + 0x127);
              local_4bc = 3;
              *param_2 = 3;
              local_268 = (bVar1 & 4) >> 2;
              FUN_00424770(local_4b4);
            }
            else {
              do {
                FUN_00649920(local_4c0,s_Submesh_dHidden_0072d758,iVar4);
                local_4._0_1_ = 1;
                uVar3 = FUN_00649940();
                iVar2 = FUN_00647e40(param_3,uVar3);
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_00649950();
                if (iVar2 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_264 = 3;
                  local_10 = FUN_004d0ae0(iVar4);
                  *param_2 = 3;
                  puVar5 = local_25c;
                  puVar6 = param_2 + 2;
                  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar6 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
                  }
                  FUN_004357e0(local_5c);
                  FUN_004357e0(local_50);
                  FUN_00425250(local_44);
                  param_2[0x89] = local_40;
                  param_2[0x8b] = local_38;
                  param_2[0x8a] = local_3c;
                  FUN_004357e0(local_34);
                  param_2[0x91] = local_20;
                  param_2[0x90] = local_24;
                  param_2[0x92] = local_1c;
                  param_2[0x94] = local_14;
                  param_2[0x93] = local_18;
                  param_2[0x95] = local_10;
                  local_4 = 0xffffffff;
                  FUN_006501e0();
                  ExceptionList = local_c;
                  return param_2;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 0x40);
              FUN_004abdf0(param_2,param_3);
            }
          }
        }
      }
      goto LAB_004d1a7f;
    }
    FUN_00406a80();
    local_4bc = 0xd;
    uVar3 = FUN_004d1130(*(byte *)(param_1 + 0x126) >> 3,0x200);
    FUN_00647d70(local_4b4,uVar3);
    local_2b5 = 0;
  }
  *param_2 = local_4bc;
  FUN_00424770(local_4b4);
LAB_004d1a7f:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return param_2;
}

