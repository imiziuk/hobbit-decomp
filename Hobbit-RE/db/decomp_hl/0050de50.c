
void __fastcall FUN_0050de50(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  undefined1 auStack_144 [64];
  undefined4 uStack_104;
  uint uStack_e0;
  uint uStack_dc;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6efe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x5d] == 0) {
LAB_0050e165:
    if (param_1[100] != 0) goto LAB_0050e190;
  }
  else {
    ExceptionList = &pvStack_c;
    if (param_1[100] != 0) {
      uStack_dc = 0;
      uStack_e0 = 0;
      bVar2 = false;
      puStack_bc = (undefined4 *)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_b4 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      iStack_4 = 0;
      ExceptionList = &pvStack_c;
      puVar3 = (undefined4 *)operator_new(4);
      FUN_006bf840();
      uStack_b8 = 1;
      *puVar3 = 3;
      uStack_c0 = 1;
      uStack_104 = 0x50deee;
      puStack_bc = puVar3;
      puVar4 = (undefined4 *)operator_new(8);
      iVar8 = 1;
      puVar5 = puVar4;
      do {
        *puVar5 = *(undefined4 *)(((int)puVar3 - (int)puVar4) + (int)puVar5);
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      FUN_006bf840();
      uStack_b8 = 2;
      uStack_c0 = 2;
      puVar4[1] = 4;
      iStack_d0 = 0;
      puStack_bc = puVar4;
      do {
        if (bVar2) break;
        if (puVar4[iStack_d0] == 3) {
          uStack_dc = 0x5b;
          uStack_e0 = 0x7e;
        }
        else if (puVar4[iStack_d0] == 4) {
          uStack_dc = 0x80;
          uStack_e0 = 0x87;
        }
        bVar1 = uStack_dc <= uStack_e0;
        uVar9 = uStack_dc;
        while ((bVar1 && (!bVar2))) {
          iVar8 = FUN_00670ef0();
          if (iVar8 != 0) {
            FUN_0042b820();
            FUN_006ab170();
            FUN_0064b0f0();
            iStack_4._0_1_ = 1;
            iVar8 = 0;
            uStack_cc = 0;
            piVar7 = param_1 + 0x66;
            do {
              if ((param_1[0x5d] == *piVar7) &&
                 (param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar8) * 3] != uVar9)) {
                puStack_ac = auStack_144;
                FUN_0064b170(param_1 + iVar8 * 0x39 + param_1[0x7d6] * 0x13b + 0x87);
                iVar6 = (**(code **)(*param_1 + 0x9c))
                                  (&uStack_cc,uVar9,
                                   param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar8) * 3]);
                if (iVar6 != 0) {
                  FUN_0064b170();
                  iStack_4._0_1_ = 2;
                  (**(code **)(*(int *)param_1[0x5d] + 0x20))();
                  iStack_4._0_1_ = 1;
                  FUN_0064b190();
                  FUN_006a3240();
                  FUN_0064b7f0();
                  param_1[(param_1[0x7d6] * 0x69 + 0x86 + iVar8) * 3] = uVar9;
                  param_1[0x5f] = 1;
                }
                break;
              }
              iVar8 = iVar8 + 1;
              piVar7 = piVar7 + 3;
            } while (iVar8 < 5);
            bVar2 = true;
            iStack_4 = (uint)iStack_4._1_3_ << 8;
            FUN_0064b190();
          }
          uVar9 = uVar9 + 1;
          bVar1 = (int)uVar9 <= (int)uStack_e0;
        }
        iStack_d0 = iStack_d0 + 1;
      } while (iStack_d0 < 2);
      iStack_4 = 0xffffffff;
      FUN_006bf840();
      goto LAB_0050e165;
    }
  }
  fVar10 = (float10)FUN_00671130();
  param_1[100] = (uint)((NAN(fVar10) || NAN((float10)DAT_006e92e4)) !=
                       (fVar10 == (float10)DAT_006e92e4));
LAB_0050e190:
  FUN_005b7790();
  ExceptionList = pvStack_c;
  return;
}

