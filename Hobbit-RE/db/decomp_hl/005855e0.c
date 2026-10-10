
void __fastcall FUN_005855e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_74;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc8e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  puVar1 = (undefined4 *)FUN_0065fd00();
  FUN_005a7a60();
  FUN_005a7a80();
  FUN_00648600(param_1);
  *(undefined4 *)(param_1 + 0x150) = 3;
  FUN_0065f430();
  if (*(int *)(param_1 + 100) == 0) {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  }
  else {
    uVar2 = FUN_00672280();
    FUN_00658470(uVar2);
    if (DAT_0077806c == 0) {
      if (*(int *)(param_1 + 0xd0) == 0) {
        if (DAT_00778064 != 0) {
          FUN_0065f190();
          FUN_00406b70(0xffff0000);
          FUN_0066a920(param_1 + 0x1b8);
          FUN_0065f430();
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1b8) = *puVar1;
        *(undefined4 *)(param_1 + 0x1bc) = puVar1[1];
        puVar4 = puVar1 + 3;
        *(undefined4 *)(param_1 + 0x1c0) = puVar1[2];
        if (((undefined4 *)(param_1 + 0x1c4) != puVar4) && (puVar4 != puVar1 + 0x13)) {
          puVar3 = (undefined4 *)(param_1 + 0x1cc);
          iVar6 = (int)puVar4 - (param_1 + 0x1c4);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x13);
        }
        *(undefined4 *)(param_1 + 0x204) = puVar1[0x13];
        *(undefined4 *)(param_1 + 0x208) = puVar1[0x14];
        *(undefined4 *)(param_1 + 0x20c) = puVar1[0x15];
        *(undefined4 *)(param_1 + 0x210) = puVar1[0x16];
        *(undefined4 *)(param_1 + 0x214) = puVar1[0x17];
        *(undefined4 *)(param_1 + 0x218) = puVar1[0x18];
        *(undefined4 *)(param_1 + 0x21c) = puVar1[0x19];
        *(undefined4 *)(param_1 + 0x220) = puVar1[0x1a];
        *(undefined4 *)(param_1 + 0x224) = puVar1[0x1b];
        *(undefined4 *)(param_1 + 0x228) = puVar1[0x1c];
        *(undefined4 *)(param_1 + 0x22c) = puVar1[0x1d];
        *(undefined4 *)(param_1 + 0x230) = puVar1[0x1e];
        *(undefined4 *)(param_1 + 0x234) = puVar1[0x1f];
        *(undefined4 *)(param_1 + 0x238) = puVar1[0x20];
        *(undefined4 *)(param_1 + 0x23c) = puVar1[0x21];
        *(undefined4 *)(param_1 + 0x240) = puVar1[0x22];
        puVar4 = puVar1 + 0x23;
        if (((undefined4 *)(param_1 + 0x244) != puVar4) && (puVar4 != puVar1 + 0x33)) {
          puVar3 = (undefined4 *)(param_1 + 0x24c);
          iVar6 = (int)puVar4 - (param_1 + 0x244);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x33);
        }
        puVar4 = puVar1 + 0x33;
        if (((undefined4 *)(param_1 + 0x284) != puVar4) && (puVar4 != puVar1 + 0x43)) {
          puVar3 = (undefined4 *)(param_1 + 0x28c);
          iVar6 = (int)puVar4 - (param_1 + 0x284);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x43);
        }
        puVar4 = puVar1 + 0x43;
        if (((undefined4 *)(param_1 + 0x2c4) != puVar4) && (puVar4 != puVar1 + 0x53)) {
          puVar3 = (undefined4 *)(param_1 + 0x2cc);
          iVar6 = (int)puVar4 - (param_1 + 0x2c4);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x53);
        }
        puVar4 = puVar1 + 0x53;
        if (((undefined4 *)(param_1 + 0x304) != puVar4) && (puVar4 != puVar1 + 99)) {
          puVar3 = (undefined4 *)(param_1 + 0x30c);
          iVar6 = (int)puVar4 - (param_1 + 0x304);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 99);
        }
        puVar4 = puVar1 + 99;
        if (((undefined4 *)(param_1 + 0x344) != puVar4) && (puVar4 != puVar1 + 0x73)) {
          puVar3 = (undefined4 *)(param_1 + 0x34c);
          iVar6 = (int)puVar4 - (param_1 + 0x344);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x73);
        }
        puVar4 = puVar1 + 0x73;
        if (((undefined4 *)(param_1 + 900) != puVar4) && (puVar4 != puVar1 + 0x83)) {
          puVar3 = (undefined4 *)(param_1 + 0x38c);
          iVar6 = (int)puVar4 - (param_1 + 900);
          do {
            puVar3[-2] = *puVar4;
            puVar3[-1] = puVar4[1];
            *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
            puVar3[1] = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
          } while (puVar4 != puVar1 + 0x83);
        }
        FUN_00406570();
        *(undefined4 *)(param_1 + 0x404) = puVar1[0x93];
        local_7c = (undefined4 *)(param_1 + 0x418);
        *(undefined4 *)(param_1 + 0x408) = puVar1[0x94];
        iVar6 = (int)puVar1 - (param_1 + 0x1b8);
        local_74 = 6;
        do {
          FUN_004357e0();
          *local_7c = *(undefined4 *)(iVar6 + (int)local_7c);
          local_7c = local_7c + 4;
          local_74 = local_74 + -1;
        } while (local_74 != 0);
        local_80 = (undefined4 *)(param_1 + 0x478);
        local_74 = 6;
        do {
          FUN_004357e0();
          *local_80 = *(undefined4 *)((int)local_80 + iVar6);
          local_80 = local_80 + 4;
          local_74 = local_74 + -1;
        } while (local_74 != 0);
        puVar4 = (undefined4 *)(param_1 + 0x4cc);
        iVar5 = 0x12;
        do {
          *puVar4 = *(undefined4 *)((int)puVar4 + iVar6);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar4 = (undefined4 *)(param_1 + 0x514);
        iVar5 = 0x12;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar4 = (undefined4 *)(param_1 + 0x55c);
        iVar5 = 0x12;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar4 = (undefined4 *)(param_1 + 0x5a4);
        iVar5 = 0x12;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        FUN_0042fda0();
        puVar4 = (undefined4 *)(param_1 + 0x5fc);
        iVar5 = 3;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar4 = (undefined4 *)(param_1 + 0x608);
        iVar5 = 3;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        FUN_004357e0();
        *(undefined4 *)(param_1 + 0x620) = puVar1[0x11a];
        *(undefined4 *)(param_1 + 0x624) = puVar1[0x11b];
        puVar1 = (undefined4 *)(param_1 + 0x628);
        iVar5 = 2;
        do {
          *puVar1 = *(undefined4 *)(iVar6 + (int)puVar1);
          puVar1 = puVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar1 = (undefined4 *)(param_1 + 0x630);
        iVar5 = 2;
        do {
          *puVar1 = *(undefined4 *)(iVar6 + (int)puVar1);
          puVar1 = puVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (DAT_00778060 == 0) {
        FUN_005a8450();
      }
      FUN_005a7e40();
    }
    else {
      DAT_00778074 = 1;
    }
    FUN_0054dcf0();
    FUN_00649600();
    local_4._0_1_ = 1;
    FUN_005867e0();
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_00649600();
    local_4._0_1_ = 2;
    FUN_00551980();
    local_4._0_1_ = 0;
    FUN_00649720();
    (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000);
    iVar6 = *DAT_007f1000;
    uVar2 = FUN_00672280();
    (**(code **)(iVar6 + 0x94))(DAT_007f1000,2,uVar2);
    iVar6 = *DAT_007f1000;
    uVar2 = FUN_006722a0();
    (**(code **)(iVar6 + 0x94))(DAT_007f1000,3,uVar2);
    FUN_00649600();
    local_4._0_1_ = 3;
    FUN_00429100();
    FUN_00553740();
    FUN_005c2b70();
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_0041bcc0();
    if ((*(int *)(param_1 + 0x14c) != 0) && (iVar6 = FUN_0041b9e0(), iVar6 == 0)) {
      FUN_00649600();
      local_4._0_1_ = 4;
      FUN_00585190();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      FUN_0064cbe0();
      FUN_0064cc00();
      if (*(int *)(param_1 + 0x90) != 0) {
        FUN_00649600();
        local_4._0_1_ = 5;
        FUN_00584a50();
        local_4._0_1_ = 0;
        FUN_00649720();
      }
      if (*(int *)(param_1 + 0x140) != 0) {
        FUN_00649600();
        local_4._0_1_ = 6;
        FUN_00584ab0();
        local_4._0_1_ = 0;
        FUN_00649720();
      }
      fVar7 = (float10)FUN_0064cd30();
      *(float *)(param_1 + 0x48) = (float)fVar7;
      if (*(int *)(param_1 + 0x120) != 0) {
        FUN_00649600();
        local_4._0_1_ = 7;
        FUN_005847c0();
        local_4._0_1_ = 0;
        FUN_00649720();
      }
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_00649600();
      local_4._0_1_ = 8;
      FUN_005849b0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 9;
      FUN_005842f0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_00649600();
      local_4._0_1_ = 10;
      FUN_00584630();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0xb;
      FUN_00584690();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0xc;
      FUN_005845d0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0xd;
      FUN_005846f0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0xe;
      FUN_00584750();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0xf;
      FUN_005850d0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x10;
      FUN_00585130();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x11;
      FUN_005848f0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x12;
      FUN_0066dac0();
      FUN_00584360();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x13;
      FUN_0066dac0();
      FUN_005843d0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x14;
      FUN_0066dac0();
      FUN_00584440();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x15;
      FUN_005844b0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x16;
      FUN_00584510();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x17;
      FUN_00584570();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x18;
      FUN_00584830();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x19;
      FUN_00584890();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x114) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x1a;
      FUN_00584190();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x170) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x1b;
      FUN_005854f0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    FUN_00587d00();
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x1c;
      FUN_00584f20();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_00649600();
      local_4 = CONCAT31(local_4._1_3_,0x1d);
      iVar6 = FUN_0065f190();
      if (iVar6 != 0) {
        FUN_00406b70(0xffff0000);
        FUN_00589f60(param_1 + 0x1b8,*(int *)(param_1 + 0x70) + -1);
      }
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x1e;
      FUN_00584950();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x1f;
      FUN_00584d10();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x20;
      FUN_005853d0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x21;
      FUN_00585310();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x168) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x22;
      FUN_00585370();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x23;
      FUN_00584d90();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x24;
      FUN_00584df0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x25;
      FUN_005852b0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x26;
      FUN_00584e60();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x10c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x27;
      FUN_00584ec0();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x28;
      FUN_00584750();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_00649600();
      local_4 = CONCAT31(local_4._1_3_,0x29);
      iVar6 = FUN_0065f190();
      if (iVar6 != 0) {
        FUN_005847c0();
      }
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x2a;
      FUN_00585430();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_00649600();
      local_4._0_1_ = 0x2b;
      FUN_00585490();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

