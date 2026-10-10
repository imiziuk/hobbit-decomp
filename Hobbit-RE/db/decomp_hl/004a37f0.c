
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a37f0(undefined1 **param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined4 *puVar7;
  float extraout_ECX;
  undefined1 **ppuVar8;
  float10 fVar9;
  float fStack_bc;
  undefined1 *puStack_b8;
  undefined1 **local_b4;
  undefined1 *local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 *puStack_68;
  undefined1 *apuStack_64 [19];
  undefined1 *local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3b83;
  pvStack_c = ExceptionList;
  local_b4 = (undefined1 **)s_NPCObject__RenderGeometry_0072afbc;
  puStack_b8 = (undefined1 *)0x4a381e;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  local_b4 = (undefined1 **)0x4a3836;
  iVar2 = FUN_00592190();
  if (iVar2 == 0) goto LAB_004a3d5f;
  local_b4 = &local_a4;
  puStack_b8 = (undefined1 *)0x4a384a;
  FUN_00592190();
  puStack_b8 = (undefined1 *)0x4a3851;
  local_b4 = (undefined1 **)FUN_004258d0();
  local_4._0_1_ = 1;
  puStack_b8 = (undefined1 *)0x4a3864;
  iVar2 = FUN_005495d0();
  local_4 = (uint)local_4._1_3_ << 8;
  local_b4 = (undefined1 **)0x4a3877;
  FUN_00406ba0();
  if (iVar2 == 0) goto LAB_004a3d5f;
  local_b4 = (undefined1 **)0x4a3886;
  FUN_004a4280();
  if (DAT_0075d2cc != 0) {
    local_a4 = (undefined1 *)&local_b4;
    local_b4 = (undefined1 **)0xffffff00;
    puStack_b8 = param_1[0x38];
    fStack_bc = 0.0;
    fStack_bc = (float)FUN_00401f00(0,param_1[0x39]);
    fStack_bc = (float)FUN_00402130(local_18,param_1 + 5);
    FUN_00669ef0(param_1 + 5);
  }
  local_b4 = (undefined1 **)0x0;
  puStack_b8 = (undefined1 *)0x4a38ed;
  FUN_004a29b0();
  local_b4 = (undefined1 **)0x4a38f4;
  FUN_004a3120();
  local_b4 = (undefined1 **)0x4a38fb;
  pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
  local_b4 = local_18;
  puStack_b8 = (undefined1 *)0x4a390f;
  pfVar4 = (float *)FUN_0056bb40();
  if ((((uint)param_1[0x9a] & 0x40) == 0) ||
     (_DAT_006edd14 + _DAT_006e9988 <
      SQRT((pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]) +
           (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
           (*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3)))) {
    if (-1 < (int)param_1[0x9b]) {
      puStack_b8 = (undefined1 *)0x4a3b8d;
      local_b4 = param_1 + 0x9b;
      FUN_0054f7c0();
      param_1[0x9b] = (undefined1 *)0xffffffff;
    }
  }
  else {
    if ((int)param_1[0x9b] < 0) {
      local_b4 = (undefined1 **)0xbf800000;
      puStack_b8 = (undefined1 *)0x2;
      fStack_bc = 6.816469e-39;
      puVar5 = (undefined1 *)FUN_0054f5b0();
      param_1[0x9b] = puVar5;
      local_b4 = (undefined1 **)((float)param_1[0x16] - (float)param_1[0x13]);
      puStack_b8 = (undefined1 *)((float)param_1[0x15] - (float)param_1[0x12]);
      fStack_bc = (float)param_1[0x14] - (float)param_1[0x11];
      FUN_00401f00();
      local_b4 = (undefined1 **)0x4a39c9;
      fVar9 = (float10)FUN_00404890();
      fVar9 = fVar9 * (float10)_DAT_006e936c * (float10)_DAT_006e95d8 - (float10)_DAT_006e998c;
      param_1[0x9d] = (undefined1 *)(float)fVar9;
      if (fVar9 < (float10)DAT_006e92e4 != (fVar9 == (float10)DAT_006e92e4)) {
        param_1[0x9d] = (undefined1 *)0x40a00000;
      }
LAB_004a3a02:
      local_b4 = (undefined1 **)0x4a3a09;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_a0 = *pfVar3 - (float)param_1[0x9d];
      fStack_9c = pfVar3[1] + _DAT_006e9554;
      fStack_98 = pfVar3[2] - (float)param_1[0x9d];
      local_b4 = (undefined1 **)0x4a3a46;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_94 = *pfVar3 - (float)param_1[0x9d];
      fStack_90 = pfVar3[1] + _DAT_006e9554;
      fStack_8c = pfVar3[2] + (float)param_1[0x9d];
      local_b4 = (undefined1 **)0x4a3a83;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_88 = *pfVar3 + (float)param_1[0x9d];
      fStack_84 = pfVar3[1] + _DAT_006e9554;
      fStack_80 = pfVar3[2] + (float)param_1[0x9d];
      local_b4 = (undefined1 **)0x4a3ac0;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      puStack_b8 = (undefined1 *)*pfVar3;
      fStack_7c = (float)puStack_b8 + (float)param_1[0x9d];
      local_a4 = (undefined1 *)0x43fa0000;
      fStack_78 = pfVar3[1] + _DAT_006e9554;
      fStack_74 = pfVar3[2] - (float)param_1[0x9d];
      if (param_1[0x6d] != (undefined1 *)0x5) {
        local_a4 = (undefined1 *)0x42c80000;
      }
      local_b4 = (undefined1 **)0x1;
      puStack_68 = (undefined1 *)&puStack_b8;
      fStack_bc = 3.57331e-43;
      FUN_00413480(0x80,0x80,0x80);
      puStack_68 = (undefined1 *)&fStack_bc;
      fStack_bc = extraout_ECX;
      FUN_00469af0(param_1 + 0x9c);
      FUN_0054fc60(param_1[0x9b],&fStack_a0,local_a4);
    }
    else if ((~(uint)param_1[0x9a] & 0x80) != 0) goto LAB_004a3a02;
    local_b4 = (undefined1 **)param_1[0x9b];
    puStack_b8 = (undefined1 *)0x4a3b6e;
    FUN_0054f9c0();
  }
  local_b4 = (undefined1 **)0x0;
  puStack_b8 = (undefined1 *)0x4a3b9c;
  FUN_004a68b0();
  if (param_1[0x11f] != (undefined1 *)0x0) {
    local_b4 = (undefined1 **)0x4a3bb4;
    iVar2 = (**(code **)(*param_1 + 0x154))();
    if (iVar2 == 0) {
      apuStack_64[0xc] = (undefined1 *)0x0;
      apuStack_64[8] = (undefined1 *)0x0;
      apuStack_64[4] = (undefined1 *)0x0;
      apuStack_64[0xd] = (undefined1 *)0x0;
      apuStack_64[9] = (undefined1 *)0x0;
      apuStack_64[1] = (undefined1 *)0x0;
      apuStack_64[0xe] = (undefined1 *)0x0;
      apuStack_64[6] = (undefined1 *)0x0;
      apuStack_64[2] = (undefined1 *)0x0;
      apuStack_64[0xb] = (undefined1 *)0x0;
      apuStack_64[7] = (undefined1 *)0x0;
      apuStack_64[3] = (undefined1 *)0x0;
      apuStack_64[0] = (undefined1 *)0x3f800000;
      apuStack_64[5] = (undefined1 *)0x3f800000;
      apuStack_64[10] = (undefined1 *)0x3f800000;
      apuStack_64[0xf] = (undefined1 *)0x3f800000;
    }
    else {
      if (*(int *)(iVar2 + 300) != 0) {
        local_b4 = (undefined1 **)0x4a3bcb;
        FUN_00542230();
      }
      ppuVar8 = *(undefined1 ***)(iVar2 + 0x130);
      if ((apuStack_64 != ppuVar8) && (ppuVar1 = ppuVar8 + 0x10, ppuVar8 != ppuVar1)) {
        ppuVar6 = apuStack_64 + 2;
        iVar2 = (int)ppuVar8 - (int)apuStack_64;
        do {
          ppuVar6[-2] = *ppuVar8;
          ppuVar6[-1] = ppuVar8[1];
          *ppuVar6 = *(undefined1 **)(iVar2 + (int)ppuVar6);
          ppuVar6[1] = ppuVar8[3];
          ppuVar8 = ppuVar8 + 4;
          ppuVar6 = ppuVar6 + 4;
        } while (ppuVar8 != ppuVar1);
      }
    }
    local_b4 = (undefined1 **)0x4a3ca9;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    apuStack_64[0xc] = (undefined1 *)*puVar7;
    apuStack_64[0xd] = (undefined1 *)puVar7[1];
    local_b4 = apuStack_64;
    apuStack_64[0xe] = (undefined1 *)puVar7[2];
    puStack_b8 = (undefined1 *)0x4a3cd5;
    FUN_00580b20();
    local_b4 = (undefined1 **)(*(byte *)((int)param_1 + 0x7a) & 0x40);
    puStack_b8 = (undefined1 *)0x4a3ce5;
    FUN_00580b30();
    if ((float)param_1[0x119] <= DAT_006e92e4) {
      *(undefined1 *)((int)param_1 + 0x85) = DAT_0075d2bb;
      *(undefined1 *)(param_1 + 0x21) = DAT_0075d2ba;
      *(undefined1 *)((int)param_1 + 0x83) = DAT_0075d2b9;
      *(undefined1 *)((int)param_1 + 0x82) = DAT_0075d2b8;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x85) = DAT_0075d227;
      *(undefined1 *)(param_1 + 0x21) = DAT_0075d226;
      *(undefined1 *)((int)param_1 + 0x83) = DAT_0075d225;
      *(undefined1 *)((int)param_1 + 0x82) = DAT_0075d224;
    }
    puStack_b8 = (undefined1 *)0x4a3d5f;
    local_b4 = param_1;
    (**(code **)(param_1[0xc4] + 4))();
  }
LAB_004a3d5f:
  local_4 = 0xffffffff;
  local_b4 = (undefined1 **)0x4a3d73;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

