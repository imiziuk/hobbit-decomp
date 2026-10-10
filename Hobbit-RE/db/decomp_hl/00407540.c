
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00407540(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  byte bVar11;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 local_50;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceb33;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar16 = (float10)FUN_00557bb0();
  iVar8 = *(int *)(param_1 + 0x108);
  iVar15 = *(int *)(param_1 + 0x10c);
  if ((iVar8 != 0 || iVar15 != 0) && (*(int *)(param_1 + 0x110) == 0)) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 0;
    iVar8 = FUN_00406ce0(iVar8,iVar15);
    local_4 = 0xffffffff;
    if (iVar8 == -1) {
      FUN_00649720();
    }
    else {
      uVar13 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      bVar5 = *(byte *)(uVar13 + 0x7f);
      FUN_00649720();
      if (((-(uint)((bVar5 & 0x10) != 0) & uVar13) != 0) && (iVar8 = FUN_004df1b0(), iVar8 != 0)) {
        *(undefined4 *)(param_1 + 0x110) = 1;
        *(undefined4 *)(param_1 + 0x114) = 1;
        fVar17 = (float10)FUN_00557bb0();
        *(float *)(param_1 + 0x118) = (float)fVar17;
        uVar9 = FUN_00659600(s_CicadaChorus_Loop_0071d7ac,1);
        *(undefined4 *)(param_1 + 0x17c) = uVar9;
        FUN_0065a050(uVar9,0);
        local_50 = 0xffffffff;
        local_44 = 0x45696000;
        local_40 = 0x45cce800;
        local_3c = 0xc6fdb000;
        FUN_005513a0(&local_44,&local_50);
        FUN_00659600(s_LightningStrikeRock_0071d798,1);
        FUN_00659600(s_Landslide_0071d78c,1);
        FUN_00551280(0,DAT_006e937c);
        FUN_004e1a10(0);
      }
    }
  }
  iVar8 = DAT_0075cf1c;
  uVar13 = DAT_0075b6e4;
  if (*(int *)(param_1 + 0x114) != 0) {
    fVar3 = ((float)fVar16 - *(float *)(param_1 + 0x118)) / DAT_006e937c;
    if (DAT_0075cf1c != 0) {
      bVar5 = (byte)(DAT_0075b6e4 >> 0x10);
      bVar11 = (byte)(DAT_0075b6e4 >> 0x18);
      if (fVar3 < DAT_006e92e8) {
        local_48 = (int *)(uint)*(byte *)(param_1 + 0x126);
        local_50 = (uint)bVar5 - (int)local_48;
        uVar6 = __ftol();
        local_50._0_3_ = CONCAT12(uVar6,(undefined2)local_50);
        local_44 = (uint)*(byte *)(param_1 + 0x125);
        local_48 = (int *)((DAT_0075b6e4 >> 8 & 0xff) - local_44);
        uVar6 = __ftol();
        local_50._0_2_ = CONCAT11(uVar6,(undefined1)local_50);
        local_48 = (int *)(uint)*(byte *)(param_1 + 0x124);
        local_44 = (DAT_0075b6e4 & 0xff) - (int)local_48;
        uVar6 = __ftol();
        local_50 = CONCAT31(local_50._1_3_,uVar6);
        local_48 = (int *)(uint)*(byte *)(param_1 + 0x127);
        local_44 = (uint)bVar11 - (int)local_48;
        uVar6 = __ftol();
        *(undefined1 *)(iVar8 + 0xbb) = uVar6;
        *(undefined1 *)(iVar8 + 0xb8) = (undefined1)local_50;
        *(undefined1 *)(iVar8 + 0xba) = local_50._2_1_;
        *(undefined1 *)(iVar8 + 0xb9) = local_50._1_1_;
        fVar4 = _DAT_0071d5a0 - *(float *)(param_1 + 0x120);
        fVar1 = *(float *)(param_1 + 0x120);
        *(float *)(iVar8 + 0xbc) =
             (_DAT_0071d59c - *(float *)(param_1 + 0x11c)) * fVar3 + *(float *)(param_1 + 0x11c);
        *(float *)(iVar8 + 0xc0) = fVar4 * fVar3 + fVar1;
        FUN_00553d60(*(undefined4 *)(param_1 + 0x150),0,0,
                     (DAT_0075b6e8 - *(float *)(param_1 + 0x128)) * fVar3 +
                     *(float *)(param_1 + 0x128));
        FUN_00553d60(*(undefined4 *)(param_1 + 0x154),0,0,
                     (DAT_0075b6e8 - *(float *)(param_1 + 300)) * fVar3 + *(float *)(param_1 + 300))
        ;
        FUN_00553d60(*(undefined4 *)(param_1 + 0x158),0,0,
                     (DAT_0075b6e8 - *(float *)(param_1 + 0x130)) * fVar3 +
                     *(float *)(param_1 + 0x130));
      }
      else {
        *(char *)(DAT_0075cf1c + 0xb8) = (char)DAT_0075b6e4;
        *(byte *)(iVar8 + 0xbb) = bVar11;
        *(byte *)(iVar8 + 0xba) = bVar5;
        *(char *)(iVar8 + 0xb9) = (char)(uVar13 >> 8);
        fVar1 = _DAT_0071d5a0;
        *(float *)(iVar8 + 0xbc) = _DAT_0071d59c;
        *(float *)(iVar8 + 0xc0) = fVar1;
        *(undefined4 *)(param_1 + 0x114) = 0;
        FUN_00553d60(*(undefined4 *)(param_1 + 0x150),0,0,DAT_0075b6e8);
      }
    }
    FUN_0065a050(*(undefined4 *)(param_1 + 0x17c),_DAT_0071d5a4 * fVar3);
  }
  if (((*(int *)(param_1 + 0x110) == 0) &&
      (*(float *)(param_1 + 0x178) < DAT_006e92e4 != (*(float *)(param_1 + 0x178) == DAT_006e92e4)))
     && (fVar16 = (float10)FUN_00647b30(0,0x3f800000),
        fVar16 < (float10)_DAT_006e9380 != (fVar16 == (float10)_DAT_006e9380))) {
    local_50 = 0xffffffff;
    local_44 = 0x45696000;
    local_40 = 0x45cce800;
    local_3c = 0xc6fdb000;
    FUN_005513a0(&local_44,&local_50);
    fVar16 = (float10)FUN_00647b30(0x40a00000,0x41700000);
    *(float *)(param_1 + 0x178) = (float)fVar16;
  }
  *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - param_2;
  if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x114) == 0)) {
    FUN_0065a050(*(undefined4 *)(param_1 + 0x17c),_DAT_0071d5a4);
  }
  iVar8 = *(int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x194) == 1) {
    if ((iVar8 != 0) && (iVar8 = FUN_00659e10(iVar8), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (*(int *)(param_1 + 400) == 0) {
      if (*(int *)(param_1 + 0x1a0) == 0) {
        FUN_00500510();
      }
      else {
        uVar9 = FUN_00659600(**(undefined4 **)(param_1 + 0x1a4),1);
        *(undefined4 *)(param_1 + 400) = uVar9;
        iVar8 = *(int *)(param_1 + 0x1a0) + -1;
        if (0 < iVar8) {
          iVar15 = 0;
          do {
            FUN_0064a320(iVar15 + 0x2c + *(int *)(param_1 + 0x1a4));
            iVar15 = iVar15 + 0x2c;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + -1;
      }
    }
  }
  else if (iVar8 == 0) {
    if (*(int *)(param_1 + 0x188) == 0 && *(int *)(param_1 + 0x18c) == 0) {
      uVar9 = FUN_0054c5c0(0x33,s_C__projects_meridian_Support_Lev_0071d630,0x17a);
      sVar7 = FUN_0054c7c0();
      while (-1 < sVar7) {
        if (((sVar7 != -1) &&
            (piVar14 = *(int **)(DAT_0076f648 + sVar7 * 0x14), piVar14 != (int *)0x0)) &&
           (((*(byte *)((int)piVar14 + 0x7f) & 0x10) != 0 && (piVar14 != (int *)0x0)))) {
          uVar10 = (**(code **)(*piVar14 + 0x4c))(s_RigidWallet_0071d780);
          iVar8 = FUN_00647ed0(uVar10);
          if (iVar8 == 0) {
            iVar8 = piVar14[3];
            *(int *)(param_1 + 0x188) = piVar14[2];
            *(int *)(param_1 + 0x18c) = iVar8;
            break;
          }
        }
        sVar7 = FUN_0054c7c0();
      }
      FUN_0054c880(uVar9);
    }
    uVar13 = *(uint *)(param_1 + 0x188);
    uVar2 = *(uint *)(param_1 + 0x18c);
    local_44 = uVar13;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar15 = (int)*(short *)(&DAT_0076cd88 + ((uVar13 ^ uVar2) * -0xfb & 0xfff) * 2);
    for (iVar8 = iVar15; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe)) {
    }
    for (; iVar15 != -1; iVar15 = (int)*(short *)(DAT_0076f648 + iVar15 * 0x14 + 0xe)) {
      iVar8 = *(int *)(DAT_0076f648 + iVar15 * 0x14);
      if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == local_44)) && (*(uint *)(iVar8 + 0xc) == uVar2))
      {
        if (iVar15 != -1) {
          uVar13 = *(uint *)(DAT_0076f648 + iVar15 * 0x14);
          local_4 = 0xffffffff;
          uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
          local_44 = uVar13;
          FUN_00649720();
          if (uVar13 == 0) {
            *(undefined4 *)(param_1 + 0x188) = 0;
            *(undefined4 *)(param_1 + 0x18c) = 0;
            ExceptionList = pvStack_c;
            return;
          }
          if (*(int *)(param_1 + 0x180) == *(int *)(uVar13 + 0x16c)) {
            ExceptionList = pvStack_c;
            return;
          }
          piVar14 = (int *)0x0;
          if (*(int *)(param_1 + 0x1ac) == 0) {
            iVar8 = *(int *)(param_1 + 0x1a4);
            if (iVar8 != 0) {
              FUN_006c026a(iVar8,0x2c,*(undefined4 *)(iVar8 + -4),FUN_00649ba0);
              FUN_006bf840(iVar8 + -4);
            }
            *(undefined4 *)(param_1 + 0x1a4) = 0;
            *(undefined4 *)(param_1 + 0x1a8) = 0;
          }
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          FUN_00649b20(s_MUSIC_COMBAT_Reg2_Level7_Win_0071d760);
          iVar8 = *(int *)(param_1 + 0x1a0);
          local_4 = 2;
          if (*(int *)(param_1 + 0x1a8) < iVar8 + 1) {
            iVar15 = *(int *)(param_1 + 0x1b0);
            if (iVar15 == 0) {
              iVar15 = *(int *)(param_1 + 0x1a8) / 2;
              iVar12 = 1;
              if (0 < iVar15) {
                iVar12 = iVar15;
              }
              if (0 < iVar12 + iVar8) {
                if (iVar15 < 1) {
                  iVar15 = 1;
                }
                goto LAB_00407d08;
              }
              param_2 = 1.4013e-45;
            }
            else {
LAB_00407d08:
              param_2 = (float)(iVar15 + iVar8);
            }
            local_48 = (int *)operator_new((int)param_2 * 0x2c + 4);
            local_4._0_1_ = 3;
            if (local_48 != (int *)0x0) {
              piVar14 = local_48 + 1;
              *local_48 = (int)param_2;
              FUN_006c043b(piVar14,0x2c,param_2,FUN_006499d0,FUN_00649ba0);
            }
            iVar8 = 0;
            local_4 = CONCAT31(local_4._1_3_,2);
            if (0 < *(int *)(param_1 + 0x1a0)) {
              iVar15 = 0;
              do {
                FUN_0064a320(*(int *)(param_1 + 0x1a4) + iVar15);
                iVar8 = iVar8 + 1;
                iVar15 = iVar15 + 0x2c;
              } while (iVar8 < *(int *)(param_1 + 0x1a0));
            }
            iVar8 = *(int *)(param_1 + 0x1a4);
            if (iVar8 != 0) {
              FUN_006c026a(iVar8,0x2c,*(undefined4 *)(iVar8 + -4),FUN_00649ba0);
              FUN_006bf840(iVar8 + -4);
            }
            *(int **)(param_1 + 0x1a4) = piVar14;
            *(float *)(param_1 + 0x1a8) = param_2;
            uVar13 = local_44;
          }
          FUN_0064a320(auStack_38);
          *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          *(undefined4 *)(param_1 + 0x194) = 1;
          *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(uVar13 + 0x16c);
          ExceptionList = pvStack_c;
          return;
        }
        break;
      }
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else {
    iVar8 = FUN_00659e10(iVar8);
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

