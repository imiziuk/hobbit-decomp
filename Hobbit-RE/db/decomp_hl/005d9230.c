
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d9230(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  longlong lVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x7f) & 0x10) != 0)) {
    piVar3 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar4 = (**(code **)(*piVar3 + 0x28))(0);
      (**(code **)(iVar5 + 0x14))(uVar4);
      iVar5 = (**(code **)(*piVar3 + 0x30))();
      if ((NAN(*(float *)(iVar5 + 4)) || NAN(DAT_006e92e4)) ==
          (*(float *)(iVar5 + 4) == DAT_006e92e4)) {
        iVar5 = (**(code **)(*piVar3 + 0x30))();
        fStack_14 = *(float *)(iVar5 + 4);
        fStack_18 = 0.0;
        fStack_10 = 0.0;
        (**(code **)(*piVar2 + 0x1c))(&fStack_18);
      }
      lVar1 = *(longlong *)(piVar2 + 2);
      lVar10 = FUN_0041bcd0();
      if (lVar10 == lVar1) {
        FUN_00424f20();
      }
      else if ((char)piVar2[0x1f] == '\x1c') {
        FUN_004a11b0();
      }
      if ((DAT_00772a60 == *(int *)(param_1 + 0x18)) && (DAT_00772a64 == *(int *)(param_1 + 0x1c)))
      {
        _DAT_0077285c = _DAT_0077285c | 4;
      }
    }
    piVar3 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    if (piVar3 != (int *)0x0) {
      pfVar6 = (float *)(**(code **)(*piVar2 + 0x28))();
      pfVar7 = (float *)(**(code **)(*piVar3 + 0x28))();
      fStack_18 = *pfVar7 - *pfVar6;
      fStack_14 = pfVar7[1] - pfVar6[1];
      fStack_10 = pfVar7[2] - pfVar6[2];
      fVar8 = (float10)FUN_0064ca10(fStack_14,SQRT(fStack_18 * fStack_18 + fStack_10 * fStack_10));
      fVar9 = (float10)FUN_0064ca10(fStack_18,fStack_10);
      fStack_8 = (float)fVar9;
      uStack_4 = 0;
      fStack_c = (float)-fVar8;
      (**(code **)(*piVar2 + 0xf0))(&fStack_c);
    }
  }
  return;
}

