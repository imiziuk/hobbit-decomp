
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051ebd0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_press_start__OnUpdate_00734fcc);
  iVar2 = *(int *)(param_1 + 0x168);
  local_4 = 0;
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x15c) = fVar1;
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      fVar1 = *(float *)(param_1 + 0x160);
      if (*(float *)(param_1 + 0x160) < DAT_006e92e4 !=
          (NAN(*(float *)(param_1 + 0x160)) || NAN(DAT_006e92e4))) {
        fVar1 = -fVar1;
      }
      *(float *)(param_1 + 0x160) = fVar1;
      *(undefined4 *)(param_1 + 0x164) = 0x44d05001;
      *(undefined4 *)(param_1 + 0x168) = 1;
    }
  }
  else if (iVar2 == 1) {
    param_3 = *(float *)(param_1 + 0x164) - param_3;
    *(float *)(param_1 + 0x164) = param_3;
    if (*(int *)(param_1 + 0x170) == 0) {
      *(undefined4 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    if (param_3 < DAT_006e92e4 != (param_3 == DAT_006e92e4)) {
      DAT_00760360 = 0;
      FUN_00532c20(0,0x40000000,1);
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
    }
  }
  else if ((iVar2 == 2) &&
          (fVar1 = *(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x15c),
          *(float *)(param_1 + 0x15c) = fVar1, _DAT_006e95dc <= fVar1)) {
    FUN_0052abf0(1);
    FUN_0052a630(0x12);
    DAT_00760360 = 1;
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

