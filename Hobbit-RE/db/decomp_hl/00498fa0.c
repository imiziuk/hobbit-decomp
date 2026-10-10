
undefined4 * __thiscall FUN_00498fa0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined4 auStack_4b4 [127];
  undefined1 uStack_2b5;
  undefined1 auStack_2b4 [24];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [12];
  undefined1 auStack_28c [16];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 auStack_25c [127];
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d33fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40(param_3,s_Teleport_Object_00729e44);
  if (iVar1 == 0) {
    FUN_00425440();
    uStack_268 = *(undefined4 *)(param_1 + 0x138);
    uStack_4bc = 3;
    *param_2 = 3;
    FUN_00424770(auStack_4b4);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Updated_00729e54);
    if (iVar1 == 0) {
      FUN_00425440();
      uStack_4bc = 3;
      uStack_268 = 0;
      *param_2 = 3;
      FUN_00424770(auStack_4b4);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_LoadObjects_Layer_List_Count_00729e18);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_270 = *(undefined4 *)(param_1 + 0x108);
        uStack_4bc = 1;
        *param_2 = 1;
        FUN_00424770(auStack_4b4);
      }
      else {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x108)) {
          do {
            FUN_00649920(auStack_4c0,s_LoadObjects_Layer__d_00729e00,iVar1);
            uStack_4 = 0;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              uStack_4bc = 6;
              FUN_00647d70(auStack_4b4,*(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar1 * 0x2c),
                           0x200);
              uStack_2b5 = 0;
              *param_2 = uStack_4bc;
              FUN_00424770(auStack_4b4);
              ExceptionList = pvStack_c;
              return param_2;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x108));
        }
        iVar1 = FUN_00647e40(param_3,s_UnloadObjects_Layer_List_Count_00729dd0);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_270 = *(undefined4 *)(param_1 + 0x124);
          uStack_4bc = 1;
          *param_2 = 1;
          FUN_00424770(auStack_4b4);
        }
        else {
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            do {
              FUN_00649920(auStack_4c0,s_UnloadObjects_Layer__d_00729db8,iVar1);
              uStack_4 = 1;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              uStack_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                uStack_4bc = 6;
                FUN_00647d70(auStack_4b4,*(undefined4 *)(*(int *)(param_1 + 0x128) + iVar1 * 0x2c),
                             0x200);
                uStack_2b5 = 0;
                *param_2 = uStack_4bc;
                FUN_00424770(auStack_4b4);
                ExceptionList = pvStack_c;
                return param_2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0x124));
          }
          iVar1 = FUN_00647e40(param_3,s_LoadResources_Layer_List_Count_00729d88);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_270 = *(undefined4 *)(param_1 + 0x150);
            uStack_4bc = 1;
            *param_2 = 1;
            FUN_00424770(auStack_4b4);
          }
          else {
            iVar1 = 0;
            if (0 < *(int *)(param_1 + 0x150)) {
              do {
                FUN_00649920(auStack_4c0,s_LoadResources_Layer__d_00729d70,iVar1);
                uStack_4 = 2;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                uStack_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00406a80();
                  uStack_4bc = 6;
                  FUN_00647d70(auStack_4b4,*(undefined4 *)(*(int *)(param_1 + 0x154) + iVar1 * 0x2c)
                               ,0x200);
                  *param_2 = uStack_4bc;
                  uStack_2b5 = 0;
                  FUN_00424770(auStack_4b4);
                  ExceptionList = pvStack_c;
                  return param_2;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < *(int *)(param_1 + 0x150));
            }
            iVar1 = FUN_00647e40(param_3,s_UnloadResources_Layer_List_Count_00729d3c);
            if (iVar1 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              uStack_4bc = 1;
              uStack_270 = *(undefined4 *)(param_1 + 0x16c);
              *param_2 = 1;
              puVar4 = auStack_4b4;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              FUN_00480f60(auStack_2b4);
              FUN_00425250(auStack_29c);
              FUN_004357e0(auStack_298);
              FUN_004357e0(auStack_28c);
              param_2[0x91] = uStack_278;
              param_2[0x90] = uStack_27c;
              param_2[0x92] = uStack_274;
              param_2[0x94] = uStack_26c;
              param_2[0x93] = uStack_270;
              param_2[0x95] = uStack_268;
            }
            else {
              iVar1 = 0;
              if (0 < *(int *)(param_1 + 0x16c)) {
                do {
                  FUN_00649920(auStack_4c0,s_UnloadResources_Layer__d_00729d20,iVar1);
                  uStack_4 = 3;
                  uVar2 = FUN_00649940();
                  iVar3 = FUN_00647e40(param_3,uVar2);
                  uStack_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    uStack_264 = 6;
                    FUN_00647d70(auStack_25c,
                                 *(undefined4 *)(*(int *)(param_1 + 0x170) + iVar1 * 0x2c),0x200);
                    *param_2 = uStack_264;
                    uStack_5d = 0;
                    puVar4 = auStack_25c;
                    puVar5 = param_2 + 2;
                    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                      *puVar5 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar5 = puVar5 + 1;
                    }
                    param_2[0x82] = uStack_5c;
                    param_2[0x83] = uStack_58;
                    param_2[0x84] = uStack_54;
                    param_2[0x85] = uStack_50;
                    param_2[0x86] = uStack_4c;
                    param_2[0x87] = uStack_48;
                    *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                    *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                    *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                    *(undefined1 *)(param_2 + 0x88) = uStack_44;
                    param_2[0x89] = uStack_40;
                    param_2[0x8a] = uStack_3c;
                    param_2[0x8b] = uStack_38;
                    param_2[0x8c] = uStack_34;
                    param_2[0x8d] = uStack_30;
                    param_2[0x8e] = uStack_2c;
                    param_2[0x90] = uStack_24;
                    param_2[0x91] = uStack_20;
                    param_2[0x92] = uStack_1c;
                    param_2[0x93] = uStack_18;
                    param_2[0x94] = uStack_14;
                    param_2[0x95] = uStack_10;
                    ExceptionList = pvStack_c;
                    return param_2;
                  }
                  iVar1 = iVar1 + 1;
                } while (iVar1 < *(int *)(param_1 + 0x16c));
              }
              FUN_004e37d0(param_2,param_3);
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_2;
}

