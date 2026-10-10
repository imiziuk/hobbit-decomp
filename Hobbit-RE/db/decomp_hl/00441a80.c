
void __fastcall FUN_00441a80(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float unaff_ESI;
  float unaff_EDI;
  int local_120 [18];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
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
  float local_a0;
  float local_9c;
  float fStack_90;
  float fStack_7c;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  undefined1 auStack_48 [72];
  
  if ((param_1[0x14d] < 1) &&
     (local_120[0] = param_1[0x14b] + -2,
     (float)local_120[0] < (float)param_1[0x14c] == ((float)local_120[0] == (float)param_1[0x14c])))
  {
    FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_4c,local_120);
    FUN_00403120(param_1[0x248]);
    puVar1 = (undefined4 *)FUN_00404a60();
    local_d8 = *puVar1;
    local_d4 = puVar1[1];
    local_d0 = puVar1[2];
    local_cc = puVar1[3];
    local_c8 = puVar1[4];
    local_c4 = puVar1[5];
    local_c0 = puVar1[6];
    local_bc = puVar1[7];
    local_b8 = puVar1[8];
    local_b4 = puVar1[9];
    local_b0 = puVar1[10];
    local_ac = puVar1[0xb];
    local_a8 = puVar1[0xc];
    local_a4 = puVar1[0xd];
    local_a0 = (float)puVar1[0xe];
    local_9c = (float)puVar1[0xf];
    FUN_0041b9f0(local_58,param_1[0x114] + 0x188);
    (**(code **)(*param_1 + 0x14))(local_58,0);
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_120[0xc] = 0;
    local_120[8] = 0;
    local_120[4] = 0;
    local_120[0xd] = 0;
    local_120[9] = 0;
    local_120[1] = 0;
    local_120[0xe] = 0;
    local_120[6] = 0;
    local_120[2] = 0;
    local_120[0xb] = 0;
    local_120[7] = 0;
    local_120[3] = 0;
    local_120[0] = 0x3f800000;
    local_120[5] = 0x3f800000;
    local_120[10] = 0x3f800000;
    local_120[0xf] = 0x3f800000;
    FUN_0064c8e0(0x3fc90fdb,&stack0xfffffedc,&stack0xfffffed8);
    FUN_004064d0();
    fStack_7c = -unaff_ESI;
    uVar2 = FUN_0064e040(auStack_48,&local_a0,local_120);
    FUN_00406570(uVar2);
    iVar3 = FUN_00405850();
    if (iVar3 != 0) {
      FUN_0064c8e0(0x40490fdb,&stack0xfffffed8,&stack0xfffffedc);
      FUN_004064d0();
      fStack_90 = -unaff_EDI;
      local_a0 = unaff_ESI;
      local_9c = unaff_EDI;
      uVar2 = FUN_0064e040(auStack_48,&local_a0,local_120);
      FUN_00406570(uVar2);
    }
    piVar4 = (int *)FUN_0064e040(auStack_48,local_120 + 0x10,local_120);
    if ((local_120 != piVar4) && (piVar6 = piVar4 + 0x10, piVar4 != piVar6)) {
      piVar5 = local_120 + 2;
      iVar3 = (int)piVar4 - (int)local_120;
      do {
        piVar5[-2] = *piVar4;
        piVar5[-1] = piVar4[1];
        *piVar5 = *(int *)(iVar3 + (int)piVar5);
        piVar5[1] = piVar4[3];
        piVar4 = piVar4 + 4;
        piVar5 = piVar5 + 4;
      } while (piVar4 != piVar6);
    }
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    piVar4 = param_1 + 0x128;
    param_1[0x163] = param_1[0x163] + 1;
    if (piVar4 != local_120) {
      piVar6 = local_120;
      param_1 = param_1 + 0x12a;
      do {
        param_1[-2] = *piVar6;
        param_1[-1] = piVar6[1];
        *param_1 = *(int *)(((int)local_120 - (int)piVar4) + (int)param_1);
        param_1[1] = *(int *)((int)local_120 + (4 - (int)piVar4) + (int)param_1);
        piVar6 = piVar6 + 4;
        param_1 = param_1 + 4;
      } while (piVar6 != local_120 + 0x10);
    }
    return;
  }
  FUN_0043a3f0(0x1e,s_C__projects_meridian_Support_Obj_00724060,0x111a);
  return;
}

