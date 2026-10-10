
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005c3100(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float local_3c [6];
  float local_24 [4];
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar5 = param_3;
  pfVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_task_mgr__ResolveBoxBox_00745f14);
  fVar2 = (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
          (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
          (*param_2 - *param_3) * (*param_2 - *param_3);
  local_3c[1] = (param_2[5] - param_3[5]) * (param_2[5] - param_3[5]) +
                (param_2[4] - param_3[4]) * (param_2[4] - param_3[4]) +
                (param_2[3] - param_3[3]) * (param_2[3] - param_3[3]);
  if ((fVar2 < _DAT_006e9350 == (NAN(fVar2) || NAN(_DAT_006e9350))) ||
     (local_3c[1] < _DAT_006e9350 == (NAN(local_3c[1]) || NAN(_DAT_006e9350)))) {
    local_24[0] = param_2[3];
    local_3c[0] = param_2[3] - *param_3;
    local_24[1] = param_2[4];
    local_24[2] = param_2[5];
    local_24[3] = param_3[3];
    local_3c[1] = param_3[3] - *param_2;
    pfVar1 = param_3 + 1;
    local_14 = param_3[4];
    local_10 = param_3[5];
    param_3 = (float *)0x0;
    local_3c[2] = param_2[4] - *pfVar1;
    param_2 = (float *)0x0;
    local_3c[3] = pfVar5[4] - pfVar4[1];
    local_3c[4] = pfVar4[5] - pfVar5[2];
    local_3c[5] = pfVar5[5] - pfVar4[2];
    uVar7 = 0;
    do {
      if (local_3c[uVar7] < *(float *)((int)local_3c + (int)param_2) !=
          (NAN(local_3c[uVar7]) || NAN(*(float *)((int)local_3c + (int)param_2)))) {
        param_2 = (float *)(uVar7 * 4);
        param_3 = (float *)uVar7;
      }
      fVar2 = local_3c[uVar7];
      if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
        fVar2 = *(float *)(param_1 + ((int)uVar7 >> 1) * 4);
        fVar3 = local_24[((int)uVar7 >> 1) + (uVar7 & 1) * 3] - local_3c[uVar7];
        if ((local_24[((int)uVar7 >> 1) + (uVar7 & 1) * 3] <= fVar2) &&
           (fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) goto LAB_005c31a4;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 6);
    iVar6 = (int)param_3 >> 1;
    local_4 = 0xffffffff;
    if (((uint)param_3 & 1) == 0) {
      param_2 = (float *)(*(float *)(param_1 + iVar6 * 4) -
                         (pfVar4[iVar6 + 3] - local_3c[(int)param_3] * _DAT_006e936c));
    }
    else {
      param_2 = (float *)((pfVar5[iVar6 + 3] - local_3c[(int)param_3] * _DAT_006e936c) -
                         *(float *)(param_1 + iVar6 * 4));
    }
    FUN_00649720();
  }
  else {
LAB_005c31a4:
    local_4 = 0xffffffff;
    FUN_00649720();
    param_2 = (float *)DAT_006e92e4;
  }
  ExceptionList = local_c;
  return (float10)(float)param_2;
}

