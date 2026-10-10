
void __thiscall FUN_005396f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00533930();
  iVar1 = FUN_00534260();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 5;
        FUN_00647d10();
        *(undefined4 *)(iVar2 + 0x84) = 0x15;
        *(undefined4 *)(iVar2 + 0x100) = 0;
        if (DAT_0075d338 == 0) {
          iVar2 = FUN_00425010();
          *(undefined4 *)(iVar2 + 0x80) = 3;
          FUN_00647d10();
          *(undefined4 *)(iVar2 + 0x84) = 2;
          if (DAT_0075d338 == 0) {
            iVar2 = FUN_00425010();
            *(undefined4 *)(iVar2 + 0x80) = 0xd;
            FUN_00647d10();
            *(undefined4 *)(iVar2 + 0x84) = 2;
            *(undefined4 *)(iVar2 + 0xf0) = 0;
            *(undefined4 *)(iVar2 + 0xf4) = DAT_007647d8;
            *(undefined **)(iVar2 + 0x100) = &DAT_007647d0;
            if (DAT_0075d338 == 0) {
              iVar2 = FUN_00425010();
              *(undefined4 *)(iVar2 + 0x80) = 0xc;
              FUN_00647d10();
              *(undefined4 *)(iVar2 + 0x84) = 2;
              *(undefined4 *)(iVar2 + 0xf0) = 0;
              *(undefined4 *)(iVar2 + 0xf4) = DAT_007647f4;
              *(undefined **)(iVar2 + 0x100) = &DAT_007647ec;
              if (DAT_0075d338 == 0) {
                iVar2 = FUN_00425010();
                *(undefined4 *)(iVar2 + 0x80) = 2;
                FUN_00647d10();
                *(undefined4 *)(iVar2 + 0x84) = 2;
                *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
                *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
                if (DAT_0075d338 == 0) {
                  iVar2 = FUN_00425010();
                  *(undefined4 *)(iVar2 + 0x80) = 2;
                  FUN_00647d10();
                  *(undefined4 *)(iVar2 + 0x84) = 2;
                  *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
                  *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
                  if (DAT_0075d338 == 0) {
                    iVar2 = FUN_00425010();
                    *(undefined4 *)(iVar2 + 0x80) = 1;
                    FUN_00647d10();
                    *(undefined4 *)(iVar2 + 0x84) = 2;
                    *(undefined4 *)(iVar2 + 0xf0) = 0;
                    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  switch(*(undefined4 *)(param_1 + 0x1b4)) {
  case 0:
    iVar1 = FUN_005359f0();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar2 + 0x100) = iVar1;
    }
    FUN_00649b60();
    FUN_00535a60();
    FUN_00649b60(param_1 + 0x158);
    FUN_00531830();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      uVar3 = DAT_007647bc;
      *(undefined **)(iVar2 + 0x100) = &DAT_007647b4;
LAB_00539b41:
      *(undefined4 *)(iVar2 + 0xf4) = uVar3;
    }
    break;
  case 1:
    FUN_00649b60();
    FUN_00535a60();
    iVar1 = FUN_005359f0();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10();
LAB_00539b2c:
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0x84) = 2;
      uVar3 = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar2 + 0x100) = iVar1;
      goto LAB_00539b41;
    }
    break;
  case 4:
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10();
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
    }
    break;
  case 5:
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10();
      goto LAB_00539b2c;
    }
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 1;
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 0x15;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10();
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 0xd;
        FUN_00647d10();
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf0) = 0;
        *(undefined4 *)(iVar1 + 0xf4) = DAT_007647d8;
        *(undefined **)(iVar1 + 0x100) = &DAT_007647d0;
      }
    }
  }
  FUN_00496020();
  FUN_00537ff0();
  FUN_00499e60(param_2,s_GreenToRed_LoopCount_00725204);
  FUN_00537ff0(param_2,s_GreenToRed_FadeInTime_00725234,2,0x800000,0x7f7fffff);
  switch(*(undefined4 *)(param_1 + 0x2ac)) {
  case 0:
    FUN_005359f0();
    FUN_00538050();
    FUN_00649b60(param_1 + 0x1f8);
    FUN_00531830();
    break;
  case 1:
    FUN_00649b60();
    FUN_00535a60();
    FUN_005359f0();
    break;
  default:
    goto switchD_00539c87_caseD_2;
  case 4:
    FUN_00499e60();
    goto switchD_00539c87_caseD_2;
  case 5:
  }
  FUN_00538050();
switchD_00539c87_caseD_2:
  if (*(int *)(param_1 + 0x2c0) != 0) {
    *(undefined4 *)(param_1 + 0x2b4) = 1;
  }
  FUN_004e30f0();
  return;
}

