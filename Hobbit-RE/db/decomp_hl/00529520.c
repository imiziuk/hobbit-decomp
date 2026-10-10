
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00529520(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  undefined1 *puVar10;
  float fStack_20;
  undefined1 auStack_1c [12];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      FUN_004fa7c0(DAT_00762888 * iVar7 + DAT_00762924,DAT_0076288c * iVar6 + DAT_00762920);
      FUN_004faaf0();
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar6 * 4) + 0xc))();
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  iVar6 = 0;
  do {
    if (iVar6 <= *(int *)(param_1 + 0x38c)) goto LAB_0052967b;
    iVar5 = DAT_00762920;
    iVar7 = DAT_00762924;
    switch(iVar6) {
    case 0:
      break;
    case 1:
      goto LAB_0052961d;
    case 2:
      iVar7 = DAT_00762924 + DAT_00762888 * 2;
      break;
    case 3:
      iVar7 = DAT_00762924 + DAT_00762888 * 3;
      break;
    case 4:
      iVar5 = DAT_0076288c + DAT_00762920;
      break;
    case 5:
      iVar5 = DAT_0076288c + DAT_00762920;
LAB_0052961d:
      iVar7 = DAT_00762888 + DAT_00762924;
      break;
    case 6:
      iVar7 = DAT_00762924 + DAT_00762888 * 2;
      iVar5 = DAT_0076288c + DAT_00762920;
      break;
    case 7:
      iVar7 = DAT_00762924 + DAT_00762888 * 3;
      iVar5 = DAT_0076288c + DAT_00762920;
      break;
    default:
      goto switchD_005295a5_default;
    }
    FUN_004fa7c0(iVar7,iVar5);
switchD_005295a5_default:
    FUN_004faaf0();
LAB_0052967b:
    iVar6 = iVar6 + 1;
    if (7 < iVar6) {
      FUN_00529400();
      FUN_004faaf0();
      fStack_20 = (_DAT_006f39dc / *(float *)(param_1 + 0x394)) * *(float *)(param_1 + 0x390) +
                  _DAT_006f39d8;
      uVar2 = __ftol();
      uVar3 = FUN_006a22a0(0xe);
      uVar4 = FUN_006a2260(uVar2,uVar3);
      FUN_004fa7c0(uVar4,uVar3);
      uVar3 = FUN_006a22a0(0x1c);
      uVar2 = FUN_006a2260(uVar2,uVar3);
      FUN_004fa7c0(uVar2,uVar3);
      uVar2 = __ftol();
      *(undefined4 *)(param_1 + 0x164) = uVar2;
      FUN_004faaf0();
      FUN_004faaf0();
      if (_DAT_006e92f4 < _DAT_00762ad8 - *(float *)(param_1 + 0x15c)) {
        puVar1 = (uint *)(param_1 + 0x3ac);
        *puVar1 = *puVar1 ^ 1;
        if (*puVar1 == 0) {
          uVar3 = FUN_00659600(s_LockTimer_Tock_00735d60,1);
          uVar2 = *(undefined4 *)(param_1 + 0x3a4);
          *(undefined4 *)(param_1 + 0x3a8) = uVar3;
        }
        else {
          uVar2 = FUN_00659600(s_LockTimer_Tick_00735d70,1);
          *(undefined4 *)(param_1 + 0x3a4) = uVar2;
          uVar2 = *(undefined4 *)(param_1 + 0x3a8);
        }
        FUN_00659c80(uVar2,0);
        _DAT_00762ad8 = *(float *)(param_1 + 0x15c);
      }
      FUN_00434ca0(0x17);
      uVar2 = __ftol();
      FUN_0064f190(auStack_1c,&DAT_0072f8e8,uVar2);
      iVar6 = FUN_006a22a0(0x3c);
      iVar7 = FUN_006a2260(0x82);
      iVar5 = FUN_006a22a0(0xf);
      iStack_10 = FUN_006a2260(5);
      iStack_10 = iStack_10 + 2;
      puVar10 = auStack_1c;
      pfVar9 = &fStack_20;
      uVar3 = 0x12;
      iStack_c = iVar5 + -2;
      piVar8 = &iStack_10;
      iStack_8 = iVar7 + 2;
      iStack_4 = iVar6 + -2;
      fStack_20 = -1.7014118e+38;
      uVar2 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fac0(uVar2,piVar8,uVar3,pfVar9,puVar10);
      iStack_10 = iStack_10 + -2;
      puVar10 = auStack_1c;
      iStack_4 = iStack_4 + -2;
      pfVar9 = &fStack_20;
      uVar3 = 0x12;
      piVar8 = &iStack_10;
      iStack_8 = iStack_8 + -2;
      iStack_c = iStack_c + -2;
      fStack_20 = -NAN;
      uVar2 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fac0(uVar2,piVar8,uVar3,pfVar9,puVar10);
      FUN_0064f190(auStack_1c,&DAT_00735d5c);
      iVar6 = FUN_006a22a0(0x3c);
      iVar7 = FUN_006a2260(0x4b);
      iVar5 = FUN_006a22a0(0x32);
      iStack_10 = FUN_006a2260(5);
      puVar10 = auStack_1c;
      iStack_10 = iStack_10 + 2;
      pfVar9 = &fStack_20;
      uVar3 = 0x12;
      piVar8 = &iStack_10;
      iStack_8 = iVar7 + 2;
      iStack_c = iVar5 + -2;
      iStack_4 = iVar6 + -2;
      fStack_20 = -1.7014118e+38;
      uVar2 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fac0(uVar2,piVar8,uVar3,pfVar9,puVar10);
      iStack_4 = iStack_4 + -2;
      iStack_c = iStack_c + -2;
      puVar10 = auStack_1c;
      pfVar9 = &fStack_20;
      iStack_10 = iStack_10 + -2;
      iStack_8 = iStack_8 + -2;
      uVar3 = 0x12;
      piVar8 = &iStack_10;
      fStack_20 = -NAN;
      uVar2 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fac0(uVar2,piVar8,uVar3,pfVar9,puVar10);
      return;
    }
  } while( true );
}

