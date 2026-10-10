
void __fastcall FUN_00481990(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fog_plane__OnAdvanceLogic_007288fc);
  local_4 = 0;
  fVar4 = (float10)FUN_00557bb0();
  fVar1 = (float)fVar4;
  fVar4 = (float10)DAT_006e92e4;
  local_1c = 0.0;
  if (*(int *)(param_1 + 0x280) == 0) {
    local_1c = fVar1 * *(float *)(param_1 + 0x250);
    fVar4 = (float10)fVar1 * (float10)*(float *)(param_1 + 600);
  }
  else if (*(int *)(param_1 + 0x280) == 1) {
    fVar4 = (float10)FUN_0064c800(fVar1 * *(float *)(param_1 + 0x268));
    local_1c = (float)(fVar4 * (float10)*(float *)(param_1 + 0x260));
    fVar4 = (float10)FUN_0064c8d0(fVar1 * *(float *)(param_1 + 0x278));
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 0x270);
  }
  iVar3 = 4;
  pfVar2 = (float *)(param_1 + 0x1f8);
  do {
    iVar3 = iVar3 + -1;
    pfVar2[-1] = local_1c + pfVar2[-0x11];
    *pfVar2 = (float)(fVar4 + (float10)pfVar2[-0x10]);
    pfVar2 = pfVar2 + 2;
  } while (iVar3 != 0);
  fVar4 = (float10)DAT_006e92e4;
  local_1c = 0.0;
  if (*(int *)(param_1 + 0x284) == 0) {
    local_1c = fVar1 * *(float *)(param_1 + 0x254);
    fVar4 = (float10)fVar1 * (float10)*(float *)(param_1 + 0x25c);
  }
  else if (*(int *)(param_1 + 0x284) == 1) {
    fVar4 = (float10)FUN_0064c800(fVar1 * *(float *)(param_1 + 0x26c));
    local_1c = (float)(fVar4 * (float10)*(float *)(param_1 + 0x264));
    fVar4 = (float10)FUN_0064c8d0(fVar1 * *(float *)(param_1 + 0x27c));
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 0x274);
  }
  iVar3 = 4;
  pfVar2 = (float *)(param_1 + 0x218);
  do {
    iVar3 = iVar3 + -1;
    pfVar2[-1] = local_1c + pfVar2[-0x11];
    *pfVar2 = (float)(fVar4 + (float10)pfVar2[-0x10]);
    pfVar2 = pfVar2 + 2;
  } while (iVar3 != 0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

