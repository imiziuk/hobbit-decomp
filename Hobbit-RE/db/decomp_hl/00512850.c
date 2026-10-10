
void __thiscall FUN_00512850(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  undefined1 auStack_dc [68];
  undefined4 uStack_98;
  undefined *puStack_94;
  undefined1 *puStack_90;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined *puStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [76];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d7078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x5d] == 0) {
LAB_00512c63:
    if (param_1[100] != 0) goto LAB_00512cb0;
  }
  else {
    ExceptionList = &pvStack_c;
    if (param_1[100] != 0) {
      iStack_70 = 0;
      iStack_74 = 0;
      bVar2 = false;
      puStack_6c = (undefined *)0x0;
      iStack_60 = 0;
      ExceptionList = &pvStack_c;
      do {
        if (bVar2) break;
        iVar4 = iStack_60;
        if (iStack_60 == 0) {
          iStack_70 = 0x9e;
          iStack_74 = 0x18a;
          puStack_6c = &DAT_007625c0;
LAB_005128f1:
          iVar9 = iStack_70;
          if (iStack_70 <= iStack_74) {
            do {
              if (bVar2) break;
              puStack_90 = (undefined1 *)0x0;
              uStack_98 = 0x512913;
              puStack_94 = (undefined *)iVar9;
              iVar3 = FUN_00670ef0();
              if (iVar3 != 0) {
                puStack_90 = auStack_5c;
                uStack_98 = 0x512929;
                puStack_94 = (undefined *)iVar9;
                iVar4 = FUN_0042b820();
                iVar4 = *(int *)(*(int *)(puStack_6c + 0xc) + iVar4 * 4);
                puStack_90 = &DAT_0073339c;
                puStack_94 = (undefined *)0x512944;
                FUN_0064b130();
                uStack_4 = 0;
                if (-1 < iVar4) {
                  puStack_94 = &DAT_0071ceb4;
                  uStack_98 = 0x51295f;
                  puStack_90 = (undefined1 *)iVar4;
                  puStack_90 = (undefined1 *)FUN_006ab170();
                  puStack_94 = (undefined *)0x512969;
                  FUN_0064b7b0();
                }
                iStack_68 = param_1[0x7d6];
                iVar4 = 0;
                puVar5 = (undefined1 *)(iStack_68 * 0x4ec);
                piVar8 = param_1 + 0x67;
                piVar6 = (int *)(puVar5 + 0x64c + (int)param_1);
                do {
                  iVar3 = piVar6[-1];
                  iVar1 = *piVar6;
                  iStack_78 = 0;
                  puStack_64 = puVar5;
                  if ((param_1[0x5d] == piVar8[-1]) && (piVar6[-1] != iVar9)) {
                    if (iVar9 != param_1[(iStack_68 * 0x69 + iVar4) * 3 + 0x193]) {
                      puStack_90 = (undefined1 *)0x0;
                      puStack_64 = auStack_dc;
                      FUN_0064b170(puVar5 + iVar4 * 0xe4 + 0x21c + (int)param_1);
                      iVar7 = (**(code **)(*param_1 + 0x9c))
                                        (&iStack_78,iVar9,
                                         param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar4) * 3]);
                      if (iVar7 == 0) break;
                    }
                    puStack_90 = auStack_58;
                    puStack_94 = (undefined *)0x512a45;
                    (**(code **)(*(int *)param_1[0x5d] + 0x20))();
                    puStack_90 = (undefined1 *)0x0;
                    puStack_94 = (undefined *)0x200;
                    uStack_98 = 0x512a57;
                    FUN_006a3240();
                    iStack_68 = iVar4 * 0xe4;
                    puStack_90 = auStack_58;
                    puStack_94 = (undefined *)0x512a82;
                    FUN_0064b7f0();
                    param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar4) * 3] = iVar9;
                    if ((iStack_78 != 0) && (iVar3 == iVar1)) {
                      puStack_90 = auStack_58;
                      puStack_94 = (undefined *)0x512ac0;
                      (**(code **)(*(int *)param_1[iVar4 * 3 + 0x67] + 0x20))();
                      puStack_90 = auStack_58;
                      puStack_94 = (undefined *)0x512ae3;
                      FUN_0064b7f0();
                      param_1[(param_1[0x7d6] * 0x69 + iVar4) * 3 + 0x193] = iVar9;
                    }
LAB_00512c1f:
                    param_1[0x5f] = 1;
                    break;
                  }
                  if ((param_1[0x5d] == *piVar8) && (*piVar6 != iVar9)) {
                    if (iVar9 != param_1[(iStack_68 * 0x69 + 0x86 + iVar4) * 3]) {
                      puStack_90 = (undefined1 *)0x0;
                      puStack_64 = auStack_dc;
                      FUN_0064b170(puVar5 + iVar4 * 0xe4 + 0x268 + (int)param_1);
                      iVar7 = (**(code **)(*param_1 + 0x9c))
                                        (&iStack_78,iVar9,
                                         param_1[(param_1[0x7d6] * 0x69 + iVar4) * 3 + 0x193]);
                      if (iVar7 == 0) break;
                    }
                    puStack_90 = auStack_58;
                    puStack_94 = (undefined *)0x512b77;
                    (**(code **)(*(int *)param_1[0x5d] + 0x20))();
                    puStack_90 = (undefined1 *)0x0;
                    puStack_94 = (undefined *)0x200;
                    uStack_98 = 0x512b89;
                    FUN_006a3240();
                    iStack_68 = iVar4 * 0xe4;
                    puStack_90 = auStack_58;
                    puStack_94 = (undefined *)0x512bb4;
                    FUN_0064b7f0();
                    param_1[(param_1[0x7d6] * 0x69 + iVar4) * 3 + 0x193] = iVar9;
                    if ((iStack_78 != 0) && (iVar3 == iVar1)) {
                      puStack_90 = auStack_58;
                      puStack_94 = (undefined *)0x512be6;
                      (**(code **)(*(int *)param_1[iVar4 * 3 + 0x66] + 0x20))();
                      puStack_90 = auStack_58;
                      puStack_94 = (undefined *)0x512c09;
                      FUN_0064b7f0();
                      param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar4) * 3] = iVar9;
                    }
                    goto LAB_00512c1f;
                  }
                  iVar4 = iVar4 + 1;
                  piVar8 = piVar8 + 3;
                  piVar6 = piVar6 + 3;
                } while (iVar4 < 5);
                bVar2 = true;
                uStack_4 = 0xffffffff;
                puStack_90 = (undefined1 *)0x512c42;
                FUN_0064b190();
                iVar4 = iStack_60;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 <= iStack_74);
          }
        }
        else if (iStack_60 != 2) {
          if (iStack_60 == 1) {
            iStack_70 = 0x8b;
            iStack_74 = 0x92;
            puStack_6c = &DAT_007625f8;
          }
          goto LAB_005128f1;
        }
        iStack_60 = iVar4 + 1;
      } while (iStack_60 < 5);
      goto LAB_00512c63;
    }
  }
  puStack_90 = (undefined1 *)0x0;
  puStack_94 = (undefined *)0x8b;
  uStack_98 = 0x512c76;
  fVar10 = (float10)FUN_00671130();
  if ((NAN(fVar10) || NAN((float10)DAT_006e92e4)) == (fVar10 == (float10)DAT_006e92e4)) {
LAB_00512ca8:
    iVar4 = 0;
  }
  else {
    puStack_90 = (undefined1 *)0x0;
    puStack_94 = (undefined *)0xb9;
    uStack_98 = 0x512c91;
    fVar10 = (float10)FUN_00671130();
    if ((NAN(fVar10) || NAN((float10)DAT_006e92e4)) == (fVar10 == (float10)DAT_006e92e4))
    goto LAB_00512ca8;
    iVar4 = 1;
  }
  param_1[100] = iVar4;
LAB_00512cb0:
  puStack_90 = (undefined1 *)param_3;
  puStack_94 = (undefined *)param_2;
  uStack_98 = 0x512cc7;
  FUN_005b7790();
  ExceptionList = pvStack_c;
  return;
}

