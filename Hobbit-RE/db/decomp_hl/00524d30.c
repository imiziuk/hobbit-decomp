
int __thiscall
FUN_00524d30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iStack_1b8;
  int iStack_1b4;
  int *piStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  undefined1 auStack_18c [76];
  undefined1 auStack_140 [24];
  undefined4 uStack_128;
  undefined1 auStack_f4 [76];
  undefined1 auStack_a8 [76];
  undefined1 auStack_5c [68];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d7ba2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0065f8a0(param_1 + 0x1c4,param_1 + 0x1c8);
  FUN_0065f8a0(param_1 + 0x1cc,param_1 + 0x1d0);
  local_19c = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar1 = FUN_006a3320(4);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  iVar2 = FUN_006a3320(5);
  *(int *)(param_1 + 0x170) = iVar2;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x170) + 0x154) = 0;
  (**(code **)(**(int **)(param_1 + 0x170) + 0x34))(s_small_0072f8e0);
  iStack_1b8 = 0;
  iStack_1a8 = 0;
  iVar2 = FUN_0065bc20(&iStack_1b8);
  iStack_1a4 = iVar2;
  if (iVar2 != 0) {
    iStack_1b4 = 0;
    if (0 < iStack_1b8) {
      piVar6 = (int *)(iVar2 + 0xc);
      do {
        piStack_1b0 = piVar6;
        iVar3 = FUN_00525840(*piVar6);
        if ((iVar3 != 0) && (iVar3 = FUN_00525860(*piVar6), iVar3 != 0)) {
          iVar3 = *(int *)(param_1 + 0x1b0) + -1;
          if (-1 < iVar3) {
            piVar4 = (int *)(iVar3 * 0x5c + *(int *)(param_1 + 0x1b4));
            do {
              if (((piVar4[3] == *piVar6) && (*piVar4 == piVar6[-3])) && (piVar4[1] == piVar6[-2]))
              goto LAB_00525193;
              iVar3 = iVar3 + -1;
              piVar4 = piVar4 + -0x17;
            } while (-1 < iVar3);
          }
          FUN_0064afa0();
          local_19c = piVar6[-3];
          iStack_198 = piVar6[-2];
          iStack_194 = piVar6[-1];
          iStack_190 = *piVar6;
          puStack_8 = (undefined1 *)0x0;
          FUN_006ccc5a(local_19c,auStack_140,10);
          FUN_0064b130(auStack_140);
          puStack_8._0_1_ = 1;
          FUN_0064bcb0(auStack_f4);
          puStack_8._0_1_ = 0;
          FUN_0064b190();
          FUN_0064b130(&DAT_00735788);
          puStack_8._0_1_ = 2;
          FUN_0064bcb0(auStack_5c);
          puStack_8._0_1_ = 0;
          FUN_0064b190();
          FUN_006ccc5a(iStack_198,auStack_140,10);
          FUN_0064b130(auStack_140);
          puStack_8._0_1_ = 3;
          FUN_0064bcb0(auStack_a8);
          puStack_8._0_1_ = 0;
          FUN_0064b190();
          iVar3 = *(int *)(param_1 + 0x1b0);
          if (*(int *)(param_1 + 0x1b8) < iVar3 + 1) {
            if (*(int *)(param_1 + 0x1c0) == 0) {
              iVar5 = *(int *)(param_1 + 0x1b8) / 2;
              iVar2 = 1;
              if (0 < iVar5) {
                iVar2 = iVar5;
              }
              if (iVar2 + iVar3 < 1) {
                iVar3 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar3 = iVar3 + iVar5;
              }
            }
            else {
              iVar3 = *(int *)(param_1 + 0x1c0) + iVar3;
            }
            piVar6 = (int *)operator_new(iVar3 * 0x5c + 4);
            puStack_8._0_1_ = 4;
            if (piVar6 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = piVar6 + 1;
              *piVar6 = iVar3;
              FUN_006c043b(piVar4,0x5c,iVar3,FUN_00525390,FUN_005253a0);
            }
            puStack_8._0_1_ = 0;
            iStack_1ac = 0;
            if (0 < *(int *)(param_1 + 0x1b0)) {
              iVar2 = 0;
              piVar6 = piVar4;
              do {
                piVar7 = (int *)(*(int *)(param_1 + 0x1b4) + iVar2);
                *piVar6 = *piVar7;
                piVar6[1] = piVar7[1];
                piVar6[2] = piVar7[2];
                piVar6[3] = piVar7[3];
                FUN_0064b7f0(piVar7 + 4);
                iStack_1ac = iStack_1ac + 1;
                iVar2 = iVar2 + 0x5c;
                piVar6 = piVar6 + 0x17;
              } while (iStack_1ac < *(int *)(param_1 + 0x1b0));
            }
            iVar2 = *(int *)(param_1 + 0x1b4);
            if (iVar2 != 0) {
              FUN_006c026a(iVar2,0x5c,*(undefined4 *)(iVar2 + -4),FUN_005253a0);
              FUN_006bf840(iVar2 + -4);
            }
            *(int **)(param_1 + 0x1b4) = piVar4;
            *(int *)(param_1 + 0x1b8) = iVar3;
            iVar2 = iStack_1a4;
            piVar6 = piStack_1b0;
          }
          piVar4 = (int *)(*(int *)(param_1 + 0x1b0) * 0x5c + *(int *)(param_1 + 0x1b4));
          *piVar4 = local_19c;
          piVar4[1] = iStack_198;
          piVar4[2] = iStack_194;
          piVar4[3] = iStack_190;
          FUN_0064b7f0(auStack_18c);
          iVar3 = *(int *)(param_1 + 0x1b0) + 1;
          *(int *)(param_1 + 0x1b0) = iVar3;
          piVar4 = (int *)(iVar3 * 0x5c + -0x5c + *(int *)(param_1 + 0x1b4));
          iVar3 = FUN_00660a30();
          if ((*piVar4 == iVar3) && (iVar3 = FUN_00660a40(), piVar4[1] == iVar3)) {
            iVar3 = piVar4[3];
            iVar5 = FUN_00660a50();
            if ((iVar3 == iVar5) || ((iVar3 == 0x16 && (iVar3 = FUN_00660a50(), iVar3 == 0x15)))) {
              iStack_1a8 = *(int *)(param_1 + 0x1b0) + -1;
            }
          }
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_0064b190();
        }
LAB_00525193:
        iStack_1b4 = iStack_1b4 + 1;
        piVar6 = piVar6 + 4;
        piStack_1b0 = piVar6;
      } while (iStack_1b4 < iStack_1b8);
    }
    FUN_006bf840(iVar2);
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    do {
      FUN_006a4af0(*(int *)(param_1 + 0x1b4) + 0x10 + iVar2,0);
      if (iStack_1a8 == iVar3) {
        iVar5 = FUN_004d57a0();
        FUN_006a4c90(iVar5 + -1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x5c;
    } while (iVar3 < *(int *)(param_1 + 0x1b0));
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  uVar1 = FUN_006a3320(6);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_006a3320(8);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = FUN_006a3320(7);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  uVar1 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  uVar1 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  FUN_006a5e20(0,0x96);
  FUN_00660a00();
  uVar1 = __ftol();
  FUN_006a5e90(uVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x168) + 300) = 1;
  uVar1 = FUN_006a3320(9);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x16c) + 0x30))(0x154);
  if (*(int **)(param_1 + 0x174) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x174) + 0x30))(0x154);
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 0x30))(0x154);
  uVar1 = FUN_005496c0(s_Gamma_snapshot_xbmp_00735774,&DAT_0071ceb4);
  FUN_00649b20(uVar1);
  uStack_10 = 5;
  iVar2 = FUN_00652870(uStack_128);
  if (iVar2 != 0) {
    FUN_00674c70(param_1 + 0x188);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  FUN_006a2bd0(*(undefined4 *)(param_1 + 0x160));
  uStack_10 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_18;
  return iStack_1a8;
}

