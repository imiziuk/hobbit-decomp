
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b420(void)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  ushort *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  float10 fVar15;
  char *local_108;
  int local_104;
  int local_100;
  char *local_fc;
  int local_f8;
  int local_ec;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006da20b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00649600();
  local_c = 0;
  if (DAT_00771f74 != 0) {
    DAT_00771f74 = 0;
    iVar12 = 8;
    do {
      FUN_0064cbe0();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    FUN_0064cc00();
    iVar12 = DAT_00771f60;
    local_100 = 0;
    local_ec = 0;
    local_104 = 0;
    local_f8 = 0;
    if (DAT_00771f80 != 0) {
      DAT_007ccf28 = 1;
      DAT_007ccf2c = 1;
      FUN_00648d60();
    }
    FUN_00650010();
    if ((DAT_00771f78 != 0) && (iVar13 = 0, 0 < iVar12)) {
      iVar11 = 0;
      do {
        iVar4 = FUN_00647ed0(s_OH_Area05_WF_Playsurfaces_0073e0bc,DAT_00771f64 + iVar11);
        if (iVar4 == 0) {
          iVar11 = iVar13 * 0x44 + DAT_00771f64;
          uVar1 = *(ushort *)(iVar11 + 0x42);
          bVar3 = (byte)uVar1;
          if ((bVar3 >> 6 & 1) == 0) {
            if (-1 < (char)bVar3 && ((bVar3 >> 2 & 1) == 0 && (bVar3 >> 1 & 1) == 0)) break;
            if ((bVar3 >> 6 & 1) != 0) goto LAB_0055b592;
            local_108 = &DAT_0075b6e0;
          }
          else {
LAB_0055b592:
            local_108 = s_Load_0073e7d4;
          }
          local_fc = s_Unload_0073e7cc;
          if (-1 < (char)bVar3) {
            local_fc = &DAT_0075b6e0;
          }
          pcVar14 = s_Deactivate_0073e7c0;
          if ((bVar3 >> 2 & 1) == 0) {
            pcVar14 = &DAT_0075b6e0;
          }
          pcVar7 = s_Activate_0073e7b4;
          if ((bVar3 >> 1 & 1) == 0) {
            pcVar7 = &DAT_0075b6e0;
          }
          puVar10 = &DAT_0071ff7c;
          if ((uVar1 & 1) == 0) {
            puVar10 = &DAT_0073e7b0;
          }
          puVar8 = &DAT_0071ff7c;
          if ((uVar1 & 8) == 0) {
            puVar8 = &DAT_0073e7b0;
          }
          FUN_0064e7d0(s_Captured_Layer_2d____32s__Loaded_0073e770,iVar13,iVar11,puVar8,puVar10,
                       pcVar7,pcVar14,local_fc,local_108);
          break;
        }
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 0x44;
      } while (iVar13 < iVar12);
    }
    iVar13 = FUN_006554d0();
    if (iVar13 == 0) {
      DAT_00771f7c = 0;
    }
    if (DAT_00771f7c != 0) {
      FUN_0064e870(4,s__________________________________0073e144);
      FUN_0064e870(4,s______________LAYER_FLUSH_________0073e748);
      FUN_0064e870(4,s__________________________________0073e144);
      iVar13 = 0;
      if (0 < iVar12) {
        local_108 = (char *)0x0;
        do {
          uVar1 = *(ushort *)(DAT_00771f64 + (int)local_108 + 0x42);
          puVar10 = &DAT_0073e744;
          if ((uVar1 & 0x40) == 0) {
            puVar10 = &DAT_0075b6e0;
          }
          local_fc = s_UNLD_0073e73c;
          if (-1 < (char)uVar1) {
            local_fc = &DAT_0075b6e0;
          }
          pcVar14 = s_DEACT_0073e734;
          if ((uVar1 & 4) == 0) {
            pcVar14 = &DAT_0075b6e0;
          }
          puVar8 = &DAT_0073e72c;
          if ((uVar1 & 2) == 0) {
            puVar8 = &DAT_0075b6e0;
          }
          puVar6 = &DAT_0071ff7c;
          if ((uVar1 & 1) == 0) {
            puVar6 = &DAT_0073e7b0;
          }
          puVar5 = &DAT_0071ff7c;
          if ((uVar1 & 8) == 0) {
            puVar5 = &DAT_0073e7b0;
          }
          FUN_0064e870(4,s_Layer_3d_____32s__LD__s_AC__s_Op_0073e700,iVar13,
                       DAT_00771f64 + (int)local_108,puVar5,puVar6,puVar8,pcVar14,local_fc,puVar10);
          iVar13 = iVar13 + 1;
          local_108 = (char *)((int)local_108 + 0x44);
        } while (iVar13 < iVar12);
      }
    }
    if (0 < iVar12) {
      iVar4 = 0;
      iVar13 = DAT_00771f64;
      iVar11 = iVar12;
      do {
        uVar1 = *(ushort *)(iVar13 + 0x42 + iVar4);
        if (((uVar1 & 2) != 0) && ((uVar1 & 0x48) == 0)) {
          puVar9 = (ushort *)(iVar13 + 0x42 + iVar4);
          *puVar9 = *puVar9 | 0x40;
          iVar13 = DAT_00771f64;
        }
        iVar4 = iVar4 + 0x44;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (0 < iVar12) {
        iVar4 = 0;
        iVar11 = iVar12;
        do {
          uVar1 = *(ushort *)(iVar13 + 0x42 + iVar4);
          if ((((char)uVar1 < '\0') && ((uVar1 & 1) != 0)) && ((uVar1 & 4) == 0)) {
            puVar9 = (ushort *)(iVar13 + 0x42 + iVar4);
            *puVar9 = *puVar9 | 4;
            iVar13 = DAT_00771f64;
          }
          iVar4 = iVar4 + 0x44;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if (0 < iVar12) {
          local_ec = 0;
          puVar9 = (ushort *)(iVar13 + 0x42);
          iVar13 = iVar12;
          do {
            uVar1 = *puVar9;
            if (((uVar1 & 2) == 0) || ((uVar1 & 1) != 0)) {
              iVar11 = 0;
            }
            else {
              iVar11 = 1;
            }
            local_100 = local_100 + iVar11;
            if (((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) {
              iVar11 = 0;
            }
            else {
              iVar11 = 1;
            }
            local_ec = local_ec + iVar11;
            if (((uVar1 & 0x40) == 0) || ((uVar1 & 8) != 0)) {
              iVar11 = 0;
            }
            else {
              iVar11 = 1;
            }
            local_104 = local_104 + iVar11;
            if (((char)uVar1 < '\0') && ((uVar1 & 8) != 0)) {
              iVar11 = 1;
            }
            else {
              iVar11 = 0;
            }
            local_f8 = local_f8 + iVar11;
            puVar9 = puVar9 + 0x22;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
    }
    FUN_0064cc50();
    if (local_104 != 0) {
      FUN_0064cc00();
      FUN_00532030();
      FUN_00659b70();
      iVar13 = FUN_00452eb0();
      if (iVar13 == 0) {
        FUN_00425890(s_Loading_00730954,s_AmbientAudioMgr_is_NOT_Loaded____0073e6dc);
      }
      else {
        FUN_00452eb0();
        FUN_00453500();
      }
      FUN_0064cc50();
    }
    if (local_ec != 0) {
      FUN_0064cc00();
      iVar13 = 0;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          uVar1 = *(ushort *)(iVar11 + 0x42 + DAT_00771f64);
          if (((uVar1 & 4) != 0) && ((uVar1 & 1) != 0)) {
            FUN_00559ac0();
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x44;
        } while (iVar13 < iVar12);
      }
      FUN_0064cc50();
    }
    if (local_f8 != 0) {
      FUN_0064cc00();
      iVar13 = 0;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          uVar1 = *(ushort *)(iVar11 + 0x42 + DAT_00771f64);
          if (((char)uVar1 < '\0') && ((uVar1 & 8) != 0)) {
            FUN_00559f40();
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x44;
        } while (iVar13 < iVar12);
      }
      FUN_0064cc50();
    }
    if (local_104 != 0) {
      FUN_0064cc00();
      iVar13 = 0;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          uVar1 = *(ushort *)(iVar11 + 0x42 + DAT_00771f64);
          if (((uVar1 & 0x40) != 0) && ((uVar1 & 8) == 0)) {
            FUN_004f9d20();
            FUN_00559e70();
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x44;
        } while (iVar13 < iVar12);
      }
      FUN_0064cc50();
    }
    if (local_100 != 0) {
      FUN_0064cc00();
      iVar13 = 0;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          uVar1 = *(ushort *)(iVar11 + 0x42 + DAT_00771f64);
          if (((uVar1 & 2) != 0) && ((uVar1 & 1) == 0)) {
            FUN_00559a00();
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x44;
        } while (iVar13 < iVar12);
      }
      FUN_0064cc50();
    }
    if (local_104 != 0) {
      FUN_0064cc00();
      FUN_00532130();
      FUN_00659c10();
      iVar13 = FUN_00452eb0();
      if (iVar13 == 0) {
        FUN_00425890(s_Loading_00730954,s_AmbientAudioMgr_is_NOT_Loaded____0073e6dc);
      }
      else {
        FUN_00452eb0();
        FUN_004534e0();
      }
      FUN_0064cc50();
    }
    FUN_0064cc00();
    if (0 < iVar12) {
      iVar13 = 0;
      do {
        puVar9 = (ushort *)(iVar13 + 0x42 + DAT_00771f64);
        *puVar9 = *puVar9 & 0xfffb;
        puVar9 = (ushort *)(iVar13 + 0x42 + DAT_00771f64);
        *puVar9 = *puVar9 & 0xfffd;
        puVar9 = (ushort *)(iVar13 + 0x42 + DAT_00771f64);
        *puVar9 = *puVar9 & 0xffbf;
        puVar9 = (ushort *)(iVar13 + 0x42 + DAT_00771f64);
        *puVar9 = *puVar9 & 0xff7f;
        iVar13 = iVar13 + 0x44;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if ((local_104 != 0) || (local_100 != 0)) {
      FUN_0055ab50();
    }
    FUN_00650010();
    FUN_0064cc50();
    FUN_0058e3c0();
    FUN_0064e870(7,s__________________________________0073e680);
    FUN_0064e870(7,s_________LAYERMGR_FLUSH_________0073e640);
    FUN_0064e870(7,s__________________________________0073e680);
    FUN_0064e870(7,s_nDeact__1d_nUnload__1d_nLoad__1d_0073e60c,local_ec,local_f8,local_104,local_100
                );
    iVar12 = 0;
    do {
      fVar15 = (float10)FUN_0064cd30();
      FUN_0064e870(7,s_Timer__d___10_5f_0073e5f8,iVar12,(double)fVar15);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    FUN_0064e870(7,s__________________________________0073e680);
    if (DAT_00771f80 != 0) {
      DAT_007ccf48 = 0;
      DAT_007ccf2c = 1;
      DAT_007ccfa8 = 0;
      _DAT_007ccfe4 = 0;
      FUN_00649050();
      DAT_007ccf48 = 1;
      DAT_007ccfa8 = 10;
      FUN_00648d60();
      DAT_007ccf28 = 0;
      DAT_007ccf2c = 0;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_c = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

