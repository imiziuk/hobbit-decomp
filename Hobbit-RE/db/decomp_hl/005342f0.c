
void __thiscall
FUN_005342f0(int param_1,float param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            undefined4 *param_7,int *param_8,undefined4 *param_9,undefined4 *param_10)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  short sVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  piVar8 = (int *)FUN_0041bcc0();
  uVar9 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_Obj_00737238,0x199);
  sVar7 = FUN_0054c7c0();
  do {
    if (sVar7 < 0) {
      FUN_0054c880(uVar9);
      *param_10 = *(undefined4 *)(param_1 + 0x300);
      if (*(float *)(param_1 + 0x304) <= *(float *)(param_1 + 0x300)) {
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x300);
      }
      return;
    }
    if (sVar7 == -1) {
      piVar13 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + sVar7 * 0x14);
      if (uVar1 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    pfVar10 = (float *)(**(code **)(*piVar13 + 0x28))();
    fVar2 = *pfVar10;
    fVar3 = pfVar10[1];
    fVar4 = pfVar10[2];
    pfVar10 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar3 = fVar3 - pfVar10[1];
    fVar5 = fVar3;
    if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
      fVar5 = -fVar3;
    }
    fVar2 = SQRT((fVar2 - *pfVar10) * (fVar2 - *pfVar10) +
                 fVar3 * fVar3 + (fVar4 - pfVar10[2]) * (fVar4 - pfVar10[2]));
    if ((((fVar2 < param_2 != (NAN(fVar2) || NAN(param_2))) &&
         (fVar5 < *(float *)(param_1 + 0x260) != (NAN(fVar5) || NAN(*(float *)(param_1 + 0x260)))))
        || (iVar11 = FUN_004a12e0(), iVar11 != 0)) && (piVar13[0x69] == 2)) {
      *param_3 = *param_3 + 1;
      iVar11 = (**(code **)(*piVar13 + 0x108))(0);
      piVar12 = param_5;
      if (iVar11 != 0) {
        *(float *)(param_1 + 0x300) =
             *(float *)(&DAT_00764600 + piVar13[0x6c] * 4) + *(float *)(param_1 + 0x300);
        *param_4 = *param_4 + 1;
        lVar6 = *(longlong *)(piVar8 + 2);
        lVar14 = FUN_004a4160();
        if (lVar14 == lVar6) {
          *param_6 = *param_6 + 1;
        }
        iVar11 = FUN_00587ce0();
        piVar12 = param_8;
        if (iVar11 != 0x12) goto LAB_005344c4;
      }
      *piVar12 = *piVar12 + 1;
    }
LAB_005344c4:
    sVar7 = FUN_0054c7c0();
  } while( true );
}

