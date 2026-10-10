
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00490960(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined1 auStack_10c [4];
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 auStack_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [4];
  undefined1 local_8c;
  undefined4 local_8b;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d30bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_internal__OnImport_0072991c);
  local_8c = 0;
  puVar3 = &local_8b;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_4 = 0;
  local_c8 = 0x7f7fffff;
  local_c4 = 0x7f7fffff;
  local_c0 = 0x7f7fffff;
  local_bc = 0xff7fffff;
  local_b8 = 0xff7fffff;
  local_b4 = 0xff7fffff;
  FUN_00640480(&DAT_00725c94,&local_8c);
  (**(code **)(*param_1 + 0x48))(&local_8c);
  FUN_006405b0(s_IsMoving_00729910,&iStack_108);
  FUN_00640420(&DAT_00729908,param_1 + 0x5c);
  FUN_00640420(s_PathOffset_007298fc,param_1 + 0x5b);
  FUN_006405e0(s_Piznath_007298f4,auStack_e0);
  FUN_00640480(s_GeometryResource_007298e0,auStack_90);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,&uStack_104);
  uStack_ec = uStack_104;
  uStack_e4 = uStack_fc;
  uStack_e8 = uStack_100;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  FUN_00640500(s_Orient_00726120,&fStack_d8);
  FUN_006403a0(s_Scale_00725a04,auStack_9c);
  FUN_006404b0(&DAT_00726118,auStack_cc);
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_13c = 0;
  FUN_006405b0(s_Sinks_007298d8,&uStack_13c);
  FUN_00640420(s_TransSpeed_007298cc,&uStack_138);
  FUN_00640420(s_TransDelay_007298c0,&uStack_120);
  FUN_006405b0(s_StartsAtTop_007298b4,&uStack_124);
  FUN_006403a0(s_TopPos_007298ac,&uStack_ec);
  FUN_006403a0(s_SinkVector_007298a0,&uStack_f8);
  FUN_006405b0(s_HasPrivData_00729894,auStack_10c);
  FUN_004d0e10(param_2);
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  iStack_110 = 0x3f800000;
  FUN_0064c8e0(fStack_d0 * _DAT_006e936c,&iStack_140,&stack0xfffffebc);
  iStack_12c = iStack_140;
  uStack_134 = 0;
  uStack_130 = 0;
  uVar1 = FUN_00463b80(auStack_ac,&uStack_134,&uStack_11c);
  FUN_0042fda0(uVar1);
  FUN_0064c8e0(fStack_d8 * _DAT_006e936c,&stack0xfffffebc,&iStack_140);
  iStack_128 = iStack_140;
  uStack_130 = 0;
  iStack_12c = 0;
  uVar1 = FUN_00463b80(auStack_ac,&uStack_134,&uStack_11c);
  FUN_0042fda0(uVar1);
  FUN_0064c8e0(fStack_d4 * _DAT_006e936c,&iStack_140,&stack0xfffffebc);
  CRect::CRect((CRect *)&uStack_134,0,iStack_140,0,unaff_EBX);
  uVar1 = FUN_00463b80(auStack_ac,&uStack_134,&uStack_11c);
  FUN_0042fda0(uVar1);
  FUN_0048e930(&uStack_104,&uStack_11c,auStack_9c,auStack_cc,param_1[0x5b],param_1[0x5c],&uStack_ec,
               &uStack_f8,uStack_13c,uStack_138,uStack_120,uStack_124);
  param_1[0x6e] = iStack_108;
  (**(code **)(*param_1 + 0xd0))(auStack_90);
  FUN_00490f10(uStack_e4,auStack_e0[0]);
  if (iStack_110 != 0) {
    FUN_0064e7d0(s_Error__found_vertex_color_data_i_00729850);
    FUN_0063ff20();
    iVar2 = *(int *)(param_2 + 0xc);
    if (0 < iVar2) {
      do {
        FUN_0063ffc0();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0048fd50();
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

