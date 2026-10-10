
void __fastcall FUN_006befd0(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0 [7];
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_58 [12];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_plane__AdvanceLogic_00757d6c);
  local_4 = 0;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&local_bc,&local_c0);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&local_d0,&local_cc);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&local_c4,&local_c8);
  local_a0[0] = (local_c8 * local_cc + local_c4 * local_bc * local_d0) * *(float *)(param_1 + 0xc);
  local_a0[1] = local_c4 * local_c0 * *(float *)(param_1 + 0xc);
  local_a0[2] = (local_c4 * local_bc * local_cc - local_c8 * local_d0) * *(float *)(param_1 + 0xc);
  local_a0[4] = (local_d0 * local_c8 * local_bc - local_c4 * local_cc) * *(float *)(param_1 + 0x10);
  local_a0[5] = local_c8 * local_c0 * *(float *)(param_1 + 0x10);
  local_a0[6] = (local_c8 * local_bc * local_cc + local_c4 * local_d0) * *(float *)(param_1 + 0x10);
  local_80 = local_d0 * local_c0 * *(float *)(param_1 + 0x14);
  local_7c = -local_bc * *(float *)(param_1 + 0x14);
  local_70 = *(undefined4 *)(param_1 + 0x24);
  local_6c = *(undefined4 *)(param_1 + 0x28);
  local_68 = *(undefined4 *)(param_1 + 0x2c);
  local_a0[3] = 0.0;
  local_78 = local_cc * local_c0 * *(float *)(param_1 + 0x14);
  local_84 = 0;
  local_74 = 0;
  local_64 = 0x3f800000;
  uVar1 = FUN_006ba140(local_a0);
  pfVar2 = (float *)FUN_0064e040(local_4c,uVar1);
  if ((local_a0 != pfVar2) && (pfVar2 != pfVar2 + 0x10)) {
    pfVar5 = local_a0 + 2;
    pfVar3 = pfVar2;
    do {
      pfVar4 = pfVar3 + 4;
      pfVar5[-2] = *pfVar3;
      pfVar5[-1] = pfVar3[1];
      *pfVar5 = *(float *)(((int)pfVar2 - (int)local_a0) + (int)pfVar5);
      pfVar5[1] = pfVar3[3];
      pfVar5 = pfVar5 + 4;
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar2 + 0x10);
  }
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  FUN_00401f00(0xbf000000,0xbf000000,0xbf000000);
  *(undefined4 *)(param_1 + 0x94) = local_b4;
  *(undefined4 *)(param_1 + 0x90) = local_b8;
  *(undefined4 *)(param_1 + 0x98) = local_b0;
  uVar1 = FUN_00401f00(0x3f000000,0x3f000000,0x3f000000);
  uVar1 = FUN_00402130(local_58,&local_ac,uVar1);
  FUN_004357e0(uVar1);
  FUN_004936f0(local_a0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

