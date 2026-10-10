
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00401b40(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float *local_34;
  int local_30;
  float *pfStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cea50;
  pvStack_c = ExceptionList;
  puVar9 = (uint *)(param_1 + 0x108);
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x108) == 0 && *(int *)(param_1 + 0x10c) == 0) {
    ExceptionList = &pvStack_c;
    piVar3 = (int *)FUN_0054c0f0(s_MineCartA_0071cf38,1);
    iVar4 = piVar3[3];
    *puVar9 = piVar3[2];
    *(int *)(param_1 + 0x10c) = iVar4;
    (**(code **)(*piVar3 + 0x8c))(1,0xffffffff);
    piVar3 = (int *)FUN_0054c0f0(s_MineCartA002_0071cf28,1);
    iVar4 = piVar3[3];
    *(int *)(param_1 + 0x110) = piVar3[2];
    *(int *)(param_1 + 0x114) = iVar4;
    (**(code **)(*piVar3 + 0x8c))(1,0xffffffff);
    piVar3 = (int *)FUN_0054c0f0(s_MineCartA1_0071cf1c,1);
    iVar4 = piVar3[3];
    *(int *)(param_1 + 0x118) = piVar3[2];
    *(int *)(param_1 + 0x11c) = iVar4;
    (**(code **)(*piVar3 + 0x8c))(1,0xffffffff);
  }
  puVar10 = (undefined4 *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x150) == 0 && *(int *)(param_1 + 0x154) == 0) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      FUN_00649920(&local_30,s_Track_Gate_00_i_0071cf0c,iVar4);
      uVar11 = 1;
      local_4 = 0;
      uVar5 = FUN_00649940(1);
      iVar6 = FUN_0054c0f0(uVar5,uVar11);
      local_4 = 0xffffffff;
      FUN_00649950();
      uVar5 = *(undefined4 *)(iVar6 + 0xc);
      *puVar10 = *(undefined4 *)(iVar6 + 8);
      puVar10[1] = uVar5;
      puVar10 = puVar10 + 2;
    } while (iVar4 < 7);
  }
  iVar4 = 7;
  pfVar7 = (float *)(param_1 + 0x188);
  do {
    iVar4 = iVar4 + -1;
    *pfVar7 = param_2 + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar4 != 0);
  piVar3 = (int *)FUN_0041bcc0();
  pfStack_2c = (float *)(**(code **)(*piVar3 + 0x28))();
  pfVar7 = (float *)(param_1 + 0x144);
  local_34 = (float *)(param_1 + 0x128);
  local_30 = 3;
  do {
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    *pfVar7 = param_2 + *pfVar7;
    uStack_28 = uVar1;
    uStack_24 = uVar2;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
    for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
    }
    while (iVar6 != -1) {
      piVar3 = (int *)(DAT_0076f648 + iVar6 * 0x14);
      iVar4 = *piVar3;
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uStack_28)) &&
         (*(uint *)(iVar4 + 0xc) == uStack_24)) {
        if (iVar6 != -1) {
          uVar1 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          local_4 = 0xffffffff;
          piVar3 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
          FUN_00649720();
          if (piVar3 != (int *)0x0) {
            pfVar8 = (float *)(**(code **)(*piVar3 + 0x28))();
            if ((_DAT_006e92f4 < *pfVar7) &&
               ((*pfStack_2c - *pfVar8) * (*pfStack_2c - *pfVar8) +
                (pfStack_2c[1] - pfVar8[1]) * (pfStack_2c[1] - pfVar8[1]) +
                (pfStack_2c[2] - pfVar8[2]) * (pfStack_2c[2] - pfVar8[2]) <=
                DAT_0071ccb0 * DAT_0071ccb0)) {
              FUN_0054d020(*puVar9,puVar9[1],pfVar8,DAT_0071ccb0,0x43480000,0x41200000,0,0xffffffff,
                           0,0,0);
              *pfVar7 = 0.0;
            }
            iVar4 = 0;
            do {
              FUN_004016e0(iVar4,pfVar8);
              iVar4 = iVar4 + 1;
            } while (iVar4 < 7);
            local_34[-2] = *pfVar8;
            local_34[-1] = pfVar8[1];
            *local_34 = pfVar8[2];
          }
          goto LAB_00401e69;
        }
        break;
      }
      iVar6 = (int)*(short *)((int)piVar3 + 0xe);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
LAB_00401e69:
    pfVar7 = pfVar7 + 1;
    local_34 = local_34 + 3;
    puVar9 = puVar9 + 2;
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      FUN_00404a40(auStack_18);
      iVar4 = 0;
      do {
        FUN_004016e0(iVar4,auStack_18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 7);
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

