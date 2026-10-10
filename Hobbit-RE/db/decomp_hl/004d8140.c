
undefined4 * __thiscall FUN_004d8140(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_4fc [4];
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [4];
  undefined1 local_4ec [4];
  undefined4 local_4e8;
  char local_4e0 [511];
  undefined1 local_2e1;
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [16];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_264;
  undefined4 local_25c [128];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5467;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00647e40(param_3,&DAT_0072dacc);
  if (iVar2 == 0) {
    FUN_00406a80();
    local_294 = *(undefined4 *)(param_1 + 0x160);
    local_4e8 = 3;
    *param_2 = 3;
    FUN_00424770(local_4e0);
    ExceptionList = local_c;
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_Chest_Type_0072dc78);
  if (iVar2 == 0) {
    FUN_00406a80();
    local_29c = *(undefined4 *)(param_1 + 400);
    local_4e8 = 0xc;
    *param_2 = 0xc;
    FUN_00424770(local_4e0);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar2 = FUN_00647cf0(s_Camera_Position_0072db58);
  iVar3 = FUN_00647e80(param_3,s_Camera_Position_0072db58,iVar2);
  if (iVar3 != 0) {
LAB_004d8310:
    iVar2 = FUN_00647e40(param_3,s_Contents_Type_0072dd00);
    if (iVar2 == 0) {
      FUN_00425440();
      uVar5 = *(undefined4 *)(param_1 + 0x1fc);
    }
    else {
      iVar2 = FUN_00647e40(param_3,s_Value_0072dac4);
      if (iVar2 == 0) {
        FUN_00406a80();
        local_29c = *(undefined4 *)(param_1 + 0x188);
        local_4e8 = 1;
        *param_2 = 1;
        FUN_00424770(local_4e0);
        ExceptionList = local_c;
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Contents_Type_0072d044);
      if (iVar2 != 0) {
        iVar2 = FUN_00647e40(param_3,s_Contents_Trap_0072dc54);
        if (iVar2 == 0) {
          FUN_00406a80();
          local_29c = *(undefined4 *)(param_1 + 0x168);
          local_4e8 = 1;
          *param_2 = 1;
          FUN_00424770(local_4e0);
          ExceptionList = local_c;
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Contents_Trap_Num_Gadgets_0072dc38);
        if (iVar2 == 0) {
          FUN_00406a80();
          local_29c = *(undefined4 *)(param_1 + 0x16c);
          local_4e8 = 1;
          *param_2 = 1;
          FUN_00424770(local_4e0);
          ExceptionList = local_c;
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_Contents_Trap_Difficulty_0072dc1c);
        if (iVar2 == 0) {
          FUN_00406a80();
          local_29c = *(undefined4 *)(param_1 + 0x170);
          local_4e8 = 0xc;
          *param_2 = 0xc;
        }
        else {
          iVar2 = FUN_00647e40(param_3,s_Contents_Trap_Timer_0072dc08);
          if (iVar2 == 0) {
            FUN_00406a80();
            local_298 = *(undefined4 *)(param_1 + 0x174);
            local_4e8 = 2;
            *param_2 = 2;
            FUN_00424770(local_4e0);
            ExceptionList = local_c;
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Contents_Trap_DamageType_0072dbec);
          if (iVar2 == 0) {
            FUN_00406a80();
            local_29c = *(undefined4 *)(param_1 + 0x178);
            local_4e8 = 0xc;
            *param_2 = 0xc;
            FUN_00424770(local_4e0);
            ExceptionList = local_c;
            return param_2;
          }
          iVar2 = FUN_00647e40(param_3,s_Contents_Value_0072dbdc);
          if (iVar2 == 0) {
            FUN_00406a80();
            local_29c = *(undefined4 *)(param_1 + 0x188);
          }
          else {
            iVar2 = FUN_00647e40(param_3,s_Contents_Resource_0072dc64);
            if (iVar2 == 0) {
              FUN_00406a80();
              local_4e8 = 7;
              puVar4 = (undefined4 *)FUN_00649b80(param_1 + 0x1ac);
              pcVar6 = (char *)*puVar4;
              pcVar7 = local_4e0;
              do {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *pcVar7 = cVar1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              FUN_00649ba0();
              *param_2 = local_4e8;
              FUN_00424770(local_4e0);
              ExceptionList = local_c;
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Contents_Scale_0072db68);
            if (iVar2 == 0) {
              FUN_00406a80();
              local_298 = *(undefined4 *)(param_1 + 0x1f8);
              local_4e8 = 2;
              *param_2 = 2;
              FUN_00424770(local_4e0);
              ExceptionList = local_c;
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Contents_Count_0072da34);
            if (iVar2 != 0) {
              iVar2 = 0;
              if (0 < *(int *)(param_1 + 0x230)) {
                do {
                  FUN_00649920(local_4ec,s_Contents_Item__03d_Type_0072dbb0,iVar2);
                  local_4 = 0;
                  uVar5 = FUN_00649940();
                  iVar3 = FUN_00647e40(param_3,uVar5);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar3 == 0) {
                    FUN_00649920(local_4f4,s_Contents_Item__03d_Type_0072dbb0,iVar2);
                    local_4 = 1;
                    uVar5 = FUN_00649940();
                    iVar3 = FUN_00647e40(param_3,uVar5);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar3 == 0) {
                      FUN_00406a80();
                      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x44 + iVar2 * 0x78);
                      goto LAB_004d888a;
                    }
                  }
                  FUN_00649920(local_4f0,s_Contents_Item__03d_Resource_0072db94,iVar2);
                  local_4 = 2;
                  uVar5 = FUN_00649940();
                  iVar3 = FUN_00647e40(param_3,uVar5);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_4e8 = 7;
                    pcVar6 = *(char **)(*(int *)(param_1 + 0x234) + 0x14 + iVar2 * 0x78);
                    pcVar7 = local_4e0;
                    do {
                      cVar1 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                      *pcVar7 = cVar1;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar1 != '\0');
                    *param_2 = 7;
                    pcVar7 = local_4e0;
                    puVar4 = param_2 + 2;
                    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *puVar4 = *(undefined4 *)pcVar7;
                      pcVar7 = pcVar7 + 4;
                      puVar4 = puVar4 + 1;
                    }
                    FUN_00480f60(local_2e0);
                    FUN_00425250(local_2c8);
                    FUN_004357e0(&local_2c4);
                    FUN_004357e0(local_2b8);
                    param_2[0x90] = local_2a8;
                    param_2[0x91] = local_2a4;
                    param_2[0x92] = local_2a0;
                    param_2[0x93] = local_29c;
                    param_2[0x94] = local_298;
                    param_2[0x95] = local_294;
                    ExceptionList = local_c;
                    return param_2;
                  }
                  FUN_00649920(local_4fc,s_Contents_Item__03d_Value_0072db78,iVar2);
                  local_4 = 3;
                  uVar5 = FUN_00649940();
                  iVar3 = FUN_00647e40(param_3,uVar5);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar3 == 0) {
                    FUN_00649920(local_4f8,s_Contents_Item__03d_Value_0072db78,iVar2);
                    local_4 = 4;
                    uVar5 = FUN_00649940();
                    iVar3 = FUN_00647e40(param_3,uVar5);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar3 == 0) {
                      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                      local_264 = 1;
                      local_18 = *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x70 + iVar2 * 0x78);
                      *param_2 = 1;
                      puVar4 = local_25c;
                      puVar8 = param_2 + 2;
                      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar8 = *puVar4;
                        puVar4 = puVar4 + 1;
                        puVar8 = puVar8 + 1;
                      }
                      param_2[0x82] = local_5c;
                      param_2[0x83] = local_58;
                      param_2[0x84] = local_54;
                      FUN_004357e0(local_50);
                      *(undefined1 *)((int)param_2 + 0x223) = local_41;
                      *(undefined1 *)((int)param_2 + 0x221) = local_43;
                      *(undefined1 *)((int)param_2 + 0x222) = local_42;
                      *(undefined1 *)(param_2 + 0x88) = local_44;
                      param_2[0x8a] = local_3c;
                      param_2[0x89] = local_40;
                      param_2[0x8b] = local_38;
                      param_2[0x8d] = local_30;
                      param_2[0x8c] = local_34;
                      param_2[0x8e] = local_2c;
                      param_2[0x91] = local_20;
                      param_2[0x90] = local_24;
                      param_2[0x92] = local_1c;
                      param_2[0x94] = local_14;
                      param_2[0x93] = local_18;
                      param_2[0x95] = local_10;
                      ExceptionList = local_c;
                      return param_2;
                    }
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < *(int *)(param_1 + 0x230));
              }
              FUN_004c5ba0(param_2,param_3);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00406a80();
            local_29c = *(undefined4 *)(param_1 + 0x194);
          }
          local_4e8 = 1;
          *param_2 = 1;
        }
        FUN_00424770(local_4e0);
        ExceptionList = local_c;
        return param_2;
      }
      FUN_00406a80();
      uVar5 = *(undefined4 *)(param_1 + 0x1fc);
    }
LAB_004d888a:
    local_4e8 = 0xd;
    FUN_00647d70(local_4e0,uVar5,0x200);
    local_2e1 = 0;
    *param_2 = local_4e8;
    FUN_00424770(local_4e0);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647cf0(param_3);
  if (iVar2 == iVar3) {
    local_2c4 = *(undefined4 *)(param_1 + 0x248);
    local_2c0 = *(undefined4 *)(param_1 + 0x24c);
    local_2bc = *(undefined4 *)(param_1 + 0x250);
    local_4e8 = 8;
    *param_2 = 8;
    FUN_00424770(local_4e0);
    ExceptionList = local_c;
    return param_2;
  }
  iVar2 = iVar2 + param_3;
  iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
  if (iVar3 == 0) {
    local_298 = *(undefined4 *)(param_1 + 0x248);
  }
  else {
    iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
    if (iVar3 == 0) {
      local_298 = *(undefined4 *)(param_1 + 0x24c);
    }
    else {
      iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
      if (iVar2 != 0) goto LAB_004d8310;
      local_298 = *(undefined4 *)(param_1 + 0x250);
    }
  }
  local_4e8 = 2;
  *param_2 = 2;
  FUN_00424770(local_4e0);
  ExceptionList = local_c;
  return param_2;
}

