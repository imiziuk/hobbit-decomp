
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b31f0(int *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_4;
  
  if ((*(ushort *)((int)param_1 + 0x16e) & 0xc) == 0) {
    iVar1 = param_1[0x58];
    param_2 = param_2 + *(float *)(iVar1 + 0x24);
    *(float *)(iVar1 + 0x24) = param_2;
    if (param_2 < *(float *)(iVar1 + 0x28) == (NAN(param_2) || NAN(*(float *)(iVar1 + 0x28)))) {
      param_2 = *(float *)(iVar1 + 0x28);
    }
    *(float *)(iVar1 + 0x24) = param_2;
    param_2 = param_2 / *(float *)(iVar1 + 0x28);
    piVar3 = (int *)FUN_0041bcc0();
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
    fStack_28 = pfVar4[2];
    fStack_24 = *pfVar4 - *(float *)(iVar1 + 0x38);
    fStack_30 = fStack_24 * param_2;
    fStack_2c = ((pfVar4[1] + _DAT_006e9988) - *(float *)(iVar1 + 0x3c)) * param_2;
    fStack_34 = (fStack_28 - *(float *)(iVar1 + 0x40)) * param_2 + *(float *)(iVar1 + 0x40);
    fStack_38 = fStack_2c + *(float *)(iVar1 + 0x3c);
    fStack_3c = fStack_30 + *(float *)(iVar1 + 0x38);
    fVar6 = (float10)FUN_0064c800(param_2 * _DAT_006e9368);
    fStack_38 = (float)(fVar6 * (float10)*(float *)(iVar1 + 0x44) + (float10)fStack_38);
    (**(code **)(*param_1 + 0x110))(&fStack_3c,param_1 + 0x1a);
    iVar1 = *(int *)(param_1[0x58] + 0x48);
    if (iVar1 != 0) {
      if ((((iVar1 == -1) || (piVar3 = *(int **)(DAT_0076f648 + iVar1 * 0x14), piVar3 == (int *)0x0)
           ) || ((*(byte *)((int)piVar3 + 0x7f) & 0x10) == 0)) || (piVar3 == (int *)0x0)) {
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        iStack_20 = param_1[0x11];
        iStack_1c = param_1[0x12];
        iStack_18 = param_1[0x13];
        FUN_004357e0(param_1 + 0x14);
        *(undefined2 *)(param_1 + 0x5a) = 0;
        FUN_004b0900(&iStack_20);
        if ((short)param_1[0x5a] == -1) {
          piVar3 = (int *)0x0;
        }
        else {
          uVar2 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
          if (uVar2 == 0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          }
        }
      }
      uVar5 = FUN_00402130(&fStack_38,param_1 + 0x11,param_1 + 0x14,0x3f000000);
      FUN_00402160(&fStack_2c,uVar5);
      (**(code **)(*piVar3 + 0x14))(&fStack_2c,0);
    }
    if ((NAN(fStack_4) || NAN(DAT_006e92e8)) != (fStack_4 == DAT_006e92e8)) {
      FUN_0041bcc0(param_1);
      FUN_00446330(param_1);
      return;
    }
  }
  else {
    *(ushort *)((int)param_1 + 0x16e) = *(ushort *)((int)param_1 + 0x16e) & 0xfeff;
    FUN_004b3730();
  }
  return;
}

