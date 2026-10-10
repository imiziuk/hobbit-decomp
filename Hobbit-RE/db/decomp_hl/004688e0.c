
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004688e0(int param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int *piVar9;
  longlong lVar10;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [4];
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0de8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_CharacterObject__SolvePersonalSp_0072685c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_00401f00(*(float *)(param_1 + 0x14) - _DAT_006e9994,*(float *)(param_1 + 0x18) - _DAT_006e9348
               ,*(float *)(param_1 + 0x1c) - _DAT_006e9994);
  local_24 = local_3c;
  local_20 = local_38;
  local_1c = local_34;
  FUN_00405080(local_30,param_1 + 0x50,param_1 + 0x44);
  FUN_00401f00(*(float *)(param_1 + 0x14) + _DAT_006e9994,local_2c + *(float *)(param_1 + 0x18),
               *(float *)(param_1 + 0x1c) + _DAT_006e9994);
  local_18 = local_3c;
  local_14 = local_38;
  local_10 = local_34;
  lVar10 = FUN_0041bcd0();
  iVar6 = (int)*(short *)(&DAT_0076cd88 +
                         (((uint)lVar10 ^ (uint)((ulonglong)lVar10 >> 0x20)) * -0xfb & 0xfff) * 2);
  for (iVar7 = iVar6; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
  }
  while (iVar6 != -1) {
    piVar9 = (int *)(DAT_0076f648 + iVar6 * 0x14);
    iVar7 = *piVar9;
    if ((iVar7 != 0) && (lVar10 == *(longlong *)(iVar7 + 8))) break;
    iVar6 = (int)*(short *)((int)piVar9 + 0xe);
  }
  uVar4 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_Obj_00726818,0x561);
  sVar8 = (short)iVar6;
  while (-1 < sVar8) {
    if ((short)iVar6 == -1) {
      piVar9 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + (short)iVar6 * 0x14);
      if (uVar1 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    if (piVar9 != (int *)0x0) {
      if ((((piVar9[2] != *(int *)(param_1 + 8)) || (piVar9[3] != *(int *)(param_1 + 0xc))) &&
          (iVar7 = (**(code **)(*piVar9 + 0x108))(1), iVar7 != 0)) &&
         (iVar7 = (**(code **)(*piVar9 + 0x120))(*(undefined1 *)(param_1 + 0x7c)), iVar7 != 0)) {
        pfVar5 = (float *)(**(code **)(*piVar9 + 0x28))();
        FUN_00401f00(*param_2 - *pfVar5,param_2[1] - pfVar5[1],param_2[2] - pfVar5[2]);
        local_38 = 0.0;
        fVar2 = local_3c * local_3c + local_34 * local_34;
        fVar3 = (float)piVar9[0x3b] + *(float *)(param_1 + 0xec);
        if (((((fVar2 < fVar3 * fVar3) &&
              ((float)piVar9[0x15] < *(float *)(param_1 + 0x48) ==
               (NAN((float)piVar9[0x15]) || NAN(*(float *)(param_1 + 0x48))))) &&
             ((*(float *)(param_1 + 0x54) < (float)piVar9[0x12] ==
               (NAN(*(float *)(param_1 + 0x54)) || NAN((float)piVar9[0x12])) &&
              ((local_24 <= (float)piVar9[0x14] &&
               (local_18 < (float)piVar9[0x11] == (NAN(local_18) || NAN((float)piVar9[0x11]))))))))
            && (local_1c <= (float)piVar9[0x16])) &&
           (((local_10 < (float)piVar9[0x13] == (NAN(local_10) || NAN((float)piVar9[0x13])) &&
             (local_20 <= (float)piVar9[0x15])) &&
            (local_14 < (float)piVar9[0x12] == (NAN(local_14) || NAN((float)piVar9[0x12])))))) {
          iVar7 = piVar9[3];
          *(int *)(param_1 + 0x248) = piVar9[2];
          *(int *)(param_1 + 0x24c) = iVar7;
          FUN_004357e0(&local_3c);
          FUN_00468ca0(fVar3 - SQRT(fVar2));
          FUN_00469060(param_2,local_30,0,0xbf800000,0,0,1);
        }
      }
    }
    iVar6 = FUN_0054c7c0();
    sVar8 = (short)iVar6;
  }
  FUN_0054c880(uVar4);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

