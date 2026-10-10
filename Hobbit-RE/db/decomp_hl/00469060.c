
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00469060(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,
            int param_7,int param_8)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float *pfVar7;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_4c;
  float fStack_40;
  undefined1 auStack_3c [20];
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0e28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_Character__HandleMove_00726880);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_e8 = *param_3;
  local_e4 = param_3[1];
  local_e0 = param_3[2];
  local_4 = 0;
  local_bc = 0;
  local_c0 = 0;
  if (param_8 != 0) {
    if ((char)param_1[0x1f] == '\x12') {
      local_c0 = 2;
      iVar2 = FUN_0041bcc0();
      if (*(int *)(iVar2 + 0x8d4) == 0x28) {
        local_c0 = 10;
      }
    }
    else if ((char)param_1[0x1f] == '\x1c') {
      local_c0 = 1;
    }
  }
  fVar1 = local_e4 * local_e4 + local_e8 * local_e8 + local_e0 * local_e0;
  if (fVar1 < _DAT_006ebfe4 == (NAN(fVar1) || NAN(_DAT_006ebfe4))) {
    uVar5 = 0;
    if (param_6 == 0) {
      uVar5 = 0x2e00401;
    }
    else if (param_6 == 1) {
      uVar5 = 1;
    }
    else if (param_6 == 2) {
      uVar5 = 0x8800;
    }
    local_b8 = 0;
    if ((char)param_1[0x1f] == '\x12') {
      local_b8 = 2;
      iVar2 = FUN_0041bcc0();
      if (*(int *)(iVar2 + 0x8d4) == 0x28) {
        local_b8 = 10;
      }
    }
    else if ((char)param_1[0x1f] == '\x1c') {
      local_b8 = 1;
    }
    while( true ) {
      local_58 = param_2[2];
      local_60 = *param_2;
      local_5c = param_2[1];
      local_bc = local_bc + 1;
      fVar1 = SQRT(local_e4 * local_e4 + local_e8 * local_e8 + local_e0 * local_e0);
      local_70 = local_e0 + param_2[2];
      local_74 = local_e4 + param_2[1];
      local_78 = local_e8 + *param_2;
      if ((8 < local_bc) || (fVar1 < _DAT_006e95a8 != (NAN(fVar1) || NAN(_DAT_006e95a8)))) break;
      (**(code **)(*param_1 + 0x148))
                (param_1[2],param_1[3],&local_60,&local_78,param_1[0x39],param_1[0x38],uVar5);
      FUN_005798f0(8);
      if (DAT_0072623c != 0) {
        _DAT_007778c8 = 1;
        _DAT_007778cc = local_b8;
      }
      FUN_00577e70();
      if (DAT_00773970 == 0) break;
      uVar3 = FUN_0057dcc0(&DAT_00773520,DAT_00773528);
      param_1[0x3e] = DAT_00773520;
      param_1[0x3f] = DAT_00773524;
      param_1[0x40] = DAT_00773500;
      param_1[0x41] = DAT_00773504;
      param_1[0x42] = DAT_00773508;
      param_1[0x43] = DAT_0077350c;
      local_ec = DAT_007734f0 - (float)param_1[0x37] / fVar1;
      if (local_ec < DAT_006e92e4 != (NAN(local_ec) || NAN(DAT_006e92e4))) {
        local_ec = 0.0;
      }
      fStack_cc = DAT_00773514;
      fStack_d0 = DAT_00773510;
      fStack_c8 = DAT_00773518;
      uStack_c4 = DAT_0077351c;
      if (((param_8 == 0) || (local_ec < _DAT_006e95a8 == (NAN(local_ec) || NAN(_DAT_006e95a8)))) ||
         (DAT_00773514 < _DAT_00726248 == (NAN(DAT_00773514) || NAN(_DAT_00726248)))) {
        fStack_40 = local_e0 * local_ec;
        *param_2 = local_e8 * local_ec + *param_2;
        param_2[1] = local_e4 * local_ec + param_2[1];
        param_2[2] = fStack_40 + param_2[2];
      }
      else {
        FUN_00468d20(param_2,&local_e8,local_ec,local_c0,uVar5);
      }
      fVar1 = DAT_006e92e8 - local_ec;
      local_e8 = local_e8 * fVar1;
      local_e4 = local_e4 * fVar1;
      local_e0 = local_e0 * fVar1;
      if (local_bc == 1) {
        param_1[0x3a] = param_1[0x3a] & 0xfffffffd;
LAB_004693fa:
        FUN_004357e0(&fStack_d0);
        pfVar7 = &fStack_d0;
        uStack_a8 = uStack_c4;
        fVar6 = (float10)FUN_00402020(&local_e8);
        uVar4 = FUN_0042eea0(auStack_18,(float)fVar6,pfVar7);
        FUN_004357e0(uVar4);
        uVar4 = FUN_00405080(auStack_24,&local_e8,auStack_3c);
        FUN_004357e0(uVar4);
        if (((param_5 < fStack_cc) ||
            (local_e4 < DAT_006e92e4 != (NAN(local_e4) || NAN(DAT_006e92e4)))) ||
           ((uVar3 & 0x20) != 0)) {
          local_e0 = DAT_006e92e8 - param_4;
          local_e8 = fStack_dc * local_e0;
          local_e4 = fStack_d8 * local_e0;
          local_e0 = fStack_d4 * local_e0;
          fStack_4c = local_e0;
        }
        else {
          FUN_00401f00(fStack_cc * DAT_006e92e4 - fStack_c8,
                       fStack_c8 * DAT_006e92e4 - fStack_d0 * DAT_006e92e4,
                       fStack_d0 - fStack_cc * DAT_006e92e4);
          fStack_84 = local_e0;
          fStack_8c = local_e8;
          fVar1 = fStack_98 * fStack_dc + fStack_94 * fStack_d8 + fStack_90 * fStack_d4;
          FUN_00401f00(fStack_98 * fVar1,fStack_94 * fVar1,fStack_90 * fVar1);
          fVar1 = DAT_006e92e8 - param_4;
          FUN_00401f00(fStack_6c * fVar1,fStack_68 * fVar1,fStack_64 * fVar1);
          local_e0 = fStack_9c;
          local_e8 = fStack_a4;
          if (((local_bc == 1) && (local_ec < DAT_006e92e4 != (local_ec == DAT_006e92e4))) &&
             (fVar1 = (fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c) /
                      (fStack_84 * fStack_84 + local_e4 * local_e4 + fStack_8c * fStack_8c),
             fVar1 < _DAT_006e9550 != (fVar1 == _DAT_006e9550))) {
            param_1[0x3a] = param_1[0x3a] | 2;
          }
          local_e4 = 0.0;
        }
      }
      else {
        if ((local_bc < 2) ||
           (fVar1 = fStack_b0 * fStack_cc + fStack_d0 * fStack_b4 + fStack_ac * fStack_c8,
           fVar1 < DAT_006e92e4 == (fVar1 == DAT_006e92e4))) goto LAB_004693fa;
        fStack_dc = fStack_b0 * fStack_c8 - fStack_ac * fStack_cc;
        fStack_d8 = fStack_ac * fStack_d0 - fStack_c8 * fStack_b4;
        fStack_d4 = fStack_b4 * fStack_cc - fStack_b0 * fStack_d0;
        fVar1 = DAT_006e92e8 /
                SQRT(fStack_dc * fStack_dc + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
        iVar2 = FUN_0064cf30(fVar1);
        if (iVar2 == 0) {
          fStack_d4 = 0.0;
          fStack_dc = DAT_006e92e4;
          fStack_d8 = DAT_006e92e4;
        }
        else {
          fStack_d4 = fStack_d4 * fVar1;
          fStack_dc = fVar1 * fStack_dc;
          fStack_d8 = fStack_d8 * fVar1;
        }
        fVar1 = fStack_dc * local_e8 + fStack_d8 * local_e4 + fStack_d4 * local_e0;
        fStack_dc = fVar1 * fStack_dc;
        fStack_d8 = fStack_d8 * fVar1;
        fStack_d4 = fStack_d4 * fVar1;
        local_e0 = DAT_006e92e8 - param_4;
        local_e8 = fStack_dc * local_e0;
        local_e4 = fStack_d8 * local_e0;
        local_e0 = fStack_d4 * local_e0;
        fStack_28 = local_e0;
        FUN_004357e0(&fStack_d0);
        uStack_a8 = uStack_c4;
      }
    }
    FUN_0042faf0(&local_e8);
    if ((param_7 != 0) && (iVar2 = (**(code **)(*param_1 + 0x120))(0), iVar2 != 0)) {
      FUN_004688e0(param_2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

