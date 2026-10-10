
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004521a0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfd68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_eel_hole__OnAdvanceLogic_00724f20);
  local_4 = 0;
  if (DAT_006e92e4 < *(float *)(param_1 + 0x178)) {
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - param_2;
  }
  iVar3 = FUN_004c71a0();
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x140);
    fVar1 = *(float *)(iVar3 + 0x10);
    fVar2 = (float)(*(int *)(iVar3 + 0xc) + -2) * _DAT_006e936c;
    if (*(int *)(param_1 + 0x168) == 0 && *(int *)(param_1 + 0x16c) == 0) {
      if ((fVar1 <= DAT_006e92e4) || ((float)(*(int *)(iVar3 + 0xc) + -2) <= fVar1)) {
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x68) = 0;
      }
      else {
        FUN_0053b780(param_2);
        iVar3 = *(int *)(param_1 + 0x140);
        if (*(float *)(iVar3 + 0x10) < fVar1 != (NAN(*(float *)(iVar3 + 0x10)) || NAN(fVar1))) {
          *(undefined4 *)(iVar3 + 0x10) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x68) = 0;
        }
      }
    }
    else if (fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) {
      FUN_0053b780(param_2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

