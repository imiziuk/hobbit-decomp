
void __thiscall FUN_00458720(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ab4e0();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10();
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  param_2 = 0;
  iVar2 = FUN_004584b0();
  if (iVar2 != 0) {
    param_2 = 4;
  }
  iVar2 = FUN_004584b0();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10();
    *(uint *)(iVar3 + 0x84) = (-(uint)(iVar2 != 0) & 2) + 2;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    do {
      FUN_00649920();
      local_4 = 0;
      FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 4;
        FUN_00647d10();
        *(undefined4 *)(iVar3 + 0x84) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xf4));
  }
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
        *(undefined4 *)(iVar2 + 0x80) = 2;
        FUN_00647d10();
        *(undefined4 *)(iVar2 + 0x84) = 2;
        *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 200);
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10();
    *(uint *)(iVar3 + 0x84) = (uint)(iVar2 == 1) * 2 + 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  iVar2 = *(int *)(param_1 + 200);
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10();
    *(uint *)(iVar3 + 0x84) = (uint)(iVar2 == 1) * 2 + 2;
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10();
    *(uint *)(iVar2 + 0x84) = param_2 | 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10();
    *(uint *)(iVar2 + 0x84) = param_2 | 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  FUN_00537ff0();
  FUN_00537ff0(uVar1,s_Loop_Fade_Out_Volume_007258fc,
               (*(int *)(param_1 + 200) != 2) * '\x02' + '\x02',0x800000);
  FUN_005669e0(uVar1,s_Height_stays_constant_007258e4,2);
  FUN_005669e0(uVar1,s_Play_Only_Once_007258d4,0x1c);
  FUN_005669e0();
  FUN_00459f30(uVar1,s_Attach_to_Object_007258a0,2);
  if (*(int *)(param_1 + 0xd8) == 0 && *(int *)(param_1 + 0xdc) == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(uVar1,s_Attach_Offset_00725890,uVar4);
  ExceptionList = local_c;
  return;
}

