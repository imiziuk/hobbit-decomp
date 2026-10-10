
/* WARNING: Removing unreachable block (ram,0x00594f27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594ee0(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 **ppuStack_40;
  undefined1 **ppuStack_3c;
  float fStack_34;
  undefined1 *apuStack_30 [3];
  float local_24;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd1c8;
  pvStack_c = ExceptionList;
  ppuStack_3c = (undefined1 **)s_PhysController__UpdateLookahead_00742f48;
  ppuStack_40 = (undefined1 **)0x594f09;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x4c) & 0x200000) != 0) {
    local_24 = *(float *)(param_1 + 0x21c) * _DAT_006e9340;
    local_1c = *(float *)(param_1 + 0x224) * _DAT_006e9340;
    ppuStack_3c = (undefined1 **)0x594f62;
    piVar2 = (int *)FUN_00592920();
    ppuStack_3c = (undefined1 **)0x594f69;
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
    fStack_10 = local_1c + pfVar3[2];
    ppuStack_3c = (undefined1 **)0x3f800000;
    fStack_14 = pfVar3[1];
    ppuStack_40 = (undefined1 **)0x0;
    uStack_44 = 0;
    fStack_18 = local_24 + *pfVar3;
    apuStack_30[0] = auStack_50;
    *(float *)(param_1 + 0x1cc) = fStack_18;
    *(float *)(param_1 + 0x1d0) = fStack_14;
    *(float *)(param_1 + 0x1d4) = fStack_10;
    FUN_004357e0(&fStack_18);
    iVar4 = FUN_005b38a0();
    ppuStack_3c = (undefined1 **)&fStack_34;
    ppuStack_40 = apuStack_30;
    uStack_44 = 0x3f060a92;
    *(uint *)(param_1 + 0x4c) =
         (iVar4 << 9 ^ *(uint *)(param_1 + 0x4c)) & 0x200 ^ *(uint *)(param_1 + 0x4c);
    uStack_48 = 0x594fe7;
    FUN_0064c8e0();
    fVar1 = local_1c * (float)apuStack_30[0];
    local_1c = local_1c * fStack_34 - local_24 * (float)apuStack_30[0];
    ppuStack_3c = (undefined1 **)0x59501f;
    local_24 = fStack_34 * local_24 + fVar1;
    piVar2 = (int *)FUN_00592920();
    ppuStack_3c = (undefined1 **)0x595026;
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
    fStack_10 = local_1c + pfVar3[2];
    fStack_14 = pfVar3[1];
    fStack_18 = local_24 + *pfVar3;
    *(float *)(param_1 + 0x1c0) = fStack_18;
    ppuStack_3c = (undefined1 **)0x3f800000;
    *(float *)(param_1 + 0x1c4) = fStack_14;
    ppuStack_40 = (undefined1 **)0x0;
    uStack_44 = 0;
    *(float *)(param_1 + 0x1c8) = fStack_10;
    apuStack_30[0] = auStack_50;
    FUN_004357e0(&fStack_18);
    iVar4 = FUN_005b38a0();
    ppuStack_3c = apuStack_30;
    ppuStack_40 = (undefined1 **)&fStack_34;
    uStack_44 = 0xbf860a92;
    *(uint *)(param_1 + 0x4c) =
         (iVar4 << 8 ^ *(uint *)(param_1 + 0x4c)) & 0x100 ^ *(uint *)(param_1 + 0x4c);
    uStack_48 = 0x5950a4;
    FUN_0064c8e0();
    fVar1 = local_1c * fStack_34;
    local_1c = local_1c * (float)apuStack_30[0] - local_24 * fStack_34;
    ppuStack_3c = (undefined1 **)0x5950dc;
    local_24 = (float)apuStack_30[0] * local_24 + fVar1;
    piVar2 = (int *)FUN_00592920();
    ppuStack_3c = (undefined1 **)0x5950e3;
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
    fStack_10 = local_1c + pfVar3[2];
    ppuStack_3c = (undefined1 **)0x3f800000;
    fStack_14 = pfVar3[1];
    ppuStack_40 = (undefined1 **)0x0;
    uStack_44 = 0;
    fStack_18 = local_24 + *pfVar3;
    apuStack_30[0] = auStack_50;
    *(float *)(param_1 + 0x1b4) = fStack_18;
    *(float *)(param_1 + 0x1b8) = fStack_14;
    *(float *)(param_1 + 0x1bc) = fStack_10;
    FUN_004357e0(&fStack_18);
    iVar4 = FUN_005b38a0();
    *(uint *)(param_1 + 0x4c) =
         (iVar4 << 7 ^ *(uint *)(param_1 + 0x4c)) & 0x80 ^ *(uint *)(param_1 + 0x4c);
  }
  local_4 = 0xffffffff;
  ppuStack_3c = (undefined1 **)0x59515e;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

