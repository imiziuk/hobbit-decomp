
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a9ad0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined1 uVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float10 extraout_ST0;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NPCObject__FireFlyData__OnAdvanc_0072b72c);
  local_4 = 0;
  local_2c = 0;
  pfVar6 = (float *)(param_1 + 0x10);
  do {
    pfVar6[-4] = pfVar6[-4] + pfVar6[2];
    pfVar6[-3] = pfVar6[-3] + pfVar6[3];
    pfVar6[-2] = pfVar6[-2] + pfVar6[4];
    fVar1 = pfVar6[9] - param_3;
    pfVar6[9] = fVar1;
    if (fVar1 < DAT_006e92e4 == (NAN(fVar1) || NAN(DAT_006e92e4))) goto LAB_004a9c90;
    uVar5 = local_2c & 0x80000003;
    local_3c = 0;
    param_2 = (float *)0x40000000;
    local_34 = 0;
    local_38 = 0x40000000;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar5) {
    case 0:
      local_3c = 0;
      param_2 = (float *)0x43960000;
      break;
    case 1:
      local_3c = 0;
      param_2 = (float *)0x43960000;
      goto LAB_004a9bb4;
    case 2:
      local_3c = 0xc3960000;
      param_2 = (float *)0x0;
LAB_004a9bb4:
      local_34 = 0xc3960000;
      local_38 = 0;
      goto switchD_004a9b79_default;
    case 3:
      local_3c = 0xc3960000;
      param_2 = (float *)0x0;
      break;
    default:
      goto switchD_004a9b79_default;
    }
    local_34 = 0;
    local_38 = 0x43960000;
switchD_004a9b79_default:
    fVar2 = pfVar3[2];
    fVar1 = pfVar3[1];
    pfVar6[-1] = *pfVar3;
    *pfVar6 = fVar1;
    pfVar6[1] = fVar2;
    fVar7 = (float10)FUN_00647b30(local_3c,param_2);
    pfVar6[-1] = (float)(fVar7 + (float10)pfVar6[-1]);
    fVar7 = (float10)FUN_00647b30(local_34,local_38);
    pfVar6[1] = (float)(fVar7 + (float10)pfVar6[1]);
    fVar7 = (float10)FUN_00647b30(0,0x43480000);
    *pfVar6 = (float)(fVar7 + (float10)*pfVar6);
    fVar1 = param_3 * _DAT_006e936c;
    pfVar6[2] = (pfVar6[-1] - pfVar6[-4]) * fVar1;
    pfVar6[3] = (*pfVar6 - pfVar6[-3]) * fVar1;
    pfVar6[4] = (pfVar6[1] - pfVar6[-2]) * fVar1;
    fVar7 = (float10)FUN_00647b30(0x3f400000,0x3fc00000);
    pfVar6[9] = (float)fVar7;
LAB_004a9c90:
    if (pfVar6[8] == 0.0) {
      if (CONCAT31(*(undefined3 *)(pfVar6 + 5),*(undefined1 *)((int)pfVar6 + 0x17)) == 0) {
        pfVar6[8] = 0.0;
      }
      else {
        pfVar6[7] = 1.0;
        fVar1 = pfVar6[6] - param_3;
        pfVar6[6] = fVar1;
        if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
          pfVar6[6] = 0.0;
        }
        uVar4 = __ftol();
        *(undefined1 *)((int)pfVar6 + 0x16) = uVar4;
        uVar4 = __ftol();
        *(undefined1 *)((int)pfVar6 + 0x15) = uVar4;
        uVar4 = __ftol();
        *(undefined1 *)(pfVar6 + 5) = uVar4;
        fVar7 = extraout_ST0 * (float10)*(byte *)((int)pfVar6 + 0x17);
        if ((fVar7 < (float10)DAT_006e92e4) ||
           ((float10)_DAT_006e95dc < fVar7 == (NAN((float10)_DAT_006e95dc) || NAN(fVar7)))) {
          uVar4 = __ftol();
          *(undefined1 *)((int)pfVar6 + 0x17) = uVar4;
        }
        else {
          uVar4 = __ftol();
          *(undefined1 *)((int)pfVar6 + 0x17) = uVar4;
        }
      }
      fVar1 = pfVar6[7] - param_3;
      pfVar6[7] = fVar1;
      if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
        *(undefined1 *)((int)pfVar6 + 0x17) = 0xff;
        *(undefined1 *)((int)pfVar6 + 0x16) = 0xff;
        *(undefined1 *)((int)pfVar6 + 0x15) = 0xff;
        *(undefined1 *)(pfVar6 + 5) = 0;
        fVar7 = (float10)FUN_00647b30(0x3e800000,0x3f400000);
        pfVar6[6] = (float)fVar7;
        pfVar6[8] = 1.4013e-45;
      }
    }
    else {
      fVar1 = pfVar6[6] - param_3;
      pfVar6[6] = fVar1;
      if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
        pfVar6[6] = 1.0;
        fVar7 = (float10)FUN_00647b30(0x3fa00000,0x40700000);
        pfVar6[7] = (float)fVar7;
        pfVar6[8] = 0.0;
      }
    }
    local_2c = local_2c + 1;
    pfVar6 = pfVar6 + 0xe;
    if (0xf < (int)local_2c) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

