
undefined4 FUN_0055abc0(void)

{
  byte *pbVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_834 [2];
  int local_82c;
  int local_820;
  undefined4 local_80c [17];
  undefined1 local_7c8 [256];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da1e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_layer_mgr__LoadLevel_0073e5e0);
  local_4 = 0;
  FUN_00649600(s_layer_mgr__LoadLevel_0073e5e0);
  local_4._0_1_ = 1;
  FUN_0063ddb0();
  local_4._0_1_ = 2;
  FUN_00649600(s_Initialize_0073e5d4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0055a1d0();
  if (DAT_00771f6c == 0) {
    FUN_006bf840(DAT_00771f64);
    DAT_00771f64 = (void *)0x0;
    DAT_00771f68 = 0;
  }
  DAT_00771f60 = 0;
  local_4._0_1_ = 2;
  FUN_00649720();
  FUN_00649600(s_Read_AllUsedLayers_txt_0073e5bc);
  local_4._0_1_ = 4;
  uVar5 = FUN_005496c0(s_AllUsedLayers_txt_0073e5a8,0);
  iVar6 = FUN_0063df60(uVar5);
  if (iVar6 == 0) {
    FUN_00649920(local_834,s___s__not_found_0073e598,uVar5);
    local_4._0_1_ = 5;
    uVar5 = FUN_00649940();
    FUN_0064e7d0(uVar5);
    local_4._0_1_ = 4;
    FUN_00649950();
  }
  else {
    FUN_0063e510();
    iVar7 = FUN_00647ed0(local_6c8,s_Layers_0073e590);
    iVar6 = local_5c8;
    if (iVar7 == 0) {
      local_82c = local_5c8;
      if (DAT_00771f68 < local_5c8) {
        pvVar8 = operator_new(local_5c8 * 0x44);
        iVar7 = 0;
        if (0 < DAT_00771f60) {
          iVar9 = 0;
          do {
            puVar13 = (undefined4 *)((int)DAT_00771f64 + iVar9);
            puVar12 = (undefined4 *)((int)pvVar8 + iVar9);
            for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar12 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 0x44;
            iVar6 = local_82c;
          } while (iVar7 < DAT_00771f60);
        }
        FUN_006bf840(DAT_00771f64);
        DAT_00771f64 = pvVar8;
        DAT_00771f68 = iVar6;
      }
      iVar9 = 0;
      iVar7 = iVar6;
      if (0 < iVar6) {
        do {
          local_834[0] = iVar7;
          FUN_0063e6a0();
          FUN_0063f5e0(s_LayerName_0073e54c,local_7c8);
          if (DAT_00771f68 < DAT_00771f60 + 1) {
            if (DAT_00771f70 == 0) {
              local_820 = DAT_00771f68 / 2;
              iVar7 = 1;
              if (0 < local_820) {
                iVar7 = local_820;
              }
              if (iVar7 + DAT_00771f60 < 1) {
                local_820 = 1;
              }
              else {
                if (local_820 < 1) {
                  local_820 = 1;
                }
                local_820 = local_820 + DAT_00771f60;
              }
            }
            else {
              local_820 = DAT_00771f60 + DAT_00771f70;
            }
            pvVar8 = operator_new(local_820 * 0x44);
            iVar7 = 0;
            if (0 < DAT_00771f60) {
              iVar10 = 0;
              do {
                puVar13 = (undefined4 *)((int)DAT_00771f64 + iVar10);
                puVar12 = (undefined4 *)((int)pvVar8 + iVar10);
                for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar12 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar12 = puVar12 + 1;
                }
                iVar7 = iVar7 + 1;
                iVar10 = iVar10 + 0x44;
                iVar6 = local_82c;
              } while (iVar7 < DAT_00771f60);
            }
            FUN_006bf840(DAT_00771f64);
            DAT_00771f68 = local_820;
            DAT_00771f64 = pvVar8;
          }
          DAT_00771f60 = DAT_00771f60 + 1;
          FUN_00647d70((int)DAT_00771f64 + iVar9,local_7c8,0x40);
          *(undefined2 *)((int)DAT_00771f64 + iVar9 + 0x40) = 0xffff;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xfe;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xfd;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xfb;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xf7;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xdf;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xef;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0xbf;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x42);
          *pbVar1 = *pbVar1 & 0x7f;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x43);
          *pbVar1 = *pbVar1 & 0xfb;
          pbVar1 = (byte *)((int)DAT_00771f64 + iVar9 + 0x43);
          *pbVar1 = *pbVar1 & 0xf7;
          iVar9 = iVar9 + 0x44;
          local_834[0] = local_834[0] + -1;
          iVar7 = local_834[0];
        } while (local_834[0] != 0);
      }
      FUN_0063df00();
      local_4._0_1_ = 2;
      FUN_00649720();
      FUN_00649600(s_Sort_Layers_0073e540);
      local_4._0_1_ = 6;
      if (0 < iVar6) {
        iVar7 = 0;
        local_820 = 0;
        do {
          iVar9 = local_820 + 1;
          iVar11 = local_820;
          iVar10 = iVar7;
          iVar4 = iVar7;
          local_820 = iVar9;
          if (iVar9 < iVar6) {
            do {
              local_834[0] = iVar4;
              iVar10 = iVar10 + 0x44;
              iVar6 = FUN_00647ed0((int)DAT_00771f64 + iVar10,(int)DAT_00771f64 + local_834[0]);
              if (iVar6 < 0) {
                iVar11 = iVar9;
                local_834[0] = iVar10;
              }
              iVar9 = iVar9 + 1;
              iVar4 = local_834[0];
            } while (iVar9 < local_82c);
          }
          puVar13 = (undefined4 *)(iVar11 * 0x44 + (int)DAT_00771f64);
          puVar12 = puVar13;
          puVar14 = local_80c;
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          puVar12 = (undefined4 *)((int)DAT_00771f64 + iVar7);
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar13 = local_80c;
          puVar12 = (undefined4 *)((int)DAT_00771f64 + iVar7);
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar12 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar7 = iVar7 + 0x44;
          iVar6 = local_82c;
        } while (local_820 < local_82c);
      }
      local_4._0_1_ = 2;
      FUN_00649720();
      FUN_00649600(s_Load_Resources_0073e530);
      local_4._0_1_ = 7;
      uVar5 = FUN_005496c0(s_InitialResourceLayers_txt_0073e514,0);
      iVar6 = FUN_0063df60(uVar5);
      if (iVar6 == 0) {
        FUN_00649920(local_834,s___s__not_found_0073e598,uVar5);
        local_4._0_1_ = 8;
        uVar5 = FUN_00649940();
        FUN_0064e7d0(uVar5);
        local_4._0_1_ = 7;
        FUN_00649950();
      }
      else {
        FUN_0063e510();
        iVar6 = FUN_00647ed0(local_6c8,s_Layers_0073e590);
        if (iVar6 == 0) {
          iVar6 = local_5c8;
          if (0 < local_5c8) {
            do {
              FUN_0063e6a0();
              FUN_0063f5e0(s_LayerName_0073e54c,local_7c8);
              iVar7 = FUN_0055a010(local_7c8);
              if (iVar7 != -1) {
                puVar2 = (ushort *)(iVar7 * 0x44 + 0x42 + (int)DAT_00771f64);
                *puVar2 = *puVar2 | 0x400;
                puVar2 = (ushort *)(iVar7 * 0x44 + 0x42 + (int)DAT_00771f64);
                *puVar2 = *puVar2 | 8;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          FUN_0063df00();
          FUN_00425890(s_Loading_00730954,s_Loading_Objects_____0073e4c0);
          FUN_0055a400();
          FUN_00425890(s_Loading_00730954,s_DONE____Loading_Objects_____0073e4a4);
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_00649720();
          iVar6 = 0;
          if (0 < DAT_0076f660) {
            iVar7 = 0;
            do {
              piVar3 = *(int **)(iVar7 + DAT_0076f648);
              if ((piVar3 != (int *)0x0) && ((char)piVar3[0x1f] == '5')) {
                (**(code **)(*piVar3 + 0xc4))();
                (**(code **)(**(int **)(iVar7 + DAT_0076f648) + 200))();
              }
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x14;
            } while (iVar6 < DAT_0076f660);
          }
          FUN_00649600(s_Activate_Layers_0073e494);
          local_4._0_1_ = 9;
          FUN_00425890(s_Loading_00730954,s_Activating_Layers_____0073e47c);
          uVar5 = FUN_005496c0(s_InitialObjectLayers_txt_0073e464,0);
          iVar6 = FUN_0063df60(uVar5);
          if (iVar6 == 0) {
            FUN_0063df00();
            FUN_00649920(local_834,s___s__not_found_0073e598,uVar5);
            local_4._0_1_ = 10;
            uVar5 = FUN_00649940();
            FUN_0064e7d0(uVar5);
            local_4._0_1_ = 9;
            FUN_00649950();
          }
          else {
            FUN_0063e510();
            iVar6 = FUN_00647ed0(local_6c8,s_Layers_0073e590);
            if (iVar6 == 0) {
              iVar6 = local_5c8;
              if (0 < local_5c8) {
                do {
                  FUN_0063e6a0();
                  FUN_0063f5e0(s_LayerName_0073e54c,local_7c8);
                  FUN_005597e0(local_7c8);
                  iVar7 = FUN_0055a010(local_7c8);
                  if (iVar7 != -1) {
                    pbVar1 = (byte *)(iVar7 * 0x44 + 0x43 + (int)DAT_00771f64);
                    *pbVar1 = *pbVar1 | 8;
                  }
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              local_4._0_1_ = 2;
              FUN_00649720();
              FUN_00425890(s_Loading_00730954,s_Initial_Layer_Flush_BEGIN_____0073e404);
              FUN_0055b420();
              FUN_00425890(s_Loading_00730954,s_Initial_Layer_Flush_DONE_____0073e3e4);
              FUN_0055a2f0();
              FUN_0063df00();
              local_4._0_1_ = 1;
              FUN_0063de30();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
              local_4 = 0xffffffff;
              FUN_006501e0();
              ExceptionList = local_c;
              return 1;
            }
            FUN_0064e7d0(s_InitialObjectsLayers_txt_does_no_0073e424);
            FUN_0063df00();
          }
        }
        else {
          FUN_0063df00();
          FUN_0064e7d0(s_InitialResourceLayers_txt_does_n_0073e4d4);
        }
      }
    }
    else {
      FUN_0064e7d0(s_AllUsedLayers_txt_does_not_conta_0073e558);
    }
  }
  local_4._0_1_ = 2;
  FUN_00649720();
  local_4._0_1_ = 1;
  FUN_0063de30();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return 0;
}

