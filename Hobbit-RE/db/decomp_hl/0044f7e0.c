
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044f7e0(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfd10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_eel_colony__OnAdvanceLogic_00724b74);
  local_4 = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar3 = FUN_00450040();
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 200) < *(int *)(param_1 + 0xb4)) {
        param_2 = *(float *)(param_1 + 0xcc) - param_2;
        *(float *)(param_1 + 0xcc) = param_2;
        if (param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) {
          *(undefined4 *)(param_1 + 0xcc) = 0x41200000;
          *(undefined4 *)(param_1 + 0xec) = 0;
        }
      }
      else if ((*(byte *)(param_1 + 0xf4) & 2) != 0) {
        param_2 = *(float *)(param_1 + 0xcc) - param_2;
        *(float *)(param_1 + 0xcc) = param_2;
        if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
          FUN_00450430();
        }
      }
    }
    else {
      *(float *)(param_1 + 0xec) = param_2 + *(float *)(param_1 + 0xec);
      piVar4 = (int *)FUN_0041bcc0();
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
      uStack_6c = *puVar5;
      uStack_68 = puVar5[1];
      uStack_64 = puVar5[2];
      fStack_24 = (float)piVar4[0x11];
      fStack_20 = (float)piVar4[0x12];
      fStack_1c = (float)piVar4[0x13];
      FUN_004357e0(piVar4 + 0x14);
      if ((((fStack_24 <= *(float *)(param_1 + 0x50)) &&
           (fStack_18 < *(float *)(param_1 + 0x44) ==
            (NAN(fStack_18) || NAN(*(float *)(param_1 + 0x44))))) &&
          (fStack_1c <= *(float *)(param_1 + 0x58))) &&
         (((fStack_10 < *(float *)(param_1 + 0x4c) ==
            (NAN(fStack_10) || NAN(*(float *)(param_1 + 0x4c))) &&
           (fStack_20 <= *(float *)(param_1 + 0x54))) &&
          ((fStack_14 < *(float *)(param_1 + 0x48) ==
            (NAN(fStack_14) || NAN(*(float *)(param_1 + 0x48))) &&
           (iVar3 = FUN_0044f290(&uStack_6c,0x43480000,0x1f), iVar3 != 0)))))) {
        fStack_3c = 3.4028235e+38;
        fStack_38 = 3.4028235e+38;
        fStack_34 = 3.4028235e+38;
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        iVar8 = 0;
        if (0 < iVar3) {
          do {
            uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar8 * 8);
            uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4 + iVar8 * 8);
            FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
            local_4._0_1_ = 1;
            iVar6 = FUN_00406ce0(uVar1,uVar2);
            local_4 = (uint)local_4._1_3_ << 8;
            if (iVar6 == -1) {
              FUN_00649720();
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
              uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
              FUN_00649720();
            }
            fStack_3c = *(float *)(uVar7 + 0x44);
            fStack_38 = *(float *)(uVar7 + 0x48);
            fStack_34 = *(float *)(uVar7 + 0x4c);
            FUN_004357e0(uVar7 + 0x50);
            FUN_00401f00(fStack_30 + fStack_3c,fStack_2c + fStack_38,fStack_28 + fStack_34);
            FUN_00402160(&uStack_60,auStack_48,0x3f000000);
            uStack_50 = uStack_5c;
            uStack_54 = uStack_60;
            uStack_4c = uStack_58;
            if ((((fStack_3c <= fStack_18) &&
                 (fStack_30 < fStack_24 == (NAN(fStack_30) || NAN(fStack_24)))) &&
                ((fStack_34 <= fStack_10 &&
                 (((fStack_28 < fStack_1c == (NAN(fStack_28) || NAN(fStack_1c)) &&
                   (fStack_38 <= fStack_14)) &&
                  (fStack_2c < fStack_20 == (NAN(fStack_2c) || NAN(fStack_20)))))))) &&
               (iVar6 = FUN_00451ea0(&uStack_54,_DAT_00724b64), iVar6 != 0)) {
              FUN_0059ed70(&uStack_6c);
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar3);
        }
      }
      if ((*(ushort *)(param_1 + 0xf4) & 1) != 0) {
        *(undefined4 *)(param_1 + 0xec) = 0;
        *(ushort *)(param_1 + 0xf4) = *(ushort *)(param_1 + 0xf4) & 0xfffe;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

