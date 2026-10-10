
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c5ed0(int param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_38;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_clutter_mgr__HandlePop_007460b0);
  local_4 = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffe;
  pfVar8 = (float *)FUN_0056bb40(local_18);
  fVar3 = *pfVar8;
  fVar4 = pfVar8[2];
  local_38 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    uVar12 = 0;
    if (*(int *)(param_1 + 0x58) < 0) goto LAB_005c60bf;
    do {
      iVar10 = *(int *)(param_1 + 0x6c);
      uVar12 = local_38;
      if ((iVar10 != 0) &&
         (iVar9 = (int)local_38 >> (*(byte *)(param_1 + 0x66) & 0x1f), uVar13 = __allshl(),
         (*(uint *)(iVar10 + iVar9 * 0x18) & (uint)uVar13) == 0 &&
         (*(uint *)(iVar10 + 4 + iVar9 * 0x18) & (uint)((ulonglong)uVar13 >> 0x20)) == 0)) {
        uVar11 = *(uint *)(param_1 + 0x60) & local_38;
        iVar10 = *(int *)(iVar10 + 8 + ((int)local_38 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18)
        ;
        uVar5 = *(uint *)(iVar10 + uVar11 * 0x28);
        iVar10 = iVar10 + uVar11 * 0x28;
        if (((int)uVar5 <= *(int *)(param_1 + 0x1c)) &&
           ((*(int *)(param_1 + 0x30) != 0 &&
            (iVar9 = (int)uVar5 >> (*(byte *)(param_1 + 0x2a) & 0x1f), uVar13 = __allshl(),
            (*(uint *)(*(int *)(param_1 + 0x30) + iVar9 * 0x18) & (uint)uVar13) == 0 &&
            (*(uint *)(*(int *)(param_1 + 0x30) + 4 + iVar9 * 0x18) &
            (uint)((ulonglong)uVar13 >> 0x20)) == 0)))) {
          fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x30) + 8 +
                                     ((int)uVar5 >> (*(byte *)(param_1 + 0x2a) & 0x1f)) * 0x18) +
                             0xb0 + (*(uint *)(param_1 + 0x24) & uVar5) * 0xb8);
          fVar7 = *(float *)(iVar10 + 0xc) - fVar4;
          fVar6 = *(float *)(iVar10 + 4) - fVar3;
          fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
          fVar7 = _DAT_006f44c4 * fVar1;
          if ((fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) && (*(short *)(iVar10 + 0x24) != 0)) {
            FUN_005c6de0(local_38);
          }
          if (fVar6 < _DAT_006f44bc * fVar1) {
            if (*(short *)(iVar10 + 0x24) == 0) {
              FUN_005c6a60(local_38);
            }
            uVar2 = *(ushort *)(iVar10 + 0x24);
            if (uVar2 != 0) {
              *(undefined1 *)(iVar10 + 0x26) = 0xff;
              if ((((uVar2 != 0xffffffff) &&
                   (iVar10 = *(int *)(DAT_0076f648 + (uint)uVar2 * 0x14), iVar10 != 0)) &&
                  ((*(byte *)(iVar10 + 0x7f) & 0x10) != 0)) && (iVar10 != 0)) {
                *(undefined1 *)(iVar10 + 0x80) = 0xff;
              }
            }
          }
        }
      }
LAB_005c60bf:
      local_38 = uVar12 + 1;
    } while ((int)local_38 < *(int *)(param_1 + 0x58));
  }
  iVar10 = 0;
  do {
    *(undefined2 *)(iVar10 + *(int *)(param_1 + 0x84)) = 0xffff;
    iVar10 = iVar10 + 2;
  } while (iVar10 < 0x100);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

