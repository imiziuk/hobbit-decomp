
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004afe00(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_pickup__OnAdvanceLogic_0072bb3c);
  local_4 = 0;
  sVar1 = __ftol();
  *(short *)((int)param_1 + 0x172) = *(short *)((int)param_1 + 0x172) - sVar1;
  if (8000 < *(short *)((int)param_1 + 0x172) * 8) {
    *(undefined2 *)((int)param_1 + 0x172) = 1000;
    FUN_0054f7c0(param_1 + 0x59);
    sVar2 = (short)param_1[0x5a];
    if (sVar2 != 0) {
      if ((((sVar2 != -1) && (iVar3 = *(int *)(DAT_0076f648 + sVar2 * 0x14), iVar3 != 0)) &&
          ((*(byte *)(iVar3 + 0x7f) & 0x10) != 0)) && (iVar3 != 0)) {
        FUN_0054be30(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
      }
      *(undefined2 *)(param_1 + 0x5a) = 0;
    }
  }
  if (((*(ushort *)((int)param_1 + 0x16e) & 4) != 0) &&
     ((*(ushort *)((int)param_1 + 0x16e) & 0x10) != 0)) {
    sVar2 = __ftol();
    *(short *)(param_1 + 0x5c) = (short)param_1[0x5c] + sVar2;
    if ((float)(int)(short)param_1[0x5c] < DAT_006e92e4 !=
        (NAN((float)(int)(short)param_1[0x5c]) || NAN(DAT_006e92e4))) {
      FUN_004b0f80(0);
    }
  }
  if ((*(byte *)((int)param_1 + 0x16e) & 0xc) != 0) {
    FUN_004b3730();
    (**(code **)(*param_1 + 0x110))(param_1 + 8,param_1 + 0x1a);
  }
  if ((*(byte *)((int)param_1 + 0x16e) & 0x20) != 0) {
    FUN_004b2390(param_2);
  }
  if ((*(byte *)((int)param_1 + 0x16f) & 1) != 0) {
    FUN_004b31f0(param_2);
  }
  if ((((*(byte *)((int)param_1 + 0x16e) & 0x40) != 0) &&
      ((*(byte *)((int)param_1 + 0x16f) & 1) == 0)) &&
     ((iVar3 = FUN_00472e70(), iVar3 == 0 &&
      ((*(short *)((int)param_1 + 0x176) = *(short *)((int)param_1 + 0x176) - sVar1,
       _DAT_006ee2e8 < (float)(int)*(short *)((int)param_1 + 0x176) &&
       (FUN_004d22c0(~*(byte *)((int)param_1 + 0x126) & 1),
       _DAT_006ee2e4 < (float)(int)*(short *)((int)param_1 + 0x176))))))) {
    if (((*(byte *)((int)param_1 + 0x7a) & 2) == 0) && ((*(byte *)((int)param_1 + 0x16e) & 4) == 0))
    {
      param_2 = 0;
      switch((short)param_1[0x5b]) {
      case 9:
      case 10:
        param_2 = 1;
        break;
      case 0xb:
        param_2 = 5;
        break;
      case 0xc:
        param_2 = 10;
        break;
      case 0xd:
        param_2 = 0x19;
        break;
      case 0xe:
        param_2 = 0x32;
      }
      FUN_00434d10(0xb6,(float)param_2);
    }
    FUN_004aaa60();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

