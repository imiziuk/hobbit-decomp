
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058bf20(int param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  float fVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  float10 fVar16;
  int local_330;
  float local_32c;
  uint *local_328;
  int local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  float local_27c;
  float local_270;
  float local_26c;
  float local_260;
  float local_25c;
  float local_248;
  float local_244;
  float local_238;
  undefined1 local_22c [12];
  undefined1 auStack_220 [12];
  undefined1 local_214 [12];
  undefined1 local_208 [12];
  undefined1 local_1fc [508];
  
  FUN_0066dac0();
  FUN_00647b50();
  puVar13 = local_1fc + 2;
  iVar10 = 0x7f;
  do {
    puVar7 = (undefined1 *)FUN_00647c90(&local_330,0xff);
    uVar2 = puVar7[2];
    puVar13[1] = puVar7[3];
    uVar3 = puVar7[1];
    *puVar13 = uVar2;
    uVar2 = *puVar7;
    puVar13[-1] = uVar3;
    puVar13[-2] = uVar2;
    puVar13 = puVar13 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = *(int *)(param_1 + 0x1b800);
  local_2e8 = 0;
  local_2ec = 0;
  local_2f0 = 200;
  iVar14 = local_2ec;
  while ((local_324 = iVar10, local_2ec = iVar14, iVar10 != 0 && (local_2f0 != 0))) {
    if ((*(short *)(iVar10 + 0x14) != -1) && (0 < *(short *)(iVar10 + 0x18))) {
      sVar4 = *(short *)(iVar10 + 0xc);
      local_2e8 = local_2e8 + 1;
      if (sVar4 != -1) {
        local_2f0 = local_2f0 + -1;
        for (; sVar4 != -1; sVar4 = *(short *)(sVar4 * 0x198 + 0x2020 + param_1)) {
          local_2ec = local_2ec + 1;
        }
        FUN_0066c3a0(3,0);
        sVar4 = *(short *)(iVar10 + 0xc);
        while (iVar14 = (int)sVar4, iVar14 != -1) {
          iVar10 = iVar14 * 0x198 + param_1;
          local_330 = 0;
          if (0 < *(short *)(iVar14 * 0x198 + 0x2022 + param_1)) {
            iVar14 = iVar14 * 0x22;
            puVar11 = (uint *)(iVar10 + 0x2140);
            do {
              FUN_0066ddd0();
              uVar5 = *puVar11;
              iVar9 = (uVar5 & 0xf) + iVar14;
              local_320 = *(float *)(param_1 + 0x202c + iVar9 * 0xc);
              iVar9 = param_1 + 0x202c + iVar9 * 0xc;
              local_31c = *(float *)(iVar9 + 4);
              local_318 = *(float *)(iVar9 + 8);
              pfVar1 = (float *)(param_1 + 0x202c + ((uVar5 >> 4 & 0xf) + iVar14) * 0xc);
              local_314 = *pfVar1;
              local_310 = pfVar1[1];
              local_30c = pfVar1[2];
              pfVar1 = (float *)(param_1 + 0x202c + ((uVar5 >> 8 & 0xf) + iVar14) * 0xc);
              local_308 = *pfVar1;
              local_304 = pfVar1[1];
              local_300 = pfVar1[2];
              pfVar1 = (float *)(param_1 + 0x202c + ((uVar5 >> 0xc & 0xf) + iVar14) * 0xc);
              local_2fc = *pfVar1;
              local_2f8 = pfVar1[1];
              local_2f4 = pfVar1[2];
              FUN_00405080(local_22c,&local_308,&local_320);
              uVar8 = FUN_00405080(local_214,&local_314,&local_320);
              FUN_0042eb90(local_208,uVar8);
              FUN_004357e0();
              FUN_0042e1f0();
              fVar16 = (float10)FUN_00402020();
              local_2d8 = (float)-fVar16;
              local_25c = local_2e4 + local_2e4;
              fVar6 = local_2e0 + local_2e0;
              local_32c = local_2dc + local_2dc;
              local_320 = local_25c + local_320;
              local_31c = local_31c + fVar6;
              local_318 = local_318 + local_32c;
              local_314 = local_25c + local_314;
              local_310 = local_310 + fVar6;
              local_30c = local_30c + local_32c;
              local_308 = local_25c + local_308;
              local_304 = local_304 + fVar6;
              local_300 = local_300 + local_32c;
              local_2fc = local_25c + local_2fc;
              local_2f8 = local_2f8 + fVar6;
              local_2f4 = local_2f4 + local_32c;
              local_260 = local_32c;
              local_248 = local_32c;
              local_238 = local_25c;
              FUN_0066de80();
              FUN_0066de80(&local_314);
              FUN_0066de80(&local_308);
              if ((((NAN(local_320) || NAN(local_2fc)) == (local_320 == local_2fc)) ||
                  ((NAN(local_31c) || NAN(local_2f8)) == (local_31c == local_2f8))) ||
                 ((NAN(local_318) || NAN(local_2f4)) == (local_318 == local_2f4))) {
                FUN_0066de80();
                FUN_0066de80(&local_308);
                FUN_0066de80(&local_2fc);
              }
              local_330 = local_330 + 1;
              puVar11 = puVar11 + 2;
            } while (local_330 < *(short *)(iVar10 + 0x2022));
          }
          sVar4 = *(short *)(iVar10 + 0x2020);
          iVar10 = local_324;
        }
        FUN_0066d9a0();
        sVar4 = *(short *)(iVar10 + 0xc);
        while (iVar14 = (int)sVar4, iVar14 != -1) {
          iVar9 = iVar14 * 0x198 + param_1;
          local_32c = 0.0;
          local_330 = iVar9;
          if (0 < *(short *)(iVar14 * 0x198 + 0x2022 + param_1)) {
            puVar11 = (uint *)(iVar9 + 0x2140);
            do {
              uVar5 = *puVar11;
              uVar15 = uVar5 >> 0x1e & 1;
              if ((uVar15 != 0) || ((int)uVar5 < 0)) {
                iVar9 = iVar14 * 0x22;
                pfVar1 = (float *)(param_1 + 0x202c + ((uVar5 & 0xf) + iVar9) * 0xc);
                local_2c0 = pfVar1[2];
                iVar10 = (uVar5 >> 4 & 0xf) + iVar9;
                local_2b8 = *(float *)(param_1 + 0x2030 + iVar10 * 0xc);
                local_244 = *(float *)(param_1 + 0x202c + iVar10 * 0xc) + *pfVar1;
                local_2b4 = *(float *)(param_1 + iVar10 * 0xc + 0x2034);
                iVar10 = (uVar5 >> 8 & 0xf) + iVar9;
                local_2b0 = *(float *)(param_1 + 0x202c + iVar10 * 0xc);
                iVar10 = param_1 + 0x202c + iVar10 * 0xc;
                local_2ac = *(float *)(iVar10 + 4);
                local_2a8 = *(float *)(iVar10 + 8);
                local_280 = local_244 + local_2b0;
                local_27c = local_2ac + local_2b8 + pfVar1[1];
                iVar9 = (uVar5 >> 0xc & 0xf) + iVar9;
                local_2a4 = *(float *)(param_1 + 0x202c + iVar9 * 0xc);
                local_2a0 = *(float *)(param_1 + 0x2030 + iVar9 * 0xc);
                local_29c = *(float *)(param_1 + iVar9 * 0xc + 0x2034);
                local_270 = local_2a0 + local_27c;
                local_26c = local_29c + local_2a8 + local_2b4 + local_2c0;
                local_2d4 = (local_280 + local_2a4) * _DAT_006e9550;
                local_2d0 = local_270 * _DAT_006e9550;
                local_2cc = local_26c * _DAT_006e9550;
                local_328 = puVar11;
                if (uVar15 != 0) {
                  FUN_0066a810();
                }
                puVar11 = local_328;
                iVar9 = local_330;
                if ((int)*local_328 < 0) {
                  FUN_0066a810();
                  iVar9 = local_330;
                }
              }
              local_32c = (float)((int)local_32c + 1);
              puVar11 = puVar11 + 2;
              iVar10 = local_324;
              local_328 = puVar11;
            } while ((int)local_32c < (int)*(short *)(iVar9 + 0x2022));
          }
          sVar4 = *(short *)(iVar9 + 0x2020);
        }
      }
      local_298 = 0x7f7fffff;
      local_294 = 0x7f7fffff;
      local_290 = 0x7f7fffff;
      local_28c = 0xff7fffff;
      local_288 = 0xff7fffff;
      local_284 = 0xff7fffff;
      FUN_0058cb40(iVar10,&local_298);
      if (*(int *)(iVar10 + 0x1c) != 0) {
        FUN_00669cf0();
        FUN_00647b10(0,0x40);
        FUN_0045bbd0(auStack_220);
        FUN_0066a800();
      }
    }
    iVar10 = *(int *)(iVar10 + 4);
    iVar14 = local_2ec;
  }
  FUN_0064f0d0(0,3,s_________________________00742138);
  FUN_0064f0d0(0,4,s_nCellsHit__d_0074211c,local_2e8);
  FUN_0064f0d0(0,5,s_nBucketsHit__d_00742100,iVar14);
  FUN_0064f0d0(0,6,s_SizeBuckets__d_bytes_007420e0,0x19800);
  FUN_0064f0d0(0,7,s_nCacheMisses__d__5_3f_007420c0,*(undefined4 *)(param_1 + 0x1c80c),
               (double)*(float *)(param_1 + 0x1c81c));
  FUN_0064f0d0(0,8,s_nCacheHits__d_007420a4,*(undefined4 *)(param_1 + 0x1c810));
  FUN_0064f0d0(0,9,s_nInvalidationMisses__d_00742088,*(undefined4 *)(param_1 + 0x1c814));
  FUN_0064f0d0(0,10,s_nInvalidationHits__d_0074206c,*(undefined4 *)(param_1 + 0x1c818));
  FUN_0058bef0();
  puVar12 = (undefined4 *)(param_1 + 0x1c);
  iVar10 = 0x100;
  do {
    *(undefined2 *)(puVar12 + -1) = 0;
    *puVar12 = 0;
    puVar12 = puVar12 + 8;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  return;
}

