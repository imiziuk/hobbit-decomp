
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00461e90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_74;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d07d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0075cb84 & 1) == 0) {
    DAT_0075cb84 = DAT_0075cb84 | 1;
    DAT_0075cb74 = 0;
    DAT_0075cb70 = 0;
    _DAT_0075cb78 = 0;
    _DAT_0075cb80 = 0;
    DAT_0075cb7c = 0;
    _DAT_0075cb68 = 0;
    _DAT_0075cb6c = 0;
    ExceptionList = &local_c;
    FUN_006bfe55();
  }
  if ((DAT_0075cb84 & 2) == 0) {
    DAT_0075cb84 = DAT_0075cb84 | 2;
    DAT_0075cb3c = (int *)0x0;
    DAT_0075cb38 = 0;
    DAT_0075cb40 = 0;
    DAT_0075cb48 = 0;
    DAT_0075cb44 = 0;
    _DAT_0075cb30 = 0;
    _DAT_0075cb34 = 0;
    FUN_006bfe55();
  }
  if ((DAT_0075cb84 & 4) == 0) {
    DAT_0075cb84 = DAT_0075cb84 | 4;
    DAT_0075cb58 = 0;
    _DAT_0075cb54 = 0;
    _DAT_0075cb5c = 0;
    _DAT_0075cb64 = 0;
    DAT_0075cb60 = 0;
    _DAT_0075cb4c = 0;
    _DAT_0075cb50 = 0;
    FUN_006bfe55();
  }
  if (DAT_00725ff4 != 0) {
    DAT_00725ff4 = 0;
    FUN_0054d730();
    *(undefined4 *)(param_1 + 0x114) = 0x12;
    local_74 = 0;
    if (0 < DAT_0075cb70) {
      do {
        FUN_00649b80();
        local_4 = 0;
        piVar4 = DAT_0075cb3c;
        iVar1 = DAT_0075cb40;
        if (DAT_0075cb40 < DAT_0075cb38 + 1) {
          if (DAT_0075cb48 == 0) {
            iVar1 = DAT_0075cb40 / 2;
            iVar5 = 1;
            if (0 < iVar1) {
              iVar5 = iVar1;
            }
            if (iVar5 + DAT_0075cb38 < 1) {
              iVar1 = 1;
            }
            else {
              if (iVar1 < 1) {
                iVar1 = 1;
              }
              iVar1 = iVar1 + DAT_0075cb38;
            }
          }
          else {
            iVar1 = DAT_0075cb38 + DAT_0075cb48;
          }
          piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
          local_4._0_1_ = 1;
          if (piVar2 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = piVar2 + 1;
            *piVar2 = iVar1;
            FUN_006c043b();
          }
          iVar5 = 0;
          local_4 = (uint)local_4._1_3_ << 8;
          if (0 < DAT_0075cb38) {
            do {
              FUN_0064a320();
              iVar5 = iVar5 + 1;
            } while (iVar5 < DAT_0075cb38);
          }
          if (DAT_0075cb3c != (int *)0x0) {
            FUN_00407f70();
          }
        }
        DAT_0075cb40 = iVar1;
        DAT_0075cb3c = piVar4;
        FUN_0064a320();
        DAT_0075cb38 = DAT_0075cb38 + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        local_74 = local_74 + 1;
      } while (local_74 < DAT_0075cb70);
    }
  }
  FUN_004ab4e0();
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00647e80();
      if (((iVar3 == 0) || (iVar3 = FUN_00647e80(), iVar3 == 0)) ||
         (iVar3 = FUN_00647e80(), iVar3 == 0)) {
        *(uint *)(*(int *)(param_2 + 0xc) + 0x84 + iVar5) =
             *(uint *)(*(int *)(param_2 + 0xc) + 0x84 + iVar5) | 4;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x108;
    } while (iVar1 < *(int *)(param_2 + 8));
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x84) = 4;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xe;
      FUN_00647d10();
      *(undefined4 *)(iVar1 + 0x84) = 2;
    }
  }
  FUN_00401f00();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x80) = 8;
    FUN_004357e0();
    FUN_004357e0();
    *(undefined4 *)(iVar1 + 0x84) = 9;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_5c;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_58;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_54;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
  }
  FUN_00401f00();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10();
    *(undefined4 *)(iVar1 + 0x80) = 8;
    FUN_004357e0();
    FUN_004357e0();
    *(undefined4 *)(iVar1 + 0x84) = 9;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_5c;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_58;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10();
    FUN_00647dc0();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_54;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10();
      *(undefined4 *)(iVar1 + 0x84) = 0x12;
    }
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_2,s_Camera_Pos_Offset_007261e8,2);
  local_50 = 0x40c90fdb;
  local_4c = 0x40c90fdb;
  local_48 = 0x40c90fdb;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  FUN_00463d50(param_2,s_Camera_Rot_Offset_007261d4,2,&local_44,&local_50);
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_2,s_Scale_00725a04,2);
  FUN_00537ff0(param_2,s_Playback_Speed_007261c4,2,0x800000,0x7f7fffff);
  FUN_005669e0(param_2,s_Interpolate_007260b0,2);
  FUN_00474220();
  FUN_00496020(param_2,s_Override_Lookat_Type_007261ac);
  FUN_00459f30(param_2,s_Override_Lookat_Guid_00726194,
               *(undefined4 *)(DAT_0075cb58 + *(int *)(param_1 + 0x114) * 4),1,0,0);
  FUN_00401f00();
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_2,s_Override_Lookat_Offset_0072617c,0);
  FUN_005669e0(param_2,s_Override_Lookat_FromBBoxCenter_0072615c,2);
  FUN_005669e0(param_2,s_Override_Lookat_Lookspring_00726140,2);
  FUN_005669e0(param_2,s_Loops_007259f0,2);
  ExceptionList = local_c;
  return;
}

