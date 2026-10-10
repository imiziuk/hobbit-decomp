
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00540900(int param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int local_1c4;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined1 local_1b0 [4];
  float local_1ac;
  undefined1 local_19c [4];
  float local_198;
  undefined1 local_190 [12];
  undefined1 local_184 [16];
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined1 local_128 [12];
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [16];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc [12];
  undefined1 local_d0 [16];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b4 [12];
  undefined1 local_a8 [16];
  undefined1 local_98 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d932d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_char_anim_player__Advance_00737c90);
  local_4 = 0;
  if ((NAN(param_2) || NAN(DAT_006e92e4)) == (param_2 == DAT_006e92e4)) {
    *(undefined4 *)(param_1 + 300) = 1;
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    *(undefined4 *)(param_1 + 0x13c) = 1;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
    iVar3 = *(int *)(param_1 + 0xd4);
    iVar2 = FUN_004258a0();
    iVar3 = iVar3 * 0x50 + *(int *)(iVar2 + 0x58);
    FUN_0053f7a0(*(undefined4 *)(iVar3 + 0x20),(int)(0 % (longlong)(int)*(short *)(iVar3 + 0x24)),0,
                 local_b4);
    FUN_0053f7a0(*(undefined4 *)(iVar3 + 0x20),
                 (*(short *)(iVar3 + 0x24) + -1) % (int)*(short *)(iVar3 + 0x24),0,local_104);
    puVar7 = local_190;
    uVar6 = 0;
    fVar5 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0xdc),
                                  (float)(*(short *)(iVar3 + 0x24) + -1),0,puVar7);
    FUN_0053fa30(*(undefined4 *)(iVar3 + 0x20),(float)fVar5,uVar6,puVar7);
    piVar4 = (int *)(param_1 + 0x10c);
    local_1c4 = 8;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0xc))(param_2);
      }
      piVar4 = piVar4 + 1;
      local_1c4 = local_1c4 + -1;
    } while (local_1c4 != 0);
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
    *param_4 = 0.0;
    if (*(int *)(param_1 + 0xec) < *(int *)(param_1 + 0xe0)) {
      local_1c4 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xec);
      do {
        FUN_00401f00(local_e8 - local_174,local_e4 - local_170,local_e0 - local_16c);
        *param_3 = local_1bc + *param_3;
        param_3[1] = local_1b8 + param_3[1];
        param_3[2] = local_1b4 + param_3[2];
        FUN_004064d0();
        FUN_004069b0(local_184);
        FUN_004065c0(local_1b0);
        FUN_004064d0();
        FUN_004069b0(local_f8);
        FUN_004065c0(local_19c);
        fVar5 = (float10)FUN_00445150((local_198 - local_1ac) + _DAT_006e9368);
        *param_4 = (float)((fVar5 - (float10)_DAT_006e9368) + (float10)*param_4);
        FUN_004357e0(local_b4);
        FUN_0042fda0(local_a8);
        FUN_004357e0(local_98);
        local_1c4 = local_1c4 + -1;
      } while (local_1c4 != 0);
    }
    puVar7 = local_dc;
    uVar6 = 0;
    fVar5 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0xdc),
                                  (float)(*(short *)(iVar3 + 0x24) + -1),0,puVar7);
    FUN_0053fa30(*(undefined4 *)(iVar3 + 0x20),(float)fVar5,uVar6,puVar7);
    FUN_00401f00(local_c0 - local_174,local_bc - local_170,local_b8 - local_16c);
    *param_3 = local_1bc + *param_3;
    param_3[1] = local_1b8 + param_3[1];
    param_3[2] = local_1b4 + param_3[2];
    FUN_004064d0();
    FUN_004069b0(local_184);
    FUN_004065c0(local_19c);
    FUN_004064d0();
    FUN_004069b0(local_d0);
    FUN_004065c0(local_1b0);
    fVar5 = (float10)FUN_00445150((local_1ac - local_198) + _DAT_006e9368);
    *param_4 = (float)((fVar5 - (float10)_DAT_006e9368) + (float10)*param_4);
    fVar1 = *(float *)(param_1 + 0x28);
    *param_3 = fVar1 * *param_3;
    param_3[1] = fVar1 * param_3[1];
    param_3[2] = fVar1 * param_3[2];
    FUN_00541d70(&local_168);
    FUN_00401f00(local_158 * param_3[1] + local_168 * *param_3 + local_148 * param_3[2] + local_138,
                 local_164 * *param_3 + local_154 * param_3[1] + local_144 * param_3[2] + local_134,
                 local_150 * param_3[1] + local_140 * param_3[2] + local_160 * *param_3 + local_130)
    ;
    param_3[1] = local_1b8;
    *param_3 = local_1bc;
    param_3[2] = local_1b4;
    FUN_00401f00(param_2 * *(float *)(param_1 + 0x3c),param_2 * *(float *)(param_1 + 0x40),
                 param_2 * *(float *)(param_1 + 0x44));
    FUN_0042faf0(local_1b0);
    FUN_00542030(param_3,local_128,local_11c,local_110);
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042faf0(local_11c);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0042faf0(local_128);
      FUN_0042faf0(local_110);
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xd8) != 0)) {
      *param_4 = *(float *)(param_1 + 0x48) * param_2 + *param_4;
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
    *param_4 = 0.0;
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

