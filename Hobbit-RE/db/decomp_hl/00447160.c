
void __fastcall FUN_00447160(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  float *local_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_104 [7];
  int local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_8c [64];
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfa56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Platform_CatchUpWithPlatf_007244f4);
  piVar1 = param_1 + 0x134e;
  param_1[0x1350] = 0;
  param_1[0x134f] = 0;
  *piVar1 = 0;
  param_1[0x1351] = 0;
  param_1[0x1352] = 0;
  param_1[0x1353] = 0;
  local_4 = 0;
  if ((param_1[0x133a] != 0) && (param_1[0x1d2] != 8)) {
    iVar4 = param_1[0x133c];
    iVar2 = param_1[0x133d];
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(iVar4,iVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
      FUN_00649720();
      if (piVar9 != (int *)0x0) {
        if ((char)piVar9[0x1f] == '\x0e') {
          (**(code **)(*piVar9 + 0x34))(local_8c);
        }
        else if ((char)piVar9[0x1f] == '\x05') {
          iVar4 = *piVar9;
          uVar5 = (**(code **)(iVar4 + 0x11c))();
          (**(code **)(iVar4 + 0x114))(local_8c,uVar5);
        }
        local_104[0] = (float)param_1[0x133e];
        local_104[1] = (float)param_1[0x133f];
        local_104[2] = (float)param_1[0x1340];
        local_104[3] = (float)param_1[0x1341];
        local_104[4] = (float)param_1[0x1342];
        local_104[5] = (float)param_1[0x1343];
        local_104[6] = (float)param_1[0x1344];
        local_e8 = param_1[0x1345];
        local_e4 = (float)param_1[0x1346];
        local_e0 = (float)param_1[0x1347];
        local_dc = (float)param_1[0x1348];
        local_d8 = param_1[0x1349];
        local_d4 = (float)param_1[0x134a];
        local_d0 = (float)param_1[0x134b];
        local_cc = (float)param_1[0x134c];
        local_c8 = param_1[0x134d];
        FUN_0064d6d0();
        pfVar6 = (float *)FUN_0064e040(auStack_4c,local_8c,local_104);
        if ((local_104 != pfVar6) && (local_11c = pfVar6 + 0x10, pfVar6 != local_11c)) {
          pfVar8 = local_104 + 2;
          iVar4 = (int)pfVar6 - (int)local_104;
          do {
            pfVar8[-2] = *pfVar6;
            pfVar8[-1] = pfVar6[1];
            *pfVar8 = *(float *)(iVar4 + (int)pfVar8);
            pfVar8[1] = pfVar6[3];
            pfVar6 = pfVar6 + 4;
            pfVar8 = pfVar8 + 4;
          } while (pfVar6 != local_11c);
        }
        FUN_00401f00(local_104[0] * (float)param_1[5] +
                     local_e4 * (float)param_1[7] + local_104[4] * (float)param_1[6] + local_d4,
                     local_e0 * (float)param_1[7] +
                     local_104[1] * (float)param_1[5] + local_104[5] * (float)param_1[6] + local_d0,
                     local_dc * (float)param_1[7] +
                     local_104[2] * (float)param_1[5] + local_104[6] * (float)param_1[6] + local_cc)
        ;
        FUN_00401f00(fStack_b0 - (float)param_1[5],fStack_ac - (float)param_1[6],
                     fStack_a8 - (float)param_1[7]);
        *piVar1 = (int)local_11c;
        param_1[0x1350] = iStack_114;
        param_1[0x134f] = iStack_118;
        FUN_004065c0(&fStack_98);
        FUN_004065c0(&fStack_a4);
        FUN_00401f00(fStack_a4 - fStack_98,fStack_a0 - fStack_94,fStack_9c - fStack_90);
        param_1[0x1351] = (int)local_11c;
        param_1[0x1352] = iStack_118;
        param_1[0x1353] = iStack_114;
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
        uStack_c4 = *puVar7;
        uStack_bc = puVar7[2];
        fStack_c0 = (float)puVar7[1] + (float)param_1[0x1352];
        (**(code **)(*param_1 + 0x1c))(&uStack_c4);
        iStack_114 = param_1[5];
        iStack_110 = param_1[6];
        iStack_10c = param_1[7];
        FUN_00469060(&iStack_114,piVar1,0,0xbf800000,0,1,1);
        (**(code **)(*param_1 + 0x14))(&iStack_114,0);
        if ((param_1[0x235] != 0xc) && (param_1[0x235] != 0xd)) {
          local_11c = (float *)0x0;
          iStack_118 = 0x42480000;
          iStack_114 = 0;
          FUN_00469060(&iStack_110,&local_11c,0,0xbf800000,0,1,1);
          (**(code **)(*param_1 + 0x14))(&iStack_110,0);
          local_11c = (float *)0x0;
          FUN_00469060(&iStack_118,&stack0xfffffedc,0,0xbf800000,0,1,1);
          (**(code **)(*param_1 + 0x14))(&iStack_118,0);
        }
        FUN_00406570(local_8c);
        goto LAB_004475d5;
      }
    }
    param_1[0x133a] = 0;
    param_1[0x133c] = 0;
    param_1[0x133d] = 0;
  }
LAB_004475d5:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

