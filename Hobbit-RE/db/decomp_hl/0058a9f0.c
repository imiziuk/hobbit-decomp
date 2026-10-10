
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0058a9f0(int param_1,float *param_2,int param_3,undefined4 param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int local_84;
  int local_7c;
  int local_74;
  int local_70;
  int local_5c;
  int local_4c [2];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcb68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_sdbase__AcquireLinks_00741fd4);
  local_24 = *param_2 - DAT_006e92e8;
  local_20 = param_2[1] - DAT_006e92e8;
  local_4 = 0;
  local_4c[0] = 0;
  local_1c = param_2[2] - DAT_006e92e8;
  local_4c[1] = 1;
  local_18 = param_2[3] + DAT_006e92e8;
  local_14 = param_2[4] + DAT_006e92e8;
  local_10 = param_2[5] + DAT_006e92e8;
  FUN_00401f00(local_18 - local_24,local_14 - local_20,local_10 - local_1c);
  FUN_00401f00(local_44 * _DAT_006e936c,local_40 * _DAT_006e936c,local_3c * _DAT_006e936c);
  fVar3 = local_38 * local_38 + local_34 * local_34 + local_30 * local_30;
  if (fVar3 < *(float *)(param_1 + 0x418) != (NAN(fVar3) || NAN(*(float *)(param_1 + 0x418)))) {
    local_4c[1] = 2;
  }
  *param_5 = 0xffff;
  local_70 = 0;
  do {
    iVar18 = local_4c[local_70];
    iVar14 = iVar18 * 0xfb8 + 0x41c + param_1;
    local_7c = __ftol();
    local_7c = local_7c + -0x1000;
    iVar4 = __ftol();
    iVar4 = iVar4 + -0x1000;
    iVar5 = __ftol();
    iVar5 = iVar5 + -0x1000;
    iVar6 = __ftol();
    iVar6 = iVar6 + -0x1000;
    iVar7 = __ftol();
    iVar8 = __ftol();
    iVar8 = iVar8 + -0x1000;
    local_5c = ((iVar6 - local_7c) + 1) * (((iVar7 + -0x1000) - iVar4) + 1) * ((iVar8 - iVar5) + 1);
    bVar2 = 99 < local_5c;
    if (bVar2) {
      DAT_0077b430 = DAT_0077b430 + 1;
      local_5c = 1;
    }
    if (*(int *)(param_1 + 0x410) * 0x400 < *(int *)(param_1 + 0x40c) + 0x10 + local_5c) {
      do {
        FUN_00649600(s_spatial_dbase__AcquireLinks__All_00741fac);
        iVar17 = *(int *)(param_1 + 0x410);
        local_4._0_1_ = 1;
        uVar9 = thunk_FUN_0064ff70(0x3000,s_C__projects_meridian_Support_Spa_00741e98,0x200);
        *(undefined4 *)(param_1 + 0x20c + iVar17 * 4) = uVar9;
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
        FUN_00648600(*(undefined4 *)(param_1 + 0x20c + iVar17 * 4),0,0x3000);
        iVar17 = *(int *)(param_1 + 0x410) * 0x400;
        uVar10 = iVar17 - 1;
        if (iVar17 + -0x400 <= (int)uVar10) {
          do {
            iVar17 = *(int *)(param_1 + 0x20c + ((int)uVar10 >> 10) * 4) + (uVar10 & 0x3ff) * 0xc;
            *(undefined4 *)(iVar17 + 8) = 0;
            *(undefined2 *)(iVar17 + 6) = *(undefined2 *)(param_1 + 0x414);
            *(short *)(param_1 + 0x414) = (short)uVar10;
            uVar10 = uVar10 - 1;
          } while (*(int *)(param_1 + 0x410) * 0x400 + -0x400 <= (int)uVar10);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      } while (*(int *)(param_1 + 0x410) * 0x400 < *(int *)(param_1 + 0x40c) + 0x10 + local_5c);
    }
    if (bVar2) {
      uVar16 = *(ushort *)(iVar14 + 0xfb6);
      if (uVar16 == 0xffff) {
        iVar18 = 0;
      }
      else {
        iVar18 = (uVar16 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar16 >> 9) * 4);
      }
      *(short *)(iVar18 + 0xe) = *(short *)(iVar18 + 0xe) + 1;
      uVar10 = (uint)*(ushort *)(param_1 + 0x414);
      if (0xf000 < uVar10) {
        uVar10 = 0xffff;
      }
      puVar1 = (undefined2 *)
               (*(int *)(param_1 + 0x20c + ((int)uVar10 >> 10) * 4) + (uVar10 & 0x3ff) * 0xc);
      *(undefined2 *)(param_1 + 0x414) = puVar1[3];
      *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1;
      *(undefined4 *)(puVar1 + 4) = param_4;
      puVar1[2] = *(undefined2 *)(iVar14 + 0xfb6);
      puVar1[3] = *param_5;
      uVar15 = (undefined2)uVar10;
      *param_5 = uVar15;
      puVar1[1] = 0xffff;
      uVar16 = *(ushort *)(iVar18 + 0x12 + param_3 * 2);
      if (uVar16 != 0xffff) {
        *(undefined2 *)
         (*(int *)(param_1 + 0x20c + ((int)(uint)uVar16 >> 10) * 4) + 2 + (uVar16 & 0x3ff) * 0xc) =
             uVar15;
      }
      *puVar1 = *(undefined2 *)(iVar18 + 0x12 + param_3 * 2);
      *(undefined2 *)(iVar18 + 0x12 + param_3 * 2) = uVar15;
    }
    else {
      uVar10 = (uint)*(ushort *)(param_1 + 0x414);
      FUN_00649600(s_spatial_dbase__AcquireLinks__Hoo_00741f80);
      local_4._0_1_ = 2;
      if (local_7c <= iVar6) {
        local_74 = local_7c * 0x400;
        iVar17 = iVar4;
        uVar13 = uVar10;
        do {
          for (; iVar17 <= iVar7 + -0x1000; iVar17 = iVar17 + 1) {
            if (iVar5 <= iVar8) {
              uVar11 = ((iVar17 + local_74) * 0x400 + iVar5) * 0x400;
              local_84 = iVar5;
              do {
                uVar10 = uVar13;
                if (0xf000 < uVar13) {
                  uVar10 = 0xffff;
                }
                uVar16 = *(ushort *)(iVar14 + 0x14 + (uVar11 % 0x7d1) * 2);
                while (uVar16 != 0xffff) {
                  iVar12 = 0;
                  if (uVar16 != 0xffff) {
                    iVar12 = (uVar16 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar16 >> 9) * 4);
                  }
                  if (((*(short *)(iVar12 + 8) == local_7c) && (*(short *)(iVar12 + 10) == iVar17))
                     && (*(short *)(iVar12 + 0xc) == local_84)) goto LAB_0058af5b;
                  uVar16 = *(ushort *)(iVar12 + 4);
                }
                uVar16 = 0xffff;
LAB_0058af5b:
                uVar13 = (uint)uVar16;
                if (uVar13 == 0xffff) {
                  uVar13 = FUN_0058a310(local_7c,iVar17,local_84,iVar18,1);
                }
                iVar12 = 0;
                if ((short)uVar13 != -1) {
                  iVar12 = (uVar13 & 0x1ff) * 0x1c +
                           *(int *)(param_1 + ((uVar13 & 0xffff) >> 9) * 4);
                }
                *(short *)(iVar12 + 0xe) = *(short *)(iVar12 + 0xe) + 1;
                puVar1 = (undefined2 *)
                         (*(int *)(param_1 + 0x20c + ((int)uVar10 >> 10) * 4) +
                         (uVar10 & 0x3ff) * 0xc);
                *(undefined4 *)(puVar1 + 4) = param_4;
                puVar1[2] = (short)uVar13;
                puVar1[1] = 0xffff;
                uVar16 = *(ushort *)(iVar12 + 0x12 + param_3 * 2);
                if (uVar16 != 0xffff) {
                  *(short *)(*(int *)(param_1 + 0x20c + ((int)(uint)uVar16 >> 10) * 4) + 2 +
                            (uVar16 & 0x3ff) * 0xc) = (short)uVar10;
                }
                *puVar1 = *(undefined2 *)(iVar12 + 0x12 + param_3 * 2);
                *(short *)(iVar12 + 0x12 + param_3 * 2) = (short)uVar10;
                uVar13 = (uint)(ushort)puVar1[3];
                if (0xf000 < uVar13) {
                  uVar13 = 0xffff;
                }
                local_84 = local_84 + 1;
                uVar11 = uVar11 + 0x400;
              } while (local_84 <= iVar8);
            }
          }
          local_7c = local_7c + 1;
          local_74 = local_74 + 0x400;
          iVar17 = iVar4;
        } while (local_7c <= iVar6);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      uVar15 = *(undefined2 *)(param_1 + 0x414);
      iVar14 = (uVar10 & 0x3ff) * 0xc;
      *(undefined2 *)(param_1 + 0x414) =
           *(undefined2 *)(iVar14 + 6 + *(int *)(param_1 + 0x20c + ((int)uVar10 >> 10) * 4));
      *(undefined2 *)(iVar14 + 6 + *(int *)(param_1 + 0x20c + ((int)uVar10 >> 10) * 4)) = *param_5;
      *param_5 = uVar15;
      *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + local_5c;
    }
    local_70 = local_70 + 1;
    if (1 < local_70) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

