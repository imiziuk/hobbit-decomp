
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c22b0(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int *piStack_78;
  float fStack_74;
  float fStack_70;
  int *piStack_6c;
  float fStack_68;
  float fStack_64;
  int *piStack_60;
  float fStack_5c;
  int *piStack_58;
  
  sVar1 = (short)param_1[3];
  fStack_5c = 8.461347e-39;
  piStack_58 = param_1 + 4;
  iVar2 = FUN_00549470();
  if (iVar2 != 0) {
    piStack_58 = (int *)s_WaterSplashes_00745d64;
    fStack_5c = 8.461375e-39;
    iVar3 = FUN_0065f190();
    if (iVar3 != 0) {
      piStack_58 = (int *)0x0;
      piStack_60 = (int *)0x5c22f2;
      fStack_5c = (float)iVar2;
      FUN_0066db80();
      fStack_5c = 8.461421e-39;
      piStack_58 = param_1 + 4;
      FUN_00549580();
      piStack_58 = (int *)0xa6;
      fStack_5c = 7.00649e-45;
      piStack_60 = (int *)0x5c230c;
      FUN_0066c3a0();
      piStack_58 = (int *)0x1;
      fStack_5c = 3.78351e-44;
      piStack_60 = DAT_007f1000;
      fStack_64 = 8.461468e-39;
      (**(code **)(*DAT_007f1000 + 200))();
      fStack_64 = 7.00649e-45;
      fStack_68 = 2.66247e-44;
      piStack_6c = DAT_007f1000;
      fStack_70 = 8.461493e-39;
      (**(code **)(*DAT_007f1000 + 200))();
      fStack_70 = 2.8026e-45;
      fStack_74 = 2.8026e-44;
      piStack_78 = DAT_007f1000;
      (**(code **)(*DAT_007f1000 + 200))();
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x17,4);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,0);
      while (sVar1 != -1) {
        iVar2 = *param_1;
        iVar3 = sVar1 * 0x38;
        pfVar4 = (float *)(iVar3 + iVar2);
        fVar5 = ((DAT_006e92e8 - *(float *)(iVar3 + 0x18 + iVar2) / *(float *)(iVar3 + 0x1c + iVar2)
                 ) * pfVar4[9] + pfVar4[8]) * _DAT_006e936c;
        DAT_007ba95c = __ftol();
        FUN_0066ddd0(CONCAT31((int3)(CONCAT22((short)(CONCAT13(DAT_007ba95c,0xff0000) >> 0x10),
                                              0xff00) >> 8),0xff));
        FUN_0066dd10(0,0);
        fVar6 = -fVar5;
        piStack_78 = (int *)(fVar6 + *pfVar4);
        fStack_74 = _DAT_00745d50 + pfVar4[1];
        fStack_70 = fVar6 + pfVar4[2];
        FUN_0066de80(&piStack_78);
        FUN_0066dd10(0,0x3f800000);
        piStack_6c = (int *)(fVar6 + *pfVar4);
        fStack_68 = _DAT_00745d50 + pfVar4[1];
        fStack_64 = fVar5 + pfVar4[2];
        FUN_0066de80(&piStack_6c);
        FUN_0066dd10(0x3f800000,0x3f800000);
        piStack_60 = (int *)(fVar5 + *pfVar4);
        fStack_5c = _DAT_00745d50 + pfVar4[1];
        piStack_58 = (int *)(fVar5 + pfVar4[2]);
        FUN_0066de80(&piStack_60);
        FUN_0066dd10(0x3f800000,0);
        FUN_0066de80(&stack0xffffffac);
        sVar1 = *(short *)(pfVar4 + 10);
      }
      FUN_0066d9a0();
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,1);
      FUN_0065f430();
      return;
    }
  }
  return;
}

