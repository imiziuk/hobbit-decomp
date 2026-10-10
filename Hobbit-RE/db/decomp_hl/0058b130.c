
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0058b130(int param_1,float *param_2,float *param_3,int param_4,undefined4 param_5,short *param_6
            )

{
  undefined2 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  ushort uVar21;
  int iVar22;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  int local_98;
  int local_94;
  int local_90;
  int local_5c [2];
  float local_54 [2];
  int local_4c;
  int local_48;
  int aiStack_3c [10];
  int aiStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcb9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_sdbase__UpdateLinks_0074203c);
  iVar22 = 0;
  local_4 = 0;
  bVar2 = false;
  local_5c[0] = 0;
  local_5c[1] = 1;
  fVar3 = *param_2 - DAT_006e92e8;
  fVar4 = param_2[1] - DAT_006e92e8;
  fVar5 = param_2[2] - DAT_006e92e8;
  fVar6 = param_2[3] + DAT_006e92e8;
  fVar7 = param_2[4] + DAT_006e92e8;
  fVar8 = param_2[5] + DAT_006e92e8;
  FUN_00401f00((param_3[3] + DAT_006e92e8) - (*param_3 - DAT_006e92e8),
               (param_3[4] + DAT_006e92e8) - (param_3[1] - DAT_006e92e8),
               (param_3[5] + DAT_006e92e8) - (param_3[2] - DAT_006e92e8));
  FUN_00401f00(local_c0 * _DAT_006e936c,local_bc * _DAT_006e936c,local_b8 * _DAT_006e936c);
  local_b4 = local_c0 * local_c0 + local_bc * local_bc + local_b8 * local_b8;
  FUN_00401f00(fVar6 - fVar3,fVar7 - fVar4,fVar8 - fVar5);
  FUN_00401f00(local_c0 * _DAT_006e936c,local_bc * _DAT_006e936c,local_b8 * _DAT_006e936c);
  if ((local_b4 < *(float *)(param_1 + 0x418) != (NAN(local_b4) || NAN(*(float *)(param_1 + 0x418)))
      ) && (local_5c[1] = 2,
           *(float *)(param_1 + 0x418) <=
           local_c0 * local_c0 + local_bc * local_bc + local_b8 * local_b8)) {
    bVar2 = true;
  }
  do {
    if (!bVar2) {
      iVar9 = __ftol();
      local_b4 = (float)(iVar9 + -0x1000);
      iVar9 = __ftol();
      local_90 = iVar9 + -0x1000;
      iVar9 = __ftol();
      local_98 = iVar9 + -0x1000;
      iVar9 = __ftol();
      local_94 = iVar9 + -0x1000;
      iVar9 = __ftol();
      local_b0 = iVar9 + -0x1000;
      iVar9 = __ftol();
      local_c8 = iVar9 + -0x1000;
    }
    iVar9 = __ftol();
    *(int *)((int)local_54 + iVar22) = iVar9 + -0x1000;
    iVar10 = __ftol();
    *(int *)((int)aiStack_3c + iVar22 + 8) = iVar10 + -0x1000;
    iVar11 = __ftol();
    *(int *)((int)aiStack_3c + iVar22) = iVar11 + -0x1000;
    iVar12 = __ftol();
    *(int *)((int)aiStack_14 + iVar22) = iVar12 + -0x1000;
    iVar13 = __ftol();
    *(int *)((int)aiStack_3c + iVar22 + 0x10) = iVar13 + -0x1000;
    iVar14 = __ftol();
    *(int *)((int)aiStack_3c + iVar22 + 0x18) = iVar14 + -0x1000;
    if ((((local_b4 != (float)(iVar9 + -0x1000)) || (local_90 != iVar10 + -0x1000)) ||
        (local_98 != iVar11 + -0x1000)) ||
       (((local_94 != iVar12 + -0x1000 || (local_b0 != iVar13 + -0x1000)) ||
        (local_c8 != iVar14 + -0x1000)))) {
      bVar2 = true;
    }
    iVar22 = iVar22 + 4;
  } while (iVar22 < 8);
  if ((bVar2) || (*param_6 == -1)) {
    FUN_0058bb40(param_6);
    local_b0 = 0;
    do {
      iVar9 = *(int *)((int)aiStack_3c + local_b0 + 8);
      iVar10 = *(int *)((int)aiStack_3c + local_b0 + 0x18);
      local_48 = *(int *)((int)local_5c + local_b0);
      iVar22 = *(int *)((int)local_5c + local_b0) * 0xfb8 + 0x41c + param_1;
      iVar11 = *(int *)((int)aiStack_14 + local_b0);
      iVar12 = *(int *)((int)aiStack_3c + local_b0 + 0x10);
      local_4c = *(int *)((int)aiStack_3c + local_b0);
      local_ac = ((iVar10 - *(int *)((int)aiStack_3c + local_b0)) + 1) * ((iVar12 - iVar9) + 1) *
                 ((iVar11 - *(int *)((int)local_54 + local_b0)) + 1);
      bVar2 = 99 < local_ac;
      if (bVar2) {
        DAT_0077b430 = DAT_0077b430 + 1;
        local_ac = 1;
      }
      if (*(int *)(param_1 + 0x410) * 0x400 < *(int *)(param_1 + 0x40c) + local_ac) {
        do {
          FUN_00649600(s_spatial_dbase__UpdateLinks__Allo_00741fec);
          iVar13 = *(int *)(param_1 + 0x410);
          local_4._0_1_ = 1;
          uVar15 = thunk_FUN_0064ff70(0x3000,s_C__projects_meridian_Support_Spa_00741e98,0x2d9);
          *(undefined4 *)(param_1 + 0x20c + iVar13 * 4) = uVar15;
          *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
          FUN_00648600(*(undefined4 *)(param_1 + 0x20c + iVar13 * 4),0,0x3000);
          iVar13 = *(int *)(param_1 + 0x410) * 0x400;
          uVar16 = iVar13 - 1;
          if (iVar13 + -0x400 <= (int)uVar16) {
            do {
              iVar13 = *(int *)(param_1 + 0x20c + ((int)uVar16 >> 10) * 4) + (uVar16 & 0x3ff) * 0xc;
              *(undefined4 *)(iVar13 + 8) = 0;
              *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(param_1 + 0x414);
              *(short *)(param_1 + 0x414) = (short)uVar16;
              uVar16 = uVar16 - 1;
            } while (*(int *)(param_1 + 0x410) * 0x400 + -0x400 <= (int)uVar16);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        } while (*(int *)(param_1 + 0x410) * 0x400 < *(int *)(param_1 + 0x40c) + local_ac);
      }
      if (bVar2) {
        uVar21 = *(ushort *)(iVar22 + 0xfb6);
        if (uVar21 == 0xffff) {
          iVar9 = 0;
        }
        else {
          iVar9 = (uVar21 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar21 >> 9) * 4);
        }
        *(short *)(iVar9 + 0xe) = *(short *)(iVar9 + 0xe) + 1;
        uVar16 = (uint)*(ushort *)(param_1 + 0x414);
        if (0xf000 < uVar16) {
          uVar16 = 0xffff;
        }
        puVar1 = (undefined2 *)
                 (*(int *)(param_1 + 0x20c + ((int)uVar16 >> 10) * 4) + (uVar16 & 0x3ff) * 0xc);
        *(undefined2 *)(param_1 + 0x414) = puVar1[3];
        *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1;
        *(undefined4 *)(puVar1 + 4) = param_5;
        puVar1[2] = *(undefined2 *)(iVar22 + 0xfb6);
        puVar1[3] = *param_6;
        sVar20 = (short)uVar16;
        *param_6 = sVar20;
        puVar1[1] = 0xffff;
        uVar21 = *(ushort *)(iVar9 + 0x12 + param_4 * 2);
        if (uVar21 != 0xffff) {
          *(short *)(*(int *)(param_1 + 0x20c + ((int)(uint)uVar21 >> 10) * 4) + 2 +
                    (uVar21 & 0x3ff) * 0xc) = sVar20;
        }
        *puVar1 = *(undefined2 *)(iVar9 + 0x12 + param_4 * 2);
        *(short *)(iVar9 + 0x12 + param_4 * 2) = sVar20;
      }
      else {
        uVar16 = (uint)*(ushort *)(param_1 + 0x414);
        if (0xf000 < uVar16) {
          uVar16 = 0xffff;
        }
        FUN_00649600(s_spatial_dbase__AcquireLinks__Hoo_00741f80);
        local_c8 = *(int *)((int)local_54 + local_b0);
        local_4._0_1_ = 2;
        if (local_c8 <= iVar11) {
          iVar14 = local_c8 << 10;
          iVar13 = iVar9;
          uVar19 = uVar16;
          local_c4 = local_4c;
          do {
            for (; local_4c = local_c4, iVar13 <= iVar12; iVar13 = iVar13 + 1) {
              if (local_c4 <= iVar10) {
                uVar17 = ((iVar14 + iVar13) * 0x400 + local_c4) * 0x400;
                do {
                  uVar16 = uVar19;
                  uVar21 = *(ushort *)(iVar22 + 0x14 + (uVar17 % 0x7d1) * 2);
                  while (uVar21 != 0xffff) {
                    iVar18 = 0;
                    if (uVar21 != 0xffff) {
                      iVar18 = (uVar21 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar21 >> 9) * 4)
                      ;
                    }
                    if (((*(short *)(iVar18 + 8) == local_c8) && (*(short *)(iVar18 + 10) == iVar13)
                        ) && (*(short *)(iVar18 + 0xc) == local_c4)) goto LAB_0058b96b;
                    uVar21 = *(ushort *)(iVar18 + 4);
                  }
                  uVar21 = 0xffff;
LAB_0058b96b:
                  uVar19 = (uint)uVar21;
                  if (uVar19 == 0xffff) {
                    uVar19 = FUN_0058a310(local_c8,iVar13,local_c4,local_48,1);
                  }
                  iVar18 = 0;
                  if ((short)uVar19 != -1) {
                    iVar18 = (uVar19 & 0x1ff) * 0x1c +
                             *(int *)(param_1 + ((uVar19 & 0xffff) >> 9) * 4);
                  }
                  *(short *)(iVar18 + 0xe) = *(short *)(iVar18 + 0xe) + 1;
                  puVar1 = (undefined2 *)
                           (*(int *)(param_1 + 0x20c + ((int)uVar16 >> 10) * 4) +
                           (uVar16 & 0x3ff) * 0xc);
                  *(undefined4 *)(puVar1 + 4) = param_5;
                  puVar1[2] = (short)uVar19;
                  puVar1[1] = 0xffff;
                  uVar21 = *(ushort *)(iVar18 + 0x12 + param_4 * 2);
                  if (uVar21 != 0xffff) {
                    *(short *)(*(int *)(param_1 + 0x20c + ((int)(uint)uVar21 >> 10) * 4) + 2 +
                              (uVar21 & 0x3ff) * 0xc) = (short)uVar16;
                  }
                  *puVar1 = *(undefined2 *)(iVar18 + 0x12 + param_4 * 2);
                  *(short *)(iVar18 + 0x12 + param_4 * 2) = (short)uVar16;
                  uVar19 = (uint)(ushort)puVar1[3];
                  if (0xf000 < uVar19) {
                    uVar19 = 0xffff;
                  }
                  local_c4 = local_c4 + 1;
                  uVar17 = uVar17 + 0x400;
                } while (local_c4 <= iVar10);
              }
              local_c4 = local_4c;
            }
            local_c8 = local_c8 + 1;
            iVar14 = iVar14 + 0x400;
            iVar13 = iVar9;
          } while (local_c8 <= iVar11);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        sVar20 = *(short *)(param_1 + 0x414);
        iVar22 = (uVar16 & 0x3ff) * 0xc;
        *(undefined2 *)(param_1 + 0x414) =
             *(undefined2 *)(*(int *)(param_1 + 0x20c + ((int)uVar16 >> 10) * 4) + 6 + iVar22);
        *(short *)(*(int *)(param_1 + 0x20c + ((int)uVar16 >> 10) * 4) + 6 + iVar22) = *param_6;
        *param_6 = sVar20;
        *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + local_ac;
      }
      local_b0 = local_b0 + 4;
    } while (local_b0 < 8);
  }
  else {
    FUN_00649600(s_spatial_dbase__UpdateLinks___ear_00742014);
    FUN_00649720();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

