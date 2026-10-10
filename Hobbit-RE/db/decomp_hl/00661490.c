
void FUN_00661490(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float10 fVar16;
  int local_988;
  uint local_984;
  float local_980;
  uint local_97c;
  uint local_978;
  int local_974;
  int local_970;
  uint local_96c;
  char local_968 [4];
  char local_964 [2];
  char local_962;
  undefined4 local_961;
  undefined4 local_95d;
  undefined1 local_959;
  int local_958;
  uint local_954;
  uint local_950;
  uint local_94c [10];
  int local_924;
  int local_91c;
  int local_8f4;
  int local_8ec;
  int local_8c4;
  int local_8bc;
  undefined1 local_8b8 [44];
  undefined1 local_88c [8];
  undefined1 local_884 [8];
  undefined4 local_87c;
  undefined1 local_850 [44];
  undefined1 local_824 [44];
  undefined1 local_7f8 [44];
  undefined1 local_7cc [128];
  undefined1 local_74c [44];
  undefined1 local_720 [44];
  undefined1 local_6f4 [44];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e69b0;
  local_c = ExceptionList;
  if (DAT_007f0308 == '\0') {
    puVar12 = &DAT_007f016c;
    ExceptionList = &local_c;
    do {
      puVar12[-1] = 0;
      *puVar12 = 0xbf800000;
      puVar15 = puVar12 + -9;
      puVar12 = puVar12 + 10;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
    } while ((int)puVar12 < 0x7f02fc);
    FUN_0063ddb0();
    local_4 = 0;
    uVar5 = FUN_005496c0(s_ScalabilityDatabase_txt_0074f1e8,&DAT_007f142b);
    iVar10 = FUN_0063df60(uVar5);
    if (iVar10 != 0) {
      iVar10 = FUN_0063e510();
      while (iVar10 == 1) {
        local_96c = 0;
        local_984 = 0;
        iVar10 = FUN_00647ed0(local_6c8,s_Flags_0074f200);
        if (iVar10 == 0) {
          if (local_5c8 != 0) {
            local_988 = local_5c8;
            do {
              FUN_0063e6a0();
              FUN_0063f560(s_Vendor_0074f208,local_94c);
              FUN_0063ea10(local_6c8,s_DeviceRange_dd_0074f210,&local_96c,&local_984);
              if (local_984 == 0) {
                local_984 = 0xffffffff;
              }
              FUN_0063ea10(local_6c8,s_DriverRange_dddd_0074f220,&local_954,&local_950,&local_97c,
                           &local_978);
              if (local_97c == 0 && local_978 == 0) {
                local_97c = 0xffffffff;
                local_978 = 0xffffffff;
              }
              FUN_0063f5e0(&DAT_0074f234,local_7cc);
              FUN_006480b0(local_7cc);
              uVar3 = DAT_007f0eb4;
              uVar2 = DAT_007f0eac;
              uVar1 = DAT_007f0ea8;
              FUN_006499d0();
              local_4._0_1_ = 1;
              if (((((((local_94c[0] & 0xffff) == DAT_007f0eb0) || (local_94c[0] == 0)) &&
                    (local_96c <= uVar3)) && ((uVar3 <= local_984 && (local_950 <= uVar2)))) &&
                  ((local_950 < uVar2 || (local_954 <= uVar1)))) &&
                 ((uVar2 <= local_978 && ((uVar2 < local_978 || (uVar1 <= local_97c)))))) {
                FUN_00649b20(local_7cc);
                local_4._0_1_ = 2;
                FUN_00649b60(local_7f8);
                local_8ec = 0;
                local_4 = CONCAT31(local_4._1_3_,4);
                FUN_00649ba0();
                while (iVar10 = local_8f4, local_8ec < local_8f4) {
                  iVar6 = FUN_0064a100(0x3a,local_8ec);
                  if (iVar6 == -1) {
                    iVar6 = iVar10;
                  }
                  uVar5 = FUN_00649c80(local_6f4,local_8ec,iVar6 - local_8ec);
                  local_4._0_1_ = 5;
                  FUN_0064a320(uVar5);
                  local_4 = CONCAT31(local_4._1_3_,4);
                  FUN_00649ba0();
                  local_8ec = iVar6 + 1;
                  FUN_006678f0(local_884,local_8b8);
                }
                local_4._0_1_ = 1;
                FUN_00649ba0();
              }
              FUN_00649b20(local_7cc);
              local_4._0_1_ = 6;
              FUN_00649b60(local_850);
              local_8bc = 0;
              local_4 = CONCAT31(local_4._1_3_,8);
              FUN_00649ba0();
              while (iVar10 = local_8c4, local_8bc < local_8c4) {
                iVar6 = FUN_0064a100(0x3a,local_8bc);
                if (iVar6 == -1) {
                  iVar6 = iVar10;
                }
                uVar5 = FUN_00649c80(local_74c,local_8bc,iVar6 - local_8bc);
                local_4._0_1_ = 9;
                FUN_0064a320(uVar5);
                local_4 = CONCAT31(local_4._1_3_,8);
                FUN_00649ba0();
                local_8bc = iVar6 + 1;
                FUN_006678f0(local_88c,local_8b8);
              }
              local_4._0_1_ = 1;
              FUN_00649ba0();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649ba0();
              local_988 = local_988 + -1;
            } while (local_988 != 0);
          }
        }
        else {
          local_958 = FUN_00661450(local_6c8);
          if (local_958 < 10) {
            local_980 = 0.0;
            pvVar7 = operator_new(0x20);
            if (local_5c8 != 0) {
              local_970 = local_5c8;
              do {
                FUN_0063e6a0();
                FUN_0063f5e0(&DAT_0074f23c,local_7cc);
                FUN_006480b0(local_7cc);
                bVar13 = true;
                FUN_00649b20(local_7cc);
                local_4._0_1_ = 10;
                FUN_00649b60(local_824);
                local_91c = 0;
                local_4._0_1_ = 0xc;
                FUN_00649ba0();
                FUN_006499d0();
                local_4._0_1_ = 0xd;
                while (iVar10 = local_924, local_91c < local_924) {
                  iVar6 = FUN_0064a100(0x3a,local_91c);
                  if (iVar6 == -1) {
                    iVar6 = iVar10;
                  }
                  uVar5 = FUN_00649c80(local_720,local_91c,iVar6 - local_91c);
                  local_4._0_1_ = 0xe;
                  FUN_0064a320(uVar5);
                  local_4._0_1_ = 0xd;
                  FUN_00649ba0();
                  local_91c = iVar6 + 1;
                  cVar4 = FUN_006613a0(local_87c);
                  if (cVar4 == '\0') {
                    bVar13 = false;
                  }
                }
                if (bVar13) {
                  local_968[0] = s_Values_0074f244[0];
                  local_968[1] = s_Values_0074f244[1];
                  local_968[2] = s_Values_0074f244[2];
                  local_968[3] = s_Values_0074f244[3];
                  local_961 = 0;
                  local_95d = 0;
                  local_964[0] = s_Values_0074f244[4];
                  local_964[1] = s_Values_0074f244[5];
                  local_959 = 0;
                  local_962 = s_Values_0074f244[6];
                  iVar10 = FUN_0063f930(local_968);
                  pvVar8 = operator_new(iVar10 * 4);
                  iVar6 = 0;
                  if (0 < iVar10) {
                    do {
                      pvVar9 = operator_new(0x80);
                      *(void **)((int)pvVar8 + iVar6 * 4) = pvVar9;
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar10);
                  }
                  FUN_0063fae0(local_968,pvVar7);
                  uVar5 = FUN_00647dc0(local_968,&DAT_0074f24c,pvVar7);
                  FUN_00647dc0(uVar5);
                  FUN_0063ee60(local_968,pvVar8);
                  iVar6 = 0;
                  if (0 < iVar10) {
                    fVar16 = (float10)local_980;
                    iVar11 = local_958 * 0x28;
                    pfVar14 = (float *)(&DAT_007f0148 + local_958 * 10);
                    local_974 = iVar11;
                    do {
                      if (*(char *)(iVar6 + (int)pvVar7) == 'f') {
                        fVar16 = (float10)FUN_006c23d9(*(undefined4 *)((int)pvVar8 + iVar6 * 4));
                        iVar11 = local_974;
                      }
                      else if (*(char *)(iVar6 + (int)pvVar7) == 'd') {
                        local_980 = (float)FUN_006c24bb(*(undefined4 *)((int)pvVar8 + iVar6 * 4));
                        fVar16 = (float10)(int)local_980;
                        iVar11 = local_974;
                      }
                      *(int *)((int)&DAT_007f0168 + iVar11) = iVar10;
                      *pfVar14 = (float)fVar16;
                      iVar6 = iVar6 + 1;
                      pfVar14 = pfVar14 + 1;
                    } while (iVar6 < iVar10);
                    local_980 = (float)fVar16;
                  }
                  iVar6 = 0;
                  if (0 < iVar10) {
                    do {
                      FUN_006bf840(*(undefined4 *)((int)pvVar8 + iVar6 * 4));
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar10);
                  }
                  FUN_006bf840(pvVar8);
                }
                local_4._0_1_ = 0xc;
                FUN_00649ba0();
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_00649ba0();
                local_970 = local_970 + -1;
              } while (local_970 != 0);
            }
            FUN_006bf840(pvVar7);
          }
        }
        iVar10 = FUN_0063e510();
      }
      FUN_0063df00();
    }
    if (DAT_007f0308 == '\0') {
      FUN_006622f0(1);
      FUN_00661c40();
    }
    else {
      FUN_006622f0(0);
    }
    local_4 = 0xffffffff;
    FUN_0063de30();
  }
  ExceptionList = local_c;
  return;
}

