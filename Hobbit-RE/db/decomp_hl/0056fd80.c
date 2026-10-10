
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056fd80(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  undefined1 local_c [12];
  
  if (((*(uint *)(param_1 + 0x484) & 0x40) != 0) && ((*(uint *)(param_1 + 0x484) & 0x100) == 0)) {
    FUN_00570970(param_2);
    return;
  }
  piVar6 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
  if (piVar6 != (int *)0x0) {
    pfVar7 = (float *)FUN_0056bcf0(local_c,piVar6,0);
    fVar3 = *pfVar7 * _DAT_006e936c;
    fVar4 = pfVar7[1] * _DAT_006e936c;
    fVar5 = pfVar7[2] * _DAT_006e936c;
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    *(float *)(param_1 + 0x4d0) = fVar3 + *pfVar7;
    *(float *)(param_1 + 0x4d8) = fVar5 + fVar2;
    *(float *)(param_1 + 0x4d4) = fVar4 + fVar1;
  }
  return;
}

