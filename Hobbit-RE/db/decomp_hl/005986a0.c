
undefined4 __thiscall FUN_005986a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__DoOverride_007431cc);
  *param_2 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x144) < 1) {
    iVar2 = FUN_00592190();
    if ((0 < *(int *)(iVar2 + 0xe0)) ||
       (fVar1 = (float)(*(int *)(iVar2 + 0xd8) + -2),
       fVar1 < *(float *)(iVar2 + 0xdc) != (fVar1 == *(float *)(iVar2 + 0xdc)))) {
      if (*(float *)(param_1 + 0x2a4) < *(float *)(param_1 + 0x2a0)) {
        iVar2 = FUN_00592190();
        iVar3 = FUN_00549470(iVar2 + 0xd0);
        FUN_00549580(iVar2 + 0xd0);
        if ((*(byte *)(*(int *)(iVar2 + 0xd4) * 0x50 + 0x2e + *(int *)(iVar3 + 0x58)) & 1) == 0) {
          iVar2 = FUN_00592190();
          *(undefined4 *)(iVar2 + 300) = 1;
          *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
          *(undefined4 *)(iVar2 + 0x13c) = 1;
          *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
          fVar4 = (float10)FUN_0064c6b0(0,(float)*(int *)(iVar2 + 0xd8) - DAT_006e92e8);
          *(float *)(iVar2 + 0xdc) = (float)fVar4;
          iVar2 = FUN_00592190();
          *(undefined4 *)(iVar2 + 300) = 1;
          *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
          *(undefined4 *)(iVar2 + 0x13c) = 1;
          *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
          *(undefined4 *)(iVar2 + 0xe0) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 3;
        if ((*(byte *)(param_1 + 0x4c) & 0x10) == 0) {
          FUN_00595730();
        }
        else {
          FUN_00595310();
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

