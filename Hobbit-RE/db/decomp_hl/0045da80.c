
void FUN_0045da80(undefined4 param_1)

{
  int iVar1;
  
  FUN_004ab4e0(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,s_Camera_Path_00725d5c);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x20;
    *(undefined4 *)(iVar1 + 0x104) = 1;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xf;
      FUN_00647d10(iVar1,s_Target_Volume_00725d4c);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0x100) = 0x2f;
      *(undefined4 *)(iVar1 + 0x104) = 0;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 3;
        FUN_00647d10(iVar1,s_Snap_to_Position_00725d38);
        *(undefined4 *)(iVar1 + 0x84) = 0;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 3;
          FUN_00647d10(iVar1,s_Teleport_Only_00725d28);
          *(undefined4 *)(iVar1 + 0x84) = 0;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 3;
            FUN_00647d10(iVar1,s_One_Shot_Only_00725d18);
            *(undefined4 *)(iVar1 + 0x84) = 0;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 2;
              FUN_00647d10(iVar1,s_Trigger_Delay_00725d08);
              *(undefined4 *)(iVar1 + 0x84) = 0;
              *(undefined4 *)(iVar1 + 0xf8) = 0;
              *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
              if (DAT_0075d338 == 0) {
                iVar1 = FUN_00425010();
                *(undefined4 *)(iVar1 + 0x80) = 2;
                FUN_00647d10(iVar1,s_Min_Distance_00725cf8);
                *(undefined4 *)(iVar1 + 0x84) = 0;
                *(undefined4 *)(iVar1 + 0xf8) = 0;
                *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                if (DAT_0075d338 == 0) {
                  iVar1 = FUN_00425010();
                  *(undefined4 *)(iVar1 + 0x80) = 2;
                  FUN_00647d10(iVar1,s_Max_Distance_00725ce8);
                  *(undefined4 *)(iVar1 + 0x84) = 0;
                  *(undefined4 *)(iVar1 + 0xf8) = 0;
                  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
                  if (DAT_0075d338 == 0) {
                    iVar1 = FUN_00425010();
                    *(undefined4 *)(iVar1 + 0x80) = 0xf;
                    FUN_00647d10(iVar1,s_Override_Lookat_00725cd8);
                    *(undefined4 *)(iVar1 + 0x84) = 0;
                    *(undefined4 *)(iVar1 + 0x100) = 0x2f;
                    *(undefined4 *)(iVar1 + 0x104) = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

