
void FUN_005b8b20(void)

{
  void **ppvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ded04;
  local_c = ExceptionList;
  iVar7 = 0;
  DAT_007ba704 = 1;
  if (DAT_007ba6fc == 0) {
    ExceptionList = &local_c;
    if (DAT_007ba6f4 != (int *)0x0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    DAT_007ba6f4 = (int *)0x0;
    DAT_007ba6f8 = 0;
    ppvVar1 = (void **)ExceptionList;
  }
  else {
    DAT_007ba6f0 = 0;
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (DAT_007ba6f8 == 0x15) goto LAB_005b8c1d;
  }
  ExceptionList = ppvVar1;
  DAT_007ba6f0 = 0;
  puVar2 = (undefined4 *)operator_new(0x3a0);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = puVar2 + 1;
    *puVar2 = 0x15;
    FUN_006c043b(piVar4,0x2c,0x15,FUN_006499d0,FUN_00649ba0);
  }
  local_4 = 0xffffffff;
  if (0 < DAT_007ba6f0) {
    iVar5 = 0;
    do {
      FUN_0064a320(iVar5 + (int)DAT_007ba6f4);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x2c;
    } while (iVar7 < DAT_007ba6f0);
  }
  if (DAT_007ba6f4 != (int *)0x0) {
    FUN_00407f70(3);
  }
  DAT_007ba6f8 = 0x15;
  DAT_007ba6f4 = piVar4;
LAB_005b8c1d:
  FUN_00649b20(s_Unknown_0074428c);
  local_4 = 1;
  piVar4 = DAT_007ba6f4;
  iVar7 = DAT_007ba6f8;
  if (DAT_007ba6f8 < DAT_007ba6f0 + 1) {
    if (DAT_007ba700 == 0) {
      iVar7 = DAT_007ba6f8 / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_007ba6f0 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_007ba6f0;
      }
    }
    else {
      iVar7 = DAT_007ba6f0 + DAT_007ba700;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 2;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0 < DAT_007ba6f0) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_007ba6f4);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_007ba6f0);
    }
    if (DAT_007ba6f4 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007ba6f8 = iVar7;
  DAT_007ba6f4 = piVar4;
  FUN_0064a320(local_64);
  DAT_007ba6f0 = DAT_007ba6f0 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Stick_007201fc);
  local_4 = 3;
  piVar4 = DAT_007ba6f4;
  iVar7 = DAT_007ba6f8;
  if (DAT_007ba6f8 < DAT_007ba6f0 + 1) {
    if (DAT_007ba700 == 0) {
      iVar6 = DAT_007ba6f8 / 2;
      iVar5 = 1;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      iVar7 = 1;
      if (0 < iVar5 + DAT_007ba6f0) {
        if (0 < iVar6) {
          iVar7 = iVar6;
        }
        iVar7 = iVar7 + DAT_007ba6f0;
      }
    }
    else {
      iVar7 = DAT_007ba6f0 + DAT_007ba700;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 4;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < DAT_007ba6f0) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_007ba6f4);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_007ba6f0);
    }
    if (DAT_007ba6f4 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007ba6f8 = iVar7;
  DAT_007ba6f4 = piVar4;
  FUN_0064a320(local_64);
  DAT_007ba6f0 = DAT_007ba6f0 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Sting_0072022c);
  local_4 = 5;
  piVar4 = DAT_007ba6f4;
  iVar7 = DAT_007ba6f8;
  if (DAT_007ba6f8 < DAT_007ba6f0 + 1) {
    if (DAT_007ba700 == 0) {
      iVar7 = DAT_007ba6f8 / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_007ba6f0 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_007ba6f0;
      }
    }
    else {
      iVar7 = DAT_007ba6f0 + DAT_007ba700;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 6;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,5);
    if (0 < DAT_007ba6f0) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_007ba6f4);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_007ba6f0);
    }
    if (DAT_007ba6f4 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_007ba6f8 = iVar7;
  DAT_007ba6f4 = piVar4;
  FUN_0064a320(local_64);
  DAT_007ba6f0 = DAT_007ba6f0 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Stone_0073ff84);
  local_4 = 7;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_StingCharged_00745738);
  local_4 = 8;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_StickCharged_00745728);
  local_4 = 9;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_StoneCharged_00745718);
  local_4 = 10;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_MeleeAttack_0074570c);
  local_4 = 0xb;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_00745708);
  local_4 = 0xc;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_00745700);
  local_4 = 0xd;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_SpiderProjectile_007456ec);
  local_4 = 0xe;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&PTR_s_r_Actions_Action__d_Spawn__d_Ani_007456e8);
  local_4 = 0xf;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_007456e0);
  local_4 = 0x10;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_007456d8);
  local_4 = 0x11;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_0072e8c4);
  local_4 = 0x12;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Poison_0073fb98);
  local_4 = 0x13;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Environmental_007456c8);
  local_4 = 0x14;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_EnvironmentalPoison_007456b4);
  local_4 = 0x15;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Freeze_0072b0e8);
  local_4 = 0x16;
  FUN_00469980(local_38);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

