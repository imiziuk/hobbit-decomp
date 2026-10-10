
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00461160(int *param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  undefined1 *puVar6;
  float *pfStack_104;
  float *pfStack_100;
  float local_e8;
  undefined1 *local_e4;
  float *local_e0;
  float *local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float *pfStack_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float *local_a4;
  float *local_a0;
  undefined4 local_9c;
  float local_98 [3];
  float local_8c [3];
  float local_80 [3];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [80];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0796;
  pvStack_c = ExceptionList;
  pfStack_100 = (float *)s_camera_path__RenderCustom_00726044;
  pfStack_104 = (float *)0x46118f;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if ((param_1[0x2a] == 0) || (param_1[0x2c] == 0)) {
    pfStack_100 = (float *)0x4614d4;
    pfStack_100 = (float *)(**(code **)(*param_1 + 0x4c))();
    pfStack_104 = (float *)s_CAMERAPATH__s_I_need_path_data__00726020;
    FUN_00649920(&local_e8);
    local_4._0_1_ = 1;
    pfStack_100 = (float *)0x4614f6;
    pfStack_100 = (float *)FUN_00649940();
    local_e4 = (undefined1 *)&pfStack_104;
    pfStack_104 = extraout_ECX_01;
    FUN_00406b70(0xffffffff);
    FUN_0066ae20(param_1 + 5);
    local_4 = (uint)local_4._1_3_ << 8;
    pfStack_100 = (float *)0x461522;
    FUN_00649950();
  }
  else {
    if (param_1[0x2b] != 0) {
      pfStack_104 = (float *)(param_1[0x2a] * 0xe + -0xe + param_1[0x2c]);
      pfStack_100 = (float *)0x0;
      pfStack_100 = (float *)FUN_004607c0(local_8c);
      pfStack_104 = local_98;
      pfVar2 = (float *)FUN_00460f90();
      local_b8 = *pfVar2;
      local_b4 = pfVar2[1];
      local_b0 = pfVar2[2];
    }
    if (0 < param_1[0x2a]) {
      pfVar2 = (float *)0x0;
      do {
        pfStack_100 = (float *)0x0;
        pfStack_104 = (float *)(param_1[0x2c] + (int)pfVar2 * 0xe);
        FUN_004607c0(local_98);
        if (pfVar2 != (float *)0x0) {
          local_b8 = local_d4;
          local_b4 = local_d0;
          local_b0 = local_cc;
        }
        pfStack_100 = local_98;
        pfStack_104 = local_80;
        pfVar3 = (float *)FUN_00460f90();
        local_d4 = *pfVar3;
        local_d0 = pfVar3[1];
        local_cc = pfVar3[2];
        pfStack_100 = (float *)((int)pfVar2 % 10);
        if (pfStack_100 == (float *)0x0) {
          pfStack_104 = (float *)(param_1[0x2c] + (int)pfVar2 * 0xe);
          local_d8 = 0x41200000;
          local_e0 = pfStack_100;
          local_dc = pfStack_100;
          pfVar3 = (float *)FUN_004608e0(local_5c);
          pfStack_100 = (float *)0x4612a9;
          FUN_004064d0();
          pfStack_104 = (float *)0x4612b6;
          pfStack_100 = pfVar3;
          FUN_004069b0();
          pfStack_100 = local_8c;
          pfStack_104 = (float *)0x4612c7;
          FUN_004065c0();
          pfStack_100 = local_8c;
          pfStack_104 = (float *)0x4612d5;
          FUN_004357e0();
          pfStack_100 = &local_c8;
          pfStack_104 = &local_e8;
          FUN_0064c8e0(local_9c);
          pfStack_100 = local_a4;
          fVar1 = (float)local_dc * local_e8;
          local_dc = (float *)((float)local_e0 * local_e8 + (float)local_dc * local_c8);
          pfStack_104 = (float *)0x46132b;
          local_e0 = (float *)(local_c8 * (float)local_e0 - fVar1);
          FUN_004286f0();
          pfStack_100 = local_a0;
          pfStack_104 = (float *)0x461339;
          FUN_00428740();
          if (pfVar2 == (float *)0x0) {
            iVar4 = -0xff01;
            pfStack_104 = extraout_ECX;
          }
          else {
            pfStack_104 = (float *)(param_1[0x2a] + -1);
            iVar4 = ((pfVar2 != pfStack_104) - 1 & 0xffff0001) - 1;
          }
          pfStack_100 = (float *)0x0;
          local_e4 = (undefined1 *)&pfStack_104;
          FUN_00406b70(iVar4);
          uVar5 = FUN_00402130(local_68,&local_d4,&local_e0);
          FUN_00669ca0(&local_d4,uVar5);
        }
        pfStack_100 = (float *)0x0;
        pfStack_104 = &local_d4;
        puVar6 = local_74;
        FUN_0065fce0(0,puVar6);
        pfVar3 = (float *)FUN_00673820(puVar6);
        fStack_c4 = *pfVar3;
        pfStack_c0 = (float *)pfVar3[1];
        pfStack_100 = (float *)0x1;
        pfStack_104 = (float *)0x5;
        FUN_0066c3a0();
        local_e4 = (undefined1 *)&pfStack_100;
        pfStack_104 = (float *)0x461418;
        pfStack_100 = (float *)((-(uint)(pfVar2 != (float *)0x0) & 0xfe0100) - 0xff0100);
        FUN_0066ddd0();
        fVar1 = fStack_c4;
        pfStack_104 = (float *)((float)pfStack_c0 - _DAT_006e999c);
        pfStack_100 = (float *)0x0;
        FUN_0066dfc0(fStack_c4);
        pfVar3 = pfStack_c0;
        pfStack_100 = (float *)0x0;
        pfStack_104 = pfStack_c0;
        FUN_0066dfc0(fStack_c4 - _DAT_006e999c);
        pfStack_104 = (float *)((float)pfStack_c0 + _DAT_006e999c);
        pfStack_100 = (float *)0x0;
        FUN_0066dfc0(fVar1);
        pfStack_100 = (float *)0x0;
        pfStack_104 = pfVar3;
        FUN_0066dfc0(fStack_c4 + _DAT_006e999c);
        pfStack_100 = (float *)0x46148c;
        FUN_0066d9a0();
        if ((param_1[0x2b] != 0) || (0 < (int)pfVar2)) {
          pfStack_100 = (float *)0x0;
          local_e4 = (undefined1 *)&pfStack_104;
          pfStack_104 = extraout_ECX_00;
          FUN_00406b70(0xffffffff);
          FUN_00669ca0(&local_d4,&local_b8);
        }
        pfVar2 = (float *)((int)pfVar2 + 1);
      } while ((int)pfVar2 < param_1[0x2a]);
    }
  }
  local_4 = 0xffffffff;
  pfStack_100 = (float *)0x461536;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

