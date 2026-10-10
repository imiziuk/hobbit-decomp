
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e290(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_64 [44];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d3666;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ab4e0(param_1);
  iVar5 = 0;
  if ((DAT_0075d1f8 & 1) == 0) {
    DAT_0075d1f8 = DAT_0075d1f8 | 1;
    DAT_0075d1e8 = (int *)0x0;
    DAT_0075d1e4 = 0;
    DAT_0075d1ec = 0;
    DAT_0075d1f4 = 0;
    DAT_0075d1f0 = 0;
    _DAT_0075d1dc = 0;
    _DAT_0075d1e0 = 0;
    FUN_006bfe55(&LAB_0049e6f0);
  }
  if (DAT_0072a518 != 0) {
    DAT_0072a518 = 0;
    FUN_00649b20(&DAT_007291ac);
    iStack_4 = 0;
    piVar3 = DAT_0075d1e8;
    iVar1 = DAT_0075d1ec;
    if (DAT_0075d1ec < DAT_0075d1e4 + 1) {
      if (DAT_0075d1f4 == 0) {
        iVar1 = DAT_0075d1ec / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075d1e4 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075d1e4;
        }
      }
      else {
        iVar1 = DAT_0075d1e4 + DAT_0075d1f4;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      iStack_4._0_1_ = 1;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (0 < DAT_0075d1e4) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075d1e8);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar5 < DAT_0075d1e4);
      }
      if (DAT_0075d1e8 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075d1ec = iVar1;
    DAT_0075d1e8 = piVar3;
    iVar1 = 0;
    FUN_0064a320(auStack_64);
    DAT_0075d1e4 = DAT_0075d1e4 + 1;
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Flying_0072a5fc);
    iStack_4 = 2;
    piVar3 = DAT_0075d1e8;
    iVar5 = DAT_0075d1ec;
    if (DAT_0075d1ec < DAT_0075d1e4 + 1) {
      if (DAT_0075d1f4 == 0) {
        iVar5 = DAT_0075d1ec / 2;
        iVar4 = 1;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar4 + DAT_0075d1e4 < 1) {
          iVar5 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar5 = iVar5 + DAT_0075d1e4;
        }
      }
      else {
        iVar5 = DAT_0075d1e4 + DAT_0075d1f4;
      }
      piVar2 = (int *)operator_new(iVar5 * 0x2c + 4);
      iStack_4._0_1_ = 3;
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar5;
        FUN_006c043b(piVar3,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
      }
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      if (0 < DAT_0075d1e4) {
        iVar4 = 0;
        do {
          FUN_0064a320(iVar4 + (int)DAT_0075d1e8);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar1 < DAT_0075d1e4);
      }
      if (DAT_0075d1e8 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075d1ec = iVar5;
    DAT_0075d1e8 = piVar3;
    FUN_0064a320(auStack_64);
    DAT_0075d1e4 = DAT_0075d1e4 + 1;
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Water_0072a5f4);
    iStack_4 = 4;
    FUN_00469980(auStack_64);
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_Climbing_0072a5e8);
    iStack_4 = 5;
    FUN_00469980(auStack_64);
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_On_Wall_0072a5e0);
    iStack_4 = 6;
    FUN_00469980(auStack_64);
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20(s_On_Ceiling_0072a5d4);
    iStack_4 = 7;
    FUN_00469980(auStack_38);
    iStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  if (DAT_0075d338 == 0) {
    iVar5 = FUN_00425010();
    *(undefined4 *)(iVar5 + 0x80) = 2;
    FUN_00647d10(iVar5,s_Radius_0072a57c);
    *(undefined4 *)(iVar5 + 0x84) = 2;
    *(undefined4 *)(iVar5 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar5 + 0xfc) = 0x7f7fffff;
    if (DAT_0075d338 == 0) {
      iVar5 = FUN_00425010();
      *(undefined4 *)(iVar5 + 0x80) = 0xf;
      FUN_00647d10(iVar5,s_Jump_To_NavPoint_0072a5c0);
      *(undefined4 *)(iVar5 + 0x84) = 2;
      *(undefined4 *)(iVar5 + 0x100) = 0x23;
      *(undefined4 *)(iVar5 + 0x104) = 1;
    }
  }
  FUN_00496020(param_1,s_Nav_Flags_0072a5b4,&DAT_0075d1dc,2);
  ExceptionList = pvStack_c;
  return;
}

