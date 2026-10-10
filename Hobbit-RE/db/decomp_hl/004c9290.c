
void __thiscall FUN_004c9290(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_28;
  float local_1c;
  float local_14;
  undefined4 local_4;
  
  FUN_004c8a20();
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x124),s_C__projects_meridian_Support_Obj_0072d0f8,0x31b);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 200);
  }
  piVar1 = (int *)(param_1 + 0x120);
  FUN_004c9220(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0xcc),piVar1,&local_40);
  iVar8 = thunk_FUN_0064ff70(*piVar1 * 0x2c,s_C__projects_meridian_Support_Obj_0072d0f8,0x32d);
  *(int *)(param_1 + 0x124) = iVar8;
  *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x124);
  *(undefined4 *)(iVar8 + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x24) = 0;
  param_2 = 1;
  if (1 < *piVar1) {
    do {
      iVar8 = param_2 * 0x2c;
      puVar2 = (undefined4 *)(iVar8 + 0x18 + *(int *)(param_1 + 0x124));
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      uVar5 = local_40;
      if (param_2 != 1) {
        uVar5 = *(undefined4 *)(param_1 + 0xcc);
      }
      *(undefined4 *)(iVar8 + 0x24 + *(int *)(param_1 + 0x124)) = uVar5;
      if (*(int *)(param_1 + 0xc4) == 0) {
        iVar9 = iVar8 + *(int *)(param_1 + 0x124);
        local_14 = -*(float *)(iVar8 + 0x24 + *(int *)(param_1 + 0x124));
        local_4 = *(undefined4 *)(iVar9 + -0x18);
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar9 + -0x20);
        *(undefined4 *)(iVar9 + 0x14) = local_4;
        *(float *)(iVar9 + 0x10) = local_14 + *(float *)(iVar9 + -0x1c);
      }
      else {
        local_28 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb0);
        pfVar3 = (float *)(iVar8 + 0xc + *(int *)(param_1 + 0x124));
        fVar6 = (float)param_2 / (float)(*piVar1 + -1);
        local_3c = (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa8)) * fVar6;
        local_38 = (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xac)) * fVar6;
        fVar4 = *(float *)(param_1 + 0xac);
        local_1c = local_28 * fVar6 + *(float *)(param_1 + 0xb0);
        *pfVar3 = local_3c + *(float *)(param_1 + 0xa8);
        pfVar3[2] = local_1c;
        pfVar3[1] = local_38 + fVar4;
      }
      param_2 = param_2 + 1;
    } while (param_2 < *piVar1);
  }
  FUN_004c8c80();
  FUN_004c8aa0();
  FUN_004cafe0();
  *(undefined4 *)(param_1 + 0x128) = 1;
  if ((*(int *)(param_1 + 0xc4) != 0) &&
     (fVar4 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa8),
     fVar6 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xac),
     fVar7 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb0),
     fVar4 = fVar4 * fVar4 + fVar7 * fVar7, fVar6 = fVar6 * fVar6,
     fVar6 < fVar4 != (NAN(fVar6) || NAN(fVar4)))) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN_004c8770(0xffffffff);
  return;
}

