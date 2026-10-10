
void __fastcall FUN_004f50e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch01_Hobbiton_0071ee70);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch02_RoastMutton_0071fef4);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch02a_TrollHole_0071fee4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_HDCH04__Overhill_0072009a + 2);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Overhill_0071dc1c);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch05_Swordlight_0071ce90);
              if (iVar1 == 0) {
                iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_CH06__Mirkwood_0071d97c);
                if (iVar1 == 0) {
                  iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch07_BarrelsOutOfBond_0071febc);
                  if (iVar1 == 0) {
                    iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_ch08_laketown_0072f900);
                    if (iVar1 == 0) {
                      iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch09_Smaug_0071feb0);
                      if (iVar1 == 0) {
                        iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch10_LonelyMountain_0072f8ec);
                        if (iVar1 == 0) {
                          iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Ch11_CloudsBurst_0071f4a4);
                          if (iVar1 == 0) {
                            iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_Smaugs_Lair_00723b6c);
                            if (iVar1 == 0) {
                              iVar1 = (**(code **)(*DAT_0075fc00 + 4))(s_ObstacleCourse_00723b5c);
                              iVar1 = (-(uint)(iVar1 != 0) & 0x14) + 6;
                            }
                            else {
                              iVar1 = 0x18;
                            }
                          }
                          else {
                            iVar1 = 0x16;
                          }
                        }
                        else {
                          iVar1 = 0x14;
                        }
                      }
                      else {
                        iVar1 = 0x12;
                      }
                    }
                    else {
                      iVar1 = 0x10;
                    }
                  }
                  else {
                    iVar1 = 0xe;
                  }
                }
                else {
                  iVar1 = 0xc;
                }
              }
              else {
                iVar1 = 10;
              }
            }
            else {
              iVar1 = 8;
            }
          }
          else {
            iVar1 = 6;
          }
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 0;
    }
    iVar2 = FUN_00434e30();
    if (iVar1 < iVar2) {
      iVar1 = FUN_00434e30();
    }
    FUN_00434c40(0x1a,(float)iVar1);
    FUN_00434ca0(0x1a);
    iVar2 = __ftol();
    iVar1 = (iVar2 + iVar1) * 4;
    *(int *)(param_1 + 0x874) = iVar1;
    if (0x78 < iVar1) {
      *(undefined4 *)(param_1 + 0x874) = 0x78;
    }
    FUN_00434c20((float)*(int *)(param_1 + 0x874));
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  iVar1 = FUN_00434e30();
  *(int *)(param_1 + 0x874) = iVar1 << 2;
  iVar1 = FUN_00434e30();
  FUN_00434c20((float)(iVar1 << 2));
  return;
}

