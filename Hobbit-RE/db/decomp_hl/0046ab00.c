
void __fastcall thunk_FUN_00473020(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((*(short *)(param_1 + 0x18e) != -1) &&
     ((int)*(short *)(param_1 + 0x18e) < *(int *)(param_1 + 0xb0))) {
    iVar8 = 0;
    fStack_14 = 0.0;
    if (0 < *(int *)(param_1 + 0xe8)) {
      do {
        piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar8 * 4) + 0x30);
        if ((((piVar9 != (int *)0x0) && ((*(ushort *)(piVar9 + 4) & 2) != 0)) &&
            ((*(ushort *)(piVar9 + 4) & 4) == 0)) &&
           (fVar10 = (float10)(**(code **)(*piVar9 + 0x34))(), (float10)fStack_14 <= fVar10)) {
          fStack_14 = (float)fVar10;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0xe8));
    }
    sVar7 = *(short *)(param_1 + 0x18e);
    iVar5 = (int)sVar7;
    iVar8 = 1000;
    if (iVar5 != *(int *)(param_1 + 0xb0)) {
      while (iVar8 = iVar8 + -1, 0 < iVar8) {
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0xe8)) {
          piVar9 = *(int **)(param_1 + 0xec);
          do {
            iVar2 = *(int *)(*piVar9 + 0x30);
            if (((iVar2 != 0) && (*(short *)(iVar2 + 0xe) == sVar7)) &&
               ((*(byte *)(iVar2 + 0x10) & 4) == 0)) goto LAB_004731a7;
            iVar6 = iVar6 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar6 < *(int *)(param_1 + 0xe8));
        }
        FUN_0064e870(6,s___><SKIP>Ending_Shot__d_00727b24,iVar5);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0xe8)) {
          do {
            piVar9 = *(int **)(*(int *)(param_1 + 0xec) + iVar5 * 4);
            if (((*piVar9 == 9) && (iVar6 = piVar9[0xc], iVar6 != 0)) &&
               ((*(short *)(iVar6 + 0xe) == *(short *)(param_1 + 0x18e) &&
                (((*(byte *)(iVar6 + 0x54) & 4) != 0 &&
                 (iVar6 = FUN_004021c0(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x24)),
                 iVar6 != 0)))))) {
              FUN_004d22c0(1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0xe8));
        }
        if (*(int *)(param_1 + 0xb0) != 0) {
          *(undefined2 *)(param_1 + 0x18e) =
               *(undefined2 *)(*(short *)(param_1 + 0x18e) * 0x3c + 0x2c + *(int *)(param_1 + 0xb4))
          ;
        }
        iVar5 = (int)*(short *)(param_1 + 0x18e);
        if (iVar5 == *(int *)(param_1 + 0xb0)) {
          *(float *)(param_1 + 0x1b8) = fStack_14 + *(float *)(param_1 + 0x1b8);
          if ((*(byte *)(param_1 + 0x194) & 4) == 0) {
            return;
          }
          FUN_0046aa20();
          return;
        }
LAB_004731a7:
        if (*(int *)(param_1 + 400) != iVar5) {
          FUN_00472b20(iVar5);
          *(int *)(param_1 + 400) = (int)*(short *)(param_1 + 0x18e);
          *(undefined4 *)(param_1 + 0x1b8) = 0;
          FUN_0064e870(6,s___><SKIP>Starting_Shot__d_00727b08,(int)*(short *)(param_1 + 0x18e));
        }
        iStack_c = 0;
        if (0 < *(int *)(param_1 + 0xcc)) {
          iStack_8 = 0;
          do {
            iVar5 = *(int *)(param_1 + 0xd0) + iStack_8;
            fStack_10 = 0.0;
            if (((*(short *)(*(int *)(param_1 + 0xd0) + 0x38 + iStack_8) <=
                  *(short *)(param_1 + 0x18e)) && ((*(byte *)(iVar5 + 0x3a) & 1) == 0)) &&
               (iVar6 = FUN_00472fc0(iStack_c), iVar6 != 0)) {
              iVar6 = 0;
              if (0 < *(int *)(param_1 + 0xe8)) {
                do {
                  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0xec) + iVar6 * 4);
                  piVar9 = (int *)puVar3[0xc];
                  if ((piVar9 != (int *)0x0) && ((short)piVar9[3] == iStack_c)) {
                    uVar4 = FUN_0046a510(*puVar3);
                    FUN_0064e870(6,s_CINEMA__<SKIP>starting_action__s_00727ae4,uVar4);
                    fVar10 = (float10)(**(code **)(*piVar9 + 0x34))();
                    if ((float10)fStack_10 <= fVar10) {
                      fStack_10 = (float)fVar10;
                    }
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(param_1 + 0xe8));
              }
              pbVar1 = (byte *)(iVar5 + 0x3a);
              *pbVar1 = *pbVar1 | 1;
              fStack_14 = fStack_10 + fStack_14;
            }
            iStack_c = iStack_c + 1;
            iStack_8 = iStack_8 + 0x40;
          } while (iStack_c < *(int *)(param_1 + 0xcc));
        }
        sVar7 = *(short *)(param_1 + 0x18e);
        iVar5 = (int)sVar7;
        if (iVar5 == *(int *)(param_1 + 0xb0)) {
          return;
        }
      }
    }
  }
  return;
}

