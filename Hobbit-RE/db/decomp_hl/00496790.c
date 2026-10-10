
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496790(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d326e;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if ((DAT_0075cfec & 1) == 0) {
    DAT_0075cfec = DAT_0075cfec | 1;
    DAT_0075cffc = (int *)0x0;
    DAT_0075cff8 = 0;
    DAT_0075d000 = 0;
    DAT_0075d008 = 0;
    DAT_0075d004 = 0;
    _DAT_0075cff0 = 0;
    _DAT_0075cff4 = 0;
    ExceptionList = &local_c;
    FUN_006bfe55();
  }
  if (DAT_00729c24 != 0) {
    DAT_00729c24 = 0;
    FUN_00649b20();
    local_4 = 0;
    piVar2 = DAT_0075cffc;
    iVar1 = DAT_0075d000;
    if (DAT_0075d000 < DAT_0075cff8 + 1) {
      if (DAT_0075d008 == 0) {
        iVar1 = DAT_0075d000 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cff8 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cff8;
        }
      }
      else {
        iVar1 = DAT_0075d008 + DAT_0075cff8;
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
      if (0 < DAT_0075cff8) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cff8);
      }
      piVar2 = piVar3;
      if (DAT_0075cffc != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075d000 = iVar1;
    DAT_0075cffc = piVar2;
    piVar3 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cff8 = DAT_0075cff8 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 2;
    piVar2 = DAT_0075cffc;
    iVar1 = DAT_0075d000;
    if (DAT_0075d000 < DAT_0075cff8 + 1) {
      if (DAT_0075d008 == 0) {
        iVar1 = DAT_0075d000 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + DAT_0075cff8 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cff8;
        }
      }
      else {
        iVar1 = DAT_0075d008 + DAT_0075cff8;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cff8) {
        do {
          FUN_0064a320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_0075cff8);
      }
      piVar2 = piVar3;
      if (DAT_0075cffc != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075d000 = iVar1;
    DAT_0075cffc = piVar2;
    FUN_0064a320();
    DAT_0075cff8 = DAT_0075cff8 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 4;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,&DAT_00729c04,2);
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,&DAT_00729bfc,2);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xc;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(int *)(iVar1 + 0xf4) = DAT_0075cff8;
    *(undefined **)(iVar1 + 0x100) = &DAT_0075cff0;
  }
  FUN_004ab4e0();
  ExceptionList = local_c;
  return;
}

