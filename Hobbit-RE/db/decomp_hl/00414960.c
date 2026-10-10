
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00414960(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined8 uVar10;
  int iStack_4;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x420) == 0) {
    FUN_00416110();
  }
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 0x3d4));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x3d8) == 0 && *(int *)(param_1 + 0x3dc) == 0) {
      uVar10 = FUN_004a2990();
      *(undefined8 *)(param_1 + 0x3d8) = uVar10;
    }
    if (*(int *)(param_1 + 0x3e0) == 0 && *(int *)(param_1 + 0x3e4) == 0) {
      uVar10 = FUN_0054bad0(0x2d,0,0);
      *(undefined8 *)(param_1 + 0x3e0) = uVar10;
      piVar3 = (int *)FUN_004021c0(uVar10);
      FUN_00488c30(s_Torch_0071f720);
      (**(code **)(*piVar3 + 0xf4))
                (*(undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 0x3d4));
      (**(code **)(*piVar3 + 0xf8))(s_Bone_HandR_0071f714);
      piVar3[0x6a] = -0x3f400000;
      piVar3[0x6b] = -0x3ee00000;
      piVar3[0x6c] = -0x3db80000;
      (**(code **)(*piVar3 + 0x110))();
    }
    if (*(int *)(param_1 + 0x3d8) != 0 || *(int *)(param_1 + 0x3dc) != 0) {
      if (*(int *)(param_1 + 0x3e0) != 0 || *(int *)(param_1 + 0x3e4) != 0) {
        piVar3 = (int *)FUN_004021c0(*(int *)(param_1 + 0x3e0),*(int *)(param_1 + 0x3e4));
        iVar4 = FUN_004021c0(*(undefined4 *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x3dc));
        if ((*(byte *)(iVar4 + 0x126) & 1) == 0) {
          iVar4 = (**(code **)(*piVar3 + 0x10c))();
          if (iVar4 == 0) {
            (**(code **)(*piVar3 + 0x110))();
          }
        }
        else {
          iVar4 = (**(code **)(*piVar3 + 0x10c))();
          if (iVar4 != 0) {
            FUN_0048a740();
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x2a8) == 0) {
      FUN_004021c0(*(undefined4 *)(param_1 + 1000),*(undefined4 *)(param_1 + 0x3ec));
      pfVar5 = (float *)FUN_005c0150();
      if (((*pfVar5 <= (float)piVar2[0x14]) &&
          (pfVar5[3] < (float)piVar2[0x11] == (NAN(pfVar5[3]) || NAN((float)piVar2[0x11])))) &&
         ((pfVar5[2] <= (float)piVar2[0x16] &&
          (((pfVar5[5] < (float)piVar2[0x13] == (NAN(pfVar5[5]) || NAN((float)piVar2[0x13])) &&
            (pfVar5[1] <= (float)piVar2[0x15])) &&
           (pfVar5[4] < (float)piVar2[0x12] == (NAN(pfVar5[4]) || NAN((float)piVar2[0x12])))))))) {
        *(undefined4 *)(param_1 + 0x2a8) = 1;
      }
    }
    else {
      (**(code **)(*piVar2 + 0x28))();
      piVar2 = (int *)FUN_0041bcc0();
      (**(code **)(*piVar2 + 0x28))();
      iVar4 = __ftol();
      if ((iVar4 < 0x19) || (*(int *)(param_1 + 0x3f8) != 0)) {
        if ((iVar4 < 0x32) || (*(int *)(param_1 + 0x3fc) != 0)) {
          if ((iVar4 < 0x4b) || (*(int *)(param_1 + 0x400) != 0)) {
            if (0x62 < iVar4) {
              piVar2 = (int *)FUN_0041bcc0();
              (**(code **)(*piVar2 + 0x128))(0xffffec78);
              *(undefined4 *)(param_1 + 0x3f8) = 0;
              *(undefined4 *)(param_1 + 0x3fc) = 0;
              *(undefined4 *)(param_1 + 0x400) = 0;
              *(undefined4 *)(param_1 + 0x2a8) = 0;
              FUN_004f8a50(0xffffffff,2,0);
            }
          }
          else {
            uVar6 = FUN_00659600(s_Bilbo_08_35_0071f6f0,1);
            *(undefined4 *)(param_1 + 0x400) = 1;
            fVar9 = (float10)FUN_00658020(uVar6);
            FUN_0054e920(s_Bilbo_08_35_0071f6f0,(float)fVar9,1);
          }
        }
        else {
          uVar6 = FUN_00659600(s_Bilbo_08_34_0071f6fc,1);
          *(undefined4 *)(param_1 + 0x3fc) = 1;
          fVar9 = (float10)FUN_00658020(uVar6);
          FUN_0054e920(s_Bilbo_08_34_0071f6fc,(float)fVar9,1);
        }
      }
      else {
        uVar6 = FUN_00659600(s_Bilbo_08_33_0071f708,1);
        *(undefined4 *)(param_1 + 0x3f8) = 1;
        fVar9 = (float10)FUN_00658020(uVar6);
        FUN_0054e920(s_Bilbo_08_33_0071f708,(float)fVar9,1);
      }
      piVar2 = (int *)FUN_0041bcc0();
      iVar8 = (**(code **)(*piVar2 + 0x108))(1);
      if (iVar8 == 0) {
        FUN_004f8a50(0xffffffff,2,0);
        *(undefined4 *)(param_1 + 0x2a8) = 0;
      }
      else {
        FUN_004f8a50(iVar4,2,0);
      }
      FUN_004021c0(*(undefined4 *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x3f4));
      iVar4 = FUN_0041bcc0();
      pfVar5 = (float *)FUN_005c0150();
      if ((((*pfVar5 <= *(float *)(iVar4 + 0x50)) &&
           (pfVar5[3] < *(float *)(iVar4 + 0x44) ==
            (NAN(pfVar5[3]) || NAN(*(float *)(iVar4 + 0x44))))) &&
          (pfVar5[2] <= *(float *)(iVar4 + 0x58))) &&
         (((pfVar5[5] < *(float *)(iVar4 + 0x4c) ==
            (NAN(pfVar5[5]) || NAN(*(float *)(iVar4 + 0x4c))) &&
           (pfVar5[1] <= *(float *)(iVar4 + 0x54))) &&
          (pfVar5[4] < *(float *)(iVar4 + 0x48) == (NAN(pfVar5[4]) || NAN(*(float *)(iVar4 + 0x48)))
          )))) {
        FUN_004f8a50(0xffffffff,2,0);
        *(undefined4 *)(param_1 + 0x2a8) = 0;
      }
    }
  }
  FUN_00418110(param_2);
  FUN_004157a0();
  if (*(float *)(param_1 + 0x438) <= DAT_006e92e4) {
    FUN_00416870();
  }
  else {
    fVar1 = *(float *)(param_1 + 0x438) - param_2;
    *(float *)(param_1 + 0x438) = fVar1;
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      iStack_4 = 0;
      if (0 < *(int *)(param_1 + 0x444)) {
        do {
          iVar4 = *(int *)(param_1 + 0x448);
          iVar8 = iVar4 + iVar7;
          piVar2 = (int *)FUN_004021c0(*(undefined4 *)(iVar4 + 0x48 + iVar7),
                                       *(undefined4 *)(iVar4 + 0x4c + iVar7));
          if (piVar2 != (int *)0x0) {
            iVar4 = (**(code **)(*piVar2 + 0x10c))();
            if (iVar4 != 0) {
              FUN_0048a740();
            }
            iVar4 = FUN_00659e10(*(undefined4 *)(iVar8 + 0x54));
            if ((iVar4 != 0) || (iVar4 = FUN_00659e70(*(undefined4 *)(iVar8 + 0x54)), iVar4 != 0)) {
              FUN_00659c80(*(undefined4 *)(iVar8 + 0x54),0x3f000000);
            }
          }
          iStack_4 = iStack_4 + 1;
          iVar7 = iVar7 + 0x58;
        } while (iStack_4 < *(int *)(param_1 + 0x444));
      }
      *(undefined4 *)(param_1 + 0x438) = 0;
    }
  }
  FUN_00416630(param_2);
  FUN_00416f60(param_2);
  return;
}

