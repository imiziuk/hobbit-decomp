
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006175c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  float unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  piVar7 = (int *)(param_1 + 0x5c8);
  if (param_2 != 0) {
    piVar7 = (int *)(param_1 + 0x5f8);
  }
  if (piVar7 != (int *)0x0) {
    piVar4 = (int *)FUN_0041bcc0();
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fStack_10 = pfVar5[2];
    piVar4 = (int *)FUN_005af120();
    iVar6 = (**(code **)(*piVar4 + 0x154))();
    if (*(int *)(iVar6 + 0x13c) != 0) {
      FUN_005423d0();
    }
    fStack_18 = fVar1 - *(float *)(*(int *)(iVar6 + 0x140) + 0xc);
    fStack_10 = fStack_10 - *(float *)(*(int *)(iVar6 + 0x140) + 0x14);
    fVar3 = DAT_006e92e8 / SQRT(fStack_18 * fStack_18 + fStack_10 * fStack_10);
    iVar6 = FUN_0064cf30(fVar3);
    if (iVar6 == 0) {
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
    }
    else {
      fStack_18 = fVar3 * fStack_18;
      fStack_14 = fVar3 * 0.0;
      fStack_10 = fStack_10 * fVar3;
    }
    _DAT_007cc700 = fStack_14 * DAT_006e92e4 + fStack_10 * DAT_006e92e4 + fStack_18;
    (**(code **)(*piVar7 + 0x10))(0x3f800000);
    fVar3 = DAT_006e92e8;
    if ((unaff_retaddr < DAT_006e92e8 != (NAN(unaff_retaddr) || NAN(DAT_006e92e8))) &&
       (fVar3 = unaff_retaddr, unaff_retaddr < _DAT_006e9370)) {
      fVar3 = _DAT_006e9370;
    }
    piVar7[5] = (int)fVar3;
    piVar7[6] = 0;
    _DAT_007cc704 = 0.0;
    piVar7 = (int *)FUN_005af120();
    uVar8 = (**(code **)(*piVar7 + 0x154))();
    FUN_00549470(uVar8);
    FUN_00549580(uVar8);
    uVar8 = FUN_0053cb40(s_BoneHead_00745b38,0);
    piVar7 = (int *)FUN_005af120();
    (**(code **)(*piVar7 + 0x154))();
    pfVar5 = (float *)FUN_0041bab0(uVar8);
    FUN_00401f00(fStack_10 - *pfVar5,fVar1 - pfVar5[1],fVar2 - pfVar5[2]);
    FUN_0042e1f0();
    _DAT_007cc704 =
         (fVar1 * _DAT_006f5b80 + DAT_006e92e4 * 0.0 + fVar2 * _DAT_006f5b84) * _DAT_006e9370;
  }
  return;
}

