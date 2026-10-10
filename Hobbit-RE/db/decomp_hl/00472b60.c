
void __thiscall FUN_00472b60(int param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    piVar6 = *(int **)(param_1 + 0xec);
    do {
      iVar3 = *(int *)(*piVar6 + 0x30);
      if ((((iVar3 != 0) && (*(short *)(iVar3 + 0xe) == *(short *)(param_1 + 0x18e))) &&
          ((*(ushort *)(iVar3 + 0x10) & 1) != 0)) && ((*(ushort *)(iVar3 + 0x10) & 4) == 0))
      goto LAB_00472c70;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xe8));
  }
  FUN_0064e870(6,s___>Ending_Shot__d_00727ad0,(int)*(short *)(param_1 + 0x18e));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      piVar6 = *(int **)(*(int *)(param_1 + 0xec) + iVar5 * 4);
      if (((*piVar6 == 9) && (iVar3 = piVar6[0xc], iVar3 != 0)) &&
         ((*(short *)(iVar3 + 0xe) == *(short *)(param_1 + 0x18e) &&
          (((*(byte *)(iVar3 + 0x54) & 4) != 0 &&
           (iVar3 = FUN_004021c0(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24)),
           iVar3 != 0)))))) {
        FUN_004d22c0(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xe8));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined2 *)(param_1 + 0x18e) =
         *(undefined2 *)(*(short *)(param_1 + 0x18e) * 0x3c + 0x2c + *(int *)(param_1 + 0xb4));
  }
  if ((int)*(short *)(param_1 + 0x18e) == *(int *)(param_1 + 0xb0)) {
    if ((*(byte *)(param_1 + 0x194) & 4) != 0) {
      FUN_0046aa20();
      return;
    }
  }
  else {
LAB_00472c70:
    if (*(int *)(param_1 + 400) != (int)*(short *)(param_1 + 0x18e)) {
      FUN_00472b20((int)*(short *)(param_1 + 0x18e));
      *(int *)(param_1 + 400) = (int)*(short *)(param_1 + 0x18e);
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      FUN_0064e870(6,s___>Starting_Shot__d_00727ab8,(int)*(short *)(param_1 + 0x18e));
    }
    local_4 = 0;
    *(float *)(param_1 + 0x1b8) = param_2 + *(float *)(param_1 + 0x1b8);
    if (0 < *(int *)(param_1 + 0xcc)) {
      param_2 = 0.0;
      do {
        iVar5 = *(int *)(param_1 + 0xd0) + (int)param_2;
        if ((*(short *)(*(int *)(param_1 + 0xd0) + 0x38 + (int)param_2) ==
             *(short *)(param_1 + 0x18e)) && ((*(ushort *)(iVar5 + 0x3a) & 1) == 0)) {
          if (*(int *)(iVar5 + 0x2c) == 0) {
            if (*(float *)(iVar5 + 0x34) <= *(float *)(param_1 + 0x1b8)) goto LAB_00472d73;
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + *(int *)(iVar5 + 0x30) * 4) + 0x30)
            ;
            if ((*(ushort *)(iVar3 + 0x10) & 2) != 0) {
              if ((*(ushort *)(iVar5 + 0x3a) & 2) == 0) {
                if (*(float *)(iVar5 + 0x34) <= *(float *)(iVar3 + 0x14)) {
LAB_00472d73:
                  iVar3 = 0;
                  if (0 < *(int *)(param_1 + 0xe8)) {
                    do {
                      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xec) + iVar3 * 4);
                      piVar6 = (int *)puVar1[0xc];
                      if ((piVar6 != (int *)0x0) && ((short)piVar6[3] == local_4)) {
                        uVar4 = FUN_0046a510(*puVar1);
                        FUN_0064e870(6,s_CINEMA__starting_action__s_00727a9c,uVar4);
                        (**(code **)(*piVar6 + 4))();
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar3 < *(int *)(param_1 + 0xe8));
                  }
                  *(byte *)(iVar5 + 0x3a) = *(byte *)(iVar5 + 0x3a) | 1;
                }
              }
              else {
                fVar2 = *(float *)(iVar3 + 8) + *(float *)(iVar5 + 0x34);
                if ((fVar2 < *(float *)(iVar3 + 0x14) != (fVar2 == *(float *)(iVar3 + 0x14))) &&
                   ((*(float *)(iVar5 + 0x34) < DAT_006e92e4 ||
                    ((*(ushort *)(iVar3 + 0x10) & 4) != 0)))) goto LAB_00472d73;
              }
            }
          }
        }
        local_4 = local_4 + 1;
        param_2 = (float)((int)param_2 + 0x40);
      } while (local_4 < *(int *)(param_1 + 0xcc));
    }
  }
  return;
}

