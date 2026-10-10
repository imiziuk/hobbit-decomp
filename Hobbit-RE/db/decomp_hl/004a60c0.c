
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a60c0(int *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  int *piVar12;
  int iStack_10;
  float fStack_c;
  int iStack_8;
  
  iVar5 = (**(code **)(*param_1 + 0x154))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*param_1 + 0x108))(0);
    lVar4 = CONCAT44(DAT_00777274,DAT_00777270);
    if (((iVar5 != 0) && ((*(byte *)(param_1 + 0x9a) & 2) != 0)) &&
       (lVar11 = FUN_0041bcd0(), lVar11 != lVar4)) {
      if ((DAT_00777238 == 2) || (DAT_00777238 == 4)) {
        FUN_005784a0(param_1[2],param_1[3]);
        iVar9 = 0;
        uVar6 = (**(code **)(*param_1 + 0x154))();
        iVar5 = FUN_00549470(uVar6);
        FUN_00549580(uVar6);
        if (0 < *(int *)(iVar5 + 0x4c)) {
          iVar5 = 0;
          do {
            iVar7 = (**(code **)(*param_1 + 0x154))();
            if (*(int *)(iVar7 + 0x13c) != 0) {
              FUN_005423d0();
            }
            iStack_10 = *(int *)(*(int *)(iVar7 + 0x140) + iVar5);
            iVar7 = *(int *)(iVar7 + 0x140) + iVar5;
            fStack_c = *(float *)(iVar7 + 4);
            iStack_8 = *(undefined4 *)(iVar7 + 8);
            iVar7 = (**(code **)(*param_1 + 0x154))();
            FUN_005799d0(&iStack_10,*(float *)(iVar7 + 0x28) * _DAT_006e99a0,0,0,0);
            iVar5 = iVar5 + 0xc;
            iVar9 = iVar9 + 1;
            uVar6 = (**(code **)(*param_1 + 0x154))();
            iVar7 = FUN_00549470(uVar6);
            FUN_00549580(uVar6);
          } while (iVar9 < *(int *)(iVar7 + 0x4c));
        }
        puVar8 = (uint *)(**(code **)(*param_1 + 0x154))();
        uVar3 = *puVar8 * 2;
        if (((uVar3 ^ *puVar8) & 0x7fffffff ^ uVar3) != 0xffffffff) {
          iVar5 = (**(code **)(*param_1 + 0x154))();
          fVar1 = *(float *)(iVar5 + 0xdc);
          iVar5 = (**(code **)(*param_1 + 0x154))();
          iVar9 = FUN_00549470(iVar5 + 0xd0);
          FUN_00549580(iVar5 + 0xd0);
          iVar5 = (int)*(short *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x26 + *(int *)(iVar9 + 0x58));
          iVar9 = 0;
          if (0 < iVar5) {
            do {
              iVar7 = FUN_0053f210(3);
              if (((iVar7 == 0x11) &&
                  (iVar7 = FUN_0053f210(0), (float)iVar7 < fVar1 != ((float)iVar7 == fVar1))) &&
                 (iVar7 = FUN_0053f210(1), fVar1 <= (float)iVar7)) {
                piVar12 = &iStack_10;
                iVar7 = iVar9;
                (**(code **)(*param_1 + 0x154))(piVar12,iVar9);
                FUN_005417e0(piVar12,iVar7);
                iVar7 = (**(code **)(*param_1 + 0x154))();
                fVar2 = *(float *)(iVar7 + 0x28);
                fVar10 = (float10)FUN_0053f230(0);
                FUN_005799d0(&iStack_10,(float)(fVar10 * (float10)fVar2),0,0,0);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar5);
          }
        }
        FUN_005785b0();
      }
      else {
        if ((((DAT_00777238 == 5) || (DAT_00777238 == 6)) || (DAT_00777238 == 3)) ||
           (DAT_00777238 == 7)) {
          FUN_005784a0(param_1[2],param_1[3]);
          FUN_00579ce0(param_1 + 0x11,0,0,0);
          FUN_005785b0();
          return;
        }
        if (DAT_00777238 == 1) {
          FUN_005784a0(param_1[2],param_1[3]);
          iStack_10 = param_1[5];
          fStack_c = (float)param_1[0x39] + (float)param_1[6];
          iStack_8 = param_1[7];
          FUN_00579950(param_1 + 5,&iStack_10,param_1[0x38],param_1[2],param_1[3],0);
          FUN_005785b0();
          return;
        }
      }
    }
  }
  return;
}

