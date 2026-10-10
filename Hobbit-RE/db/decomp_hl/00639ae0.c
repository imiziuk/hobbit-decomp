
void __thiscall FUN_00639ae0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined8 uVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 1;
    FUN_005af9f0(iVar5);
    FUN_005be710(param_2);
    return;
  case 6:
  case 9:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 2;
    FUN_005af9f0(iVar5);
    fVar7 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
    *(float *)(param_1 + 0x78) = (float)fVar7;
    break;
  case 7:
    iVar5 = FUN_00567b20(1);
    piVar3 = (int *)FUN_005af120();
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x2c))();
    fStack_c = *pfVar4;
    fStack_8 = pfVar4[1];
    fStack_4 = pfVar4[2];
    fVar7 = (float10)FUN_00647b30(-*(float *)(param_1 + 100),*(undefined4 *)(param_1 + 100));
    fVar6 = (float10)FUN_00647b30(-*(float *)(param_1 + 100),*(undefined4 *)(param_1 + 100));
    fStack_c = (float)(fVar6 + (float10)fStack_c);
    fStack_4 = fStack_4 + (float)fVar7;
    piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    if (piVar3 == (int *)0x0) {
      uVar8 = FUN_0054bad0(0x2f,0,0);
      uVar1 = *(undefined4 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar8;
      piVar3 = (int *)FUN_004021c0(uVar1,(int)((ulonglong)uVar8 >> 0x20));
    }
    (**(code **)(*piVar3 + 0x14))(&fStack_c,0);
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x74);
    FUN_005af9f0(iVar5);
    fVar7 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
    *(float *)(param_1 + 0x7c) = (float)fVar7;
    FUN_005be710(param_2);
    return;
  case 8:
    iVar5 = *(int *)(param_1 + 0x84) + 1;
    *(int *)(param_1 + 0x84) = iVar5;
    if (*(int *)(param_1 + 0x50) <= iVar5) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    iVar5 = FUN_00567b20(1);
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x84) * 4);
    *(undefined4 *)(iVar5 + 0x10) = *puVar2;
    *(undefined4 *)(iVar5 + 0x14) = puVar2[1];
    FUN_005af9f0(iVar5);
    *(undefined4 *)(param_1 + 0x80) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x84) * 4) + 8);
    FUN_005be710(param_2);
    return;
  }
  FUN_005be710(param_2);
  return;
}

