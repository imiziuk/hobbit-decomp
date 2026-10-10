
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005993f0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_2c;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  undefined1 auStack_c [12];
  
  iVar9 = 0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    piVar5 = (int *)FUN_00592920();
    pfVar2 = *(float **)(param_1 + 0x1a0);
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    local_24 = *pfVar2 - *pfVar6;
    local_20 = pfVar2[1] - pfVar6[1];
    local_1c = pfVar2[2] - pfVar6[2];
  }
  fVar3 = *(float *)(param_1 + 0x27c) * _DAT_006e9370;
  local_10 = *(float *)(param_1 + 0x280) * _DAT_006e9370;
  *(float *)(param_1 + 0x26c) = *(float *)(param_1 + 0x278) * _DAT_006e9370;
  *(float *)(param_1 + 0x274) = local_10;
  *(float *)(param_1 + 0x270) = fVar3;
  fVar3 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
  fVar4 = _DAT_006f409c * *(float *)(param_1 + 0x294);
  if (fVar4 < fVar3) {
    fVar3 = DAT_006e92e8 / fVar3;
    iVar7 = FUN_0064cf30(fVar3);
    if (iVar7 == 0) {
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.0;
    }
    else {
      fVar3 = fVar3 * fVar4;
      local_24 = local_24 * fVar3;
      local_20 = local_20 * fVar3;
      local_1c = local_1c * fVar3;
    }
  }
  *(float *)(param_1 + 0x21c) = local_24 + *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0x220) = local_20 + *(float *)(param_1 + 0x220);
  *(float *)(param_1 + 0x224) = local_1c + *(float *)(param_1 + 0x224);
  if (*(int *)(param_1 + 0x40) == 2) {
    piVar5 = (int *)FUN_00592920();
    puVar8 = (undefined4 *)(**(code **)(*piVar5 + 0x28))();
    uStack_18 = *puVar8;
    uStack_14 = puVar8[1];
    local_10 = (float)puVar8[2];
    iVar7 = FUN_00592920();
    if ((*(int *)(iVar7 + 0x1b0) == 0x24) ||
       (iVar7 = FUN_00592920(), *(int *)(iVar7 + 0x1b0) == 0x25)) {
      *(undefined4 *)(param_1 + 0x21c) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
      if (*(int *)(param_1 + 0x38) == 2) {
        return;
      }
      *(undefined4 *)(param_1 + 0x38) = 4;
      FUN_00595ad0();
      return;
    }
    piVar5 = (int *)FUN_00592920();
    iVar7 = (**(code **)(*piVar5 + 0x140))(&uStack_18,0,auStack_c,param_1 + 0x2d8);
    if ((iVar7 != 0) &&
       (fVar3 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c),
       fVar3 < _DAT_006ec0ac != (NAN(fVar3) || NAN(_DAT_006ec0ac)))) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
    }
  }
  if ((_DAT_006e999c < *(float *)(param_1 + 0x23c)) && (0 < *(int *)(param_1 + 0x19c))) {
    iStack_2c = *(int *)(param_1 + 0x19c) + -1;
    if (0 < iStack_2c) {
      do {
        iVar1 = *(int *)(param_1 + 0x1a0) + 0x20 + iVar9;
        iVar7 = *(int *)(param_1 + 0x1a0) + iVar9;
        FUN_004357e0(iVar1);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        FUN_004357e0(iVar1 + 0x14);
        iVar9 = iVar9 + 0x20;
        iStack_2c = iStack_2c + -1;
      } while (iStack_2c != 0);
    }
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  }
  return;
}

