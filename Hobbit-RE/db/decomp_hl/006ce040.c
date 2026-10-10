
void __thiscall FUN_006ce040(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e86ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_head_track_controller2__Advance_0075b278);
  local_4 = 0;
  if (*(int *)(param_1 + 8) != -1) {
    iVar1 = param_1 + 4;
    iVar4 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    fVar2 = (float)*(byte *)(*(int *)(iVar4 + 0x58) + 0x2f + *(int *)(param_1 + 8) * 0x50) * param_2
            + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar2;
    fVar3 = (float)(*(int *)(param_1 + 0x20) + -1);
    if (fVar3 <= fVar2) {
      iVar4 = *(int *)(param_1 + 0x28);
      do {
        fVar2 = fVar2 - fVar3;
        iVar4 = iVar4 + 1;
      } while (fVar3 <= fVar2);
      *(float *)(param_1 + 0x24) = fVar2;
      *(int *)(param_1 + 0x28) = iVar4;
    }
    iVar4 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    if (((*(byte *)(*(int *)(iVar4 + 0x58) + 0x2e + *(int *)(param_1 + 8) * 0x50) & 1) == 0) &&
       ((0 < *(int *)(param_1 + 0x28) ||
        (fVar2 = (float)(*(int *)(param_1 + 0x20) + -2),
        fVar2 < *(float *)(param_1 + 0x24) != (fVar2 == *(float *)(param_1 + 0x24)))))) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(float *)(param_1 + 0x24) = (float)(*(int *)(param_1 + 0x20) + -2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

