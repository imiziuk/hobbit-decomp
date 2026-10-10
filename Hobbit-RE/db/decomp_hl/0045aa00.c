
void __thiscall FUN_0045aa00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c3f80(param_2);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_Is_Running_00725b20);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Continuous_00725a80);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 2;
        FUN_00647d10(iVar1,s_Time_of_Animations_00725b0c);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 2;
          FUN_00647d10(iVar1,s_Timer_Offset_00725afc);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 2;
            FUN_00647d10(iVar1,s_Pain_Radius_00725af0);
            *(undefined4 *)(iVar1 + 0x84) = 2;
            *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 2;
              FUN_00647d10(iVar1,s_Pain_Damage_00725ae4);
              *(undefined4 *)(iVar1 + 0x84) = 2;
              *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
              *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
              if (DAT_0075d338 == 0) {
                iVar1 = FUN_00425010();
                *(undefined4 *)(iVar1 + 0x80) = 1;
                FUN_00647d10(iVar1,s_Number_of_Animations_00725acc);
                *(undefined4 *)(iVar1 + 0x84) = 2;
                *(undefined4 *)(iVar1 + 0xf0) = 0;
                *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
              }
            }
          }
        }
      }
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    do {
      FUN_00649920(&param_2,s_Animation__d_00725abc,iVar1);
      local_4 = 0;
      uVar2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 4;
        FUN_00647d10(iVar3,uVar2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x170));
  }
  ExceptionList = local_c;
  return;
}

