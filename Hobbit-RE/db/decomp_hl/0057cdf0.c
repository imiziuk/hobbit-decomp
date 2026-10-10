
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057cdf0(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int local_294;
  float local_290;
  float *local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 local_224;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_fc [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbe1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  uVar2 = *(undefined4 *)(param_1 + 0x42d8);
  uVar3 = *(undefined4 *)(param_1 + 0x42dc);
  local_288 = local_fc;
  local_1ec = *param_2;
  local_1e4 = param_2[2];
  local_1e8 = param_2[1];
  local_1e0 = *param_3;
  local_1d8 = param_3[2];
  local_1dc = param_3[1];
  local_1d4 = *param_4;
  local_1cc = param_4[2];
  local_4 = 0;
  pfVar10 = &local_1ec;
  local_1d0 = param_4[1];
  local_278 = 0;
  if (0 < *(int *)(param_1 + 0x41bc)) {
    local_280 = 0;
    local_27c = 3;
    do {
      local_294 = local_27c;
      if (local_27c != 0) {
        pfVar1 = (float *)(*(int *)(param_1 + 0x42d0) * 0x104 + local_280 + 0x40bc + param_1);
        iVar6 = local_27c * 3;
        local_294 = 0;
        if (0 < local_27c) {
          local_284 = 0;
          iVar8 = (iVar6 + -3) * 4;
          pfVar9 = local_288;
          pfVar11 = pfVar10;
          local_290 = pfVar10[iVar6 + -3] * *pfVar1 +
                      pfVar10[iVar6 + -2] * pfVar1[1] + pfVar10[iVar6 + -1] * pfVar1[2] + pfVar1[3];
          do {
            fVar7 = *pfVar11 * *pfVar1 + pfVar11[1] * pfVar1[1] + pfVar11[2] * pfVar1[2] + pfVar1[3]
            ;
            if (local_290 < DAT_006e92e4) {
LAB_0057cfb8:
              if ((local_290 < DAT_006e92e4 != (NAN(local_290) || NAN(DAT_006e92e4))) &&
                 (DAT_006e92e4 <= fVar7)) goto LAB_0057cfe2;
            }
            else {
              bVar4 = NAN(DAT_006e92e4);
              bVar5 = fVar7 < DAT_006e92e4;
              local_294 = local_294 + 1;
              *pfVar9 = *(float *)(iVar8 + (int)pfVar10);
              pfVar9[1] = *(float *)(iVar8 + 4 + (int)pfVar10);
              pfVar9[2] = *(float *)(iVar8 + 8 + (int)pfVar10);
              pfVar9 = pfVar9 + 3;
              if (bVar5 == (NAN(fVar7) || bVar4)) goto LAB_0057cfb8;
LAB_0057cfe2:
              local_294 = local_294 + 1;
              pfVar9 = pfVar9 + 3;
              FUN_00405080();
              FUN_0042eea0();
              FUN_00402130();
              FUN_004357e0();
            }
            pfVar11 = pfVar11 + 3;
            local_27c = local_27c + -1;
            iVar8 = local_284;
            local_290 = fVar7;
            local_284 = local_284 + 0xc;
          } while (local_27c != 0);
        }
        pfVar10 = local_288;
        if (local_288 == &local_1ec) {
          local_288 = local_fc;
        }
        else {
          local_288 = &local_1ec;
        }
      }
      local_278 = local_278 + 1;
      local_280 = local_280 + 0x10;
      local_27c = local_294;
    } while (local_278 < *(int *)(param_1 + 0x41bc));
    if (local_294 < 1) goto LAB_0057d1ac;
  }
  FUN_0057dd60();
  local_228 = uVar2;
  local_224 = uVar3;
  FUN_004357e0(local_248);
  FUN_0042fda0(local_238);
  FUN_0057da20();
LAB_0057d1ac:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

