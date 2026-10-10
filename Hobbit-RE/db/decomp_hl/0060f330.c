
void __thiscall FUN_0060f330(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar8 = FUN_0041bcc0();
    fVar2 = *(float *)(iVar8 + 0x44);
    fVar3 = *(float *)(iVar8 + 0x48);
    fVar4 = *(float *)(iVar8 + 0x4c);
    fVar5 = *(float *)(iVar8 + 0x50);
    fVar6 = *(float *)(iVar8 + 0x54);
    fVar7 = *(float *)(iVar8 + 0x58);
    iVar8 = FUN_004021c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (iVar8 != 0) {
      pfVar9 = (float *)FUN_005c0150();
      if (((((fVar2 <= pfVar9[3]) && (fVar5 < *pfVar9 == (NAN(fVar5) || NAN(*pfVar9)))) &&
           (fVar4 <= pfVar9[5])) &&
          ((fVar7 < pfVar9[2] == (NAN(fVar7) || NAN(pfVar9[2])) && (fVar3 <= pfVar9[4])))) &&
         (fVar6 < pfVar9[1] == (NAN(fVar6) || NAN(pfVar9[1])))) {
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar12 = 0;
      uVar11 = 3;
      uVar10 = 0xffffffff;
      goto LAB_0060f44b;
    }
  }
  uVar12 = 0;
  uVar11 = 3;
  FUN_005af120(3,0);
  FUN_004a6970();
  uVar10 = __ftol();
LAB_0060f44b:
  FUN_004f8a50(uVar10,uVar11,uVar12);
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    if ((NAN(*(float *)(param_1 + 0x84)) || NAN(*(float *)(param_1 + 0x88))) ==
        (*(float *)(param_1 + 0x84) == *(float *)(param_1 + 0x88))) {
      param_3 = 7;
    }
    else if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x80)) {
      param_3 = 6;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x7c);
    }
  }
  else if (((sVar1 < 6) || (7 < sVar1)) || ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0)) {
    param_3 = 5;
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  FUN_0060f880(param_2);
  FUN_005be370(param_2,param_3);
  return;
}

