
void __thiscall FUN_006b9e30(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e84a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
    pfVar3 = (float *)FUN_006ba140();
    fStack_1c = pfVar3[6] * *(float *)(param_1 + 0x28) +
                pfVar3[10] * *(float *)(param_1 + 0x2c) + pfVar3[2] * *(float *)(param_1 + 0x24) +
                pfVar3[0xe];
    fStack_20 = pfVar3[5] * *(float *)(param_1 + 0x28) +
                pfVar3[9] * *(float *)(param_1 + 0x2c) + pfVar3[1] * *(float *)(param_1 + 0x24) +
                pfVar3[0xd];
    fStack_24 = *(float *)(param_1 + 0x24) * *pfVar3 +
                pfVar3[4] * *(float *)(param_1 + 0x28) + pfVar3[8] * *(float *)(param_1 + 0x2c) +
                pfVar3[0xc];
    fVar4 = (float10)FUN_006ba270();
    fStack_34 = (float)fVar4 * *(float *)(param_1 + 0xc);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_44 = 0x3f800000;
    uStack_40 = 0x3f800000;
    fStack_30 = (float)(fVar4 * (float10)*(float *)(param_1 + 0x10));
    if ((NAN(*(float *)(iVar2 + 0x84)) || NAN(DAT_006e92e4)) ==
        (*(float *)(iVar2 + 0x84) == DAT_006e92e4)) {
      FUN_0065fce0();
      fVar1 = *(float *)(iVar2 + 0x84);
      pfVar3 = (float *)FUN_00672330();
      fStack_24 = fVar1 * *pfVar3 + fStack_24;
      fStack_20 = fStack_20 + fVar1 * pfVar3[1];
      fStack_1c = fStack_1c + fVar1 * pfVar3[2];
    }
    FUN_006ba340(*(undefined4 *)(iVar2 + 0x80));
    FUN_0066c3a0();
    FUN_0066db80(0,0);
    FUN_0066dac0();
    FUN_00425250(param_1 + 0x44);
    FUN_0066e740(&fStack_24,&fStack_34,&uStack_3c,&uStack_44);
    FUN_0066d9a0();
    FUN_006bb1e0();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

