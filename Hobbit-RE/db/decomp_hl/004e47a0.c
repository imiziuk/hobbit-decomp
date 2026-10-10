
void __thiscall FUN_004e47a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 local_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [4];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [16];
  undefined1 local_8c;
  undefined4 local_8b;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5a26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_wall__OnImport_0072ea58);
  local_8c = DAT_0075b6e0;
  puVar6 = &local_8b;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_4 = 0;
  local_ec = 0;
  FUN_004aa740(param_2);
  FUN_00640480(&DAT_00725c94,&local_8c);
  (**(code **)(*param_1 + 0x48))(&local_8c);
  FUN_006403a0(&DAT_0072ea50,auStack_a8);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,auStack_b4);
  FUN_00640500(&PTR_s_on__d_Spawn__d_Animation_0072ea4c,auStack_9c);
  FUN_006405b0(s_ApplyToBilbo_0072ea3c,&uStack_e0);
  FUN_006405b0(s_ApplyToNPC_0072ea30,&uStack_d0);
  FUN_006405b0(s_ApplyToPushBox_0072ea20,&uStack_e4);
  FUN_006405b0(s_ApplyToHoisting_0072ea10,&uStack_cc);
  FUN_006405b0(s_BlocksSight_0072ea04,&uStack_d4);
  FUN_006405b0(s_Occluder_0072e9f8,&uStack_c8);
  FUN_006405b0(s_CanClimb_0072e9ec,&local_ec);
  *(ushort *)(param_1 + 0x55) =
       ((ushort)(byte)local_ec << 8 ^ *(ushort *)(param_1 + 0x55)) & 0x100 ^
       *(ushort *)(param_1 + 0x55);
  FUN_006405b0(s_DeathFall_0072e9e0,&iStack_d8);
  *(ushort *)(param_1 + 0x55) =
       (byte)((byte)(iStack_d8 << 7) ^ (byte)*(ushort *)(param_1 + 0x55)) & 0x80 ^
       *(ushort *)(param_1 + 0x55);
  FUN_006403a0(s_PlaneNormal_0072e9d4,param_1 + 0x2a);
  FUN_00640420(s_PlaneD_0072e9cc,param_1 + 0x2d);
  FUN_006405b0(s_ApplyToCamera_0072e9bc,&local_ec);
  *(ushort *)(param_1 + 0x55) =
       (byte)((char)local_ec * '\b' ^ (byte)*(ushort *)(param_1 + 0x55)) & 8 ^
       *(ushort *)(param_1 + 0x55);
  FUN_00640450(s_ApplyToGuidsCount_0072e9a8,&stack0xffffff10);
  iStack_e8 = 0;
  if (0 < unaff_EBX) {
    do {
      iVar4 = iStack_e8;
      FUN_00649920(auStack_dc,s_ApplyToGuid_02d_0072e998,iStack_e8);
      puVar6 = &uStack_c4;
      puStack_8._0_1_ = 1;
      uVar1 = FUN_00649940(puVar6);
      FUN_006405e0(uVar1,puVar6);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_00649950();
      iVar5 = param_1[0x30];
      if (param_1[0x32] < iVar5 + 1) {
        if (param_1[0x34] == 0) {
          iVar2 = param_1[0x32] / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iVar5 < 1) {
            iVar5 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar5 = iVar5 + iVar2;
          }
        }
        else {
          iVar5 = param_1[0x34] + iVar5;
        }
        pvVar3 = operator_new(iVar5 * 8);
        iVar4 = 0;
        if (0 < param_1[0x30]) {
          do {
            iVar2 = param_1[0x31];
            *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1[0x30]);
        }
        FUN_006bf840(param_1[0x31]);
        param_1[0x32] = iVar5;
        param_1[0x31] = (int)pvVar3;
        iVar4 = iStack_e8;
      }
      iVar5 = param_1[0x30];
      iVar2 = param_1[0x31];
      *(undefined4 *)(iVar2 + iVar5 * 8) = uStack_c4;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uStack_c0;
      iStack_e8 = iVar4 + 1;
      param_1[0x30] = param_1[0x30] + 1;
    } while (iStack_e8 < unaff_EBX);
  }
  FUN_004e42c0(auStack_a8,auStack_b4,auStack_9c,uStack_e0,uStack_d0,uStack_e4,uStack_cc,uStack_d4,
               uStack_c8);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

