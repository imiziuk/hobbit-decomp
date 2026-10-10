
void __thiscall FUN_00618da0(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_40;
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
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_2;
  if ((((*(byte *)(param_1 + 0xb4) & 2) != 0) && ((int)param_2 < 1)) && (-1 < (int)param_2)) {
    *(undefined4 *)(param_1 + 0xe0 + (int)param_2 * 4) = 1;
    local_30 = *(float *)(param_1 + 0xc4) - *(float *)(param_1 + 0xb8);
    local_2c = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xbc);
    local_28 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xc0);
    param_2 = DAT_006e92e8 / SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    iVar3 = FUN_0064cf30(param_2);
    if (iVar3 == 0) {
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 0.0;
    }
    else {
      local_30 = local_30 * param_2;
      local_2c = local_2c * param_2;
      local_28 = local_28 * param_2;
    }
    *(undefined4 *)(param_1 + 0x118 + iVar2 * 4) = 0x42800000;
    if (*(int *)(param_1 + 0xdc) < 0) {
      iVar3 = param_1 + iVar2 * 0xc;
      *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(iVar3 + 0xec) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(iVar3 + 0xf0) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(iVar3 + 0xf8) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(iVar3 + 0xfc) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(iVar3 + 0x114) = 0;
      *(undefined4 *)(iVar3 + 0x110) = 0;
      *(undefined4 *)(iVar3 + 0x10c) = 0;
      if (iVar2 == 0) {
        fVar6 = (float10)*(float *)(param_1 + 0x554);
      }
      else {
        fVar6 = (float10)*(float *)(param_1 + 0xe4);
      }
    }
    else {
      iVar4 = FUN_00647b10(0,0);
      iVar3 = param_1 + iVar4 * 0xc;
      local_3c = *(float *)(param_1 + 0xe8 + iVar4 * 0xc) - *(float *)(iVar3 + 0xf4);
      local_38 = *(float *)(iVar3 + 0xec) - *(float *)(iVar3 + 0xf8);
      local_34 = *(float *)(iVar3 + 0xf0) - *(float *)(iVar3 + 0xfc);
      fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x560),
                                    *(undefined4 *)(param_1 + 0x564));
      FUN_00401f00((float)((float10)local_3c * fVar6),(float)((float10)local_38 * fVar6),
                   (float)((float10)local_34 * fVar6));
      fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x558),
                                    *(undefined4 *)(param_1 + 0x55c));
      FUN_00401f00((float)((float10)local_3c * fVar6),(float)((float10)local_38 * fVar6),
                   (float)((float10)local_34 * fVar6));
      local_18 = local_18 + *(float *)(param_1 + 0xf4 + *(int *)(param_1 + 0xdc) * 0xc);
      pfVar1 = (float *)(param_1 + 0xf4 + *(int *)(param_1 + 0xdc) * 0xc);
      iVar3 = param_1 + iVar2 * 0xc;
      local_14 = local_14 + pfVar1[1];
      local_10 = local_10 + pfVar1[2];
      local_24 = local_24 + *pfVar1;
      local_20 = local_20 + pfVar1[1];
      local_1c = local_1c + pfVar1[2];
      *(float *)(iVar3 + 0xf0) = local_10;
      *(float *)(iVar3 + 0xe8) = local_18;
      *(float *)(iVar3 + 0xec) = local_14;
      *(float *)(iVar3 + 0xf4) = local_24;
      *(float *)(iVar3 + 0xf8) = local_20;
      *(float *)(iVar3 + 0xfc) = local_1c;
      param_2 = DAT_006e92e8 / SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34)
      ;
      iVar4 = FUN_0064cf30(param_2);
      if (iVar4 == 0) {
        local_3c = 0.0;
        local_38 = 0.0;
        local_34 = 0.0;
      }
      else {
        local_3c = param_2 * local_3c;
        local_38 = local_38 * param_2;
        local_34 = local_34 * param_2;
      }
      fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x538),
                                    *(undefined4 *)(param_1 + 0x53c));
      FUN_00401f00((float)(fVar6 * (float10)local_3c),(float)((float10)local_38 * fVar6),
                   (float)((float10)local_34 * fVar6));
      *(undefined4 *)(iVar3 + 0x10c) = local_c;
      *(undefined4 *)(iVar3 + 0x110) = local_8;
      *(undefined4 *)(iVar3 + 0x114) = local_4;
      fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x540),
                                    *(undefined4 *)(param_1 + 0x544));
    }
    *(float *)(param_1 + 0xe4 + iVar2 * 4) = (float)fVar6;
    local_18 = local_30;
    fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x56c))
    ;
    param_2 = (float)fVar6;
    FUN_0064c8e0(param_2,&param_2,&local_40);
    local_14 = local_2c * local_40 - local_28 * param_2;
    local_10 = local_28 * local_40 + local_2c * param_2;
    fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x56c))
    ;
    FUN_00428740((float)fVar6);
    fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x56c))
    ;
    FUN_00428790((float)fVar6);
    fVar6 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x530),*(undefined4 *)(param_1 + 0x534))
    ;
    uVar5 = FUN_00402160(&local_c,&local_18,(float)fVar6);
    FUN_004357e0(uVar5);
    *(int *)(param_1 + 0xdc) = iVar2;
  }
  return;
}

