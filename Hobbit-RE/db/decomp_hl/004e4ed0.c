
void __thiscall FUN_004e4ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5a38;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0xc0);
  ExceptionList = &local_c;
  FUN_004ab4e0();
  FUN_00401f00();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x80) = 8;
    FUN_004357e0();
    FUN_004357e0();
    *(undefined4 *)(iVar2 + 0x84) = 3;
    iVar2 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = local_18;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0x84) = 0x12;
    iVar2 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = local_14;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0x84) = 0x12;
    iVar2 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = local_10;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0x84) = 0x12;
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
                  *(undefined4 *)(iVar2 + 0x80) = 3;
                  FUN_00647d10();
                  *(undefined4 *)(iVar2 + 0x84) = 2;
                  if (DAT_0075d338 == 0) {
                    iVar2 = FUN_00425010();
                    *(undefined4 *)(iVar2 + 0x80) = 3;
                    FUN_00647d10();
                    *(undefined4 *)(iVar2 + 0x84) = 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_005669e0();
  FUN_00401f00();
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_2,s_Plane_Normal_0072ea70,4);
  FUN_00537ff0(param_2,s_Plane_D_0072ea68,4,0x800000,0x7f7fffff);
  FUN_00499e60(param_2,s_ApplyToGuidsCount_0072e9a8,2,0,0xffffffff);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00649920();
      local_4 = 0;
      FUN_00649940();
      FUN_00459f30();
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

