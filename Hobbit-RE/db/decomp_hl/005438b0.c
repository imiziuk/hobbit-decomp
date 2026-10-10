
void __thiscall FUN_005438b0(int param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9499;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__Advance_00737f40);
  local_4 = 0;
  if ((*(int *)(param_1 + 8) != -1) && (*(int *)(param_1 + 0x3c) == 0)) {
    bVar2 = NAN(DAT_006e92e4);
    bVar3 = param_2 < DAT_006e92e4;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
    fVar4 = param_2;
    if (bVar3 != (NAN(param_2) || bVar2)) {
      fVar4 = -param_2;
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x30) = fVar4;
    if (*(float *)(param_1 + 0x2c) <= fVar4) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    iVar1 = param_1 + 4;
    iVar6 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    fVar4 = (float)*(byte *)(*(int *)(iVar6 + 0x58) + 0x2f + *(int *)(param_1 + 8) * 0x50) *
            *(float *)(param_1 + 0x24) * param_2 + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x10) = fVar4;
    fVar5 = (float)(*(int *)(param_1 + 0xc) + -1);
    if (fVar5 <= fVar4) {
      iVar6 = *(int *)(param_1 + 0x14);
      do {
        fVar4 = fVar4 - fVar5;
        iVar6 = iVar6 + 1;
      } while (fVar5 <= fVar4);
      *(float *)(param_1 + 0x10) = fVar4;
      *(int *)(param_1 + 0x14) = iVar6;
    }
    iVar6 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    if (((*(byte *)(*(int *)(iVar6 + 0x58) + 0x2e + *(int *)(param_1 + 8) * 0x50) & 1) == 0) &&
       ((0 < *(int *)(param_1 + 0x14) ||
        (fVar4 = (float)(*(int *)(param_1 + 0xc) + -2),
        fVar4 < *(float *)(param_1 + 0x10) != (fVar4 == *(float *)(param_1 + 0x10)))))) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(float *)(param_1 + 0x10) = (float)(*(int *)(param_1 + 0xc) + -2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

