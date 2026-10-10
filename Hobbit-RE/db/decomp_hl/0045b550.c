
void __thiscall FUN_0045b550(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_breakaway__OnAdvanceLogic_00725b68);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x126) & 1) == 0) {
    if ((*(int *)(param_1 + 0x164) != 0) &&
       (fVar1 = param_2 + *(float *)(param_1 + 0x168), *(float *)(param_1 + 0x168) = fVar1,
       *(float *)(param_1 + 0x160) < fVar1)) {
      *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 0x40;
      if (*(int *)(param_1 + 0x140) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x80) = 0x3f800000;
      }
    }
    FUN_004c0ce0(param_2);
    iVar4 = FUN_004c71a0();
    if (iVar4 != 0) {
      piVar2 = *(int **)(param_1 + 0x140);
      iVar4 = piVar2[3];
      uVar3 = piVar2[1] * 2;
      fVar1 = (float)piVar2[4];
      if (((uVar3 ^ piVar2[1]) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar5 = *piVar2;
      }
      else {
        iVar5 = FUN_00549470(piVar2 + 1);
      }
      fVar1 = ((float)(iVar4 + -1) - fVar1) /
              (float)*(byte *)(piVar2[2] * 0x50 + *(int *)(iVar5 + 0x58) + 0x2f);
      if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
        *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xbf;
        *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) | 1;
        *(undefined4 *)(param_1 + 0x164) = 0;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

