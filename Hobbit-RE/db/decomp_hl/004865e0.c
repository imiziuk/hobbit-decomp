
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004865e0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2c3f;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if ((DAT_0075ce10 & 1) == 0) {
    DAT_0075ce10 = DAT_0075ce10 | 1;
    DAT_0075ce00 = (int *)0x0;
    DAT_0075cdfc = 0;
    DAT_0075ce04 = 0;
    DAT_0075ce0c = 0;
    DAT_0075ce08 = 0;
    _DAT_0075cdf4 = 0;
    _DAT_0075cdf8 = 0;
    ExceptionList = &local_c;
    FUN_006bfe55();
  }
  if ((DAT_0075ce10 & 2) == 0) {
    DAT_0075ce10 = DAT_0075ce10 | 2;
    DAT_0075ce20 = 0;
    _DAT_0075ce1c = 0;
    _DAT_0075ce24 = 0;
    _DAT_0075ce2c = 0;
    DAT_0075ce28 = 0;
    _DAT_0075ce14 = 0;
    _DAT_0075ce18 = 0;
    FUN_006bfe55();
  }
  if ((DAT_0075ce10 & 4) == 0) {
    DAT_0075ce10 = DAT_0075ce10 | 4;
    DAT_0075ce58 = 0;
    _DAT_0075ce54 = 0;
    _DAT_0075ce5c = 0;
    _DAT_0075ce64 = 0;
    DAT_0075ce60 = 0;
    _DAT_0075ce4c = 0;
    _DAT_0075ce50 = 0;
    FUN_006bfe55();
  }
  if (DAT_00728cf4 != 0) {
    DAT_00728cf4 = 0;
    FUN_00649b20();
    local_4 = 0;
    piVar2 = DAT_0075ce00;
    iVar1 = DAT_0075ce04;
    if (DAT_0075ce04 < DAT_0075cdfc + 1) {
      if (DAT_0075ce0c == 0) {
        iVar1 = DAT_0075ce04 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cdfc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cdfc;
        }
      }
      else {
        iVar1 = DAT_0075ce0c + DAT_0075cdfc;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075cdfc) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cdfc);
      }
      piVar2 = piVar3;
      if (DAT_0075ce00 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075ce04 = iVar1;
    DAT_0075ce00 = piVar2;
    piVar3 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cdfc = DAT_0075cdfc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 2;
    piVar2 = DAT_0075ce00;
    iVar1 = DAT_0075ce04;
    if (DAT_0075ce04 < DAT_0075cdfc + 1) {
      if (DAT_0075ce0c == 0) {
        iVar1 = DAT_0075ce04 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cdfc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cdfc;
        }
      }
      else {
        iVar1 = DAT_0075ce0c + DAT_0075cdfc;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cdfc) {
        iVar4 = 0;
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cdfc);
      }
      piVar2 = piVar3;
      if (DAT_0075ce00 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075ce04 = iVar1;
    DAT_0075ce00 = piVar2;
    piVar3 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cdfc = DAT_0075cdfc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 4;
    piVar2 = DAT_0075ce00;
    iVar1 = DAT_0075ce04;
    if (DAT_0075ce04 < DAT_0075cdfc + 1) {
      if (DAT_0075ce0c == 0) {
        iVar1 = DAT_0075ce04 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cdfc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cdfc;
        }
      }
      else {
        iVar1 = DAT_0075ce0c + DAT_0075cdfc;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075cdfc) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cdfc);
      }
      piVar2 = piVar3;
      if (DAT_0075ce00 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075ce04 = iVar1;
    DAT_0075ce00 = piVar2;
    piVar3 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cdfc = DAT_0075cdfc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 6;
    piVar2 = DAT_0075ce00;
    iVar1 = DAT_0075ce04;
    if (DAT_0075ce04 < DAT_0075cdfc + 1) {
      if (DAT_0075ce0c == 0) {
        iVar1 = DAT_0075ce04 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cdfc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cdfc;
        }
      }
      else {
        iVar1 = DAT_0075ce0c + DAT_0075cdfc;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 7;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      if (0 < DAT_0075cdfc) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cdfc);
      }
      piVar2 = piVar3;
      if (DAT_0075ce00 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075ce04 = iVar1;
    DAT_0075ce00 = piVar2;
    piVar3 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cdfc = DAT_0075cdfc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 8;
    piVar2 = DAT_0075ce00;
    iVar1 = DAT_0075ce04;
    if (DAT_0075ce04 < DAT_0075cdfc + 1) {
      if (DAT_0075ce0c == 0) {
        iVar1 = DAT_0075ce04 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cdfc < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cdfc;
        }
      }
      else {
        iVar1 = DAT_0075ce0c + DAT_0075cdfc;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 9;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0 < DAT_0075cdfc) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cdfc);
      }
      piVar2 = piVar3;
      if (DAT_0075ce00 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075ce04 = iVar1;
    DAT_0075ce00 = piVar2;
    FUN_0064a320();
    DAT_0075cdfc = DAT_0075cdfc + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 10;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xb;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xc;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xd;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xe;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xf;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_004e30f0();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 0x17;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xc;
      FUN_00647d10();
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(int *)(iVar1 + 0xf4) = DAT_0075cdfc;
      *(undefined **)(iVar1 + 0x100) = &DAT_0075cdf4;
    }
  }
  FUN_00537ff0();
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_General_Movement_Vector_007290dc,2);
  FUN_00496020(param_1,s_General_Boundary_Mode_007290c4,&DAT_0075ce14,0);
  FUN_0048b8e0(param_1,s_General_Tint_007290b4,2);
  FUN_00537ff0();
  FUN_00496020(param_1,s_General_Pain_Mode_00729088,&DAT_0075ce4c);
  FUN_00537ff0(param_1,s_General_Pain_Freq__sec__00729070,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_General_Poison_Duration__secs___h_0072903c,2,0x800000,0x7f7fffff);
  FUN_00537ff0();
  FUN_00474220(param_1,s_Cells_00729020,2);
  FUN_00537ff0(param_1,s_Cells_Cell_Size__cm__00729008,2,0x800000,0x7f7fffff);
  FUN_00499e60(param_1,s_Cells___X_Cells_00728ff8,2,0,0xffffffff);
  FUN_00499e60();
  FUN_00499e60(param_1,s_Cells_Nearby_Particle_Threshold_00728fc8,2,0);
  FUN_00474220(param_1,s_Particles_00728fbc,2,0);
  FUN_00499e60(param_1,s_Particles___Particles_00728fa4,2,0,0xffffffff);
  FUN_00537ff0();
  FUN_00537ff0(param_1,s_Particles_Particle_Size_00728f70,2,0x800000);
  FUN_00499e60(param_1,s_Particles_Min_Particle_Alpha_00728f50,2,0,0xffffffff);
  FUN_00499e60(param_1,s_Particles_Max_Particle_Alpha_00728f30,2,0,0xffffffff);
  FUN_00474220();
  FUN_00537ff0(param_1,s_Forces_Push_Scalar_00728f14,2);
  FUN_00537ff0(param_1,s_Forces_Pull_Scalar_00728f00,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Forces_Total_Force_Scalar_00728ee4,2,0x800000,0x7f7fffff);
  FUN_00537ff0();
  ExceptionList = local_c;
  return;
}

