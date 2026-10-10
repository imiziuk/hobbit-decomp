
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c8dd0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((NAN(*(float *)(param_1 + 0x130)) || NAN(*(float *)(param_1 + 0x134))) !=
       (*(float *)(param_1 + 0x130) == *(float *)(param_1 + 0x134))) && (param_2 == 0.0)) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
    return;
  }
  if (*(float *)(param_1 + 0x130) <= *(float *)(param_1 + 0x134)) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      if (*(int *)(param_1 + 0x188) == 2) {
        FUN_00659600(s_ChainLower_0072d164,1);
      }
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
    local_14 = *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0x13c) +
               *(float *)(param_1 + 0x130);
    if (*(float *)(param_1 + 0x134) < local_14) {
      local_14 = *(float *)(param_1 + 0x134);
    }
    FUN_004c9220(local_14,*(undefined4 *)(param_1 + 0xcc),&param_2,&local_18);
    if (param_2 == *(float *)(param_1 + 0x120)) {
      *(float *)(*(int *)(param_1 + 0x124) + 0x50) = local_18;
      fVar4 = local_14;
    }
    else {
      local_10 = (float)thunk_FUN_0064ff70((int)param_2 * 0x2c,
                                           s_C__projects_meridian_Support_Obj_0072d0f8,0x2da);
      iVar8 = (int)param_2 - *(int *)(param_1 + 0x120);
      if (iVar8 < (int)param_2) {
        puVar6 = (undefined4 *)(iVar8 * 0x2c + 0x14 + (int)local_10);
        do {
          iVar5 = ((iVar8 - (int)param_2) + *(int *)(param_1 + 0x120)) * 0x2c;
          iVar7 = iVar5 + *(int *)(param_1 + 0x124);
          puVar6[-5] = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x124));
          puVar6[-4] = *(undefined4 *)(iVar7 + 4);
          puVar6[-3] = *(undefined4 *)(iVar7 + 8);
          puVar6[-2] = *(undefined4 *)(iVar7 + 0xc);
          puVar6[-1] = *(undefined4 *)(iVar7 + 0x10);
          *puVar6 = *(undefined4 *)(iVar7 + 0x14);
          FUN_004357e0(iVar7 + 0x18);
          puVar6[4] = *(undefined4 *)(iVar7 + 0x24);
          puVar6[5] = *(undefined4 *)(iVar7 + 0x28);
          puVar6[4] = *(undefined4 *)(param_1 + 0xcc);
          iVar8 = iVar8 + 1;
          puVar6 = puVar6 + 0xb;
        } while (iVar8 < (int)param_2);
      }
      fVar4 = local_10;
      *(undefined4 *)((int)local_10 + 0xc) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)((int)local_10 + 0x10) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)((int)local_10 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)local_10 + 0x20) = 0;
      *(undefined4 *)((int)local_10 + 0x1c) = 0;
      *(undefined4 *)((int)local_10 + 0x18) = 0;
      *(undefined4 *)((int)local_10 + 0x24) = 0;
      iVar8 = 1;
      if (1 < (int)param_2 - *(int *)(param_1 + 0x120)) {
        do {
          iVar5 = iVar8 * 0x2c + (int)local_10;
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 * 0x2c + -0x20 + (int)local_10);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + -0x1c);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + -0x18);
          *(undefined4 *)(iVar5 + 0x20) = 0;
          *(undefined4 *)(iVar5 + 0x1c) = 0;
          *(undefined4 *)(iVar5 + 0x18) = 0;
          fVar1 = local_18;
          if (iVar8 != 1) {
            fVar1 = *(float *)(param_1 + 0xcc);
          }
          *(float *)(iVar5 + 0x24) = fVar1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)param_2 - *(int *)(param_1 + 0x120));
      }
      *(float *)((int)local_10 + 0x50) = local_18;
      if (*(int *)(param_1 + 0x124) != 0) {
        FUN_0064ff40(*(int *)(param_1 + 0x124),s_C__projects_meridian_Support_Obj_0072d0f8,0x2f4);
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
      *(float *)(param_1 + 0x124) = fVar4;
      *(float *)(param_1 + 0x120) = param_2;
      fVar4 = local_14;
    }
  }
  else {
    local_18 = *(float *)(param_1 + 0x130) -
               *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x13c);
    if (local_18 < *(float *)(param_1 + 0x134) !=
        (NAN(local_18) || NAN(*(float *)(param_1 + 0x134)))) {
      local_18 = *(float *)(param_1 + 0x134);
    }
    FUN_004c9220(local_18,*(undefined4 *)(param_1 + 0xcc),&param_2,&local_14);
    if (param_2 == *(float *)(param_1 + 0x120)) {
      *(float *)(*(int *)(param_1 + 0x124) + 0x50) = local_14;
      fVar4 = local_18;
    }
    else {
      iVar8 = thunk_FUN_0064ff70((int)param_2 * 0x2c,s_C__projects_meridian_Support_Obj_0072d0f8,
                                 0x29c);
      iVar5 = 0;
      if (0 < (int)param_2) {
        puVar6 = (undefined4 *)(iVar8 + 0x14);
        do {
          puVar3 = (undefined4 *)
                   (((iVar5 - (int)param_2) + *(int *)(param_1 + 0x120)) * 0x2c +
                   *(int *)(param_1 + 0x124));
          puVar6[-5] = *puVar3;
          puVar6[-4] = puVar3[1];
          puVar6[-3] = puVar3[2];
          puVar6[-2] = puVar3[3];
          puVar6[-1] = puVar3[4];
          *puVar6 = puVar3[5];
          puVar6[1] = puVar3[6];
          puVar6[2] = puVar3[7];
          puVar6[3] = puVar3[8];
          puVar6[4] = puVar3[9];
          puVar6[5] = puVar3[10];
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 0xb;
        } while (iVar5 < (int)param_2);
      }
      *(float *)(iVar8 + 0x50) = local_14;
      if (*(int *)(param_1 + 0x124) != 0) {
        FUN_0064ff40(*(int *)(param_1 + 0x124),s_C__projects_meridian_Support_Obj_0072d0f8,0x2ab);
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
      *(int *)(param_1 + 0x124) = iVar8;
      *(float *)(param_1 + 0x120) = param_2;
      fVar4 = local_18;
    }
  }
  *(float *)(param_1 + 0x130) = fVar4;
  iVar8 = 0;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0x120);
    if (4 < iVar5) {
      iVar5 = 4;
    }
    if (iVar5 <= iVar8) break;
    fVar9 = (float10)FUN_00647b30(0,0x40c90fdb);
    local_10 = (float)fVar9;
    FUN_0064c8e0(local_10,&local_14,&param_2);
    iVar5 = *(int *)(param_1 + 0x124);
    iVar8 = iVar8 + 1;
    fVar2 = param_2 * _DAT_006e9590;
    fVar1 = local_14 * DAT_006e92e4;
    fVar4 = *(float *)(param_1 + 0x13c);
    local_c = (local_14 * _DAT_006e9590 + param_2 * DAT_006e92e4) * fVar4;
    local_8 = DAT_006e92e4 * fVar4;
    *(float *)(iVar5 + 0x44) = local_c + *(float *)(iVar5 + 0x44);
    *(float *)(iVar5 + 0x48) = local_8 + *(float *)(iVar5 + 0x48);
    *(float *)(iVar5 + 0x4c) = (fVar2 - fVar1) * fVar4 + *(float *)(iVar5 + 0x4c);
  }
  FUN_004c8c80();
  FUN_004cafe0();
  return;
}

