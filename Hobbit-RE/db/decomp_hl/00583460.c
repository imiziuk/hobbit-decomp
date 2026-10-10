
undefined4 FUN_00583460(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc158;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_LightTouchFunc_00740750);
  uVar1 = *(ushort *)(param_1 + 0x12);
  local_4 = 0;
  do {
    uVar7 = (uint)uVar1;
    if (uVar7 == 0xffff) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar2 = *(int *)(&DAT_007782dc + ((int)uVar7 >> 10) * 4);
    piVar3 = *(int **)(iVar2 + 8 + (uVar7 & 0x3ff) * 0xc);
    if (((piVar3[4] & 0x1c50U) != 0) && ((param_2[3] & piVar3[4]) != 0)) {
      pfVar4 = (float *)*param_2;
      if ((float)piVar3[0x11] <= pfVar4[3]) {
        if ((float)piVar3[0x14] < *pfVar4 == (NAN((float)piVar3[0x14]) || NAN(*pfVar4))) {
          if ((float)piVar3[0x13] <= pfVar4[5]) {
            if ((float)piVar3[0x16] < pfVar4[2] == (NAN((float)piVar3[0x16]) || NAN(pfVar4[2]))) {
              if ((float)piVar3[0x12] <= pfVar4[4]) {
                if ((float)piVar3[0x15] < pfVar4[1] == (NAN((float)piVar3[0x15]) || NAN(pfVar4[1])))
                {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
              }
              else {
                bVar5 = false;
              }
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = false;
          }
        }
        else {
          bVar5 = false;
        }
      }
      else {
        bVar5 = false;
      }
      pfVar4 = (float *)param_2[1];
      if ((((pfVar4[3] < (float)piVar3[0x11]) ||
           ((float)piVar3[0x14] < *pfVar4 != (NAN((float)piVar3[0x14]) || NAN(*pfVar4)))) ||
          (pfVar4[5] < (float)piVar3[0x13])) ||
         ((((float)piVar3[0x16] < pfVar4[2] != (NAN((float)piVar3[0x16]) || NAN(pfVar4[2])) ||
           (pfVar4[4] < (float)piVar3[0x12])) ||
          ((float)piVar3[0x15] < pfVar4[1] != (NAN((float)piVar3[0x15]) || NAN(pfVar4[1])))))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        if (!bVar5) {
          (**(code **)(*piVar3 + 0x9c))(1);
          goto LAB_005835ee;
        }
      }
      iVar8 = (**(code **)(*piVar3 + 0xa0))(*(undefined2 *)(param_2 + 2));
      if (iVar8 == 0) {
        if (bVar6) {
          (**(code **)(*piVar3 + 0x9c))(1);
        }
      }
      else if (!bVar6) {
        (**(code **)(*piVar3 + 0x9c))(1);
      }
    }
LAB_005835ee:
    uVar1 = *(ushort *)(iVar2 + (uVar7 & 0x3ff) * 0xc);
  } while( true );
}

