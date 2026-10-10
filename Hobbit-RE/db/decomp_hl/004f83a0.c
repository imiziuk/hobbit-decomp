
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f83a0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  CRect local_10 [16];
  
  FUN_0065fd00(0);
  FUN_00672110(&local_20);
  fVar5 = local_18 - local_20;
  if ((NAN(local_14) || NAN(_DAT_006efa90)) == (local_14 == _DAT_006efa90)) {
    fVar1 = ((local_14 - local_1c) - fVar5 * _DAT_006efa8c) * *(float *)(param_1 + 0x814) *
            _DAT_006e936c;
    FUN_0066dcb0();
    uVar7 = 0;
    uVar3 = extraout_ECX_01;
    FUN_00406b70(0xff000000);
    uVar2 = CRect::CRect(local_10,0,0,(int)fVar5,(int)fVar1);
    FUN_0066b080(uVar2,uVar3,uVar7);
    uVar2 = 0;
    uVar3 = extraout_ECX_02;
    FUN_00406b70(0xff000000);
    fVar4 = (float10)FUN_004f9110(uVar3,uVar2);
    fVar6 = (float)fVar4;
    fVar4 = (float10)FUN_004f9110();
    fVar4 = fVar4 - (float10)fVar1;
  }
  else {
    fVar1 = ((local_14 - local_1c) - fVar5 * _DAT_006efa8c) * _DAT_0072f4d8 * _DAT_006e936c;
    FUN_0066dcb0();
    uVar7 = 0;
    uVar3 = extraout_ECX;
    FUN_00406b70(0xff000000);
    uVar2 = CRect::CRect(local_10,0,0,(int)fVar5,(int)((float)_DAT_0072f4dc + fVar1));
    FUN_0066b080(uVar2,uVar3,uVar7);
    uVar2 = 0;
    uVar3 = extraout_ECX_00;
    FUN_00406b70(0xff000000);
    fVar4 = (float10)FUN_004f9110(uVar3,uVar2);
    fVar6 = (float)fVar4;
    fVar4 = (float10)FUN_004f9110();
    fVar4 = (fVar4 - (float10)fVar1) + (float10)_DAT_0072f4dc;
  }
  uVar3 = CRect::CRect(local_10,0,(int)(float)fVar4,(int)fVar5,(int)fVar6);
  FUN_0066b080(uVar3);
  return;
}

