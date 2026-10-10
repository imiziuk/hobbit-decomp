
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056cab0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(byte *)(param_1 + 0x484) & 4) != 0) {
    FUN_0056b710();
    return;
  }
  iVar3 = FUN_0041bcc0();
  FUN_0056c890(param_1 + 0x688,&local_18,&local_28,*(undefined4 *)(iVar3 + 0x6f8));
  if (local_28 < DAT_006e92e4 != (NAN(local_28) || NAN(DAT_006e92e4))) {
    do {
      local_28 = local_28 + _DAT_006e9598;
    } while (local_28 < DAT_006e92e4 != (NAN(local_28) || NAN(DAT_006e92e4)));
  }
  for (; _DAT_006e9598 < local_28; local_28 = local_28 - _DAT_006e9598) {
  }
  iVar3 = *(int *)(param_1 + 0x730);
  local_c = local_18 - *(float *)(param_1 + 0x4c4);
  local_8 = local_14 - *(float *)(param_1 + 0x4c8);
  fVar7 = local_10 - *(float *)(param_1 + 0x4cc);
  local_20 = SQRT(fVar7 * fVar7 + local_8 * local_8 + local_c * local_c);
  if (local_20 <= *(float *)(iVar3 + 0xdc)) {
    local_2c = 2.0;
    if ((*(uint *)(param_1 + 0x484) & 0x200) == 0) {
      local_2c = 1.0;
    }
    fVar1 = local_2c * *(float *)(iVar3 + 0xd4) * param_2;
    if (DAT_006e92e8 < fVar1 != (NAN(DAT_006e92e8) || NAN(fVar1))) {
      fVar1 = DAT_006e92e8;
    }
    local_14 = local_2c * *(float *)(iVar3 + 0xd0) * param_2;
    if (DAT_006e92e8 < local_14 != (NAN(DAT_006e92e8) || NAN(local_14))) {
      local_14 = DAT_006e92e8;
    }
    param_2 = local_2c * *(float *)(iVar3 + 0xcc) * param_2;
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      param_2 = DAT_006e92e8;
    }
    local_18 = param_2 * local_c;
    local_14 = local_14 * local_8;
    local_4 = fVar1 * fVar7 + *(float *)(param_1 + 0x4cc);
    *(float *)(param_1 + 0x4a8) = local_18 + *(float *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4b0) = local_4;
    *(float *)(param_1 + 0x4ac) = local_14 + *(float *)(param_1 + 0x4c8);
  }
  else {
    *(float *)(param_1 + 0x4ac) = local_14;
    *(float *)(param_1 + 0x4b0) = local_10;
    *(float *)(param_1 + 0x4a8) = local_18;
    *(float *)(param_1 + 0x4c4) = local_18;
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4ac);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4b0);
  }
  fVar6 = (float10)FUN_0056bc20();
  local_30 = (float)fVar6;
  fVar6 = (float10)FUN_0056bca0();
  param_2 = (float)fVar6;
  iVar3 = FUN_0041bcc0();
  if ((*(int *)(iVar3 + 0x6f8) == 0) || (*(int *)(*(int *)(param_1 + 0x730) + 0x54) == 0)) {
    local_c = *(float *)(param_1 + 0x49c) - *(float *)(param_1 + 0x4a8);
    fVar7 = *(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4b0);
    local_2c = SQRT(fVar7 * fVar7 + local_c * local_c);
    if ((local_2c < local_30 == (NAN(local_2c) || NAN(local_30))) ||
       ((*(uint *)(param_1 + 0x484) & 0x100) != 0)) {
      local_24 = local_2c;
      if (param_2 < local_2c) {
        local_24 = param_2;
      }
    }
    else {
      local_24 = local_30;
    }
    fVar7 = local_2c - local_24;
    if (fVar7 < DAT_006e92e4 != (NAN(fVar7) || NAN(DAT_006e92e4))) {
      fVar7 = -fVar7;
    }
    if ((*(uint *)(param_1 + 0x484) & 0x200) != 0) {
      fVar7 = local_20 * *(float *)(*(int *)(param_1 + 0x730) + 0x24) + fVar7;
    }
    if (fVar7 < _DAT_006e95a8 == (NAN(fVar7) || NAN(_DAT_006e95a8))) {
      local_18 = *(float *)(param_1 + 0x4a8) - *(float *)(param_1 + 0x49c);
      local_14 = *(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x4a0);
      local_10 = *(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4a4);
      fVar6 = (float10)FUN_0064ca10(local_14,SQRT(local_10 * local_10 + local_18 * local_18));
      local_30 = (float)-fVar6;
      fVar6 = (float10)FUN_0064ca10(local_18,local_10);
      local_20 = (float)fVar6;
      fVar7 = fVar7 / local_2c;
      if (fVar7 < DAT_006e92e4 != (NAN(fVar7) || NAN(DAT_006e92e4))) {
        fVar7 = -fVar7;
      }
      fVar6 = ((float10)local_28 - (float10)local_20) + (float10)_DAT_006e9368;
      local_28 = (float)fVar6;
      local_2c = (float)fVar6;
      if (((float10)_DAT_006e95a0 < fVar6) ||
         (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
        fVar6 = (float10)FUN_0064c6b0(local_2c,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar6) {
        do {
          fVar6 = fVar6 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar6);
      }
      if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar6 = fVar6 + (float10)_DAT_006e9598;
        } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
      }
      if (fVar6 - (float10)_DAT_006e9368 < (float10)fVar7 ==
          (NAN(fVar6 - (float10)_DAT_006e9368) || NAN((float10)fVar7))) {
        fVar6 = (float10)fVar7;
      }
      else {
        fVar6 = (float10)local_28;
        local_2c = local_28;
        if (((float10)_DAT_006e95a0 < fVar6) ||
           (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
          fVar6 = (float10)FUN_0064c6b0(local_28,0x40c90fdb);
        }
        if ((float10)_DAT_006e9598 <= fVar6) {
          do {
            fVar6 = fVar6 - (float10)_DAT_006e9598;
          } while ((float10)_DAT_006e9598 <= fVar6);
        }
        if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
          do {
            fVar6 = fVar6 + (float10)_DAT_006e9598;
          } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
        }
        fVar6 = fVar6 - (float10)_DAT_006e9368;
      }
      local_2c = (float)-(float10)fVar7;
      if (-(float10)fVar7 <= fVar6) {
        fVar6 = (float10)local_28;
        local_1c = local_28;
        if (((float10)_DAT_006e95a0 < fVar6) ||
           (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
          fVar6 = (float10)FUN_0064c6b0(local_28,0x40c90fdb);
        }
        if ((float10)_DAT_006e9598 <= fVar6) {
          do {
            fVar6 = fVar6 - (float10)_DAT_006e9598;
          } while ((float10)_DAT_006e9598 <= fVar6);
        }
        if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
          do {
            fVar6 = fVar6 + (float10)_DAT_006e9598;
          } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
        }
        if (fVar6 - (float10)_DAT_006e9368 < (float10)fVar7 ==
            (NAN(fVar6 - (float10)_DAT_006e9368) || NAN((float10)fVar7))) {
          fVar6 = (float10)fVar7;
        }
        else {
          fVar6 = (float10)local_28;
          local_1c = local_28;
          if (((float10)_DAT_006e95a0 < fVar6) ||
             (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
            fVar6 = (float10)FUN_0064c6b0(local_28,0x40c90fdb);
          }
          if ((float10)_DAT_006e9598 <= fVar6) {
            do {
              fVar6 = fVar6 - (float10)_DAT_006e9598;
            } while ((float10)_DAT_006e9598 <= fVar6);
          }
          if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
            do {
              fVar6 = fVar6 + (float10)_DAT_006e9598;
            } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
          }
          fVar6 = fVar6 - (float10)_DAT_006e9368;
        }
      }
      else {
        fVar6 = (float10)local_2c;
      }
      fVar1 = DAT_006e92e8;
      if ((*(uint *)(param_1 + 0x484) & 0x200) == 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0x1c);
      }
      local_28 = (float)((float10)fVar1 * fVar6);
      fVar6 = ((float10)*(float *)(*(int *)(param_1 + 0x730) + 0x14) - (float10)local_30) +
              (float10)_DAT_006e9368;
      local_1c = (float)fVar6;
      if (((float10)_DAT_006e95a0 < fVar6) ||
         (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
        fVar6 = (float10)FUN_0064c6b0(local_1c,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar6) {
        do {
          fVar6 = fVar6 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar6);
      }
      if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar6 = fVar6 + (float10)_DAT_006e9598;
        } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
      }
      if (fVar6 - (float10)_DAT_006e9368 < (float10)fVar7 ==
          (NAN(fVar6 - (float10)_DAT_006e9368) || NAN((float10)fVar7))) {
        fVar6 = (float10)fVar7;
      }
      else {
        fVar6 = ((float10)*(float *)(*(int *)(param_1 + 0x730) + 0x14) - (float10)local_30) +
                (float10)_DAT_006e9368;
        local_1c = (float)fVar6;
        if (((float10)_DAT_006e95a0 < fVar6) ||
           (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
          fVar6 = (float10)FUN_0064c6b0(local_1c,0x40c90fdb);
        }
        if ((float10)_DAT_006e9598 <= fVar6) {
          do {
            fVar6 = fVar6 - (float10)_DAT_006e9598;
          } while ((float10)_DAT_006e9598 <= fVar6);
        }
        if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
          do {
            fVar6 = fVar6 + (float10)_DAT_006e9598;
          } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
        }
        fVar6 = fVar6 - (float10)_DAT_006e9368;
      }
      if ((float10)local_2c <= fVar6) {
        fVar6 = ((float10)*(float *)(*(int *)(param_1 + 0x730) + 0x14) - (float10)local_30) +
                (float10)_DAT_006e9368;
        local_1c = (float)fVar6;
        if (((float10)_DAT_006e95a0 < fVar6) ||
           (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
          fVar6 = (float10)FUN_0064c6b0(local_1c,0x40c90fdb);
        }
        if ((float10)_DAT_006e9598 <= fVar6) {
          do {
            fVar6 = fVar6 - (float10)_DAT_006e9598;
          } while ((float10)_DAT_006e9598 <= fVar6);
        }
        if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
          do {
            fVar6 = fVar6 + (float10)_DAT_006e9598;
          } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
        }
        if (fVar6 - (float10)_DAT_006e9368 < (float10)fVar7 ==
            (NAN(fVar6 - (float10)_DAT_006e9368) || NAN((float10)fVar7))) {
          fVar6 = (float10)fVar7;
        }
        else {
          fVar6 = ((float10)*(float *)(*(int *)(param_1 + 0x730) + 0x14) - (float10)local_30) +
                  (float10)_DAT_006e9368;
          if (((float10)_DAT_006e95a0 < fVar6) ||
             (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
            fVar6 = (float10)FUN_0064c6b0((float)fVar6,0x40c90fdb);
          }
          if ((float10)_DAT_006e9598 <= fVar6) {
            do {
              fVar6 = fVar6 - (float10)_DAT_006e9598;
            } while ((float10)_DAT_006e9598 <= fVar6);
          }
          if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
            do {
              fVar6 = fVar6 + (float10)_DAT_006e9598;
            } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
          }
          fVar6 = fVar6 - (float10)_DAT_006e9368;
        }
      }
      else {
        fVar6 = (float10)local_2c;
      }
      fVar7 = DAT_006e92e8;
      if ((*(uint *)(param_1 + 0x484) & 0x200) == 0) {
        fVar7 = *(float *)(*(int *)(param_1 + 0x730) + 0x20);
      }
      iVar3 = *(int *)(param_1 + 0x730);
      local_20 = local_28 + local_20;
      fVar7 = (float)((float10)fVar7 * fVar6 + (float10)local_30);
      if (fVar7 < *(float *)(iVar3 + 0x10) == (NAN(fVar7) || NAN(*(float *)(iVar3 + 0x10)))) {
        param_2 = fVar7;
        if (*(float *)(iVar3 + 0x18) < fVar7) {
          param_2 = local_30;
          if (fVar7 < local_30 != (NAN(fVar7) || NAN(local_30))) {
            param_2 = fVar7;
          }
          if (param_2 <= *(float *)(iVar3 + 0x18)) {
            param_2 = *(float *)(iVar3 + 0x18);
          }
          if (*(float *)(iVar3 + 100) < param_2 != (NAN(*(float *)(iVar3 + 100)) || NAN(param_2))) {
            param_2 = *(float *)(iVar3 + 100);
          }
        }
      }
      else {
        param_2 = local_30;
        if (local_30 < fVar7) {
          param_2 = fVar7;
        }
        if (param_2 < *(float *)(iVar3 + 0x10) == (NAN(param_2) || NAN(*(float *)(iVar3 + 0x10)))) {
          param_2 = *(float *)(iVar3 + 0x10);
        }
        if (param_2 < *(float *)(iVar3 + 0x60)) {
          param_2 = *(float *)(iVar3 + 0x60);
        }
      }
      fVar6 = (float10)FUN_0064c8d0(param_2);
      fVar7 = (float)((float10)local_24 / fVar6);
      uVar4 = FUN_0056d580(param_2,local_20);
      pfVar5 = (float *)FUN_00402160(&local_18,uVar4,fVar7);
      FUN_00570010(*(float *)(param_1 + 0x4a8) - *pfVar5,*(float *)(param_1 + 0x4ac) - pfVar5[1],
                   *(float *)(param_1 + 0x4b0) - pfVar5[2]);
    }
    return;
  }
  fVar7 = *(float *)(param_1 + 0x49c) - *(float *)(param_1 + 0x4a8);
  fVar1 = *(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x4ac);
  fVar2 = *(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4b0);
  fVar7 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7);
  fVar1 = param_2;
  if (fVar7 < param_2 != (NAN(fVar7) || NAN(param_2))) {
    fVar1 = fVar7;
  }
  if (local_30 <= fVar1) {
    if (fVar7 < param_2 != (NAN(fVar7) || NAN(param_2))) goto LAB_0056cd6e;
  }
  else {
    param_2 = local_30;
  }
  fVar7 = param_2;
LAB_0056cd6e:
  param_2 = fVar7;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x734),&local_2c,&local_20);
  FUN_0064c8e0(local_28,&local_24,&local_30);
  local_4 = local_30 * local_20;
  local_c = local_24 * local_20 * param_2;
  local_8 = -local_2c * param_2;
  FUN_00570010(*(float *)(param_1 + 0x4a8) - local_c,*(float *)(param_1 + 0x4ac) - local_8,
               *(float *)(param_1 + 0x4b0) - local_4 * param_2);
  return;
}

