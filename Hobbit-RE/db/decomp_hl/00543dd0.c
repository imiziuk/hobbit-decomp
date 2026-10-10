
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00543dd0(int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  int iVar9;
  float *pfVar10;
  float local_4c;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d94bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__GetInterp_00737f88);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == -1) {
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 1.0;
    *param_3 = 1.0;
    param_3[1] = 1.0;
    param_3[2] = 1.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  iVar5 = FUN_00549470(param_1 + 4);
  FUN_00549580(param_1 + 4);
  iVar5 = *(int *)(iVar5 + 0x58);
  iVar7 = *(int *)(param_1 + 8) * 0x50;
  iVar9 = (int)param_2;
  pfVar10 = param_3;
  fVar8 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                (float)(*(short *)(iVar7 + 0x24 + iVar5) + -1),param_2,param_3);
  FUN_0053fa30(*(undefined4 *)(iVar7 + iVar5 + 0x20),(float)fVar8,iVar9,pfVar10);
  if (DAT_006e92e4 < *(float *)(param_1 + 0x2c)) {
    FUN_005449e0();
    fVar3 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
    pfVar10 = (float *)(*(int *)(param_1 + 0x28) + (int)param_2 * 0x28);
    fVar2 = pfVar10[3] * param_3[3] +
            pfVar10[4] * param_3[4] + pfVar10[5] * param_3[5] + pfVar10[6] * param_3[6];
    if ((_DAT_006e999c < fVar2) || (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
      param_3[3] = pfVar10[3];
      param_3[4] = pfVar10[4];
      param_3[5] = pfVar10[5];
      param_3[6] = pfVar10[6];
    }
    else {
      fVar1 = pfVar10[3];
      if (fVar2 < DAT_006e92e4 == (NAN(fVar2) || NAN(DAT_006e92e4))) {
        param_2 = pfVar10[5];
        fVar2 = pfVar10[4];
        local_4c = pfVar10[6];
      }
      else {
        fVar1 = -fVar1;
        fVar2 = -pfVar10[4];
        param_2 = -pfVar10[5];
        local_4c = -pfVar10[6];
      }
      fVar1 = (param_3[3] - fVar1) * fVar3 + fVar1;
      fVar2 = (param_3[4] - fVar2) * fVar3 + fVar2;
      param_2 = (param_3[5] - param_2) * fVar3 + param_2;
      local_4c = (param_3[6] - local_4c) * fVar3 + local_4c;
      fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + param_2 * param_2 + local_4c * local_4c;
      if (fVar4 < _DAT_006f3c0c == (NAN(fVar4) || NAN(_DAT_006f3c0c))) {
        fVar4 = (_DAT_006f3bfc * fVar4 - _DAT_006f3bf8) * fVar4 + _DAT_006f3bf4;
      }
      else {
        fVar4 = (_DAT_006f3c08 * fVar4 - _DAT_006f3c04) * fVar4 + _DAT_006f3c00;
      }
      param_3[3] = fVar1 * fVar4;
      param_3[4] = fVar4 * fVar2;
      param_3[5] = param_2 * fVar4;
      param_3[6] = fVar4 * local_4c;
    }
    FUN_00401f00(*param_3 - *pfVar10,param_3[1] - pfVar10[1],param_3[2] - pfVar10[2]);
    FUN_00401f00(local_3c * fVar3,local_38 * fVar3,local_34 * fVar3);
    uVar6 = FUN_00402130(local_24,pfVar10,local_30);
    FUN_004357e0(uVar6);
    uVar6 = FUN_00405080(local_24,param_3 + 7,pfVar10 + 7);
    uVar6 = FUN_0042eea0(local_30,fVar3,uVar6);
    uVar6 = FUN_00402130(local_18,pfVar10 + 7,uVar6);
    FUN_004357e0(uVar6);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

