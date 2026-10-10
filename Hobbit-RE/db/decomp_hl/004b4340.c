
void __thiscall FUN_004b4340(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EDI;
  undefined4 *puVar5;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [4];
  undefined1 local_8c;
  undefined4 local_8b;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d41eb;
  pvStack_c = ExceptionList;
  uStack_cc = s_play_surface__OnImport_0072be18;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_8c = DAT_0075b6e0;
  puVar5 = &local_8b;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  uStack_cc = &local_8c;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  iVar4 = 0;
  local_4 = 0;
  FUN_00640480(s_Resource_0072bdfc);
  uStack_cc = &local_8c;
  (**(code **)(*param_1 + 0xd0))();
  uStack_b0 = 0x7f7fffff;
  uStack_ac = 0x7f7fffff;
  uStack_a8 = 0x7f7fffff;
  uStack_a4 = 0xff7fffff;
  uStack_a0 = 0xff7fffff;
  uStack_9c = 0xff7fffff;
  FUN_006404b0(&DAT_00726118,&uStack_b0);
  FUN_00640480(&DAT_00725c94,auStack_90);
  (**(code **)(*param_1 + 0x48))(auStack_90);
  FUN_006405b0(s_HasPrivData_00729894,auStack_b8);
  FUN_006405b0(s_HasSurfaceFlags_0072be08,&stack0xffffff40);
  FUN_006405b0(s_DoesNotCollide_0072bdec,&uStack_bc);
  (**(code **)(*param_1 + 0x8c))(uStack_bc,0xffffffff);
  FUN_004d0e10(param_2);
  FUN_004b3e60(&uStack_bc);
  if (unaff_EBX != 0) {
    FUN_0063ff20();
    iVar2 = *(int *)(param_2 + 0xc);
    FUN_006bf840(param_1[0x2e]);
    pvVar3 = operator_new(iVar2 * 4);
    param_1[0x2e] = (int)pvVar3;
    *(short *)(param_1 + 0x49) = (short)iVar2;
    if (0 < iVar2) {
      do {
        FUN_0063ffc0();
        FUN_006403e0(s_Color_00728924,&uStack_cc);
        puVar1 = (undefined1 *)(param_1[0x2e] + iVar4 * 4);
        puVar1[3] = uStack_cc._3_1_;
        puVar1[2] = uStack_cc._2_1_;
        puVar1[1] = uStack_cc._1_1_;
        iVar4 = iVar4 + 1;
        *puVar1 = (undefined1)uStack_cc;
      } while (iVar4 < iVar2);
    }
    if ((short)param_1[0x49] != 0) {
      (**(code **)(*param_1 + 0x98))(1);
    }
    thunk_FUN_004acb90();
  }
  if (unaff_EDI != 0) {
    (**(code **)(*param_1 + 0xfc))(param_2);
  }
  uStack_14 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_1c;
  return;
}

