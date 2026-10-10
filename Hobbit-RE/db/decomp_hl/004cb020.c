
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004cb020(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [12];
  undefined4 local_5c [8];
  undefined4 local_3c;
  undefined2 local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4b30;
  local_c = ExceptionList;
  uVar6 = *(undefined4 *)(param_1 + 0x168);
  uVar1 = *(undefined4 *)(param_1 + 0x16c);
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar3 = FUN_00406ce0(uVar6,uVar1);
  local_4 = 0xffffffff;
  if (iVar3 == -1) {
    FUN_00649720();
  }
  else {
    uVar8 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
    uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
    FUN_00649720();
    if ((uVar8 != 0) && ((*(byte *)(uVar8 + 0x7f) & 0x10) != 0)) {
      if ((*(uint *)(uVar8 + 0x10) & 0x1000) == 0) {
        pfVar4 = (float *)FUN_00402130(local_68,uVar8 + 0x44,uVar8 + 0x50);
        FUN_00401f00(*pfVar4 * _DAT_006e936c,pfVar4[1] * _DAT_006e936c,pfVar4[2] * _DAT_006e936c);
        ExceptionList = local_c;
        return param_2;
      }
      if ((*(byte *)(uVar8 + 0x126) & 1) != 0) {
        *param_2 = *(undefined4 *)(param_1 + 0x14);
        param_2[1] = *(undefined4 *)(param_1 + 0x18);
        param_2[2] = *(undefined4 *)(param_1 + 0x1c);
        ExceptionList = local_c;
        return param_2;
      }
      piVar5 = (int *)FUN_004c74b0();
      if (piVar5 == (int *)0x0) {
        FUN_00401f00(*(float *)(uVar8 + 0x44) + *(float *)(uVar8 + 0x50),
                     *(float *)(uVar8 + 0x54) + *(float *)(uVar8 + 0x48),
                     *(float *)(uVar8 + 0x58) + *(float *)(uVar8 + 0x4c));
        FUN_00402160(param_2,&local_74,0x3f000000);
        ExceptionList = local_c;
        return param_2;
      }
      uVar2 = piVar5[1] * 2;
      if (((uVar2 ^ piVar5[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
        iVar3 = *piVar5;
      }
      else {
        iVar3 = FUN_00549470(piVar5 + 1);
      }
      puVar9 = (undefined4 *)(piVar5[2] * 0x50 + *(int *)(iVar3 + 0x58));
      puVar10 = puVar9;
      puVar11 = local_5c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_3c = puVar9[8];
      local_38 = *(undefined2 *)(puVar9 + 9);
      local_36 = *(short *)((int)puVar9 + 0x26);
      local_34 = *(undefined2 *)(puVar9 + 10);
      local_32 = *(undefined2 *)((int)puVar9 + 0x2a);
      local_30 = *(undefined2 *)(puVar9 + 0xb);
      local_2e = *(undefined1 *)((int)puVar9 + 0x2e);
      local_2d = *(undefined1 *)((int)puVar9 + 0x2f);
      local_2c = *(undefined2 *)(puVar9 + 0xc);
      local_2a = *(undefined2 *)((int)puVar9 + 0x32);
      local_28 = *(undefined2 *)(puVar9 + 0xd);
      FUN_004357e0(puVar9 + 0xe);
      local_18 = puVar9[0x11];
      local_14 = puVar9[0x12];
      local_10 = *(undefined2 *)(puVar9 + 0x13);
      iVar3 = 0;
      local_4 = 1;
      if (0 < local_36) {
        do {
          uVar6 = FUN_0053f1b0();
          iVar7 = FUN_00647ed0(&DAT_0072d334,uVar6);
          if (iVar7 == 0) {
            FUN_0053c3a0(&local_74,iVar3);
            *param_2 = local_74;
            param_2[1] = local_70;
            param_2[2] = local_6c;
            goto LAB_004cb338;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_36);
      }
      FUN_00401f00(*(float *)(uVar8 + 0x50) + *(float *)(uVar8 + 0x44),
                   *(float *)(uVar8 + 0x54) + *(float *)(uVar8 + 0x48),
                   *(float *)(uVar8 + 0x58) + *(float *)(uVar8 + 0x4c));
      FUN_00402160(param_2,local_68,0x3f000000);
LAB_004cb338:
      local_4 = 0xffffffff;
      FUN_00544b20();
      ExceptionList = local_c;
      return param_2;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return param_2;
}

