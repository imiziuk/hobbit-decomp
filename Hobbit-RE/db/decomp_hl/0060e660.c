
void __thiscall FUN_0060e660(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined8 uVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x50) == 0 && *(int *)(param_1 + 0x54) == 0) {
    uVar7 = FUN_0054bad0(0x2f,0,0);
    *(undefined8 *)(param_1 + 0x50) = uVar7;
  }
  if (param_2 == 5) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 1;
    FUN_005af9f0(iVar1);
  }
  else if (param_2 == 6) {
    iVar1 = FUN_00567b20(1);
    piVar2 = (int *)FUN_005af120();
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x2c))();
    fStack_c = *pfVar3;
    fStack_8 = pfVar3[1];
    fStack_4 = pfVar3[2];
    fVar4 = (float10)FUN_00647b30(-*(float *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x48));
    fVar5 = (float10)FUN_00647b30(0xc2480000,0x42480000);
    fVar6 = (float10)FUN_00647b30(-*(float *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x48));
    fStack_c = (float)(fVar6 + (float10)fStack_c);
    fStack_8 = fStack_8 + (float)fVar5;
    fStack_4 = fStack_4 + (float)fVar4;
    piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    (**(code **)(*piVar2 + 0x14))(&fStack_c,0);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x54);
    FUN_005af9f0(iVar1);
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_005be710(6);
    return;
  }
  FUN_005be710(param_2);
  return;
}

