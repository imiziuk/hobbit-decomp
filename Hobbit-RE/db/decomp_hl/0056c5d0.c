
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056c5d0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_4;
  
  iVar4 = *(int *)(param_1 + 0x730);
  iVar1 = *(int *)(param_1 + 0x480);
  local_3c = (*(float *)(iVar4 + 0x84) - *(float *)(iVar4 + 0xe0)) * *(float *)(param_1 + 0x674) +
             *(float *)(iVar4 + 0xe0);
  if ((iVar1 == 7) || (iVar1 == 8)) {
    local_3c = *(float *)(param_1 + 0x6ec);
  }
  local_40 = *(undefined4 *)(iVar4 + 0xe8);
  local_38 = (*(float *)(iVar4 + 0x88) - *(float *)(iVar4 + 0xe4)) * *(float *)(param_1 + 0x674) +
             *(float *)(iVar4 + 0xe4);
  if (iVar1 == 5) {
    local_40 = 0x3f800000;
  }
  local_18 = *(float *)(param_1 + 0x49c);
  local_14 = *(float *)(param_1 + 0x4a0);
  local_10 = *(float *)(param_1 + 0x4a4);
  local_24 = *(float *)(param_1 + 0x4a8);
  local_44 = *(float *)(param_1 + 0x4b4);
  local_20 = *(float *)(param_1 + 0x4ac);
  local_1c = *(float *)(param_1 + 0x4b0);
  if (*(int *)(param_1 + 0x4f0) != 0) {
    local_48 = *(float *)(param_1 + 0x500);
    fVar5 = (float10)FUN_0064cd90();
    if (fVar5 <= (float10)local_48) {
      fVar5 = (float10)FUN_0064cd90();
    }
    else {
      fVar5 = (float10)*(float *)(param_1 + 0x500);
    }
    local_48 = (float)fVar5;
    if (*(float *)(param_1 + 0x500) <= local_48) {
      FUN_0064cc50();
    }
    local_4c = *(float *)(param_1 + 0x4f8);
    fVar3 = *(float *)(param_1 + 0x500) * _DAT_006e936c;
    if (fVar3 < local_48) {
      local_4c = ((*(float *)(param_1 + 0x500) - local_48) / fVar3) * local_4c;
    }
    fVar3 = local_4c;
    if (*(int *)(param_1 + 0x504) == 0) {
      local_30 = local_24 - local_18;
      local_2c = local_20 - local_14;
      local_28 = local_1c - local_10;
      fVar2 = -local_4c;
      local_48 = fVar2;
      fVar5 = (float10)FUN_00647b30(fVar2,local_4c);
      local_34 = (float)fVar5;
      fVar5 = (float10)FUN_00647b30(fVar2,fVar3);
      local_c = (float)fVar5;
      FUN_0064c8e0(0,&local_4c,&local_48);
      fVar3 = local_2c * local_4c;
      local_2c = local_30 * local_4c + local_2c * local_48;
      local_30 = local_48 * local_30 - fVar3;
      FUN_004286f0(local_c);
      FUN_00428740(local_34);
      local_18 = local_24 - local_30;
      local_14 = local_20 - local_2c;
      local_10 = local_1c - local_28;
      local_4 = local_10;
    }
    else {
      fVar5 = (float10)FUN_00647b30(-local_4c,local_4c);
      local_44 = (float)(fVar5 + (float10)local_44);
    }
  }
  iVar4 = FUN_00571230();
  if (iVar4 != 0) {
    if ((*(byte *)(param_1 + 0x484) & 0xc) == 0) {
      FUN_0045c4f0(&local_18,&local_24,local_44,local_3c,local_40,local_38);
      FUN_00429100();
      return;
    }
    FUN_0045c3d0(&local_18,&local_24,local_44,local_3c,local_40,local_38);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffffb;
  }
  FUN_00429100();
  return;
}

