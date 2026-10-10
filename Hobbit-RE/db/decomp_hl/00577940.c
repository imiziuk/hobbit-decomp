
undefined4 FUN_00577940(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_CheckCollSDFunc_00740224);
  param_1 = (ushort *)((int)param_1 + 0x12);
  local_4 = 0;
  local_24 = 0;
  do {
    if ((param_2[3] & 1 << ((byte)local_24 & 0x1f)) != 0) {
      uVar1 = *param_1;
      while (uVar5 = (uint)uVar1, uVar5 != 0xffff) {
        iVar2 = *(int *)(&DAT_007782dc + ((int)uVar5 >> 10) * 4);
        iVar3 = *(int *)(iVar2 + 8 + (uVar5 & 0x3ff) * 0xc);
        iVar9 = (int)*(short *)(iVar3 + 0x78);
        if (((((*(short *)(iVar9 * 0x14 + 0xc + DAT_0076f648) == -2) &&
              ((param_2[1] & *(uint *)(iVar3 + 0x10)) != 0)) &&
             (*(float *)(iVar3 + 0x44) <= (float)param_2[7])) &&
            (((*(float *)(iVar3 + 0x50) < (float)param_2[4] ==
               (NAN(*(float *)(iVar3 + 0x50)) || NAN((float)param_2[4])) &&
              (*(float *)(iVar3 + 0x4c) <= (float)param_2[9])) &&
             ((*(float *)(iVar3 + 0x58) < (float)param_2[6] ==
               (NAN(*(float *)(iVar3 + 0x58)) || NAN((float)param_2[6])) &&
              ((*(float *)(iVar3 + 0x48) <= (float)param_2[8] &&
               (*(float *)(iVar3 + 0x54) < (float)param_2[5] ==
                (NAN(*(float *)(iVar3 + 0x54)) || NAN((float)param_2[5])))))))))) &&
           (iVar9 != param_2[2])) {
          uVar1 = *(ushort *)(iVar3 + 0x7a);
          uVar6 = uVar1 & 4;
          bVar4 = false;
          if ((uVar1 & 4) == 0) {
            if (param_2[0xb] == 0x12) {
              uVar6 = uVar1 & 0x200;
            }
            else if (param_2[0xb] == 0x1c) {
              uVar6 = uVar1 & 0x400;
            }
            if (uVar6 != 0) goto LAB_00577aa3;
          }
          else {
LAB_00577aa3:
            bVar4 = true;
          }
          if (((param_2[10] == 3) || (param_2[0xc] != 0)) && (iVar7 = FUN_004ab440(), iVar7 == 0)) {
            bVar4 = true;
          }
          iVar7 = param_2[0xe];
          if (iVar7 != 0) {
            if (0 < iVar7) {
              piVar8 = (int *)param_2[0xd];
              do {
                if ((*(int *)(iVar3 + 8) == *piVar8) && (*(int *)(iVar3 + 0xc) == piVar8[1])) {
                  bVar4 = true;
                }
                piVar8 = piVar8 + 2;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
          if (!bVar4) {
            *(short *)(iVar9 * 0x14 + 0xc + DAT_0076f648) = (short)*param_2;
            *param_2 = iVar9;
          }
        }
        uVar1 = *(ushort *)(iVar2 + (uVar5 & 0x3ff) * 0xc);
      }
    }
    local_24 = local_24 + 1;
    param_1 = param_1 + 1;
    if (3 < local_24) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}

