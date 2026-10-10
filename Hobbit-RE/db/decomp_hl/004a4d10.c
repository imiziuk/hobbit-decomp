
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004a4d10(int *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  float10 fVar13;
  int iStack_40;
  float fStack_3c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_4;
  
  iVar7 = (**(code **)(*param_1 + 0x154))();
  if (iVar7 != 0) {
    iVar12 = 0;
    (**(code **)(*param_1 + 0x154))();
    iVar7 = FUN_0041ba80();
    if (0 < *(int *)(iVar7 + 0x4c)) {
      iStack_40 = 0;
      do {
        iVar7 = (**(code **)(*param_1 + 0x154))();
        fStack_3c = *(float *)(iVar7 + 0x28) * _DAT_006e99a0;
        uVar8 = (**(code **)(*param_1 + 0x154))();
        iVar7 = FUN_00549470(uVar8);
        FUN_00549580(uVar8);
        iVar7 = (int)*(short *)(*(int *)(iVar7 + 0x50) + 2 + iStack_40);
        (**(code **)(*param_1 + 0x154))();
        pfVar9 = (float *)FUN_0041bab0(iVar12);
        fVar1 = *pfVar9;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        if (-1 < iVar7) {
          uVar8 = (**(code **)(*param_1 + 0x154))();
          iVar10 = FUN_00549470(uVar8);
          FUN_00549580(uVar8);
          if (iVar7 < *(int *)(iVar10 + 0x4c)) {
            iVar10 = (**(code **)(*param_1 + 0x154))();
            if (*(int *)(iVar10 + 0x13c) != 0) {
              FUN_005423d0();
            }
            iVar10 = *(int *)(iVar10 + 0x140);
            fStack_4 = *(float *)(iVar10 + 8 + iVar7 * 0xc);
            fStack_18 = fVar1 - *(float *)(iVar10 + iVar7 * 0xc);
            fVar5 = fVar2 - *(float *)(iVar10 + 4 + iVar7 * 0xc);
            fVar6 = fVar3 - fStack_4;
            fStack_3c = SQRT(fStack_18 * fStack_18 + fVar5 * fVar5 + fVar6 * fVar6) * _DAT_006e936c;
          }
        }
        FUN_00401f00(param_2 - fVar1,param_3 - fVar2,param_4 - fVar3);
        if (SQRT(fStack_24 * fStack_24 + fStack_1c * fStack_1c + fStack_20 * fStack_20) <=
            fStack_3c + param_5) {
          return 1;
        }
        iStack_40 = iStack_40 + 0x80;
        iVar12 = iVar12 + 1;
        (**(code **)(*param_1 + 0x154))();
        iVar7 = FUN_0041ba80();
      } while (iVar12 < *(int *)(iVar7 + 0x4c));
    }
    puVar11 = (uint *)(**(code **)(*param_1 + 0x154))();
    uVar4 = *puVar11 * 2;
    if (((uVar4 ^ *puVar11) & 0x7fffffff ^ uVar4) != 0xffffffff) {
      iVar7 = (**(code **)(*param_1 + 0x154))();
      fVar1 = *(float *)(iVar7 + 0xdc);
      iVar7 = (**(code **)(*param_1 + 0x154))();
      iVar12 = FUN_00549470(iVar7 + 0xd0);
      FUN_00549580(iVar7 + 0xd0);
      iVar7 = (int)*(short *)(*(int *)(iVar7 + 0xd4) * 0x50 + 0x26 + *(int *)(iVar12 + 0x58));
      iVar12 = 0;
      if (0 < iVar7) {
        do {
          iVar10 = FUN_0053f210(3);
          if (((iVar10 == 0x11) &&
              (iVar10 = FUN_0053f210(0), (float)iVar10 < fVar1 != ((float)iVar10 == fVar1))) &&
             (iVar10 = FUN_0053f210(1), fVar1 <= (float)iVar10)) {
            pfVar9 = &fStack_24;
            iVar10 = iVar12;
            (**(code **)(*param_1 + 0x154))(pfVar9,iVar12);
            FUN_005417e0(pfVar9,iVar10);
            iVar10 = (**(code **)(*param_1 + 0x154))();
            fVar2 = *(float *)(iVar10 + 0x28);
            fVar13 = (float10)FUN_0053f230(0);
            if (SQRT(((float10)param_2 - (float10)fStack_24) *
                     ((float10)param_2 - (float10)fStack_24) +
                     ((float10)param_3 - (float10)fStack_20) *
                     ((float10)param_3 - (float10)fStack_20) +
                     ((float10)param_4 - (float10)fStack_1c) *
                     ((float10)param_4 - (float10)fStack_1c)) <=
                fVar13 * (float10)fVar2 + (float10)param_5) {
              return 1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar7);
      }
    }
  }
  return 0;
}

