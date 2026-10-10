
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c7f80(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x144) != 0) &&
     (*(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x148),
     *(int *)(param_1 + 0x10c) != 0)) {
    local_c = *(float *)(param_1 + 0x14);
    local_8 = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x18);
    local_4 = *(undefined4 *)(param_1 + 0x1c);
    FUN_0054d020(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_c,
                 *(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                 *(undefined4 *)(param_1 + 0x118),0,0x40,0,0,0);
  }
  local_18 = *(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x13c);
  *(float *)(param_1 + 0x14c) = local_18;
  iVar5 = *(int *)(param_1 + 300);
  if (iVar5 == 7) {
    return;
  }
  if (iVar5 != 0) {
    if (iVar5 == 8) {
      if (*(float *)(*(int *)(param_1 + 0xec) + 0x10) <= local_18) {
        if (*(int *)(param_1 + 0x188) == 0) {
          FUN_00659600(s_VineLower_0072d138,1);
        }
        *(undefined4 *)(param_1 + 300) = 9;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        FUN_004c8980(*(undefined4 *)(param_1 + 0xf8));
        return;
      }
      fVar2 = *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 0x150) = fVar2;
      if (fVar2 < DAT_006e92e4 != (fVar2 == DAT_006e92e4)) {
        fVar7 = (float10)FUN_00647b30(0x3e800000,0x3e800000);
        *(float *)(param_1 + 0x150) = (float)fVar7;
        iVar5 = 0;
        iVar6 = 0;
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x120);
          if (4 < iVar4) {
            iVar4 = 4;
          }
          if (iVar4 <= iVar5) break;
          fVar7 = (float10)FUN_00647b30(0,0x40c90fdb);
          local_10 = (float)fVar7;
          FUN_0064c8e0(local_10,&local_14,&local_18);
          fVar2 = local_18 * DAT_006e92e4;
          pfVar1 = (float *)(*(int *)(param_1 + 0x124) + 0x18 + iVar6);
          fVar3 = local_14 * DAT_006e92e4;
          iVar5 = iVar5 + 1;
          pfVar1[1] = *(float *)(*(int *)(param_1 + 0x124) + 0x1c + iVar6);
          iVar6 = iVar6 + 0x2c;
          local_c = (fVar2 + local_14) * _DAT_006e9994;
          fVar2 = (local_18 - fVar3) * _DAT_006e9994;
          *pfVar1 = local_c + *pfVar1;
          pfVar1[2] = fVar2 + pfVar1[2];
        }
      }
    }
    if ((*(int *)(param_1 + 300) == 9) &&
       ((NAN(*(float *)(param_1 + 0x130)) || NAN(*(float *)(param_1 + 0xf8))) !=
        (*(float *)(param_1 + 0x130) == *(float *)(param_1 + 0xf8)))) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      if (*(int *)(param_1 + 0x108) == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 300) = 10;
      return;
    }
    if (((*(int *)(param_1 + 300) != 10) ||
        (*(float *)(param_1 + 0x14c) < *(float *)(param_1 + 0x104))) ||
       (FUN_004c8980(*(undefined4 *)(param_1 + 200)),
       (NAN(*(float *)(param_1 + 0x130)) || NAN(*(float *)(param_1 + 200))) ==
       (*(float *)(param_1 + 0x130) == *(float *)(param_1 + 200)))) {
      if (*(int *)(param_1 + 300) == 1) {
        if (*(float *)(*(int *)(param_1 + 0xec) + 4) <= *(float *)(param_1 + 0x14c)) {
          if (*(int *)(param_1 + 0x188) == 0) {
            FUN_00659600(s_VineSnap_0072d12c,1);
          }
          *(undefined4 *)(param_1 + 0xc0) = 0;
          *(undefined4 *)(param_1 + 300) = 5;
          *(undefined4 *)(param_1 + 0x14c) = 0;
          FUN_004c8770(0xffffffff);
          return;
        }
        fVar2 = *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x150) = fVar2;
        if (fVar2 < DAT_006e92e4 != (fVar2 == DAT_006e92e4)) {
          fVar7 = (float10)FUN_00647b30(0x3e800000,0x3e800000);
          *(float *)(param_1 + 0x150) = (float)fVar7;
          iVar5 = 0;
          iVar6 = 0;
          while( true ) {
            iVar4 = *(int *)(param_1 + 0x120);
            if (4 < iVar4) {
              iVar4 = 4;
            }
            if (iVar4 <= iVar5) break;
            fVar7 = (float10)FUN_00647b30(0,0x40c90fdb);
            local_10 = (float)fVar7;
            FUN_0064c8e0(local_10,&local_18,&local_14);
            fVar2 = local_14 * DAT_006e92e4;
            pfVar1 = (float *)(*(int *)(param_1 + 0x124) + 0x18 + iVar6);
            fVar3 = local_18 * DAT_006e92e4;
            iVar5 = iVar5 + 1;
            pfVar1[1] = *(float *)(*(int *)(param_1 + 0x124) + 0x1c + iVar6);
            iVar6 = iVar6 + 0x2c;
            local_c = (fVar2 + local_18) * _DAT_006e9994;
            fVar2 = (local_14 - fVar3) * _DAT_006e9994;
            *pfVar1 = local_c + *pfVar1;
            pfVar1[2] = fVar2 + pfVar1[2];
          }
        }
      }
      if (*(int *)(param_1 + 300) == 5) {
        iVar5 = *(int *)(param_1 + 0xec);
        if (*(float *)(iVar5 + 8) <= *(float *)(param_1 + 0x14c)) {
          *(undefined4 *)(param_1 + 0x14c) = 0;
          if (*(int *)(param_1 + 0x108) == 0) {
            *(undefined4 *)(param_1 + 300) = 7;
            return;
          }
          *(undefined4 *)(param_1 + 300) = 6;
          return;
        }
        *(float *)(param_1 + 0x154) =
             (_DAT_006ee9c4 / *(float *)(iVar5 + 8)) *
             (*(float *)(iVar5 + 8) - *(float *)(param_1 + 0x14c));
      }
      if (*(int *)(param_1 + 300) != 6) {
        return;
      }
      if (*(float *)(param_1 + 0x14c) < *(float *)(param_1 + 0x104)) {
        return;
      }
      FUN_004c8cd0();
      *(undefined4 *)(param_1 + 0x154) = 0x437f0000;
    }
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0x154) = 0x437f0000;
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (**(float **)(param_1 + 0xec) <= *(float *)(param_1 + 0x148))) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 300) = 1;
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    return;
  }
  if (*(float *)(param_1 + 0x148) < *(float *)(*(int *)(param_1 + 0xec) + 0xc)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 300) = 8;
  return;
}

