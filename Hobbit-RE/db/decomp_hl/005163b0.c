
void __fastcall FUN_005163b0(int param_1)

{
  float10 fVar1;
  undefined8 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_message__OnUpdate_00733f70);
  local_4 = 0;
  uVar2 = FUN_0064cb70();
  fVar1 = (float10)FUN_0064cbc0(uVar2);
  fVar1 = fVar1 - (float10)*(double *)(param_1 + 0x1c8);
  if ((float10)*(float *)(param_1 + 0x1b4) < fVar1 !=
      ((float10)*(float *)(param_1 + 0x1b4) == fVar1)) {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    FUN_006a2260(DAT_00733f48);
    FUN_006a22a0(DAT_00733f4c);
    FUN_006a2260(DAT_00733f50);
    FUN_006a22a0(DAT_00733f54);
    if (*(int *)(param_1 + 0x1c0) < DAT_00733f38) {
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + DAT_00733f40;
    }
    if (*(int *)(param_1 + 0x1c4) < DAT_00733f3c) {
      *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + DAT_00733f44;
    }
    if (DAT_00733f38 < *(int *)(param_1 + 0x1c0)) {
      *(int *)(param_1 + 0x1c0) = DAT_00733f38;
    }
    if (DAT_00733f3c < *(int *)(param_1 + 0x1c4)) {
      *(int *)(param_1 + 0x1c4) = DAT_00733f3c;
    }
    if ((*(int *)(param_1 + 0x1c0) == DAT_00733f38) && (*(int *)(param_1 + 0x1c4) == DAT_00733f3c))
    {
      FUN_006a0420(DAT_00813038,0);
      FUN_00526600();
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

