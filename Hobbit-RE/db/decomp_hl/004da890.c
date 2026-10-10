
void FUN_004da890(undefined4 param_1)

{
  int iVar1;
  
  FUN_004ab4e0(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 7;
    FUN_00647d10(iVar1,s_High_LOD_0072dfa8);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x100) = 6;
    *(undefined4 *)(iVar1 + 0x104) = 0;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 7;
      FUN_00647d10(iVar1,s_Med_LOD_0072dfa0);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0x100) = 6;
      *(undefined4 *)(iVar1 + 0x104) = 0;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 7;
        FUN_00647d10(iVar1,s_Low_LOD_0072df98);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0x100) = 6;
        *(undefined4 *)(iVar1 + 0x104) = 0;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 2;
          FUN_00647d10(iVar1,s_High_Med_Distance_0072df84);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 2;
            FUN_00647d10(iVar1,s_Med_Low_Distance_0072df70);
            *(undefined4 *)(iVar1 + 0x84) = 2;
            *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 2;
              FUN_00647d10(iVar1,s_Transition_Time__sec__0072df58);
              *(undefined4 *)(iVar1 + 0x84) = 2;
              *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
              *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
              if (DAT_0075d338 == 0) {
                iVar1 = FUN_00425010();
                *(undefined4 *)(iVar1 + 0x80) = 2;
                FUN_00647d10(iVar1,s_OccluderOnDist_0072dddc);
                *(undefined4 *)(iVar1 + 0x84) = 2;
                *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
                *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                if (DAT_0075d338 == 0) {
                  iVar1 = FUN_00425010();
                  *(undefined4 *)(iVar1 + 0x80) = 2;
                  FUN_00647d10(iVar1,s_OccluderWidth_0072ddcc);
                  *(undefined4 *)(iVar1 + 0x84) = 2;
                  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
                  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                  if (DAT_0075d338 == 0) {
                    iVar1 = FUN_00425010();
                    *(undefined4 *)(iVar1 + 0x80) = 2;
                    FUN_00647d10(iVar1,s_OccluderPosY_0072ddbc);
                    *(undefined4 *)(iVar1 + 0x84) = 2;
                    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
                    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00537ff0(param_1,s_OccluderNegY_0072ddac,2,0x800000,0x7f7fffff);
  FUN_005669e0(param_1,s_ShowOccluder_0072df48,2);
  FUN_00537ff0(param_1,s_Max_Pitch_0072df3c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Max_Roll_0072df30,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Base_Roll_0072df24,2,0x800000,0x7f7fffff);
  FUN_00499e60(param_1,s___Phases__1_16__0072df14,2,0,0xffffffff);
  FUN_00537ff0(param_1,s_Time_Scale_0072df08,2,0x800000,0x7f7fffff);
  FUN_0048b8e0(param_1,&DAT_00728df0,2);
  FUN_00537ff0(param_1,s_Freeze_End_Distance_0072def4,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_1,s_Freeze_Start_Distance_0072dedc,2,0x800000,0x7f7fffff);
  FUN_005669e0(param_1,s_Show_Freeze_Distance_0072dec4,2);
  return;
}

