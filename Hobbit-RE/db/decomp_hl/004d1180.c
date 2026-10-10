
void __thiscall FUN_004d1180(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ab4e0(param_2);
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_Is_Gold_Pile_0072d774);
    *(undefined4 *)(iVar2 + 0x84) = 2;
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,s_Is_Hidden_0072d768);
  *(undefined4 *)(iVar2 + 0x84) = 0x22;
  if ((*(uint *)(param_1 + 0xb0) & *(uint *)(param_1 + 0xb4)) != 0xffffffff) {
    iVar2 = 0;
    do {
      FUN_00649920(&param_2,s_Submesh_dHidden_0072d758,iVar2);
      local_4 = 0;
      uVar3 = FUN_00649940();
      iVar4 = FUN_00425010();
      *(undefined4 *)(iVar4 + 0x80) = 3;
      FUN_00647d10(iVar4,uVar3);
      *(undefined4 *)(iVar4 + 0x84) = 0x38;
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40);
  }
  if (DAT_0075db24 == (undefined4 *)0x0) {
    DAT_0075db24 = (undefined4 *)operator_new(0x1c);
    if (DAT_0075db24 == (undefined4 *)0x0) {
      DAT_0075db24 = (undefined4 *)0x0;
    }
    else {
      DAT_0075db24[3] = 0;
      DAT_0075db24[2] = 0;
      DAT_0075db24[4] = 0;
      DAT_0075db24[6] = 0;
      DAT_0075db24[5] = 0;
      *DAT_0075db24 = 0;
      DAT_0075db24[1] = 0;
    }
    FUN_004d0f70(DAT_0075db24);
  }
  puVar1 = DAT_0075db24;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xd;
    FUN_00647d10(iVar2,s_Surface_Type_0072d6a0);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = puVar1[2];
    *(undefined4 **)(iVar2 + 0x100) = puVar1;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,s_Accepts_Decals_0072d748);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 3;
        FUN_00647d10(iVar2,s_IsSqueakyChickenBoard_0072d6b0);
        *(undefined4 *)(iVar2 + 0x84) = 2;
        if (DAT_0075d338 == 0) {
          iVar2 = FUN_00425010();
          *(undefined4 *)(iVar2 + 0x80) = 3;
          FUN_00647d10(iVar2,s_Self_Illuminated_0072d734);
          *(undefined4 *)(iVar2 + 0x84) = 2;
          if (DAT_0075d338 == 0) {
            iVar2 = FUN_00425010();
            *(undefined4 *)(iVar2 + 0x80) = 5;
            FUN_00647d10(iVar2,s_Technical_0072d728);
            *(undefined4 *)(iVar2 + 0x84) = 0x17;
            *(undefined4 *)(iVar2 + 0x100) = 0;
            if (DAT_0075d338 == 0) {
              iVar2 = FUN_00425010();
              *(undefined4 *)(iVar2 + 0x80) = 3;
              FUN_00647d10(iVar2,s_Technical_Copy_R_to_A_in_lightin_0072d704);
              *(undefined4 *)(iVar2 + 0x84) = 2;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

