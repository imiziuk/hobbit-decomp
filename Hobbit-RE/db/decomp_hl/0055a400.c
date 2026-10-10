
void FUN_0055a400(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 *local_110;
  int local_10c;
  int local_108;
  undefined1 local_fc [12];
  int local_f0;
  char local_e4 [4];
  char local_e0 [4];
  char local_dc;
  int local_a0 [2];
  int local_98;
  int local_94;
  undefined4 local_58;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da11c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_layer_mgr__LoadObjects_0073e398);
  iVar6 = 0;
  local_4 = 0;
  FUN_00649600(s_layer_mgr__LoadObjects_0073e398);
  local_e0[0] = s_ALL_NPCS_0073e38c[4];
  local_e0[1] = s_ALL_NPCS_0073e38c[5];
  local_e0[2] = s_ALL_NPCS_0073e38c[6];
  local_e0[3] = s_ALL_NPCS_0073e38c[7];
  local_4._0_1_ = 1;
  local_e4[0] = s_ALL_NPCS_0073e38c[0];
  local_e4[1] = s_ALL_NPCS_0073e38c[1];
  local_e4[2] = s_ALL_NPCS_0073e38c[2];
  local_e4[3] = s_ALL_NPCS_0073e38c[3];
  local_dc = s_ALL_NPCS_0073e38c[8];
  FUN_0063fb10();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0064e870(4,s__________________________________0073e144);
  FUN_0064e870(4,s____________LOADING_OBJECTS_______0073e364);
  FUN_0064e870(4,s__________________________________0073e144);
  local_10c = 0;
  if (0 < DAT_00771f60) {
    do {
      FUN_00649600(s_ls_Render___0073e358);
      local_4._0_1_ = 3;
      FUN_004f9d20();
      local_4._0_1_ = 2;
      FUN_00649720();
      FUN_00649920(local_fc,s__s_export_0073e34c,iVar6 + DAT_00771f64);
      uVar8 = 0;
      local_4._0_1_ = 4;
      uVar2 = FUN_00649940(0);
      uVar2 = FUN_005496c0(uVar2,uVar8);
      FUN_00649b20(uVar2);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00649950();
      iVar3 = FUN_0063fc50(local_58);
      if (iVar3 == 0) {
        iVar3 = FUN_0064f210(local_58,&DAT_0073e348);
        if (iVar3 == 0) {
          FUN_0064e7d0(s_Error_loading_layer___s__0073e32c,iVar6 + DAT_00771f64);
        }
        else {
          FUN_0064f2b0(iVar3);
        }
      }
      else {
        iVar3 = FUN_0063ff20();
        while (iVar3 != 0) {
          FUN_00649600(s_ls_Render___0073e358);
          local_4._0_1_ = 7;
          FUN_004f9d20();
          local_4 = CONCAT31(local_4._1_3_,6);
          FUN_00649720();
          if (local_a0[0] == 0) {
            local_110 = &DAT_0075b6e0;
          }
          else {
            local_110 = *(undefined1 **)(local_a0[0] + local_98 * 4);
          }
          iVar3 = FUN_00647ed0(local_110,s_Resources_007306f8);
          if (iVar3 == 0) {
            FUN_00640370();
          }
          else {
            iVar3 = FUN_0054dc60(local_110);
            if (iVar3 == 0) {
              FUN_00640370();
            }
            else {
              local_f0 = FUN_00650030();
              if (0 < local_94) {
                local_108 = local_94;
                do {
                  FUN_0063ffc0();
                  FUN_006401e0(local_a0,s_GUID_s_0073e324,local_2c);
                  lVar7 = FUN_005c7800(local_2c);
                  FUN_006501d0(local_110);
                  local_4._0_1_ = 8;
                  FUN_0054baf0(iVar3,lVar7,1);
                  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                  iVar4 = (int)*(short *)(&DAT_0076cd88 +
                                         (((uint)lVar7 ^ (uint)((ulonglong)lVar7 >> 0x20)) * -0xfb &
                                         0xfff) * 2);
                  for (iVar6 = iVar4; iVar6 != -1;
                      iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
                  }
                  for (; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
                    iVar6 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
                    if ((iVar6 != 0) && (lVar7 == *(longlong *)(iVar6 + 8))) {
                      if (iVar4 != -1) {
                        uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
                        local_4 = CONCAT31(local_4._1_3_,8);
                        piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
                        FUN_00649720();
                        goto LAB_0055a775;
                      }
                      break;
                    }
                  }
                  local_4 = CONCAT31(local_4._1_3_,8);
                  FUN_00649720();
                  piVar5 = (int *)0x0;
LAB_0055a775:
                  FUN_00649600(s_pObject_>OnImport_0073e310);
                  local_4._0_1_ = 10;
                  uVar2 = FUN_004aaa70();
                  FUN_00649600(uVar2);
                  local_4._0_1_ = 0xb;
                  (**(code **)(*piVar5 + 0x58))(local_a0);
                  puStack_8._0_1_ = 10;
                  FUN_00649720();
                  puStack_8._0_1_ = 8;
                  FUN_00649720();
                  FUN_00649600(s_pObject_>PostLoad_0073e2fc);
                  puStack_8._0_1_ = 0xc;
                  (**(code **)(*piVar5 + 0x20))();
                  puStack_8._0_1_ = 8;
                  FUN_00649720();
                  (**(code **)(*piVar5 + 0x94))();
                  iVar6 = piVar5[0x1e];
                  iVar4 = (short)iVar6 * 0x14;
                  *(undefined2 *)(iVar4 + 10 + DAT_0076f648) = local_110._0_2_;
                  *(undefined2 *)(iVar4 + 8 + DAT_0076f648) =
                       *(undefined2 *)(iVar3 + 0x40 + DAT_00771f64);
                  *(short *)(iVar3 + 0x40 + DAT_00771f64) = (short)iVar6;
                  FUN_00649600(s_pObject_>OnObjectDeactivate_0073e2e0);
                  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
                  (**(code **)(*piVar5 + 200))();
                  local_4._0_1_ = 8;
                  FUN_00649720();
                  local_4 = CONCAT31(local_4._1_3_,6);
                  FUN_006501e0();
                  local_108 = local_108 + -1;
                  iVar6 = iVar3;
                } while (local_108 != 0);
              }
              iVar4 = FUN_00650030();
              *(int *)((&DAT_0076f908)[iVar3] + 0x14) =
                   *(int *)((&DAT_0076f908)[iVar3] + 0x14) + (iVar4 - local_f0);
            }
          }
          iVar3 = FUN_0063ff20();
        }
        FUN_0063fbb0();
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00649ba0();
      local_10c = local_10c + 1;
      iVar6 = iVar6 + 0x44;
    } while (local_10c < DAT_00771f60);
  }
  local_4._0_1_ = 1;
  FUN_0063fb50();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

