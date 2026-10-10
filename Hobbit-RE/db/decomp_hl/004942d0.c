
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004942d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_light__OnAdvanceLogic_00729aec);
  local_4 = 0;
  iVar7 = FUN_00494690();
  if (iVar7 == 0) {
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 8;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0xe4);
    if ((DAT_0075cfcc & 1) == 0) {
      DAT_0075cfcc = DAT_0075cfcc | 1;
      _DAT_0075cf88 = FUN_0064cb70();
    }
    iVar7 = __ftol();
    fVar6 = (float)(iVar7 % 1000) * _DAT_006e9350 * _DAT_006e936c;
    lVar9 = FUN_0064cb70();
    fVar8 = (float10)FUN_0064cbc0(lVar9 - _DAT_0075cf88);
    fVar1 = (float)((fVar8 + (float10)*(float *)(param_1 + 0x104)) *
                    (float10)*(float *)(param_1 + 0xe8) + (float10)fVar2);
    fVar8 = (float10)FUN_0064c800((fVar6 + DAT_006e92e8) * fVar1);
    *(float *)(param_1 + 0xc0) =
         (float)(fVar8 * (float10)*(float *)(param_1 + 0xec) + (float10)fVar2);
    fVar8 = (float10)FUN_0064c800((fVar6 + _DAT_006e99b0) * fVar1);
    *(float *)(param_1 + 0xc4) =
         (float)(fVar8 * (float10)*(float *)(param_1 + 0xec) + (float10)fVar3);
    fVar8 = (float10)FUN_0064c8d0((fVar6 + _DAT_006ed7f4) * fVar1);
    *(float *)(param_1 + 200) =
         (float)(fVar8 * (float10)*(float *)(param_1 + 0xec) + (float10)fVar4);
    fVar8 = (float10)FUN_00647b30(-*(float *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf0));
    *(float *)(param_1 + 0xc0) = (float)(fVar8 + (float10)*(float *)(param_1 + 0xc0));
    fVar8 = (float10)FUN_00647b30(-*(float *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf0));
    *(float *)(param_1 + 0xc4) = (float)(fVar8 + (float10)*(float *)(param_1 + 0xc4));
    fVar8 = (float10)FUN_00647b30(-*(float *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf0));
    *(float *)(param_1 + 200) = (float)(fVar8 + (float10)*(float *)(param_1 + 200));
    fVar8 = (float10)FUN_0064c800(fVar1 * _DAT_006e99f4);
    *(float *)(param_1 + 0x100) =
         (float)((fVar8 * (float10)_DAT_006e9340 + (float10)DAT_006e92e8) * (float10)fVar5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

