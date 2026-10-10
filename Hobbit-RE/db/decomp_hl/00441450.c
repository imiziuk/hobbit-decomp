
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441450(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *unaff_ESI;
  int *piStack_128;
  int local_120 [2];
  float local_118;
  float local_114 [16];
  undefined1 auStack_d4 [8];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  float fStack_84;
  int *piStack_80;
  float fStack_70;
  int *piStack_6c;
  undefined1 local_4c [4];
  undefined1 auStack_48 [72];
  
  if (param_1[0x194] == 0) {
    if (param_1[400] != 0) {
      piStack_128 = (int *)0x4414b6;
      iVar3 = FUN_00405fc0();
      if (iVar3 != 0) {
        piStack_128 = (int *)0x4414c8;
        FUN_004057b0();
        piStack_128 = (int *)0x4414cf;
        FUN_00422590();
        piStack_128 = param_1 + 0x1a;
        local_118 = 0.0;
        local_114[0] = 0.0;
        local_114[1] = 1.0;
        FUN_00429030();
        fVar2 = local_114[0] * _DAT_00723db4;
        local_114[1] = local_114[1] * _DAT_00723db4;
        param_1[0x1d5] = (int)(_DAT_00723db4 * local_118 + (float)param_1[0x1d5]);
        param_1[0x1d6] = (int)(fVar2 + (float)param_1[0x1d6]);
        param_1[0x1d7] = (int)(local_114[1] + (float)param_1[0x1d7]);
      }
    }
    piStack_128 = (int *)0x44154a;
    iVar3 = FUN_00405fc0();
    if (iVar3 == 0) {
      piStack_128 = local_120;
      FUN_00540900((float)param_1[0x248] * (float)param_1[0x1e5],&local_118);
    }
    piStack_128 = (int *)param_1[0x248];
    FUN_00403120();
    piStack_128 = (int *)0x44158e;
    puVar4 = (undefined4 *)FUN_00404a60();
    local_cc = *puVar4;
    local_c8 = puVar4[1];
    local_c4 = puVar4[2];
    local_c0 = puVar4[3];
    local_bc = puVar4[4];
    local_b8 = puVar4[5];
    local_b4 = puVar4[6];
    local_b0 = puVar4[7];
    local_ac = puVar4[8];
    local_a8 = puVar4[9];
    local_a4 = puVar4[10];
    local_a0 = puVar4[0xb];
    local_9c = puVar4[0xc];
    local_98 = puVar4[0xd];
    local_94 = (int *)puVar4[0xe];
    local_90 = (int *)puVar4[0xf];
    piStack_128 = (int *)(param_1[0x114] + 0x188);
    FUN_0041b9f0(local_4c);
    piStack_128 = (int *)0x0;
    (**(code **)(*param_1 + 0x14))(local_4c);
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_114[0xc] = 0.0;
    local_114[8] = 0.0;
    local_114[4] = 0.0;
    local_114[0xd] = 0.0;
    local_114[9] = 0.0;
    local_114[1] = 0.0;
    local_114[0xe] = 0.0;
    local_114[6] = 0.0;
    local_114[2] = 0.0;
    local_114[0xb] = 0.0;
    local_114[7] = 0.0;
    local_114[3] = 0.0;
    local_114[0] = 1.0;
    local_114[5] = 1.0;
    local_114[10] = 1.0;
    local_114[0xf] = 1.0;
    FUN_0064c8e0(0x3fc90fdb,&stack0xfffffedc,&piStack_128);
    FUN_004064d0();
    piStack_80 = piStack_128;
    fStack_70 = -(float)unaff_ESI;
    piStack_6c = piStack_128;
    uVar5 = FUN_0064e040(auStack_48,&local_94,local_114);
    FUN_00406570(uVar5);
    iVar3 = FUN_00405850();
    if (iVar3 != 0) {
      FUN_0064c8e0(0x40490fdb,&piStack_128,&stack0xfffffedc);
      FUN_004064d0();
      fStack_84 = -(float)piStack_128;
      local_90 = piStack_128;
      local_94 = unaff_ESI;
      piStack_80 = unaff_ESI;
      uVar5 = FUN_0064e040(auStack_48,&local_94,local_114);
      FUN_00406570(uVar5);
    }
    pfVar6 = (float *)FUN_0064e040(auStack_48,auStack_d4,local_114);
    if ((local_114 != pfVar6) && (pfVar1 = pfVar6 + 0x10, pfVar6 != pfVar1)) {
      pfVar7 = local_114 + 2;
      iVar3 = (int)pfVar6 - (int)local_114;
      do {
        pfVar7[-2] = *pfVar6;
        pfVar7[-1] = pfVar6[1];
        *pfVar7 = *(float *)(iVar3 + (int)pfVar7);
        pfVar7[1] = pfVar6[3];
        pfVar6 = pfVar6 + 4;
        pfVar7 = pfVar7 + 4;
      } while (pfVar6 != pfVar1);
    }
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    FUN_00406570(local_114);
    return;
  }
  piStack_128 = (int *)0x44146d;
  iVar3 = FUN_00405fc0();
  if (iVar3 == 0) {
    piStack_128 = (int *)0x109e;
    FUN_0043a3f0(0x1f,s_C__projects_meridian_Support_Obj_00724060);
    return;
  }
  piStack_128 = (int *)0x44147b;
  FUN_00406020();
  return;
}

