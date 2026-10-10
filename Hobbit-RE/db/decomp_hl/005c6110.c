
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c6110(int param_1)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_40;
  undefined1 local_2c [20];
  float local_18;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df7d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_clutter_mgr__HandleFading_007460ec);
  local_4 = 0;
  pfVar7 = (float *)FUN_0056bb40(local_2c);
  local_18 = *pfVar7;
  local_10 = pfVar7[2];
  local_40 = 0;
  do {
    sVar2 = *(short *)(*(int *)(param_1 + 0x84) + local_40 * 2);
    if ((((-1 < sVar2) && (uVar11 = (uint)sVar2, (int)uVar11 <= *(int *)(param_1 + 0x58))) &&
        (iVar9 = *(int *)(param_1 + 0x6c), iVar9 != 0)) &&
       (((iVar8 = (int)uVar11 >> (*(byte *)(param_1 + 0x66) & 0x1f), uVar12 = __allshl(),
         (*(uint *)(iVar9 + iVar8 * 0x18) & (uint)uVar12) == 0 &&
         (*(uint *)(iVar9 + 4 + iVar8 * 0x18) & (uint)((ulonglong)uVar12 >> 0x20)) == 0 &&
         (uVar10 = *(uint *)(*(int *)(iVar9 + 8 +
                                     ((int)uVar11 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18) +
                            (*(uint *)(param_1 + 0x60) & uVar11) * 0x28),
         (int)uVar10 <= *(int *)(param_1 + 0x1c))) &&
        ((*(int *)(param_1 + 0x30) != 0 &&
         (iVar9 = (int)uVar10 >> (*(byte *)(param_1 + 0x2a) & 0x1f), uVar12 = __allshl(),
         (*(uint *)(*(int *)(param_1 + 0x30) + iVar9 * 0x18) & (uint)uVar12) == 0 &&
         (*(uint *)(*(int *)(param_1 + 0x30) + 4 + iVar9 * 0x18) & (uint)((ulonglong)uVar12 >> 0x20)
         ) == 0)))))) {
      fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x30) + 8 +
                                 ((int)uVar10 >> (*(byte *)(param_1 + 0x2a) & 0x1f)) * 0x18) + 0xb0
                        + (*(uint *)(param_1 + 0x24) & uVar10) * 0xb8);
      uVar10 = *(uint *)(param_1 + 0x60) & uVar11;
      iVar8 = *(int *)(*(int *)(param_1 + 0x6c) + 8 +
                      ((int)uVar11 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18);
      iVar9 = iVar8 + uVar10 * 0x28;
      uVar3 = *(ushort *)(iVar9 + 0x24);
      fVar5 = *(float *)(iVar9 + 0xc) - local_10;
      fVar4 = *(float *)(iVar8 + 4 + uVar10 * 0x28) - local_18;
      fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
      if (uVar3 != 0) {
        if (_DAT_006f44c0 * fVar1 <= fVar4) {
          if (_DAT_006f44c8 * fVar1 < fVar4 == (NAN(_DAT_006f44c8 * fVar1) || NAN(fVar4))) {
            if (_DAT_006f44c4 * fVar1 < fVar4 == (NAN(_DAT_006f44c4 * fVar1) || NAN(fVar4))) {
              FUN_00649600(s_Handling_inside_007460c8);
              uVar10 = (uint)*(byte *)(iVar9 + 0x26) + (uint)DAT_007460a9;
              local_4._0_1_ = 2;
              uVar11 = 0xff;
              if (uVar10 < 0x100) {
                uVar11 = uVar10;
              }
              *(char *)(iVar9 + 0x26) = (char)uVar11;
              if (((*(ushort *)(iVar9 + 0x24) != 0xffffffff) &&
                  (iVar8 = *(int *)(DAT_0076f648 + (uint)*(ushort *)(iVar9 + 0x24) * 0x14),
                  iVar8 != 0)) && (((*(byte *)(iVar8 + 0x7f) & 0x10) != 0 && (iVar8 != 0)))) {
                *(char *)(iVar8 + 0x80) = (char)uVar11;
              }
              if (*(char *)(iVar9 + 0x26) == -1) {
                FUN_005c6f80(local_40);
              }
            }
            else {
              FUN_00649600(s_Handling_outside_007460d8);
              iVar8 = (uint)*(byte *)(iVar9 + 0x26) - (uint)DAT_007460a8;
              local_4._0_1_ = 1;
              bVar6 = (iVar8 < 0) - 1U & (byte)iVar8;
              *(byte *)(iVar9 + 0x26) = bVar6;
              if (bVar6 == 0) {
                FUN_005c6de0(uVar11);
                FUN_005c6f80(local_40);
              }
              else if ((((*(ushort *)(iVar9 + 0x24) != 0xffffffff) &&
                        (iVar9 = *(int *)(DAT_0076f648 + (uint)*(ushort *)(iVar9 + 0x24) * 0x14),
                        iVar9 != 0)) && ((*(byte *)(iVar9 + 0x7f) & 0x10) != 0)) && (iVar9 != 0)) {
                *(byte *)(iVar9 + 0x80) = bVar6;
              }
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649720();
          }
          else {
            FUN_005c6de0(uVar11);
            FUN_005c6f80(local_40);
          }
        }
        else {
          if (((uVar3 != 0xffffffff) &&
              (iVar8 = *(int *)(DAT_0076f648 + (uint)uVar3 * 0x14), iVar8 != 0)) &&
             (((*(byte *)(iVar8 + 0x7f) & 0x10) != 0 && (iVar8 != 0)))) {
            *(undefined1 *)(iVar9 + 0x26) = 0xff;
            *(undefined1 *)(iVar8 + 0x80) = 0xff;
          }
          FUN_005c6f80(local_40);
        }
      }
    }
    local_40 = local_40 + 1;
  } while (local_40 < 0x80);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

